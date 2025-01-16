from launch import LaunchDescription
from launch.actions import ExecuteProcess

def generate_launch_description():
    return LaunchDescription([
        # Gazeboの起動
        ExecuteProcess(
            cmd=['gz', 'sim', '/home/tomoni11/Documents/ROS2/gz_ws/src/gz_test_pkg/models/simple_robot.sdf'],
            output='log',
            log_cmd=True
        ),

        # rviz2の起動
        ExecuteProcess(
            cmd=['rviz2'],
            output='log',
            log_cmd=True
        ),

        # ブリッジの起動
        ExecuteProcess(
            cmd=[
                'ros2', 'run', 'ros_gz_bridge', 'parameter_bridge',
                '/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist'
            ],
            output='log',
            log_cmd=True
        ),
        ExecuteProcess(
            cmd=[
                'ros2', 'run', 'ros_gz_bridge', 'parameter_bridge',
                '/model/simple_robot/tf@tf2_msgs/msg/TFMessage[gz.msgs.Pose_V',
                '--ros-args', '-r', '/model/simple_robot/tf:=/tf'
            ],
            output='log',
            log_cmd=True
        ),

        # teleop_twist_keyboardの起動
        ExecuteProcess(
            cmd=['ros2', 'run', 'teleop_twist_keyboard', 'teleop_twist_keyboard'],
            output='screen',
            prefix='xterm -e'
        ),
    ])
