#!/usr/bin/env python3
import rclpy 
from rclpy.node import Node
from example_interfaces.msg import String

class RobotPubNode(Node):
    def __init__(self):
        super().__init__("second_suber")
        self.subscriber_ = self.create_subscription(
            String,"Robot_Pub",self.callback_robot_pub,10)
        self.get_logger().info("Robot Frist Publisher Start!")
        
    def callback_robot_pub(self,msg):
        self.get_logger().info(msg.data)

def main(args=None):
    rclpy.init(args=args)
    node = RobotPubNode()
    rclpy.spin(node)
    rclpy.shutdown()
if __name__ == '__main__':
    main()