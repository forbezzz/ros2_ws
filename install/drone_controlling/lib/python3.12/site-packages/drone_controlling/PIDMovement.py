#!/usr/bin/env python3

import asyncio
import socket
import rclpy
from rclpy.node import Node
from simple_pid import PID
from mavsdk import System
from mavsdk.offboard import Attitude, OffboardError, VelocityBodyYawspeed
from std_msgs.msg import Int32MultiArray
from rclpy.qos import qos_profile_default

x_center = 320
y_center = 240

class PIDMovement(Node):

    def __init__(self):
        super().__init__('pid_node')
        # Add qos_profile_default as the required argument
        self.coordinatesSUB = self.create_subscription(Int32MultiArray, 'coordinates', self.listener_callback, qos_profile_default)
        self.loop = asyncio.get_event_loop()
        self.loop.create_task(self.run())

    def listener_callback(self, msg):
        # Callback function to process the incoming coordinates message
        global x_target, y_target
        x_target, y_target = msg.data[0], msg.data[1]
        print("AAAAAAAAAAAAAAA")
        self.get_logger().info(f"Received coordinates: x={x_target}, y={y_target}")
        print(f"X    {x_target}")
        print(f"Y         {y_target}")

    async def run(self):
        #conn = socket_server()
        print("1")
        drone_object = System()
        await self.connection(drone_object)
        print("1")
        #print(f"X     {self.x_target}")
        #print(f"Y     {self.y_target}")
        await self.arm(drone_object)
        await self.takeoff(drone_object)
        await asyncio.sleep(7)
        await self.logic(drone_object)

    async def connection(self, drone_object):
        await drone_object.connect(system_address="serial:///dev/ttyAMA0:57600")
        async for connection_state in drone_object.core.connection_state():
            if connection_state.is_connected:
                print("Connection successful")
                break
            else:
                print("Unable to connect!")
                break

    async def arm(self, drone_object):
        await drone_object.action.arm()
        print("Armed!")

    async def takeoff(self, drone_object):
        await drone_object.action.takeoff()
        print("Takeoff!")

    async def land(self, drone_object):
        await drone_object.action.land()
        print("Landed")

    async def logic(self, drone_object):
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
            print(f"Offboard mode failed!{e._result.result}")
            return
        await drone_object.offboard.set_velocity_body(VelocityBodyYawspeed(0.0, 0.0, -111.0, 0.0))

        while True:
            # Use global x_target and y_target defined in the callback function
            x_target = int(x_target)
            y_target = int(y_target)
            print(f"X target:  {x_target}     Y target: {y_target}")
            error_x = x_center - x_target
            error_y = y_center - y_target
            print(f"X error:  {error_x}     Y error: {error_y}")
            
            # Calculate roll and pitch based on PID controller
            roll = pid_roll(error_x)
            pitch = -(pid_pitch(error_y))   # Inverted sign for correct control
            print(f"Pitch: {pitch}")
            print(f"Roll: {roll}")
            
            # Set new values for drone control
            await drone_object.offboard.set_attitude(Attitude(roll, pitch, 0.0, 1.0))

            # Get and display the current Roll, Pitch, Yaw for tracking changes
            async for attitude in drone_object.telemetry.attitude_euler():
                current_roll = attitude.roll_deg
                current_pitch = attitude.pitch_deg
                current_yaw = attitude.yaw_deg
                print(f"Updated Roll: {current_roll}, Pitch: {current_pitch}, Yaw: {current_yaw}")
                break  # Exit after first data

def socket_server():
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind(('0.0.0.0', 65431))  # Bind to an available IP and port
    server_socket.listen()
    conn, addr = server_socket.accept()
    print('Connected by', addr)
    return conn

def main(args=None):
    rclpy.init(args=args)
    node = PIDMovement()
    asyncio.run(node.run())
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        rclpy.shutdown()
        node.destroy_node()

if __name__ == "__main__":
    main()
