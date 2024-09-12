#!/usr/bin/env python3

import asyncio
import socket
import rclpy
from simple_pid import PID
from mavsdk import System
from mavsdk.offboard import Attitude, OffboardError, VelocityBodyYawspeed

x_center = 320
y_center = 240

def socket_server():
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.bind(('0.0.0.0', 65431))  # Bind to an available IP and port
    server_socket.listen()
    conn, addr = server_socket.accept()
    print('Connected by', addr)
    return conn

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
        print(f"Offboard mode failed!{e._result.result}")
        return
    await drone_object.offboard.set_velocity_body(VelocityBodyYawspeed(0.0, 0.0, -111.0, 0.0))

    while True:
        # data = conn.recv(1024)
        # strings = data.decode('utf8')
        # x_str, y_str = strings.split(',')
        # x_target = float(x_str)
        # y_target = float(y_str)
        x_target = int(x_target)
        y_target = int(y_target)
        print(f"X target:  {x_target}     Y target: {y_target}")
        error_x = x_center - x_target
        error_y = y_center - y_target
        print(f"X error:  {error_x}     Y error: {error_y}")
        
        # Вычисляем необходимые значения для крена и тангажа
        roll = pid_roll(error_x)
        pitch = -(pid_pitch(error_y))   # Инвертируем знак для правильного управления
        print(f"Pitch: {pitch}")
        print(f"Roll: {roll}")
        
        # Устанавливаем новые значения для дрона
        await drone_object.offboard.set_attitude(Attitude(roll, pitch, 0.0, 1.0))

        # Получаем и выводим текущие значения Roll, Pitch, Yaw для отслеживания изменений
        async for attitude in drone_object.telemetry.attitude_euler():
            current_roll = attitude.roll_deg
            current_pitch = attitude.pitch_deg
            current_yaw = attitude.yaw_deg
            print(f"Updated Roll: {current_roll}, Pitch: {current_pitch}, Yaw: {current_yaw}")
            break  # Выходим из цикла после первого получения данных

async def main():
    # conn = socket_server()
    print("1")
    drone_object = System()
    await connection(drone_object)
    print("1")
    await arm(drone_object)
    await takeoff(drone_object)
    await asyncio.sleep(7)
    await logic(drone_object)

if __name__ == "__main__":
    asyncio.run(main())
