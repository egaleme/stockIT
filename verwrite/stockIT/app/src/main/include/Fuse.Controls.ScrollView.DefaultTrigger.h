// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.43.11\.uno\ux11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollView__DefaultTrigger;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class ScrollView.DefaultTrigger :32
// {
::g::Fuse::Triggers::WhileBool_type* ScrollView__DefaultTrigger_typeof();
void ScrollView__DefaultTrigger__ctor_9_fn(ScrollView__DefaultTrigger* __this, ::g::Fuse::Controls::ScrollView* parent);
void ScrollView__DefaultTrigger__InitializeUX_fn(ScrollView__DefaultTrigger* __this);
void ScrollView__DefaultTrigger__New3_fn(::g::Fuse::Controls::ScrollView* parent, ScrollView__DefaultTrigger** __retval);

struct ScrollView__DefaultTrigger : ::g::Fuse::Triggers::WhileTrue
{
    uWeak< ::g::Fuse::Controls::ScrollView*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ScrollView__DefaultTrigger_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ScrollView__DefaultTrigger_typeof()->Init(), __selector1_; }
    uStrong< ::g::Uno::UX::Property1*> s_KeepFocusInView_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Value_inst;

    void ctor_9(::g::Fuse::Controls::ScrollView* parent);
    void InitializeUX();
    static ScrollView__DefaultTrigger* New3(::g::Fuse::Controls::ScrollView* parent);
};
// }

}}} // ::g::Fuse::Controls
