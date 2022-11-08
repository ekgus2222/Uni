import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge

from std_msgs.msg import Int32

class ROS2Bridge(Node):
    def __init__(self):
        super().__init__('ros2_bridge_node')
        self.img_subscription = self.create_subscription(
            Image,
            '/camera/image',
            self.image_callback,
            10
        )
        self.CV2image = None
        self.CvBridge = CvBridge()

    def image_callback(self, msg):
        # self.get_logger().info('Subscriberd : {0}, {1}'.format(msg.width, msg.height))
        self.CV2image = self.CvBridge.imgmsg_to_cv2(msg, "bgr8")

    def get_image(self):
        return self.CV2image



class FacePub(Node):
    def __init__(self):
        super().__init__('face_pub_node')
        self.face_pub_node = self.create_publisher(
            Int32,
            '/center_pixel',
            10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.pub_callback)
        self.msg = None
    
    def pub_callback(self):
        msg = Int32()
        msg.data = self.msg
        self.face_pub_node.publish(msg)
        self.get_logger().info('Published message : {}'.format(self.msg))

    def set_msg(self, msg):
        self.msg = msg