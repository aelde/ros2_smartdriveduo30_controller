cmake_minimum_required(VERSION 3.8)
project(popo)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
# find_package(tutorial_interfaces REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "srv/Command.srv"
    "srv/AddThreeInts.srv"
    "srv/Threevalue.srv"
    "srv/AddTwoInts.srv"
    "srv/TestThree.srv"
    DEPENDENCIES
    # tutorial_interfaces
)

ament_python_install_package(scripts)

install(PROGRAMS
  scripts/driver_service_server.py
  scripts/driver_service_client.py
  scripts/addthreeintclient.py
  scripts/addthreeintservice.py
  scripts/service_member_function.py
  scripts/client_member_function.py
  scripts/TestThreeServer.py
  scripts/TestThreeClient.py
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
    launch 
    DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
