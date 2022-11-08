#include "time_calculate/time_calculate_node.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TimeCalculateNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}