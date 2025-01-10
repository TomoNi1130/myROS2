from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
      ld = LaunchDescription()

      pub_node1 = Node(
            package='sample_subpub',
            executable='talker',
            name='sample_talker',
            # namespace='namespace_app'
      )
      sub_node1 = Node(
            package='sample_subpub',
            executable='listener',
            name='sample_listener',
            # namespace='namespace_app'
      )

      ld.add_action(pub_node1)
      ld.add_action(sub_node1)

      return ld
