from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
      ld = LaunchDescription()
      circle_ransac = Node(
            package='ransac_pkg',
            executable='circle',
            name='circle_ransac',
            namespace='circle_cloud'
      )
      # drower = Node(
      #       package='ransac_pkg',
      #       executable='drower',
      #       name='drower',
      #       namespace='circle_cloud'
      # )

      ld.add_action(circle_ransac)
      # ld.add_action(drower)
      return ld
