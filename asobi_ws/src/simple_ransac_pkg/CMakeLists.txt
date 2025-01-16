cmake_minimum_required(VERSION 3.8)
project(simple_ransac_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(interface_pkg REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

add_executable(listener
src/ransac_think.cpp
)

ament_target_dependencies(listener
 rclcpp
sensor_msgs
interface_pkg
)

add_executable(drawer
src/ransac_drower.cpp
)

ament_target_dependencies(drawer
rclcpp
interface_pkg
)

install(TARGETS
listener
drawer
DESTINATION lib/${PROJECT_NAME}
)

include_directories(include/simple_ransac_pkg)

find_package(Python3 COMPONENTS Development NumPy)
target_include_directories(listener PRIVATE ${Python3_INCLUDE_DIRS} ${Python3_NumPy_INCLUDE_DIRS})
target_link_libraries(listener Python3::Python Python3::NumPy)
find_package(Python3 COMPONENTS Development NumPy)
target_include_directories(drawer PRIVATE ${Python3_INCLUDE_DIRS} ${Python3_NumPy_INCLUDE_DIRS})
target_link_libraries(drawer Python3::Python Python3::NumPy)

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
