from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
      ld = LaunchDescription()
      circle_ransac = Node(
            package='ransac_pkg',
            executable='circle',
            name='circle_ransac',
            namespace='cloud'
      )
      line_drower = Node(
            package='ransac_pkg',
            executable='line_drower',
            name='line_drower',
            namespace='cloud'
      )
      circle_drower = Node(
            package='ransac_pkg',
            executable='circle_drower',
            name='circle_drower',
            namespace='cloud'
      )
      points_cloud_maker = Node(
            package='make_cloud_pkg',
            executable='circle',
            name='circle_points_maker',
            namespace='cloud'
      )
      drower = Node(
            package='make_cloud_pkg',
            executable='drower',
            name='drower',
            namespace='cloud'
      )

      ld.add_action(points_cloud_maker)
      ld.add_action(drower)
      ld.add_action(circle_ransac)
      ld.add_action(line_drower)
      ld.add_action(circle_drower)
      return ld
