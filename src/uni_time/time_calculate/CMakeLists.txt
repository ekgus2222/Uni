cmake_minimum_required(VERSION 3.5)
project(time_calculate)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(time_msgs REQUIRED)

include_directories(
  include
)



add_executable(time_calculate_node src/main.cpp src/time_calculate_node.cpp)
target_link_libraries(time_calculate_node
  -lpthread
  -lrt
)
ament_target_dependencies(time_calculate_node
  rclcpp
  time_msgs
)

add_executable(minimal_subscriber src/time_sub.cpp)
target_link_libraries(minimal_subscriber
  -lpthread
  -lrt
)
ament_target_dependencies(minimal_subscriber
  rclcpp
  time_msgs
)


add_executable(create_tcp src/tcpNshared.cpp)
target_link_libraries(create_tcp
  -lpthread
  -lrt
)


add_executable(get_gps src/homeTCP.cpp)
target_link_libraries(get_gps
  -lpthread
  -lrt
)



install(TARGETS
  time_calculate_node
  create_tcp
  get_gps
  minimal_subscriber
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
