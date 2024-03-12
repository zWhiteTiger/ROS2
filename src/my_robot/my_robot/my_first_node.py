#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MyNode(Node):
    def __init__(self):
        super().__init__("first_node")
        self.counter = 0
        self.create_timer(1.0, self.timers_callback)
    def timers_callback(self):
        self.get_logger().info("HI" + str(self.counter))
        self.counter +=1
    
def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    rclpy.shutdown()
    
if __name__=='__main_':
    main()