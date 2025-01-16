from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
      ld = LaunchDescription()
      pub_node1 = Node(
            package='lider_to_fp',
            executable='serial_talker',
            name='serial_talker',
            namespace='namespace_app'
      )
      sub_node1 = Node(
            package='lider_to_fp',
            executable='ransac_unit',
            name='ransac_unit',
            namespace='namespace_app'
      )

      ld.add_action(pub_node1)
      ld.add_action(sub_node1)
      return ld
