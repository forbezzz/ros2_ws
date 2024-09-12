from pymavlink import mavutil
import time

master = mavutil.mavlink_connection('/dev/ttyAMA0', baud=57600)

master.wait_heartbeat()
print("1s")
print("Heartbeat from system (system %u component %u)" % (master.target_system, master.target_component))

master.mav.param_request_list_send(master.target_system, master.target_component)
input("Enter")
def arm_drone():
    print("Arming drone...")
    master.mav.command_long_send(
        master.target_system, master.target_component,
        mavutil.mavlink.MAV_CMD_COMPONENT_ARM_DISARM, 0,
        1, 0, 0, 0, 0, 0, 0
    )
    time.sleep(3)  # Wait for a few seconds to ensure the drone is armed

# Function to disarm the drone
def disarm_drone():
    print("Disarming drone...")
    master.mav.command_long_send(
        master.target_system, master.target_component,
        mavutil.mavlink.MAV_CMD_COMPONENT_ARM_DISARM, 0,
        0, 0, 0, 0, 0, 0, 0
    )

# Function to command takeoff
def takeoff():
    print(f"Taking off to  meters...")
    master.mav.command_long_send(
        master.target_system, master.target_component,
        mavutil.mavlink.MAV_CMD_NAV_TAKEOFF_LOCAL, 0,
        0, 0, 0, 1, 0, 0, 15
    )

# Main execution
arm_drone()
takeoff()  # Take off to 10 meters

# Optionally, you can listen for and print messages
# while True:
#     msg = master.recv_match()
#     if msg:
#         print(msg)