cmake_minimum_required(VERSION 3.8)
project(ransac_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(study_interface REQUIRED)
find_package(interface_pkg REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(circle
 src/circle_main.cpp
 )

ament_target_dependencies(circle
rclcpp
study_interface
interface_pkg
std_msgs
)

install(TARGETS
circle
DESTINATION lib/${PROJECT_NAME}/
)

include_directories(include/ransac_pkg)

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
