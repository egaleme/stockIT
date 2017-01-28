// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct LockGuard;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class LockGuard :618
// {
struct LockGuard_type : uType
{
    ::g::Uno::IDisposable interface0;
};

LockGuard_type* LockGuard_typeof();
void LockGuard__ctor__fn(LockGuard* __this, ::g::Uno::Threading::Mutex* mutex);
void LockGuard__Acquire_fn(::g::Uno::Threading::Mutex* mutex, uObject** __retval);
void LockGuard__New1_fn(::g::Uno::Threading::Mutex* mutex, LockGuard** __retval);
void LockGuard__UnoIDisposableDispose_fn(LockGuard* __this);

struct LockGuard : uObject
{
    uStrong< ::g::Uno::Threading::Mutex*> _mutex;

    void ctor_(::g::Uno::Threading::Mutex* mutex);
    static uObject* Acquire(::g::Uno::Threading::Mutex* mutex);
    static LockGuard* New1(::g::Uno::Threading::Mutex* mutex);
};
// }

}}} // ::g::Uno::Threading
