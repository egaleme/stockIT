// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Gestures\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Gestures{struct SetSwipeActive;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class SetSwipeActive :1187
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof();
void SetSwipeActive__get_Bypass_fn(SetSwipeActive* __this, bool* __retval);
void SetSwipeActive__set_Bypass_fn(SetSwipeActive* __this, bool* value);
void SetSwipeActive__Perform_fn(SetSwipeActive* __this, ::g::Fuse::Node* target);
void SetSwipeActive__get_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void SetSwipeActive__set_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value);
void SetSwipeActive__get_Value_fn(SetSwipeActive* __this, bool* __retval);
void SetSwipeActive__set_Value_fn(SetSwipeActive* __this, bool* value);

struct SetSwipeActive : ::g::Fuse::Triggers::Actions::TriggerAction
{
    bool _Bypass;
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Target;
    bool _Value;

    bool Bypass();
    void Bypass(bool value);
    ::g::Fuse::Gestures::SwipeGesture* Target();
    void Target(::g::Fuse::Gestures::SwipeGesture* value);
    bool Value();
    void Value(bool value);
};
// }

}}} // ::g::Fuse::Gestures
