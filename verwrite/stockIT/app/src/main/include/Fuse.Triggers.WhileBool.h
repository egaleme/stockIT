// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Triggers\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileValue-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileBool;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WhileBool :2919
// {
struct WhileBool_type : ::g::Fuse::Triggers::WhileValue_type
{
    ::g::Fuse::Triggers::Actions::IToggleable interface6;
};

WhileBool_type* WhileBool_typeof();
void WhileBool__ctor_7_fn(WhileBool* __this);
void WhileBool__Toggle_fn(WhileBool* __this);
void WhileBool__get_Value1_fn(WhileBool* __this, bool* __retval);
void WhileBool__set_Value1_fn(WhileBool* __this, bool* value);

struct WhileBool : ::g::Fuse::Triggers::WhileValue
{
    void ctor_7();
    void Toggle();
    bool Value1();
    void Value1(bool value);
};
// }

}}} // ::g::Fuse::Triggers
