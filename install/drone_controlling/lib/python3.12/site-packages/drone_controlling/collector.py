import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from drone_interfaces.msg import TelemetryData
import time

class HelloSubscriber(Node):

    def __init__(self):
        super().__init__('collector')
        self.subscription = self.create_subscription(
            TelemetryData,
            'telemetry_data',
            self.listener_callback,
            1
        )
        self.get_logger().info('Seeking for data.')

    def listener_callback(self, msg):
        flightmode = msg.flight_mode
        self.get_logger().info(f'Speed: {msg.speed}')
        self.get_logger().info(f'Altitude: {msg.altitude}')
        self.get_logger().info(f'Latitude: {msg.latitude}')
        self.get_logger().info(f'Longitude: {msg.longitude}')
        self.get_logger().info(f'Orientation Roll: {msg.orientation_roll}')
        self.get_logger().info(f'Orientation Pitch: {msg.orientation_pitch}')
        self.get_logger().info(f'Orientation Yaw: {msg.orientation_yaw}')
        self.get_logger().info(f'Distance: {msg.distance}')
        self.get_logger().info(f'Battery Voltage: {msg.battery_voltage}')
        self.get_logger().info(f'Heading: {msg.heading}')
        self.get_logger().info(f'Acceleration: {msg.acceleration}')
        self.get_logger().info(f'Flight Mode: {flightmode}')
        print("===============================================================================")
        # time.sleep(1)


def main(args=None):
    rclpy.init(args=args)
    node = HelloSubscriber()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
