import rclpy
from rclpy.node import Node

from time_msgs.msg import Time

import threading
import signal
import time

def handler(signum, frame):
    print('[Mainthread] SIGUSR1 signal....')
    print('[Mainthread] wait 10 sec...')
    time.sleep(10)

class SubThread(threading.Thread):
    def __init__(self, mainthreadid):
        threading.Thread.__init__(self, name='Sub Thread')
        self.mainthreadid_ = mainthreadid

    def run(self):
        rclpy.init(args=None)
        node = SttTtsSub(self.mainthreadid_)
        rclpy.spin(node)
        node.destroy_node()
        rclpy.shutdown()
            

class SttTtsSub(Node):
    def __init__(self, mainthreadid):
        super().__init__('stt_tts_sub')
        self.mainthreadid_ = mainthreadid
        self.subscription = self.create_subscription(
            Time,
            'set_alarm',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('I heard: {}, {}'.format(msg.is_first_alarm, msg.remained_time))
        signal.pthread_kill(self.mainthreadid_, signal.SIGUSR1)


def main(args=None):
    signal.signal(signal.SIGUSR1, handler) 

    subthread = SubThread(threading.get_ident())
    subthread.setDaemon(False)
    subthread.start()

    while True:
        print('[Mainthread] listen user...')
        time.sleep(3)
        print('[Mainthread] hi!')
        time.sleep(1)
    # spin example 1
    #rclpy.spin(node)
    # spin example 2
    # while rclpy.ok():
    #     rclpy.spin_once(node, timeout_sec=0)


    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    


if __name__ == '__main__':
    main()
