// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct Thread;}}}
namespace g{namespace Uno{namespace Threading{struct ThreadImpl;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class Thread :946
// {
uType* Thread_typeof();
void Thread__ctor__fn(Thread* __this, uDelegate* callback);
void Thread__ctor_1_fn(Thread* __this, ::g::Uno::Threading::ThreadImpl* impl);
void Thread__get_CurrentThread_fn(Thread** __retval);
void Thread__Equals_fn(Thread* __this, uObject* o, bool* __retval);
void Thread__Join_fn(Thread* __this);
void Thread__New1_fn(uDelegate* callback, Thread** __retval);
void Thread__New2_fn(::g::Uno::Threading::ThreadImpl* impl, Thread** __retval);
void Thread__Sleep_fn(int* millis);
void Thread__Start_fn(Thread* __this);

struct Thread : uObject
{
    uStrong< ::g::Uno::Threading::ThreadImpl*> _impl;

    void ctor_(uDelegate* callback);
    void ctor_1(::g::Uno::Threading::ThreadImpl* impl);
    void Join();
    void Start();
    static Thread* New1(uDelegate* callback);
    static Thread* New2(::g::Uno::Threading::ThreadImpl* impl);
    static void Sleep(int millis);
    static Thread* CurrentThread();
};
// }

}}} // ::g::Uno::Threading
