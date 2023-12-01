#!/usr/bin/env python3 
import sys
from popo.srv import TestThree
import rclpy
from rclpy.node import Node


class MinimalClientAsync(Node):

    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(TestThree, 'test_three_ints')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = TestThree.Request()

    def send_request(self, a, b,c):
        self.req.a = a
        self.req.b = b
        self.req.c = c
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)
    minimal_client = MinimalClientAsync()
    response = minimal_client.send_request(int(sys.argv[1]), int(sys.argv[2]), int(sys.argv[3]))
    minimal_client.get_logger().info(f'Result of TestThree: {int(sys.argv[1])}, {int(sys.argv[2])}, {int(sys.argv[3])} = {response.sum}')
    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()