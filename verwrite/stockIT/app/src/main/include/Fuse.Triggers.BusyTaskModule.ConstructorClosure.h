// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTaskModule__ConstructorClosure;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class BusyTaskModule.ConstructorClosure :398
// {
uType* BusyTaskModule__ConstructorClosure_typeof();
void BusyTaskModule__ConstructorClosure__ctor__fn(BusyTaskModule__ConstructorClosure* __this, ::g::Fuse::Scripting::Context* c);
void BusyTaskModule__ConstructorClosure__Construct_fn(BusyTaskModule__ConstructorClosure* __this, uArray* args, uObject** __retval);
void BusyTaskModule__ConstructorClosure__New1_fn(::g::Fuse::Scripting::Context* c, BusyTaskModule__ConstructorClosure** __retval);

struct BusyTaskModule__ConstructorClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _c;

    void ctor_(::g::Fuse::Scripting::Context* c);
    uObject* Construct(uArray* args);
    static BusyTaskModule__ConstructorClosure* New1(::g::Fuse::Scripting::Context* c);
};
// }

}}} // ::g::Fuse::Triggers
