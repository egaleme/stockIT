// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class State :1652
// {
::g::Fuse::Triggers::Trigger_type* State_typeof();
void State__Goto_fn(State* __this);
void State__goto__fn(::g::Fuse::Scripting::Context* c, State* n, uArray* args);
void State__get_On_fn(State* __this, bool* __retval);
void State__set_On_fn(State* __this, bool* value);
void State__OnRooted_fn(State* __this);
void State__OnUnrooted_fn(State* __this);
void State__get_Progress1_fn(State* __this, double* __retval);
void State__RootStateGroup_fn(State* __this, ::g::Fuse::Triggers::StateGroup* stateGroup);

struct State : ::g::Fuse::Triggers::Trigger
{
    bool _on;
    uStrong< ::g::Fuse::Triggers::StateGroup*> _stateGroup;

    void Goto();
    bool On();
    void On(bool value);
    double Progress1();
    void RootStateGroup(::g::Fuse::Triggers::StateGroup* stateGroup);
    static void goto_(::g::Fuse::Scripting::Context* c, State* n, uArray* args);
};
// }

}}} // ::g::Fuse::Triggers
