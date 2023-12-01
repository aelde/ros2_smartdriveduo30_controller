#!/usr/bin/env python3 
import rclpy
from rclpy.node import Node
import serial
import sys
from popo.srv import Command
from std_msgs.msg import String

print('client is running')
class DriverClient(Node):
    def __init__(self):
        super().__init__('motor_control_service_client')
        self.cli = self.create_client(Command, 'motor_control')
        self.pub = self.create_publisher(String, 'speed_topic', 10)
        # self.timers = self.create_timer(0.1, self.timer_callback)
        self.req = Command.Request()
    def sent_request(self, command):
        self.req.cmd = command
        # self.req.speed = speed
        self.cli.wait_for_service()
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        
        self.result = self.future.result()
        return self.result
    def pub_speed(self,speed):
        msg = String()
        msg.data = str(speed)
        self.pub.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    driver_client = DriverClient()
    print('driver client is running')
    try:
        user_input = input("Enter command: ")
        if user_input == 'x':
            speed = int(input("Enter speed: "))
            r = driver_client.pub_speed(speed)
        r = driver_client.sent_request(user_input)
        print(f'Server feedback: {r.feedback}') 
    except KeyboardInterrupt:
        print("Exit")
        print(f'driver client terminated!')
        driver_client.destroy_node()

# def main(args=None):
#     rclpy.init(args=args)
#     d = DriverClient()
    
if __name__ == '__main__':
    main()