// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\implementation\cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Threading.MutexImpl.h>
namespace g{namespace Uno{namespace Threading{struct POSIXMutex;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed extern class POSIXMutex :77
// {
::g::Uno::Threading::MutexImpl_type* POSIXMutex_typeof();
void POSIXMutex__ctor_1_fn(POSIXMutex* __this);
void POSIXMutex__Dispose_fn(POSIXMutex* __this);
void POSIXMutex__New1_fn(POSIXMutex** __retval);
void POSIXMutex__ReleaseMutex_fn(POSIXMutex* __this);
void POSIXMutex__WaitOne_fn(POSIXMutex* __this, int* timeoutMillis, bool* __retval);

struct POSIXMutex : ::g::Uno::Threading::MutexImpl
{
    void* _handle;

    void ctor_1();
    static POSIXMutex* New1();
};
// }

}}} // ::g::Uno::Threading
