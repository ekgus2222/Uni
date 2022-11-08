#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>
#include "shm_mutex.h"

//#define HOME_LAT "37.6203975"
//#define HOME_LON "127.054858"
//#define BUFFSIZE 1024
#define PORT_NO 39999

using namespace std;

string HOME_LAT;
string HOME_LON;
static shm_struct *shm;

double latlonCalDistance(double target[], double operand[], char op)
{
    double result[3];
    switch (op)
    {
    case '+':
        result[2] = target[2] + operand[2];
        result[1] = target[1] + operand[1];
        result[0] = target[0] + operand[0];

        if (result[2] >= 60.)
        {
            result[2] -= 60.;
            result[1] += 1;
        }

        if (result[1] >= 60.)
        {
            result[1] -= 60.;
            result[0] += 1;
        }
        break;

    case '-':
        result[2] = target[2] - operand[2];
        result[1] = target[1] - operand[1];
        result[0] = target[0] - operand[0];

        if (result[2] < 0)
        {
            result[2] += 60;
            result[1] -= 1;
        }

        if (result[1] < 0)
        {
            result[1] += 60;
            result[0] -= 1;
        }
        break;
    }

    return result[0] + (result[1] + result[2] / 60) / 60;
}

void getDmsByLatLon(double latlon[], string latlonstr)
{
    latlon[0] = stoi(latlonstr);
    latlon[1] = (int)((stod(latlonstr) - latlon[0]) * 60);
    latlon[2] = (((stod(latlonstr) - latlon[0]) * 60) - latlon[1]) * 60;
    latlon[2] = stod(to_string(latlon[2]).substr(0, 4));
}

bool ishome(string latitude, string longitude)
{
    string home_lat = HOME_LAT;
    string home_lon = HOME_LON;

    double lat[3];
    double lon[3];

    getDmsByLatLon(lat, home_lat);
    getDmsByLatLon(lon, home_lon);

    double operand[3] = {0., 1., 0.}; // 1.85km   (1Min = 1.85km, 1Sec = 30.8m)

    double cp[4];                                 // cardinal_points : east, west, south, north
    cp[0] = latlonCalDistance(lon, operand, '+'); // lon(x) max
    cp[1] = latlonCalDistance(lon, operand, '-'); // lon(x) min
    cp[2] = latlonCalDistance(lat, operand, '-'); // lat(y) min
    cp[3] = latlonCalDistance(lat, operand, '+'); // lat(y) max

    // lon min < lon < lon max && lat min < lat < lat max
    if (cp[2] < stod(latitude) && stod(latitude) < cp[3] && cp[1] < stod(longitude) && stod(longitude) < cp[0]){
        cout<<"true\n";
        return true;
    }

    return false;
}

int socket_fd, client_fd;

int main()
{
    int ret;
    ret = __init_shared_memory_slave("shm_mem_test", shm);
    retm_if(ret != 0, ret, "__init_shared_memory");
    
    struct sockaddr_in server_addr, client_addr;
    socklen_t len;
    int len_out;
    char buf[BUFFSIZE];

    if ((socket_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        cout << "Server : Can't open stream socket.";
        return 0;
    }

    bzero((char *)&server_addr, sizeof(server_addr));
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(PORT_NO);
    inet_pton(AF_INET, "0.0.0.0", &server_addr.sin_addr);

    bind(socket_fd, (sockaddr *)&server_addr, sizeof(server_addr));
    listen(socket_fd, SOMAXCONN);

    cout<<"wait...\n";
    while (1)
    {
        memset(buf, 0, BUFFSIZE);
        bzero((char *)&client_addr, sizeof(client_addr));
        len = sizeof(client_addr);
        client_fd = accept(socket_fd, (sockaddr *)&client_addr, &len);

        while ((len_out = recv(client_fd, buf, BUFFSIZE, 0)) > 0)
        {
            pthread_mutex_lock(&shm->mtx);
            bool start_flag = shm->app_connected;
            pthread_mutex_unlock(&shm->mtx);

            if (start_flag)
            {
                pthread_mutex_lock(&shm->mtx);
                HOME_LAT = shm->home_y;
                HOME_LON = shm->home_x;
                cout<<"home : "<<HOME_LAT<<","<<HOME_LON<<endl;
                pthread_mutex_unlock(&shm->mtx);
                

                cout<<"now : " << buf <<endl;
                string lat = strtok(buf, ",");
                string lon = strtok(NULL, ",");

                if (ishome(lat, lon))
                {
                    pthread_mutex_lock(&shm->mtx);
                    shm->ishome = true;
                    pthread_mutex_unlock(&shm->mtx);
                    cout << "I am home.\n";
                }
                else
                {
                    pthread_mutex_lock(&shm->mtx);
                    shm->ishome = false;
                    pthread_mutex_unlock(&shm->mtx);
                    cout << "I'm not home.\n";
                }
            }else{
                cout<<"Not ready\n";
            }
        }

        close(client_fd);
    }

    close(socket_fd);

    __destory_shared_memory_slave(shm);
    return 0;
}
