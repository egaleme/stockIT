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
namespace g{namespace Fuse{namespace Triggers{struct AddingAnimation;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class AddingAnimation :47
// {
::g::Fuse::Triggers::Trigger_type* AddingAnimation_typeof();
void AddingAnimation__ctor_5_fn(AddingAnimation* __this);
void AddingAnimation__get_DelayFrame_fn(AddingAnimation* __this, bool* __retval);
void AddingAnimation__set_DelayFrame_fn(AddingAnimation* __this, bool* value);
void AddingAnimation__New2_fn(AddingAnimation** __retval);
void AddingAnimation__OnRooted_fn(AddingAnimation* __this);

struct AddingAnimation : ::g::Fuse::Triggers::Trigger
{
    bool _delayFrame;

    void ctor_5();
    bool DelayFrame();
    void DelayFrame(bool value);
    static AddingAnimation* New2();
};
// }

}}} // ::g::Fuse::Triggers
