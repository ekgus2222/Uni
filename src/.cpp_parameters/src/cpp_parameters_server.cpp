#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <string>
#include <functional>

using namespace std::chrono_literals;

class ParametersServerClass: public rclcpp::Node
{
  public:

    ParametersServerClass()
      : Node("parameter_server_node",
      rclcpp::NodeOptions()
      .allow_undeclared_parameters(true)
      .automatically_declare_parameters_from_overrides(true))
    {
      this->declare_parameter<std::string>("my_parameter", "world");
      this->declare_parameter<int8_t>("option", 1);
      this->declare_parameter<std::string>("out_time", "09:00");
      
      timer_ = this->create_wall_timer(
      1000ms, std::bind(&ParametersServerClass::respond, this));
      this->set_on_parameters_set_callback(
        std::bind(&ParametersServerClass::parameter_call_back, this, std::placeholders::_1)
      );
    }
/////////////////
    void respond()
    {
      this->get_parameter("my_parameter", parameter_string_);
      this->get_parameter("option", option_);
      this->get_parameter("out_time", out_time_);
      RCLCPP_INFO(this->get_logger(), "%s  %d  %s", parameter_string_.c_str(), option_, out_time_.c_str());
    }
//////////////////
    rcl_interfaces::msg::SetParametersResult parameter_call_back(
      const std::vector<rclcpp::Parameter> &param
    )
    {
      rcl_interfaces::msg::SetParametersResult result;
      result.successful = true;
      result.reason = "success";
      for (const auto & parameter : param)
      {
        if (parameter.get_name() == "my_parameter" &&
            parameter.get_type() == rclcpp::ParameterType::PARAMETER_STRING)
            {
              parameter_string_ = parameter.as_string();
              RCLCPP_INFO(this->get_logger(), "Parameter : %s", parameter_string_.c_str());
            }

        if (parameter.get_name() == "option" &&
            parameter.get_type() == rclcpp::ParameterType::PARAMETER_STRING)
            {
              option_ = parameter.as_int();
              RCLCPP_INFO(this->get_logger(), "Option Parameter : %d", option_);
            }

        if (parameter.get_name() == "out_time" &&
            parameter.get_type() == rclcpp::ParameterType::PARAMETER_STRING)
            {
              out_time_ = parameter.as_string();
              RCLCPP_INFO(this->get_logger(), "Out_time Parameter : %s", out_time_.c_str());
            }
      }
      return result;
    }
//////////////////
  private:
    int8_t option_ = 1;
    std::string out_time_;
    std::string parameter_string_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ParametersServerClass>());
  rclcpp::shutdown();
  return 0;
}