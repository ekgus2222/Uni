cmake_minimum_required(VERSION 3.5)
project(uni_save)

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
find_package(std_msgs REQUIRED)
find_package(srv_alarm_interface REQUIRED)
find_package(CURL REQUIRED)
find_package(jsoncpp REQUIRED)
pkg_search_module(JSONCPP jsoncpp)

include_directories(include)

add_executable(alarmserver src/alarm/alarmserver.cpp)
ament_target_dependencies(alarmserver
  srv_alarm_interface
  rclcpp
  CURL
  jsoncpp
)
target_link_libraries(alarmserver
  ${JSONCPP_LIBRARIES}
)

add_executable(alarmclient src/alarm/alarmclient.cpp)
ament_target_dependencies(alarmclient
  srv_alarm_interface
  rclcpp
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

install(TARGETS
  alarmserver
  alarmclient
  DESTINATION lib/${PROJECT_NAME}
)



ament_package()
