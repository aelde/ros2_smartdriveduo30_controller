#!/usr/bin/env python3 
import rclpy
from rclpy.node import Node
from popo.srv import Command
from std_msgs.msg import String

# c = 00000000 - 00111111 # bitที่ 7-8::00 , 0 - 63 ล้อซ้าย ไปข้่างหน้า
# c = 01000000 - 01111111 # bitที่ 7-8::01 , 64 - 127 ล้อซ้าย ไปข้างหลัง
# c = 10000000 - 10111111 # bitที่ 7-8::10 , 128 - 191 ล้อขวา ไปข้างหน้า
# c = 11000000 - 11111111 # bitที่ 7-8::11 , 192 - 255 ล้อขวา ไปข้างหลัง

SPEED = 0

import serial
import time
import serial.tools.list_ports
po = serial.tools.list_ports.comports()
for port in po:    
    print(port.device)

# s = serial.Serial('/dev/ttyUSB1', 9600, timeout=1)
# ss = serial.Serial('/dev/ttyUSB2', 9600, timeout=1)

class TestMotorControl(Node):
    def __init__(self):
        super().__init__('motor_control_service_server')
        # self.declare_parameter('port', '/dev/ttyUSB1')
        self.sub = self.create_subscription(String, 'speed_topic', self.update_spped, 10)
        self.srv = self.create_service(Command, 'motor_control', self.motor_control_callback)
        self.F_L = 0
        self.F_R = 0
        self.B_L = 0
        self.B_R = 0
        self.spd = 0 # max 63
    def update_spped(self, msg):
        self.set_speed(int(msg.data))
    def set_speed(self, speed):
        self.spd = speed % 64
    def motor_control_callback(self, request, response):
        print(f'command received: {request.cmd}')
        # cmd = input("Enter command: ")
        if request.cmd == 'w':
            self.go_forward()
            response.feedback = 'go forward'
        elif request.cmd == 's':
            self.go_backward()
            response.feedback = 'go backward'
        elif request.cmd == 'a':
            self.turn_left()
            response.feedback = 'turn left'
        elif request.cmd == 'd':
            self.turn_right()
            response.feedback = 'turn right'
        elif request.cmd == 'x':
            print(f'speed = {self.spd}')
            # spd = int(input("Enter speed: "))
            # self.set_speed(spd)
            response.feedback = 'speed setting...!'
        elif request.cmd == 't':
            self.stop()
            response.feedback = 'stop'
        elif request.cmd == 'q': 
            print("Exit")
            response.feedback = 'exit'
            self.stop()
        self.control()
        
        print(request)
        print(response)
        return response 
    
    def go_forward(self):
        self.F_L = 0 + self.spd
        self.F_R = 128 + self.spd
        self.B_L = 0 + self.spd
        self.B_R = 128 + self.spd
    def go_backward(self):
        self.F_L = 64 + self.spd
        self.F_R = 192 + self.spd
        self.B_L = 64 + self.spd
        self.B_R = 192 + self.spd
    def turn_right(self):
        self.F_L = 0 + self.spd
        self.F_R = 192 + self.spd
        self.B_L = 0 + self.spd
        self.B_R = 192 + self.spd
    def turn_left(self):
        self.F_L = 64 + self.spd
        self.F_R = 128 + self.spd
        self.B_L = 64 + self.spd
        self.B_R = 128 + self.spd
    def stop(self):
        self.F_L = 64
        self.F_R = 128
        self.B_L = 0
        self.B_R = 192
    def control(self):
        packetFL = bytearray()
        packetFR = bytearray()
        packetBL = bytearray()
        packetBR = bytearray()
        packetFL.append(self.F_L)
        packetFR.append(self.F_R)
        packetBL.append(self.B_L)
        packetBR.append(self.B_R)
        print(f'speed = {self.spd}')
        # ss.write(packetFL)
        # ss.write(packetFR)
        # s.write(packetBL)
        # s.write(packetBR)
        # print(f'received massage!')

def main(args=None):
    rclpy.init()
    server = TestMotorControl()
    print(f'driver service server is running...')
    try:
        rclpy.spin(server)
    except KeyboardInterrupt:
        print(f'driver service server terminated!')
        server.destroy_node()

if __name__ == '__main__':
    main()