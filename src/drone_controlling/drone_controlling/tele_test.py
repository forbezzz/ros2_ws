#!/usr/bin/env python3

import rclpy
import asyncio
from rclpy.node import Node
from mavsdk import System
from drone_interfaces.msg import TelemetryData

class TelemetryNode(Node):
    def __init__(self):
        super().__init__('telemetry_node')
        self.telemetry_publisher = self.create_publisher(TelemetryData, 'telemetry_data', 10)
        self.loop = asyncio.get_event_loop()
        self.loop.create_task(self.run())

    async def run(self):
        drone = System()
        await drone.connect(system_address="udp://:14550")

        print("Waiting for drone to connect...")
        async for state in drone.core.connection_state():
            if state.is_connected:
                print("-- Connected to drone!")
                break

        while rclpy.ok():
            telemetry_data = TelemetryData()

            async for position in drone.telemetry.position():
                telemetry_data.latitude = position.latitude_deg
                telemetry_data.longitude = position.longitude_deg
                break

            async for health in drone.telemetry.health():
                if health.is_global_position_ok:
                    print("-- Global position is OK")
                    break

            async for velocity in drone.telemetry.velocity_ned():
                # print(velocity)
                telemetry_data.speed = velocity.north_m_s
                break

            async for altitude in drone.telemetry.altitude():
                print(altitude)
                telemetry_data.altitude = altitude.altitude_amsl_m
                break
                
            async for attitude in drone.telemetry.attitude_euler():
                print(attitude)
                telemetry_data.orientation_roll = attitude.roll_deg
                telemetry_data.orientation_pitch = attitude.pitch_deg
                telemetry_data.orientation_yaw = attitude.yaw_deg
                break

            async for battery in drone.telemetry.battery():
                telemetry_data.battery_voltage = battery.voltage_v
                break

            # async for raw_gps in drone.telemetry.raw_gps():
            #     telemetry_data.abs_alt = raw_gps.latitude_deg
            #     break

            # async for distance_sensor in drone.telemetry.distance_sensor():           DISTANCE SENSOR DOESNT WORK
            #     telemetry_data.distance = distance_sensor.current_distance_m
            #     break
            async for heading in drone.telemetry.heading():
                telemetry_data.heading = heading.heading_deg
                print(telemetry_data.heading)
                break
            # async for imu in drone.telemetry.imu():                       IMU DOESNT WORK 
            #     telemetry_data.acceleration = imu.temperature_degc
            #     print(type(telemetry_data.acceleration))
            #     break

            # Publishing the message
            print(telemetry_data)
            self.telemetry_publisher.publish(telemetry_data)
            await asyncio.sleep(1)

def main(args=None):
    rclpy.init(args=args)
    node = TelemetryNode()
    asyncio.run(node.run())
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
