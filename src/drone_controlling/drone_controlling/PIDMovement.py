#!/usr/bin/env python3

import asyncio
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray
from mavsdk import System
from mavsdk.offboard import Attitude, OffboardError
from mavsdk.action import ActionError
from mavsdk.telemetry import FlightMode
from simple_pid import PID
import uuid
import logging

# Set up logging
logging.basicConfig(level=logging.DEBUG)
logger = logging.getLogger(__name__)

class DroneController(Node):
    def __init__(self):
        super().__init__(f'drone_controller_{uuid.uuid4().hex[:8]}')
        logger.info(f"Initializing DroneController node: {self.get_name()}")
        self.subscription = self.create_subscription(
            Int32MultiArray,
            'target_coordinates',
            self.target_callback,
            10)
        self.target_queue = asyncio.Queue()
        self.x_center = 320
        self.y_center = 240

    def target_callback(self, msg):
        if len(msg.data) == 2:
            logger.debug(f"Received target coordinates: {msg.data}")
            self.target_queue.put_nowait((msg.data[0], msg.data[1]))

async def run_ros2_node():
    logger.info("Initializing ROS2 node")
    rclpy.init()
    node = DroneController()
    try:
        while rclpy.ok():
            rclpy.spin_once(node, timeout_sec=0.1)
            await asyncio.sleep(0.1)
    except Exception as e:
        logger.error(f"Error in ROS2 node: {e}")
    finally:
        logger.info("Shutting down ROS2 node")
        node.destroy_node()
        rclpy.shutdown()
    return node

async def connection(drone):
    logger.info("Attempting to connect to the drone")
    await drone.connect(system_address="serial:///dev/ttyAMA0:57600")
    async for state in drone.core.connection_state():
        if state.is_connected:
            logger.info("Connection to drone successful")
            return True
    return False

async def ensure_connection(drone):
    while True:
        if not drone.is_connected:
            logger.warning("Connection lost. Attempting to reconnect...")
            connected = await connection(drone)
            if connected:
                logger.info("Reconnection successful")
            else:
                logger.error("Reconnection failed")
        await asyncio.sleep(5)  # Check connection every 5 seconds

async def arm_and_takeoff(drone):
    logger.info("Arming the drone")
    try:
        await drone.action.arm()
        logger.info("Drone armed successfully")
    except ActionError as e:
        logger.error(f"Arming failed: {e}")
        return False

    logger.info("Initiating takeoff")
    try:
        await drone.action.takeoff()
        logger.info("Takeoff command executed")
    except ActionError as e:
        logger.error(f"Takeoff failed: {e}")
        return False

    logger.info("Waiting for takeoff to complete...")
    async for flight_mode in drone.telemetry.flight_mode():
        if flight_mode == FlightMode.TAKEOFF:
            logger.info("Drone is taking off...")
        elif flight_mode == FlightMode.HOLD:
            logger.info("Takeoff complete. Drone is holding position.")
            return True
        await asyncio.sleep(1)

async def logic(drone, target_queue, x_center, y_center):
    logger.info("Entering logic function")
    print("Setting initial setpoint...")
    pid_roll = PID(0.35, 0.1, 0.001, setpoint=0)
    pid_pitch = PID(0.35, 0.1, 0.001, setpoint=0)
    
    try:
        await drone.offboard.set_attitude(Attitude(0.0, 0.0, 0.0, 0.0))
        logger.info("Initial setpoint set successfully")
    except Exception as e:
        logger.error(f"Error setting initial setpoint: {e}")
        return

    logger.info("Starting offboard mode...")
    try:
        await drone.offboard.start()
        logger.info("Offboard mode enabled successfully")
    except OffboardError as e:
        logger.error(f"Offboard mode failed: {e._result.result}")
        return

    logger.info("Entering main control loop")
    while True:
        try:
            logger.debug("Waiting for target coordinates")
            x_target, y_target = await asyncio.wait_for(target_queue.get(), timeout=1.0)
            logger.debug(f"Received target coordinates: X={x_target}, Y={y_target}")
        except asyncio.TimeoutError:
            logger.debug("Timeout waiting for coordinates, continuing loop")
            continue

        error_x = x_target - x_center
        error_y = y_target - y_center
        logger.debug(f"Calculated errors: X={error_x}, Y={error_y}")

        roll = pid_roll(error_x)
        pitch = -(pid_pitch(error_y))
        logger.debug(f"Calculated adjustments: Pitch={pitch}, Roll={roll}")

        try:
            await drone.offboard.set_attitude(Attitude(roll, pitch, 0.0, 1.0))
            logger.debug("Attitude command sent to drone")
        except Exception as e:
            logger.error(f"Error sending attitude command: {e}")

        try:
            async for attitude in drone.telemetry.attitude_euler():
                logger.debug(f"Current attitude: Roll={attitude.roll_deg}, Pitch={attitude.pitch_deg}, Yaw={attitude.yaw_deg}")
                break
        except Exception as e:
            logger.error(f"Error getting telemetry data: {e}")

async def main():
    logger.info("Starting main function")
    drone = System()
    ros2_task = asyncio.create_task(run_ros2_node())
    connection_task = asyncio.create_task(ensure_connection(drone))
    
    try:
        connected = await connection(drone)
        if not connected:
            logger.error("Failed to connect to the drone")
            return

        takeoff_successful = await arm_and_takeoff(drone)
        if not takeoff_successful:
            logger.error("Takeoff failed")
            return

        logger.info("Takeoff completed, waiting for 5 seconds")
        await asyncio.sleep(5)
        
        logger.info("Getting ROS2 node instance")
        node = await ros2_task
        logger.info("Starting logic function")
        await logic(drone, node.target_queue, node.x_center, node.y_center)
    except Exception as e:
        logger.error(f"Error in main function: {e}")
    finally:
        logger.info("Cancelling tasks")
        ros2_task.cancel()
        connection_task.cancel()
        try:
            await ros2_task
            await connection_task
        except asyncio.CancelledError:
            logger.info("Tasks cancelled successfully")

if __name__ == "__main__":
    asyncio.run(main())