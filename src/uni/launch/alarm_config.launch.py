import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    param_dir = LaunchConfiguration(
        'param_dir',
        default=os.path.join(
            get_package_share_directory('UNI'),
            'param',
            'alarm_config.yaml'))

    return LaunchDescription([
        DeclareLaunchArgument(
            'param_dir',
            default_value = param_dir,
            description = 'Full path of parameter file'),

        Node(
            packages='UNI',
            executable='alarmserver',
            name='alarmserver',
            parameter=[param_dir],
            output='screen'),
        
        Node(
            packages='UNI',
            executable='alarmclient',
            name='alarmclient',
            parameter=[param_dir],
            output='screen'),

        Node(
            packages='UNI',
            executable='alarm_change_client',
            name='alarm_change_client',
            parameter=[param_dir],
            output='screen'),
    ])        

