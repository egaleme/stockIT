// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\implementation\cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Threading.AutoResetEventImpl.h>
namespace g{namespace Uno{namespace Threading{struct PosixAutoResetEvent;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed extern class PosixAutoResetEvent :132
// {
::g::Uno::Threading::AutoResetEventImpl_type* PosixAutoResetEvent_typeof();
void PosixAutoResetEvent__ctor_1_fn(PosixAutoResetEvent* __this, bool* initialState);
void PosixAutoResetEvent__Dispose_fn(PosixAutoResetEvent* __this);
void PosixAutoResetEvent__New1_fn(bool* initialState, PosixAutoResetEvent** __retval);
void PosixAutoResetEvent__Set_fn(PosixAutoResetEvent* __this, bool* __retval);
void PosixAutoResetEvent__WaitOne_fn(PosixAutoResetEvent* __this, bool* __retval);

struct PosixAutoResetEvent : ::g::Uno::Threading::AutoResetEventImpl
{
    void* _handle;

    void ctor_1(bool initialState);
    static PosixAutoResetEvent* New1(bool initialState);
};
// }

}}} // ::g::Uno::Threading
