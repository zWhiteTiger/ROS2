#!/usr/bin/env python3
import rclpy 
from rclpy.node import Node
from example_interfaces.msg import String

class RobotPubNode(Node):
    def __init__(self):
        super().__init__("first_publisher")
        self.robot_name_ ="CE-RO"
        self.publishers_ = self.create_publisher(String, "Robot_Pub", 10)
        self.timers_ = self.create_timer(1.0, self.publish_val)
        self.get_logger().info("Robot Frist Publisher Start!")
    def publish_val(self):
        msg = String()
        msg.data = "Hi CAE6441 " +\
            str(self.robot_name_)
        self.publishers_.publish(msg)
def main(args=None):
    rclpy.init(args=args)
    node = RobotPubNode()
    rclpy.spin(node)
    rclpy.shutdown()
if __name__ == '__main__':
    main()