cmake_minimum_required(VERSION 3.8)
project(ransac_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(study_interface REQUIRED)

add_executable(circle
 src/circle_main.cpp
 )

ament_target_dependencies(circle
rclcpp
study_interface
)

add_executable(circle_drower
 src/circle_drower.cpp
 )

ament_target_dependencies(circle_drower
rclcpp
study_interface
)

add_executable(line_drower
src/line_drower.cpp
)

ament_target_dependencies(line_drower
rclcpp
study_interface
)

install(TARGETS
circle
circle_drower
line_drower
DESTINATION lib/${PROJECT_NAME}/
)

  install(DIRECTORY
  launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

include_directories(include/ransac_pkg)

find_package(Python3 COMPONENTS Development NumPy)
target_include_directories(circle_drower PRIVATE ${Python3_INCLUDE_DIRS} ${Python3_NumPy_INCLUDE_DIRS})
target_link_libraries(circle_drower Python3::Python Python3::NumPy)
find_package(Python3 COMPONENTS Development NumPy)
target_include_directories(line_drower PRIVATE ${Python3_INCLUDE_DIRS} ${Python3_NumPy_INCLUDE_DIRS})
target_link_libraries(line_drower Python3::Python Python3::NumPy)

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
