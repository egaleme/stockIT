#pragma once
#include <XliPlatform/PlatformSpecific/Android.h>
#include <pthread.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/Common/AndroidCommon.h>

class EntryPoints
{
private:
    static int key;
    static bool unoThreadLocked;
public:
    static pthread_cond_t cond;
    static pthread_mutex_t mutex;

    static int GetKey() { return key; }
    static void UpdateKey()  { key+=1; }

    static int GetUnoThreadLocked() { return unoThreadLocked; }
    static void LockUnoThread()  { unoThreadLocked = true; }
    static void UnlockUnoThread()  { unoThreadLocked = false; }
};

#define WAIT_ON_UNO_BEGIN() pthread_mutex_lock(&EntryPoints::mutex); EntryPoints::UpdateKey(); int __key__ = EntryPoints::GetKey(); pthread_cond_broadcast(&EntryPoints::cond);

#define WAIT_ON_UNO_END() while (EntryPoints::GetKey()==__key__) { pthread_cond_wait(&EntryPoints::cond, &EntryPoints::mutex); } pthread_mutex_unlock(&EntryPoints::mutex);


#define SIGNAL_DONE_RUNNING_ON_UNO() pthread_mutex_lock(&EntryPoints::mutex); EntryPoints::UpdateKey(); pthread_cond_broadcast(&EntryPoints::cond); pthread_mutex_unlock(&EntryPoints::mutex);

#define SIGNAL_DONE_RUNNING_ON_UNO_AND_WAIT() WAIT_ON_UNO_BEGIN(); WAIT_ON_UNO_END();
