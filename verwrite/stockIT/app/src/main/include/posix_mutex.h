#ifndef POSIX_MUTEX_H
#define POSIX_MUTEX_H

#include <Uno/Uno.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

void * init_mutex()
{
    pthread_mutexattr_t attr;
    if (pthread_mutexattr_init(&attr))
    {
        return 0;
    }
    pthread_mutexattr_settype(&attr, PTHREAD_MUTEX_RECURSIVE);

    pthread_mutex_t * mutex = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
    memset(mutex, 0, sizeof(pthread_mutex_t));

    if (pthread_mutex_init(mutex, &attr))
    {
        free(mutex);
        return 0;
    }

    return mutex;
}

void free_mutex(void * mutex)
{
    free(mutex);
}

#endif
