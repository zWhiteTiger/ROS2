#!/usr/bin/env python3
import rclpy 
from rclpy.node import Node
from myrobot_interfaces.msg import HWstatus

class HwStatusNode(Node):
    def __init__(self):
        super().__init__("hw_status_publisher")
        self.robot_name_ ="ROBOCOP"
        self.robot_number_ = 69
        self.hw_status_publish_ = self.create_publisher(HWstatus, "hardware_status", 10)
        self.timers_ = self.create_timer(1.0, self.publish_hw_status)
        self.get_logger().info("Hw_Status_Publish_Node Start Now!")

    def publish_hw_status(self):
        msg = HWstatus()
        msg.name_robot = self.robot_name_
        msg.number_robot = self.robot_number_
        msg.temperature = 50
        msg.motor = True
        msg.debug_message = "Motor 1"
        self.hw_status_publish_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = HwStatusNode()
    rclpy.spin(node)
    rclpy.shutdown()
if __name__ == '__main__':
    main()