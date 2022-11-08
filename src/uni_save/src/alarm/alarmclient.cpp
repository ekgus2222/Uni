#include "rclcpp/rclcpp.hpp"
#include "alarm/alarmclient.hpp"
#include "rcutils/cmdline_parser.h"

#include <iostream>

using namespace std::chrono_literals;

Alarmclient::Alarmclient(const rclcpp::NodeOptions & node_options)
 : Node("alarmclient", node_options)
{
    alarm_service_client_ = this->create_client<Alarm>("alarm");
    while(!alarm_service_client_->wait_for_service(1s)){
        if(!rclcpp::ok()){
            RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service.");
            return;
        }
        RCLCPP_INFO(this->get_logger(), "Service not available, waiting again...");
    }
}

Alarmclient::~Alarmclient()
{
}

void Alarmclient::send_request()
{
    auto request = std::make_shared<Alarm::Request>();
    request->alarm_request = 1;

    using ServiceResponseFuture = rclcpp::Client<Alarm>::SharedFuture;
    auto response_received_callback = [this](ServiceResponseFuture future){
        auto response = future.get();
        RCLCPP_INFO(this->get_logger(), "Result %s", response->alarm_response.c_str());
        //std::cout<<response->alarm_time_response<<'\n';
        return;
    };

    auto future_result = 
        alarm_service_client_->async_send_request(request, response_received_callback);
}


//help comment
void print_help()
{
  printf("For operator node:\n");
  printf("node_name [-h]\n");
  printf("Options:\n");
  printf("\t-h Help           : Print this help function.\n");
}

// main
int main(int argc, char * argv[])
{
    if (rcutils_cli_option_exist(argv, argv + argc, "-h")) {
        print_help();
        return 0;
    }

    rclcpp::init(argc, argv);

    auto alarm_client_node = std::make_shared<Alarmclient>();
    
    while(rclcpp::ok()){
        rclcpp::spin_some(alarm_client_node);
        alarm_client_node->send_request(); 
    }
}


