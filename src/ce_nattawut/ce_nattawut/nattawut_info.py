#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from ce_robot_interfaces.msg import Nattawut

class HwStatusNode_Para(Node):
    def __init__(self):
        super().__init__("std_para_publish")
        self.declare_parameter("ce_name","Nattawut sarika")
        self.declare_parameter("ce_no",5)
        self.declare_parameter("ce_section","CAE6441")
        
        self.ce_name_ = self.get_parameter("ce_name").value
        self.ce_no_ = self.get_parameter("ce_no").value
        self.ce_section_ = self.get_parameter("ce_section").value
        
        self.hw_status_publish_= self.create_publisher(Nattawut,"std_info", 10)
        self.timer_ = self.create_timer(1.0, self.publish_hw_status)
        self.get_logger().info("Function 'Student Infomation'  is Activate!")

    def publish_hw_status(self):
        msg = Nattawut()

        msg.ce_name = self.ce_name_
        msg.ce_no = self.ce_no_
        msg.ce_section = self.ce_section_

        self.hw_status_publish_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = HwStatusNode_Para()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()