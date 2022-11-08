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


using namespace std;

typedef struct shm_struct{
    pthread_mutex_t mtx;
    bool robot_connected;
    bool app_connected;

    bool mode; // recommended mode : 0, user mode : 1
    // recommended mode
    string timeTOwork;  
    string home_address;
    string office_address;
    string first_required_time;
    string required_time;
    int required_time_cnt;
    // user mode
    string alarm_time;

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
static int __init_shared_memory_master(char* SHM_NAME, shm_struct_t* &shm, pthread_mutexattr_t &mtx_attr)
{
    int ret;
    int shm_fd;
    int shm_size;

    shm_fd = shm_open(SHM_NAME, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
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
}


// slave
static int __init_shared_memory_slave(char* SHM_NAME, shm_struct_t* &shm)
{
    int ret;
    int shm_fd;
    int shm_size;

    shm_fd = shm_open(SHM_NAME, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
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
}

#endif