#include "json/jsondata.hpp"
#include <string>
#include <curl/curl.h>
#include <jsoncpp/json/json.h>
#include <string.h>

using namespace std;


////////////////////////////////////////////////////////////////////////
// get_arrival_time                                                   //
//====================================================================//
// input   : string -> json data                                      //
// output  : string -> arrival_time (0:0am or pm)                     //
//--------------------------------------------------------------------//
// purpose : json data parsing (duration time)                        //
////////////////////////////////////////////////////////////////////////
string get_arrival_time(string chunk)
{
	Json::Reader reader;
	Json::Value root;
	reader.parse(chunk, root);

	Json::Value Target = root["routes"];
	Json::ValueIterator it = Target.begin();

	Json::Value NewTarget = (*it)["legs"];
	Json::ValueIterator it2 = NewTarget.begin();

	Json::Value arrival_time = (*it2)["arrival_time"];
	Json::Value arrival_text = arrival_time["text"];

	return arrival_text.asString();
}

////////////////////////////////////////////////////////////////////////
// get_time                                                           //
//====================================================================//
// input   : string -> json data                                      //
// output  : string -> duration time                                  //
//--------------------------------------------------------------------//
// purpose : json data parsing (duration time : 0 min or 0 hours 0min)//
////////////////////////////////////////////////////////////////////////
string get_time(string chunk)
{
	Json::Reader reader;
	Json::Value root;
	reader.parse(chunk, root);

	Json::Value Target = root["routes"];
	Json::ValueIterator it = Target.begin();

	Json::Value NewTarget = (*it)["legs"];
	Json::ValueIterator it2 = NewTarget.begin();

	Json::Value duration = (*it2)["duration"];
	Json::Value duration_text = duration["text"];

	return duration_text.asString();
}

////////////////////////////////////////////////////////////////////////
// get_transport                                                      //
//====================================================================//
// input   : string -> json data                                      //
// output  : string -> departure_stop_name & departure_time           //
//--------------------------------------------------------------------//
// purpose : json data parsing (transport stop & time(0:0am or pm) )  //
////////////////////////////////////////////////////////////////////////
string get_transport(string chunk)
{
	Json::Reader reader;
	Json::Value root;
	reader.parse(chunk, root);

	Json::Value Target = root["routes"];
	Json::ValueIterator it = Target.begin();

	Json::Value NewTarget = (*it)["legs"];
	Json::ValueIterator it2 = NewTarget.begin();

	Json::Value steps = (*it2)["steps"];
	Json::ValueIterator it3 = steps.begin();

	while(it3 != steps.end())
	{
		if((*it3)["travel_mode"] != "TRANSIT") it3++;

		Json::Value transit_details = (*it3)["transit_details"];
		Json::ValueIterator it4 = transit_details.begin();
		it4++; it4++;

		Json::Value departure_stop_name = (*it4)["name"];
		
		it4++;
		Json::Value departure_time_text = (*it4)["text"];

		return departure_stop_name.asString() + "&" + departure_time_text.asString();
	}
}


////////////////////////////////////////////////////////////////////////
// url_get_pooc (+ callBackFunk)                                      //
//====================================================================//
// input   : string -> URL                                            //
// output  : string -> json data                                      //
//--------------------------------------------------------------------//
// purpose : HTTP request                                             //
////////////////////////////////////////////////////////////////////////
size_t callBackFunk(char *ptr, size_t size, size_t nmemb, string *stream)
{
	int realsize = size * nmemb;
	stream->append(ptr, realsize);
	return realsize;
}


string url_get_proc(string URL)
{
	char url[300];
	strcpy(url, URL.c_str());

	CURL *curl;
	CURLcode res;
	curl = curl_easy_init();
	string chunk;

	if (curl)
	{
		//옵션 설정
		curl_easy_setopt(curl, CURLOPT_URL, url);					 //접속할 url 주소 설정
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, callBackFunk); //
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, (string *)&chunk);
		curl_easy_setopt(curl, CURLOPT_PROXY, "");
		res = curl_easy_perform(curl); //요청을 초기화하고 callback 함수를 대기 (페이지 긁어옴)
		curl_easy_cleanup(curl);	   // context를 없앤다 (setopt 객체 소멸 for 메모리 누수 방지)
	}

	if (res != CURLE_OK)
	{
		//cout << "curl error" << endl;
		exit(1);
	}

	return chunk;
}