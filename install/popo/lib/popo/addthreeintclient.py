
#!/usr/bin/env python3 
from popo.srv import Threevalue       # CHANGE
import sys
import rclpy
from rclpy.node import Node

print('client is running')

class MinimalClientAsync(Node):
    def __init__(self):
        super().__init__('minimal_client_async')
        self.cli = self.create_client(Threevalue, 'add_three_ints')       # CHANGE
        while not self.cli.wait_for_service(timeout_sec=1.0):
            print('service not available, waiting again...')
        self.req = Threevalue.Request()                                   # CHANGE

    # def send_request(self, a, b, c):
    #     self.req.a = int(a)
    #     self.req.b = int(b)
    #     self.req.c = int(c)
    #     self.future = self.cli.call_async(self.req)
    #     rclpy.spin_until_future_complete(self, self.future)
    #     return self.future.result()
    
    def send_request(self,a,b,c):
        self.req.a = int(a)
        self.req.b = int(b)
        self.req.c = int(c)
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main(args=None):
    rclpy.init(args=args)

    m = MinimalClientAsync()
    # r = m.send_request()
    try:
        # a, b, c = input('Enter a,b,c: ').split()
        # r = m.send_request(a,b,c)
        r = m.send_request(sys.argv[1],sys.argv[2],sys.argv[3])
        m.get_logger().info(
            'Result of add_three_ints: for %d + %d + %d = %d' %                               # CHANGE
            (m.req.a, m.req.b, m.req.c, r.sum)) # CHANGE
    except KeyboardInterrupt:
        print("Exit")
        print(f'minimal client terminated!')
        m.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()