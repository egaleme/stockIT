#ifndef POSIX_AUTORESETEVENT_H
#define POSIX_AUTORESETEVENT_H

#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <errno.h>
#include <sys/time.h>

struct ResetEventState
{
    pthread_mutex_t mutex;
    pthread_cond_t cond;
    bool flag;
    bool autoReset;
};

#define GET_STATE(statePtr) (struct ResetEventState*)statePtr

void * AllocateState(bool initialState, bool autoReset)
{
    ResetEventState * state = (struct ResetEventState*)malloc(sizeof(struct ResetEventState));

    pthread_mutex_init(&state->mutex, NULL);
    pthread_cond_init(&state->cond, NULL);
    state->flag = initialState;
    state->autoReset = autoReset;

    return state;
}

// Need to prefix with ResetEvent_ because of include hell
bool ResetEvent_Set(void * state)
{
    ResetEventState * resetEvent = GET_STATE(state);

    pthread_mutex_lock(&resetEvent->mutex);
    resetEvent->flag = true;
    pthread_mutex_unlock(&resetEvent->mutex);
    pthread_cond_signal(&resetEvent->cond);

    return true;
}

bool ResetEvent_Reset(void * state)
{
    ResetEventState * resetEvent = GET_STATE(state);

    pthread_mutex_lock(&resetEvent->mutex);
    resetEvent->flag = false;
    pthread_mutex_unlock(&resetEvent->mutex);

    return true;
}

bool ResetEvent_WaitOne(void * state)
{
    ResetEventState * resetEvent = GET_STATE(state);

    pthread_mutex_lock(&resetEvent->mutex);

    while (!resetEvent->flag) // Have to do this because of spurious wakeups
        pthread_cond_wait(&resetEvent->cond, &resetEvent->mutex);

    if (resetEvent->autoReset)
        resetEvent->flag = false;

    pthread_mutex_unlock(&resetEvent->mutex);

    return true;
}

bool ResetEvent_WaitOne(void * state, int timeoutMillis)
{
    ResetEventState * resetEvent = GET_STATE(state);

    pthread_mutex_lock(&resetEvent->mutex);

    struct timeval now;
    gettimeofday(&now, NULL);
    uint64_t nanoseconds = (now.tv_sec * 1000000000ull) + (now.tv_usec * 1000);
    uint64_t timeoutNanoseconds = (timeoutMillis * 1000000ull) + nanoseconds;

    struct timespec timeout;
    timeout.tv_sec = (time_t)(timeoutNanoseconds / 1000000000ull);
    timeout.tv_nsec = (long)(timeoutNanoseconds % 1000000000ull);

    auto result = true;
    while(!resetEvent->flag)
    {
        if (pthread_cond_timedwait(&resetEvent->cond, &resetEvent->mutex, &timeout) == ETIMEDOUT)
        {
            result = false;
            break;
        }
    }

    if (resetEvent->autoReset)
        resetEvent->flag = false;

    pthread_mutex_unlock(&resetEvent->mutex);

    return result;
}

void FreeState(void * state)
{
    ResetEventState * resetEvent = GET_STATE(state);

    pthread_mutex_destroy(&resetEvent->mutex);
    pthread_cond_destroy(&resetEvent->cond);
    free(state);

}

#endif