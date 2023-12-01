#!/usr/bin/env python3 
from popo.srv import TestThree
import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(TestThree, 'test_three_ints', self.TestThree_callback)

    def TestThree_callback(self, request, response):
        response.sum = request.a + request.b + request.c
        self.get_logger().info(f'Incoming request :{request.a} + {request.b} + {request.c}')
        return response


def main(args=None):
    rclpy.init(args=args)
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)
    rclpy.shutdown()


if __name__ == '__main__':
    main()