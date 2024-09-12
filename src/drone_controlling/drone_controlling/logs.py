#!/usr/bin/env python3

# This node is designed to take telemetry data from the FCU (Flight Control Unit) using MavSDK and ROS2 node

import rclpy
import time
import asyncio
import rclpy
from rclpy.node import Node
from mavsdk import System
from std_msgs.msg import String
import sys


class Telemetry(Node):

    def __init__(self):
        super().__init__('logs')
        self.telemetry_publisher = self.create_publisher(String, 'telemetry', 10)
        self.loop = asyncio.get_event_loop()
        self.drone = None
        self.loop.create_task(self.run())

    async def run(self):
        drone = System()
        await drone.connect(system_address="udp://:14550")
        print("Waiting for drone to connect...")
        async for state in drone.core.connection_state():
            if state.is_connected:
                print("-- Connected to drone!")
                break
        entries = await self.get_entries(drone)
        for entry in entries:
            await self.download_log(self, drone, entry)

    async def download_log(self, drone, entry):
        date_without_colon = entry.date.replace(":", "-")
        filename = f"./log-{date_without_colon}.ulog"
        print(f"Downloading: log {entry.id} from {entry.date} to {filename}")
        previous_progress = -1
        async for progress in drone.log_files.download_log_file(entry, filename):
            new_progress = round(progress.progress*100)
            if new_progress != previous_progress:
                sys.stdout.write(f"\r{new_progress} %")
                sys.stdout.flush()
                previous_progress = new_progress
        print()
    
    async def get_entries(self, drone):
        entries = await drone.log_files.get_entries()
        for entry in entries:
            print(f"Log {entry.id} from {entry.date}")
        return entries

def main(args=None):
    rclpy.init(args=args)
    node = Telemetry()
    asyncio.run(Telemetry.run(node))
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
        
