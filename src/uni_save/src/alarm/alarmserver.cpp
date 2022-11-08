#include "alarm/alarmserver.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rcutils/cmdline_parser.h"

#include <string>
#include <curl/curl.h>
#include <iostream>
#include <jsoncpp/json/json.h>

Alarmserver::Alarmserver(const rclcpp::NodeOptions &node_options)
    : Node("alarmserver", node_options)
{
  auto get_alarm_time =
      [this](
          const std::shared_ptr<Alarm::Request> request,
          std::shared_ptr<Alarm::Response> response) -> void
  {
    alarm_request_ = request->alarm_request;
    alarm_response_ =
        this->calculate_alarm_time();
    response->alarm_response = alarm_response_;

    RCLCPP_INFO(this->get_logger(), "%s", alarm_response_.c_str());
  };

  alarm_service_server_ =
      create_service<Alarm>("alarm", get_alarm_time);
}

Alarmserver::~Alarmserver()
{
}
/*************************JSON**************************/
std::string Json_time(std::string str)
{
  Json::Reader reader;
  Json::Value root;
  reader.parse(str, root);

  Json::Value Target = root["rows"];
  Json::ValueIterator it = Target.begin();

  while (it != Target.end())
  {
    Json::Value NewTarget = (*it)["elements"];
    Json::ValueIterator it2 = NewTarget.begin();

    while (it2 != NewTarget.end())
    {

      Json::Value NewNewTarget = (*it2)["duration"];

      Json::Value Last = NewNewTarget["text"];
      
      return Last.asString();

      it2++;
    }

    ++it;
  }
}
/*******************************************************/
/*************************http**************************/
size_t callBackFunk(char *ptr, size_t size, size_t nmemb, std::string *stream)
{
  int realsize = size * nmemb;
  stream->append(ptr, realsize);
  return realsize;
}

std::string url_get_proc(const char url[], int option)
{

  CURL *curl;
  CURLcode res;
  curl = curl_easy_init();
  std::string chunk;
  std::string result;

  if (curl)
  {
    //옵션 설정
    curl_easy_setopt(curl, CURLOPT_URL, url);                    //접속할 url 주소 설정
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, callBackFunk); //
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, (std::string *)&chunk);
    curl_easy_setopt(curl, CURLOPT_PROXY, "");
    res = curl_easy_perform(curl); //요청을 초기화하고 callback 함수를 대기 (페이지 긁어옴)
    curl_easy_cleanup(curl);       // context를 없앤다 (setopt 객체 소멸 for 메모리 누수 방지)

    if (res != CURLE_OK)
    {
      exit(1);
    }

    if (option == 1) // alarm_time_request
    {
      result = Json_time(chunk);   
    }
    else if (option == 2) // transport_time_response
    {
      result = "hi";
    }
  }

  return result;
}

/*******************************************************/

std::string Alarmserver::calculate_alarm_time()
{
  // char url_time[] = "https://maps.googleapis.com/maps/api/distancematrix/json?origins=Washington%2C%20DC&destinations=New%20York%20City%2C%20NY&units=imperial&key=AIzaSyCdNl9v9dyx2pB65ndrzEqZgnbGnC2z82U";
  // char url_trans[] = "https://api.odsay.com/v1/api/searchPubTransPath?SX=126.9027279&SY=37.5349277&EX=126.9145430&EY=37.5499421&apiKey=EGa0Jl1fhUkGpbCuPi+9AsQTvq+VTNKt+y7PkiXBVWI";

  // std::string str_out;
  // if (alarm_request_ == 1)
  //   str_out = url_get_proc(url_time, alarm_request_);
  // else if (alarm_request_ == 2)
  //   str_out = url_get_proc(url_trans, alarm_request_);

  std::string str_out = "hi";

  return str_out;
}

void print_help()
{
  printf("For ROS 2 topic subscriber, service server, action server rclcpp examples:\n");
  printf("calculator [-h]\n");
  printf("Options:\n");
  printf("\t-h Help           : Print this help function.\n");
}

int main(int argc, char *argv[])
{
  if (rcutils_cli_option_exist(argv, argv + argc, "-h"))
  {
    print_help();
    return 0;
  }

  rclcpp::init(argc, argv);

  auto calculator = std::make_shared<Alarmserver>();

  rclcpp::spin(calculator);

  rclcpp::shutdown();

  return 0;
}
