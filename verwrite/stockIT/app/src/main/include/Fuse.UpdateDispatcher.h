// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.Threading.IDispatcher.h>
namespace g{namespace Fuse{struct UpdateDispatcher;}}

namespace g{
namespace Fuse{

// internal sealed class UpdateDispatcher :10575
// {
struct UpdateDispatcher_type : uType
{
    ::g::Uno::Threading::IDispatcher interface0;
};

UpdateDispatcher_type* UpdateDispatcher_typeof();
void UpdateDispatcher__ctor__fn(UpdateDispatcher* __this);
void UpdateDispatcher__Invoke_fn(UpdateDispatcher* __this, uDelegate* action);
void UpdateDispatcher__New1_fn(UpdateDispatcher** __retval);

struct UpdateDispatcher : uObject
{
    void ctor_();
    void Invoke(uDelegate* action);
    static UpdateDispatcher* New1();
};
// }

}} // ::g::Fuse
