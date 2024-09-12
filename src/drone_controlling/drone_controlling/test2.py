#!/usr/bin/env python3

import io
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32MultiArray
from pymavlink import mavutil
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
        self.target_queue = io.Queue()
        self.x_center = 320
        self.y_center = 240

    def target_callback(self, msg):
        if len(msg.data) == 2:
            logger.debug(f"Received target coordinates: {msg.data}")
            self.target_queue.put_nowait((msg.data[0], msg.data[1]))

def run_ros2_node():
    logger.info("Initializing ROS2 node")
    rclpy.init()
    node = DroneController()
    try:
        while rclpy.ok():
            rclpy.spin_once(node, timeout_sec=0.1)
            io.sleep(0.1)
    except Exception as e:
        logger.error(f"Error in ROS2 node: {e}")
    finally:
        logger.info("Shutting down ROS2 node")
        node.destroy_node()
        rclpy.shutdown()
    return node

def connect_drone():
    logger.info("Attempting to connect to the drone")
    connection = mavutil.mavlink_connection('udpin:localhost:14550')
    connection.wait_heartbeat()
    logger.info("Connection to drone successful")
    return connection

def ensure_connection(connection):
    while True:
        if not connection.target_system:
            logger.warning("Connection lost. Attempting to reconnect...")
            connection = connect_drone()
        io.sleep(5)  # Check connection every 5 seconds

def arm_and_takeoff(connection, target_altitude):
    logger.info("Arming the drone")
    connection.mav.command_long_send(
        connection.target_system, connection.target_component,
        mavutil.mavlink.MAV_CMD_COMPONENT_ARM_DISARM, 0, 1, 0, 0, 0, 0, 0, 0)

    msg = connection.recv_match(type='COMMAND_ACK', blocking=True)
    if msg.result == mavutil.mavlink.MAV_RESULT_ACCEPTED:
        logger.info("Drone armed successfully")
    else:
        logger.error(f"Arming failed: {msg.result}")
        return False

    logger.info("Initiating takeoff")
    connection.mav.command_long_send(
        connection.target_system, connection.target_component,
        mavutil.mavlink.MAV_CMD_NAV_TAKEOFF, 0, 0, 0, 0, 0, 0, 0, target_altitude)

    msg = connection.recv_match(type='COMMAND_ACK', blocking=True)
    if msg.result == mavutil.mavlink.MAV_RESULT_ACCEPTED:
        logger.info("Takeoff command accepted")
    else:
        logger.error(f"Takeoff failed: {msg.result}")
        return False

    logger.info("Waiting for takeoff to complete...")
    while True:
        msg = connection.recv_match(type='GLOBAL_POSITION_INT', blocking=True)
        if msg.relative_alt / 1000.0 >= target_altitude * 0.95:
            logger.info("Takeoff complete. Drone reached target altitude.")
            return True
def logic(connection, target_queue, x_center, y_center):
    logger.info("Entering logic function")
    pid_roll = PID(0.35, 0.1, 0.001, setpoint=0)
    pid_pitch = PID(0.35, 0.1, 0.001, setpoint=0)

    logger.info("Entering main control loop")
    while True:
        try:
            logger.debug("Waiting for target coordinates")
            x_target, y_target =  io.wait_for(target_queue.get(), timeout=1.0)
            logger.debug(f"Received target coordinates: X={x_target}, Y={y_target}")
        except io.TimeoutError:
            logger.debug("Timeout waiting for coordinates, continuing loop")
            continue

        error_x = x_target - x_center
        error_y = y_target - y_center
        logger.debug(f"Calculated errors: X={error_x}, Y={error_y}")

        roll = pid_roll(error_x)
        pitch = -(pid_pitch(error_y))
        logger.debug(f"Calculated adjustments: Pitch={pitch}, Roll={roll}")

        try:
            connection.mav.attitude_target_send(
                0,  # time_boot_ms
                1,  # type_mask (ignore body rates)
                [roll, pitch, 0],  # q (attitude quaternion)
                0, 0, 0,  # body roll, pitch, yaw rates
                1.0  # thrust
            )
            logger.debug("Attitude command sent to drone")
        except Exception as e:
            logger.error(f"Error sending attitude command: {e}")

        try:
            msg = connection.recv_match(type='ATTITUDE', blocking=True)
            logger.debug(f"Current attitude: Roll={msg.roll}, Pitch={msg.pitch}, Yaw={msg.yaw}")
        except Exception as e:
            logger.error(f"Error getting telemetry data: {e}")

def main():
    logger.info("Starting main function")
    connection = connect_drone()
    ros2_task = run_ros2_node()
    connection_task = ensure_connection(connection)
    
    try:
        takeoff_successful = arm_and_takeoff(connection, target_altitude=5)  # 5 meters altitude
        if not takeoff_successful:
            logger.error("Takeoff failed")
            return

        logger.info("Takeoff completed, waiting for 5 seconds")
         io.sleep(5)
        
        logger.info("Getting ROS2 node instance")
        node =  ros2_task
        logger.info("Starting logic function")
         logic(connection, node.target_queue, node.x_center, node.y_center)
    except Exception as e:
        logger.error(f"Error in main function: {e}")
    finally:
        logger.info("Cancelling tasks")
        ros2_task.cancel()
        connection_task.cancel()
        try:
             ros2_task
             connection_task
        except io.CancelledError:
            logger.info("Tasks cancelled successfully")

if __name__ == "__main__":
    main()