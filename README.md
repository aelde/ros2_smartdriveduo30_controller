# ros2_smartdriveduo30_controller

hi im AELDE today im starting with my new robot project (next gen of kalwtummad2).

but these code is just a small path of this project

so ,this path of project represent how to control smartdrive duo 30 using ros2 on jetson nano.

the concept to control smartdrive duo 30 is:
  * 00000000 - 00111111 (0-63) is left wheel go forward
  * 01000000 - 01111111 (64-127) is left wheel go backward
  * 10000000 - 10111111 (128-191) is right wheel go forward
  * 11000000 - 11111111 (192-255) is right wheel go backward

you can see code in src/popo/scripts/
  - file "driver_service_client.py" is ros2 client to interact with user
  - file "driver_service_server.py" is ros2 server control




