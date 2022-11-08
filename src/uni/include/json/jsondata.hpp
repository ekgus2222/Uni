#include <string>

using namespace std;

string url_get_proc(string URL);
size_t callBackFunk(char *ptr, size_t size, size_t nmemb, string *stream);
string get_transport(string chunk);
string get_time(string chunk);
string get_arrival_time(string chunk);