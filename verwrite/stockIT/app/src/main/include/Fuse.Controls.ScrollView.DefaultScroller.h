// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.43.11\.uno\ux11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollView__DefaultScroller;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class ScrollView.DefaultScroller :9
// {
::g::Fuse::Gestures::Scroller_type* ScrollView__DefaultScroller_typeof();
void ScrollView__DefaultScroller__ctor_4_fn(ScrollView__DefaultScroller* __this, ::g::Fuse::Controls::ScrollView* parent);
void ScrollView__DefaultScroller__InitializeUX_fn(ScrollView__DefaultScroller* __this);
void ScrollView__DefaultScroller__New3_fn(::g::Fuse::Controls::ScrollView* parent, ScrollView__DefaultScroller** __retval);

struct ScrollView__DefaultScroller : ::g::Fuse::Gestures::Scroller
{
    uWeak< ::g::Fuse::Controls::ScrollView*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ScrollView__DefaultScroller_typeof()->Init(), __selector0_; }
    uStrong< ::g::Uno::UX::Property1*> s_UserScroll_inst;
    uStrong< ::g::Uno::UX::Property1*> this_UserScroll_inst;

    void ctor_4(::g::Fuse::Controls::ScrollView* parent);
    void InitializeUX();
    static ScrollView__DefaultScroller* New3(::g::Fuse::Controls::ScrollView* parent);
};
// }

}}} // ::g::Fuse::Controls
