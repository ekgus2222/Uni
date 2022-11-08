#include "rclcpp/rclcpp.hpp"
#include "time_msgs/srv/time.hpp"
#include "time_msgs/msg/time.hpp"

using std::placeholders::_1;

class MinimalSubscriber : public rclcpp::Node
{
private:
    rclcpp::Subscription<time_msgs::msg::Time>::SharedPtr time_msg_subscriber_;
    void subscribe_topic_message(const time_msgs::msg::Time::SharedPtr msg) const
    {
        RCLCPP_INFO(this->get_logger(), "Received message: '%d', '%s'", msg->is_first_alarm, msg->remained_time.c_str());
    }

public:
    MinimalSubscriber()
    : Node("minimal_subscriber")
    {
        this->time_msg_subscriber_ = this->create_subscription<time_msgs::msg::Time>(
            "set_alarm", 
            10,
            std::bind(&MinimalSubscriber::subscribe_topic_message, this, _1));
    }

};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<MinimalSubscriber>());
    rclcpp::shutdown();
    return 0;
}