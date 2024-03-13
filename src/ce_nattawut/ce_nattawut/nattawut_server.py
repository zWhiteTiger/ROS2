#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from ce_robot_interfaces.srv import Nattawut

class Circle_Area_Server(Node):
    def __init__(self):
        super().__init__("Circle_Area_Server")
        self.server_ = self.create_service(
            Nattawut, "cal_circle_sv", self.callback_circle_are)
        self.get_logger().info("Function: Calculator 'Circle' is Activated!")
        
    def callback_circle_are(self, request, response):
        response.circle_area = 3.14 * (request.r * request.r)
        self.get_logger().info(str("Radius: "+str(request.r) + "   Cirecle area: "+str(response.circle_area)))
        return response
    
def main(args=None):
    rclpy.init(args=args)
    node = Circle_Area_Server()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()