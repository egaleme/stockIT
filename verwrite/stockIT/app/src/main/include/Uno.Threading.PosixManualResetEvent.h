// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\implementation\cpp\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Threading.ManualResetEventImpl.h>
namespace g{namespace Uno{namespace Threading{struct PosixManualResetEvent;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed extern class PosixManualResetEvent :168
// {
::g::Uno::Threading::ManualResetEventImpl_type* PosixManualResetEvent_typeof();
void PosixManualResetEvent__ctor_1_fn(PosixManualResetEvent* __this, bool* initialState);
void PosixManualResetEvent__Dispose_fn(PosixManualResetEvent* __this);
void PosixManualResetEvent__New1_fn(bool* initialState, PosixManualResetEvent** __retval);
void PosixManualResetEvent__Set_fn(PosixManualResetEvent* __this, bool* __retval);
void PosixManualResetEvent__WaitOne_fn(PosixManualResetEvent* __this, bool* __retval);

struct PosixManualResetEvent : ::g::Uno::Threading::ManualResetEventImpl
{
    void* _handle;

    void ctor_1(bool initialState);
    static PosixManualResetEvent* New1(bool initialState);
};
// }

}}} // ::g::Uno::Threading
