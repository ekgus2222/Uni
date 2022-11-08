#ifndef __SHM_MUTEX_H__
#define __SHM_MUTEX_H__

#include <stdio.h>
#include <sys/types.h>
#include <sys/shm.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <errno.h>
#include <string>

#define SHM_NAME "shm_mem_test"
#define SIZE 100

#define BUFFSIZE 4096
#define PORTNO 6000

using namespace std;

typedef struct shm_struct{
    pthread_mutex_t mtx;
    bool robot_connected;
    bool app_connected;

    bool mode; // recommended mode : 0, user mode : 1
    // recommended mode
    char time_to_work[SIZE];  
    char home_address[SIZE];
    char office_address[SIZE];
    char first_required_time[SIZE];
    char required_time[SIZE];
    int required_time_cnt;

    bool ishome;
    char home_y[SIZE]; // latitude   -
    char home_x[SIZE]; // longitude  |
    // user mode
    char alarm_time[SIZE];

}shm_struct_t;

//error message
#define retm_if(expr, val, msg) do { \
    if (expr) \
    { \
        printf("%s\n", (msg)); \
        return (val); \
    } \
} while(0)

#define retv_if(expr, val) do { \
    if (expr) \
    { \
        return (val); \
    } \
} while(0)

#define rete_if(expr, val, msg) do { \
    if (expr) \
    { \
        printf("%s, errno : %d, errstr : %s\n", msg, errno, strerror(errno)); \
        return (val); \
    } \
} while(0)

//master
static int __init_shared_memory_master(char* name, shm_struct_t* &shm, pthread_mutexattr_t &mtx_attr)
{
    int ret;
    int shm_fd;
    int shm_size;

    shm_fd = shm_open(name, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (shm_fd == -1) {
        printf("shm_open %d %s\n", errno, strerror(errno));
        return -1;
    }
    
    shm_size = sizeof(shm_struct_t);
    ret = ftruncate(shm_fd, shm_size);
    rete_if(ret == -1, ret, "ftruncate");


    shm = (shm_struct_t*)mmap(NULL, shm_size, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    retm_if(shm == MAP_FAILED, -1, "mmap()");
    
    close(shm_fd);

    memset(shm, 0, shm_size);

    pthread_mutexattr_init(&(mtx_attr));
    ret = pthread_mutexattr_setpshared(&(mtx_attr), PTHREAD_PROCESS_SHARED);
    rete_if(ret != 0, ret, "pthread_mutexattr_setpshared");

    ret = pthread_mutex_init(&(shm)->mtx, &(mtx_attr));
    rete_if(ret != 0, ret, "pthread_mutex_init");

    return 0;
}

static int __destory_shared_memory_master(shm_struct_t* &shm, pthread_mutexattr_t &mtx_attr)
{
    pthread_mutex_destroy(&(shm)->mtx);
    pthread_mutexattr_destroy(&(mtx_attr));

    munmap(shm, sizeof(shm_struct_t));
    return 0;
}


// slave
static int __init_shared_memory_slave(char* name, shm_struct_t* &shm)
{
    int ret;
    int shm_fd;
    int shm_size;

    shm_fd = shm_open(name, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
    if (shm_fd == -1) {
        printf("shm_open %d %s\n", errno, strerror(errno));
        return -1;
    }

    shm_size = sizeof(shm_struct_t);
    ret = ftruncate(shm_fd, shm_size);
    rete_if(ret == -1, ret, "ftruncate");

    shm = (shm_struct_t*)mmap(NULL, shm_size, PROT_READ | PROT_WRITE, MAP_SHARED, shm_fd, 0);
    retm_if(shm == MAP_FAILED, -1, "mmap()");

    close(shm_fd);


    return 0;
}

static int __destory_shared_memory_slave(shm_struct_t* &shm)
{
    munmap(shm, sizeof(shm_struct_t));
    return 0;
}

#endif