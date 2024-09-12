#!/usr/bin/env python3

# This node is designed to give commands to the FCU (Flight Control Unit) using MavSDK and ROS2 node

import rclpy
import time
from rclpy.node import Node
from mavsdk import System
# from drone_interfaces.msg import VelocityNed
import asyncio
from std_msgs.msg import String
from drone_interfaces.msg import TelemetryData

class Commander(Node):

    def __init__(self):
        super().__init__('commander')
        self.loop = asyncio.get_event_loop()
        self.drone = None
        self.loop.create_task(self.run())

    async def run(self):
        self.drone = await self.establishing_connection()
        await self.give_commands(self.drone)
        # position_flight_data = await self.position_vel(self.drone)
        telemetry_flight_data = await self.flight_mode(self.drone)
        await self.telemetry_package(self.drone, telemetry_flight_data)
        

    async def establishing_connection(self):
        drone = System()
        self.telemetry_publisher = self.create_publisher(TelemetryData, 'telemetry_data', 10)
        # self.position_ned = self.create_publisher(VelocityNed, 'connection1', 10)
        await drone.connect(system_address="serial:///dev/ttyS3:57600")
        print("Waiting for drone to connect...")
        async for state in drone.core.connection_state():
            if state.is_connected:
                print("-- Connected to drone!")
                return drone

    async def give_commands(self, drn):
        await drn.action.arm()
        print("Armed!")
        await drn.action.takeoff()
        print("Takeoff!")

    async def flight_mode(self, drn):
        async for flight_mode in drn.telemetry.flight_mode():
            # print(type(flight_mode))
            # msg = String()
            # data = str(flight_mode)
            print(f"Flight Mode: {flight_mode}")
            telemetry_data = TelemetryData()
            self.telemetry_publisher.publish(telemetry_data.flight_mode)
            await asyncio.sleep(1) 
            # return flight_mode

    async def position_vel(self, drn):
        async for position_velocity_ned in drn.telemetry.position_velocity_ned():
            print(position_velocity_ned)
            time.sleep(10)
            # velocity_ned_data = str(position_velocity_ned)
            # return velocity_ned_data

    # async def telemetry_package(self, drn, telemetry_flight_data):
    #     msg = String()
    #     # print(f"MODE       {telemetry_flight_data}")
    #     msg.data = str(telemetry_flight_data)
    #     # self.string_publisher.publish(position_flight_data)
    #     # print(type(telemetry_flight_data))
    #     self.string_publisher.publish(msg)
    #     await asyncio.sleep(1) 


def main(args=None):
    rclpy.init(args=args)
    node = Commander()
    asyncio.run(node.run())
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()
        node.destroy_node()

if __name__ == '__main__':
    main()
