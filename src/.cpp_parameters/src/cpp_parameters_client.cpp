#include "rclcpp/rclcpp.hpp"
#include "rcl_interfaces/srv/set_parameters.hpp"

#include <chrono>
#include <cstdlib>
#include <memory>

using namespace std::chrono_literals;

void parameter_call_back(std::shared_future<std::vector<rcl_interfaces::msg::SetParametersResult>> future)
{
  
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  if (argc != 4)
  {
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "usage: parameter_client_node input");
    return 1;
  }

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("parameter_client_node");
  std::shared_ptr<rclcpp::AsyncParametersClient> client =
      std::make_shared<rclcpp::AsyncParametersClient>(node, "/parameter_server_node");

  while (!client->wait_for_service(1s))
  {
    if (!rclcpp::ok())
    {
      RCLCPP_ERROR(node->get_logger(), "Interrupted while waiting for the service. Exiting.");
      rclcpp::shutdown();
    }
    RCLCPP_INFO(node->get_logger(), "service not available, waiting again...");
  }

  std::vector<rclcpp::Parameter> parameters;
  auto my_param = rclcpp::Parameter("my_parameter", argv[1]);
  parameters.push_back(my_param);
  char* argv2 = "10";
  auto my_param2 = rclcpp::Parameter("option", atoi(argv[2]));
  parameters.push_back(my_param2);
  auto my_param3 = rclcpp::Parameter("out_time", argv[3]);
  parameters.push_back(my_param3);

  auto parameter_result = client->set_parameters(
    parameters,
    parameter_call_back
  );

  rclcpp::shutdown();
  return 0;
}