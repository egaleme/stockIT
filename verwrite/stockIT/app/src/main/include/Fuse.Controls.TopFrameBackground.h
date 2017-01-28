// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\0.43.11\backgrounds\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct TopFrameBackground;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{namespace Platform{struct SystemUIWillResizeEventArgs;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class TopFrameBackground :171
// {
::g::Fuse::Controls::Control_type* TopFrameBackground_typeof();
void TopFrameBackground__ctor_5_fn(TopFrameBackground* __this);
void TopFrameBackground__GetContentSize_fn(TopFrameBackground* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void TopFrameBackground__New2_fn(TopFrameBackground** __retval);
void TopFrameBackground__OnFrameResized_fn(TopFrameBackground* __this, uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
void TopFrameBackground__OnRooted_fn(TopFrameBackground* __this);
void TopFrameBackground__OnUnrooted_fn(TopFrameBackground* __this);

struct TopFrameBackground : ::g::Fuse::Controls::Control
{
    void ctor_5();
    void OnFrameResized(uObject* sender, ::g::Uno::Platform::SystemUIWillResizeEventArgs* args);
    static TopFrameBackground* New2();
};
// }

}}} // ::g::Fuse::Controls
