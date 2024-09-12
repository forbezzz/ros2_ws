#!/usr/bin/env python3

# This node is designed to give commands to the FCU (Flight Control Unit) using MavSDK and ROS2 node

import rclpy
from rclpy.node import Node
from mavsdk import System

class Commander(Node):

    def __init__(self):
        super().__init__('cmd_test')
        self.timer_period = 1.0  # seconds


async def give_commands():
    drn = System()
    await drn.action.arm()
    print("Armed!")

async def establishing_connection():
    drone = System()
    await drone.connect(system_address="udp://:14550")

    print("Waiting for drone to connect...")
    async for state in drone.core.connection_state():
        if state.is_connected:
            print("Drone discovered!")
            break

def main(args=None):
    rclpy.init(args=args)
    node = Commander()
    asyncio.run(establishing_connection())
    rclpy.spin(node)

    # loop = asyncio.get_event_loop()
    # drone = loop.run_until_complete(node.establishing_connection())
    # loop.run_until_complete(node.give_commands(drone))
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    rclpy.shutdown()


    node.destroy_node()

if __name__ == '__main__':
    import asyncio
    main()
