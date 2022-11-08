#include "rclcpp/rclcpp.hpp"
#include "time_msgs/srv/time.hpp"
#include "time_msgs/msg/time.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>
#include <string>

using namespace std;
using namespace std::chrono_literals;

class TimeCalculateNode : public rclcpp::Node
{
private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Client<time_msgs::srv::Time>::SharedPtr time_srv_client_;
    rclcpp::Publisher<time_msgs::msg::Time>::SharedPtr time_msg_publisher_;

    int ret_;
    bool mode_;
    string time_to_work_;
    string home_address_;
    string office_address_;
    string required_time_;
    int required_time_cnt_;
    string alarm_time_;
    bool ishome_;

    string transport_time_;  // min
public:
    TimeCalculateNode();
    ~TimeCalculateNode();
    void timer_callback();
    void send_request();
    void set_alarminfo();

    bool compare_time();
};

void wait_alarm(string alarm_time);
string cal_time(char op, string res, string min);
void sig_alm(int);
void sig_int(int);
