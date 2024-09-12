#!/usr/bin/env python3

import asyncio
import rclpy
from rclpy.node import Node
from simple_pid import PID
from mavsdk import System
from mavsdk.offboard import Attitude, OffboardError, VelocityBodyYawspeed
from std_msgs.msg import Int32MultiArray
from asgiref.sync import async_to_sync

x_center = 320
y_center = 240
drone_object = System()
class PIDMovement(Node):

    def __init__(self):
        super().__init__('1')
        # Create subscription to 'coordinates' topic
        print("1")
        self.start()

    async def start(self):
        self.coordinatesSUB = self.create_subscription(
            Int32MultiArray, 
            'coordinates', 
            self.coordinates_callback, 
            10
        )

    async def coordinates_callback(self, msg):
        # Extract x and y coordinates from the message and update target values
        self.x_target = msg.data[0]
        self.y_target = msg.data[1]
        print(f"Received coordinates: x_target={self.x_target}, y_target={self.y_target}")
        # Use the x_target and y_target from the callback
        
        error_x = x_center - self.x_target
        error_y = y_center - self.y_target
        print(f"X error: {error_x}, Y error: {error_y}")
        
        # Compute roll and pitch
        roll = pid_roll(error_x)
        pitch = -pid_pitch(error_y)  # Invert pitch for correct control
        print(f"Pitch: {pitch}, Roll: {roll}")
        
        # Set new drone attitude
        await drone_object.offboard.set_attitude(Attitude(roll, pitch, 0.0, 1.0))

        # Print current roll, pitch, yaw
        async for attitude in drone_object.telemetry.attitude_euler():
            current_roll = attitude.roll_deg
            current_pitch = attitude.pitch_deg
            current_yaw = attitude.yaw_deg
            print(f"Updated Roll: {current_roll}, Pitch: {current_pitch}, Yaw: {current_yaw}")
            break  # Exit loop after getting the first update

async def main(args=None):
    await connection(drone_object)
    await arm(drone_object)
    await takeoff(drone_object)
    await asyncio.sleep(7)
    await logic(drone_object)
    rclpy.init(args=args)
    node = PIDMovement()
    rclpy.spin(node)
    rclpy.shutdown()
    node.destroy_node()


async def logic(drone_object):
    print("Setting initial setpoint...")
    pid_roll = PID(0.35, 0.1, 0.001, setpoint=0)
    pid_pitch = PID(0.35, 0.1, 0.001, setpoint=0)
    await drone_object.offboard.set_attitude(Attitude(0.0, 0.0, 0.0, 0.0))
    print("Set!")
    print("!!Starting offboard mode!!")
    try:
        await drone_object.offboard.start()
        print("!!Offboard enabled!!")
    except OffboardError as e:
        print(f"Offboard mode failed! {e._result.result}")
        return
    await drone_object.offboard.set_velocity_body(VelocityBodyYawspeed(0.0, 0.0, -111.0, 0.0))


async def connection(drone_object):
    await drone_object.connect(system_address="serial:///dev/ttyAMA0:57600")
    async for connection_state in drone_object.core.connection_state():
        if connection_state.is_connected:
            print("Connection successful")
            break
        else:
            print("Unable to connect!")
            break

async def arm(drone_object):
    await drone_object.action.arm()
    print("Armed!")

async def takeoff(drone_object):
    await drone_object.action.takeoff()
    print("Takeoff!")

async def land(drone_object):
    await drone_object.action.land()
    print("Landed")

if __name__ == "__main__":
    asyncio.run(main())
