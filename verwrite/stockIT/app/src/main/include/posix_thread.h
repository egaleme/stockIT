#ifndef POSIX_THREAD_H
#define POSIX_THREAD_H

#include <Uno/Uno.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void * invoke_delegate(void * arg)
{
    uAutoReleasePool pool;
    uDelegate * callback = (uDelegate*)arg;
    uRelease( callback );
    callback->InvokeVoid();
    return 0;
}

int thread_start(uint64_t* handle, uDelegate * callback)
{
    uRetain( callback );
    pthread_t * pt = (pthread_t*)handle;
    return pthread_create(pt, NULL, invoke_delegate, (void*)callback);
}
void thread_sleep(uint64_t microseconds)
{
    int result = usleep(microseconds);
}

/*

Turns out that GOOD OLD android does not support pthread_timedjoin_np--- meh

bool thread_timed_join(uint64_t * handle, int timeoutMillis)
{
    struct timespec timeout = { 0 };

    clock_gettime(CLOCK_REALTIME, &timeout);
    timeout.tv_nsec += timeoutMillis * 1000000L;

    return ( pthread_timedjoin_np( (pthread_t)handle, &timeout ) == 0 );
}

*/



#endif