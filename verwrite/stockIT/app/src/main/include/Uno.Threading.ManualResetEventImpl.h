// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct ManualResetEventImpl;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal abstract class ManualResetEventImpl :649
// {
struct ManualResetEventImpl_type : uType
{
    void(*fp_Dispose)(::g::Uno::Threading::ManualResetEventImpl*);
    void(*fp_Set)(::g::Uno::Threading::ManualResetEventImpl*, bool*);
    void(*fp_WaitOne)(::g::Uno::Threading::ManualResetEventImpl*, bool*);
};

ManualResetEventImpl_type* ManualResetEventImpl_typeof();
void ManualResetEventImpl__ctor__fn(ManualResetEventImpl* __this);

struct ManualResetEventImpl : uObject
{
    void ctor_();
    void Dispose() { (((ManualResetEventImpl_type*)__type)->fp_Dispose)(this); }
    bool Set() { bool __retval; return (((ManualResetEventImpl_type*)__type)->fp_Set)(this, &__retval), __retval; }
    bool WaitOne() { bool __retval; return (((ManualResetEventImpl_type*)__type)->fp_WaitOne)(this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Threading
