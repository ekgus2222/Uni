#include "rclcpp/rclcpp.hpp"
#include "time_msgs/srv/time.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std;
using namespace std::chrono_literals;

class TimeCalculateNode : public rclcpp::Node
{
private:
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Client<time_msgs::srv::Time>::SharedPtr client_;

    int ret;
    bool mode;
    string timeTOwork;
    string home_address;
    string office_address;
    string required_time;
    int required_time_cnt;
    string alarm_time;

    string transport_time;  // min
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
static void sig_int(int);
