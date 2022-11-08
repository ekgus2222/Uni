from ast import Call
import rclpy
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup, ReentrantCallbackGroup
from rclpy.node import Node
from std_srvs.srv import Empty

from time_msgs.msg import Time
import time

class CallbackGroupDemo(Node):
    def __init__(self):
        super().__init__('client_node')

        client_cb_group = MutuallyExclusiveCallbackGroup()
        timer_cb_group = MutuallyExclusiveCallbackGroup()
        subscription_cb_group = MutuallyExclusiveCallbackGroup()
        self.client = self.create_client(Empty, 'test_service', callback_group=client_cb_group)
        self.call_timer = self.create_timer(1, self._timer_cb, callback_group=timer_cb_group)
        self.subscription = self.create_subscription(
            Time,
            'set_alarm',
            self.listener_callback,
            10,
            callback_group=subscription_cb_group
        )

    def _timer_cb(self):
        self.get_logger().info('Sending request')
        _ = self.client.call(Empty.Request())
        self.get_logger().info('Received response')

    def listener_callback(self, msg):
        self.get_logger().info('I heard: {}, {}'.format(msg.is_first_alarm, msg.remained_time))

# class SttTtsSub(Node):
#     def __init__(self):
#         super().__init__('stt_tts_sub')

#         subscription_cb_group = MutuallyExclusiveCallbackGroup()
#         self.subscription = self.create_subscription(
#             Time,
#             'set_alarm',
#             self.listener_callback,
#             10,
#             callback_group=subscription_cb_group
#         )

#     def listener_callback(self, msg):
#         self.get_logger().info('I heard: {}, {}'.format(msg.is_first_alarm, msg.remained_time))


def main(args=None):
    rclpy.init()
    node = CallbackGroupDemo()
    #node2 = SttTtsSub()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    #executor.add_node(node2)

    try:
        node.get_logger().info('Beginning client, shut down with CTRL-C')
        #node2.get_logger().info('Beginning subscriber, shut down with CTRL-C')
        executor.spin()
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard interrupt, shutting down.\n')
        #node2.get_logger().info('Keyboard interrupt, shutting down.\n')

    node.destroy_node()
    #node2.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
