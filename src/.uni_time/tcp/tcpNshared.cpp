#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>
#include <string>
#include "/include/shm_mutex.h"

#define SHM_NAME "shm_mem_test"
#define BUFFSIZE 4096
#define PORTNO 6000

using namespace std;

// this script can be used as debug to check if the menssage sent via socket is comming correctlly
// To run, go to the terminal, change the directory (cd) until tcp_cpp.cpp folder
// Then run:
//  g++ tcp_cpp.cpp
//  ./a.out
//  the script will be waiting for data to come via socket on the port 6000 (edit it if is necessary. It may match with the client port.)

static shm_struct_t *shm;
static pthread_mutexattr_t mtx_attr;
bool ttwflag = false;                // timeTOwork flag
bool haflag = false, oaflag = false; // home & office address flag
bool rtflag = false;                 // required time flag
bool all_flag = false;               // if all flags are true, all_flag = true

int socket_fd, client_fd;

void string_parsing(char *s)
{
    // SETUP : timeTOwork(00:00~23:59), home_address, office_address, required_time(min)
    // MODE : mode(recommended mode or user mode(+ alarm_time (00:00~23:59)))
    // REQUEST

    char first[10], buf[100];
    strcpy(first, strtok(s, ":"));

    shm->timeTOwork = "09:00";
    shm->alarm_time = "09:00";
    all_flag = true;
    ttwflag = true;
    if (strcmp(first, "SETUP") == 0)
    {   // SETUP
        // check blank
        pthread_mutex_lock(&shm->mtx);
        strcpy(buf, strtok(NULL, ","));
        if (strcmp(buf,"null"))
        {
            shm->timeTOwork = buf; // set timeTOwork
            cout<<"timeTOwork : " << shm->timeTOwork << endl;
            ttwflag = true;
        }

        strcpy(buf, strtok(NULL, ","));
        if (strcmp(buf,"null"))
        {
            shm->home_address = buf; // set home_address
            cout<<"home_address : " << shm->home_address << endl;
            haflag = true;
        }

        strcpy(buf, strtok(NULL, ","));
        if (strcmp(buf,"null"))
        {
            shm->office_address = buf; // set office_address
            cout<<"office_address : " << shm->office_address << endl;
            oaflag = true;
        }

        strcpy(buf, strtok(NULL, ","));
        if (strcmp(buf,"null"))
        {
            shm->required_time = buf; // set required_time
            shm->first_required_time = buf;
            shm->required_time_cnt = 1;
            cout<<"required_time : " << shm->required_time << endl;
            cout<<"first_required_time : " << shm->first_required_time << endl;
            cout<<"required_time_cnt : " << shm->required_time_cnt << endl;
            rtflag = true;
        }
        pthread_mutex_unlock(&shm->mtx);
    }
    else if (strcmp(first, "MODE") == 0)
    { // MODE
        strcpy(buf, strtok(NULL, ","));
        if (strcmp(buf, "recommended mode"))
        {
            pthread_mutex_lock(&shm->mtx);
            shm->mode = false; // set mode
            pthread_mutex_unlock(&shm->mtx);
        }
        else
        {
            pthread_mutex_lock(&shm->mtx);
            shm->mode = true; // set mode
            strcpy(buf, strtok(NULL, ","));
            shm->alarm_time = buf; // set alarm
            pthread_mutex_unlock(&shm->mtx);
        }
    }
    else if (strcmp(first, "REQUEST") == 0)
    { // REQUEST
        cout<<"request\n";
        string send_message;
        pthread_mutex_lock(&shm->mtx);
        send_message = shm->timeTOwork + "," + shm->home_address + "," + shm->office_address + "," 
                        + shm->first_required_time + "," + shm->required_time + "," + shm->alarm_time + ",";
        pthread_mutex_unlock(&shm->mtx);
        strcpy(buf, send_message.c_str());
        send(client_fd, buf, send_message.size() + 1, 0);

        cout<<buf<<endl;
    }

    if (!all_flag && ttwflag && haflag && oaflag && rtflag)
    {
        pthread_mutex_lock(&shm->mtx);
        shm->app_connected = true;
        all_flag = true;
        pthread_mutex_unlock(&shm->mtx);
    }

}

int main()
{
    // shared memory
    int ret, i;

    ret = __init_shared_memory_master(SHM_NAME, shm, mtx_attr);
    retm_if(ret != 0, ret, "__init_shared_memory_master");

    /* "pthread_mutex_lock(&shm->mtx);" before race condition occurs,
     * "pthread_mutex_unlock(&shm->mtx);" before leaving the occurrence area */

    // TCP/IP
    struct sockaddr_in server_addr, client_addr;
    // int socket_fd, client_fd;
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
    server_addr.sin_port = htons(PORTNO);
    inet_pton(AF_INET, "0.0.0.0", &server_addr.sin_addr);

    bind(socket_fd, (sockaddr *)&server_addr, sizeof(server_addr));
    listen(socket_fd, SOMAXCONN);

    while (1)
    {
        memset(buf, 0, BUFFSIZE);
        bzero((char *)&client_addr, sizeof(client_addr));
        len = sizeof(client_addr);
        client_fd = accept(socket_fd, (sockaddr *)&client_addr, &len);

        while ((len_out = recv(client_fd, buf, BUFFSIZE, 0)) > 0)
        {
            string_parsing(buf);
        }

        // close client socket
        close(client_fd);
    }

    // close server socket
    close(socket_fd);

    // destroy shared memory
    __destory_shared_memory_master(shm, mtx_attr);
    return 0;
}