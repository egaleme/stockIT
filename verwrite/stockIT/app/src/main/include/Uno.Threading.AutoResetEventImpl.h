// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct AutoResetEventImpl;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal abstract class AutoResetEventImpl :9
// {
struct AutoResetEventImpl_type : uType
{
    void(*fp_Dispose)(::g::Uno::Threading::AutoResetEventImpl*);
    void(*fp_Set)(::g::Uno::Threading::AutoResetEventImpl*, bool*);
    void(*fp_WaitOne)(::g::Uno::Threading::AutoResetEventImpl*, bool*);
};

AutoResetEventImpl_type* AutoResetEventImpl_typeof();
void AutoResetEventImpl__ctor__fn(AutoResetEventImpl* __this);

struct AutoResetEventImpl : uObject
{
    void ctor_();
    void Dispose() { (((AutoResetEventImpl_type*)__type)->fp_Dispose)(this); }
    bool Set() { bool __retval; return (((AutoResetEventImpl_type*)__type)->fp_Set)(this, &__retval), __retval; }
    bool WaitOne() { bool __retval; return (((AutoResetEventImpl_type*)__type)->fp_WaitOne)(this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Threading
