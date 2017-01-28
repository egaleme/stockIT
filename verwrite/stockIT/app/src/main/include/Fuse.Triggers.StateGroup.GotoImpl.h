// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup__GotoImpl;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class StateGroup.GotoImpl :1596
// {
uType* StateGroup__GotoImpl_typeof();
void StateGroup__GotoImpl__ctor__fn(StateGroup__GotoImpl* __this);
void StateGroup__GotoImpl__Go_fn(StateGroup__GotoImpl* __this);
void StateGroup__GotoImpl__New1_fn(StateGroup__GotoImpl** __retval);

struct StateGroup__GotoImpl : uObject
{
    uStrong< ::g::Fuse::Triggers::StateGroup*> Group;
    uStrong< ::g::Fuse::Triggers::State*> Next;

    void ctor_();
    void Go();
    static StateGroup__GotoImpl* New1();
};
// }

}}} // ::g::Fuse::Triggers
