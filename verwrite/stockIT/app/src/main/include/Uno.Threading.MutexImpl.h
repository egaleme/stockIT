// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct MutexImpl;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal abstract class MutexImpl :696
// {
struct MutexImpl_type : uType
{
    void(*fp_Dispose)(::g::Uno::Threading::MutexImpl*);
    void(*fp_ReleaseMutex)(::g::Uno::Threading::MutexImpl*);
    void(*fp_WaitOne)(::g::Uno::Threading::MutexImpl*, int*, bool*);
};

MutexImpl_type* MutexImpl_typeof();
void MutexImpl__ctor__fn(MutexImpl* __this);

struct MutexImpl : uObject
{
    void ctor_();
    void Dispose() { (((MutexImpl_type*)__type)->fp_Dispose)(this); }
    void ReleaseMutex() { (((MutexImpl_type*)__type)->fp_ReleaseMutex)(this); }
    bool WaitOne(int timeoutMillis) { bool __retval; return (((MutexImpl_type*)__type)->fp_WaitOne)(this, &timeoutMillis, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Threading
