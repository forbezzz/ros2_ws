#!/usr/bin/env python3

import cv2
import os
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import time


class Image_Detect(Node):

    def __init__(self):
        super().__init__('image_detect')
        self.publisher_ = self.create_publisher(String, 'connection', 10)
        timer_period = 1.0  # seconds
        current_dir = os.path.dirname(os.path.realpath(__file__))
        image_path = f'{current_dir}//0_frame.png'
        cascade_path = f'{current_dir}//cascade.xml'

        # Load the classifier
        cascade = self.load_classifier(cascade_path)

        # Perform detection and display results
        self.detected = self.detect_and_display(cascade, image_path)

        self.timer = self.create_timer(timer_period, self.timer_callback)


    def timer_callback(self):
        msg = String()
        msg.data = str(self.detected)
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)


    def load_classifier(self, cascade_path):
        # Load the Haar cascade file
        cascade = cv2.CascadeClassifier(cascade_path)
        if cascade.empty():
            raise IOError("Cannot load cascade classifier from file: " + cascade_path)
        return cascade

    def detect_and_display(self, cascade, image_path):
        # Load the image
        start = time.time()
        image = cv2.imread(image_path)
        if image is None:
            raise IOError("Cannot open image file: " + image_path)

        # Convert to grayscale for detection
        gray_image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

        # Perform detection
        detections = cascade.detectMultiScale(gray_image, scaleFactor=1.1, minNeighbors=5, minSize=(10, 10))

        # Draw rectangles around detected objects
        for (x, y, w, h) in detections:
            #cv2.rectangle(gray_image, (x, y), (x + w, y + h), (0, 255, 0), 2)
            #print (x + (w * 0.5), y + (h * 0.5))
            detected = (x + (w * 0.5), y + (h * 0.5))
            print(time.time() - start)
            return detected
            #cv2.rectangle(grey_image, (x, y), (x + w, y + h), (0, 255, 0), 2)
            #print(f"Detected at: x={x + w * 0.5}, y={y + h * 0.5}")

        # Display the result
        #cv2.imshow('Detected Objects', gray_image)
        #cv2.waitKey(0)
        #cv2.destroyAllWindows()

def main(args=None):
        rclpy.init(args=args)
        node = Image_Detect()
        rclpy.spin(node)
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    # Path to the Haar cascade file
    # Path to the image file
    main() 
