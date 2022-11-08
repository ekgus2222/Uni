#include "time_calculate/time_calculate_node.hpp"

int main(int argc, char **argv)
{
    rclcpp::InitOptions options;
    options.shutdown_on_sigint = true;
    rclcpp::init(argc, argv, options);
    auto node = std::make_shared<TimeCalculateNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}