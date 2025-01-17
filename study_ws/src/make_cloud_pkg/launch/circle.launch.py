from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
      ld = LaunchDescription()
      points_cloud_maker = Node(
            package='make_cloud_pkg',
            executable='circle',
            name='circle_points_maker',
            namespace='circle_cloud'
      )
      drower = Node(
            package='make_cloud_pkg',
            executable='drower',
            name='drower',
            namespace='circle_cloud'
      )

      ld.add_action(points_cloud_maker)
      ld.add_action(drower)
      return ld
