import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Int32MultiArray
import time

class Sub(Node):

    def __init__(self):
        super().__init__('Sub_test')
        self.subscription = self.create_subscription(
            Int32MultiArray,
            'coordinates',
            self.listener_callback,
            1
        )
        self.get_logger().info('Seeking for data.')

    def listener_callback(self, msg):
        self.get_logger().info(f'X: {msg.data}')

        time.sleep(5)


def main(args=None):
    rclpy.init(args=args)
    node = Sub()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
