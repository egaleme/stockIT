// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\implementation\cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Threading.ThreadImpl.h>
namespace g{namespace Uno{namespace Threading{struct POSIXThread;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed extern class POSIXThread :343
// {
::g::Uno::Threading::ThreadImpl_type* POSIXThread_typeof();
void POSIXThread__ctor_1_fn(POSIXThread* __this, uint64_t* handle);
void POSIXThread__ctor_2_fn(POSIXThread* __this, uDelegate* callback);
void POSIXThread__get_CurrentThread_fn(POSIXThread** __retval);
void POSIXThread__Equals_fn(POSIXThread* __this, uObject* o, bool* __retval);
void POSIXThread__Join_fn(POSIXThread* __this);
void POSIXThread__New1_fn(uint64_t* handle, POSIXThread** __retval);
void POSIXThread__New2_fn(uDelegate* callback, POSIXThread** __retval);
void POSIXThread__Sleep_fn(int* millis);
void POSIXThread__Start_fn(POSIXThread* __this);

struct POSIXThread : ::g::Uno::Threading::ThreadImpl
{
    uint64_t _posixHandle;

    void ctor_1(uint64_t handle);
    void ctor_2(uDelegate* callback);
    static POSIXThread* New1(uint64_t handle);
    static POSIXThread* New2(uDelegate* callback);
    static void Sleep(int millis);
    static POSIXThread* CurrentThread();
};
// }

}}} // ::g::Uno::Threading
