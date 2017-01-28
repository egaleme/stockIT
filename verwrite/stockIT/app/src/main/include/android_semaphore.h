#ifndef ANDROID_SEMAPHORE_H
#define ANDROID_SEMAPHORE_H

#include <Uno/Uno.h>
#include <semaphore.h>
#include <stdlib.h>
#include <unistd.h>

void * init_semaphore(int initialCount, int maxCount)
{
    sem_t *semaphore = new sem_t;
    if (sem_init(semaphore, 0, initialCount))
    {
        sem_destroy(semaphore);
        return NULL;
    }

    return semaphore;
}

void free_semaphore(void * semaphore)
{
    sem_destroy((sem_t*)semaphore);
}

#endif
