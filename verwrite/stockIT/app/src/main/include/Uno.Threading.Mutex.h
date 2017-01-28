// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{namespace Threading{struct MutexImpl;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class Mutex :703
// {
struct Mutex_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Mutex_type* Mutex_typeof();
void Mutex__ctor__fn(Mutex* __this);
void Mutex__Dispose_fn(Mutex* __this);
void Mutex__New1_fn(Mutex** __retval);
void Mutex__ReleaseMutex_fn(Mutex* __this);
void Mutex__WaitOne_fn(Mutex* __this, bool* __retval);
void Mutex__WaitOne1_fn(Mutex* __this, int* timeoutMillis, bool* __retval);

struct Mutex : uObject
{
    uStrong< ::g::Uno::Threading::MutexImpl*> _impl;

    void ctor_();
    void Dispose();
    void ReleaseMutex();
    bool WaitOne();
    bool WaitOne1(int timeoutMillis);
    static Mutex* New1();
};
// }

}}} // ::g::Uno::Threading
