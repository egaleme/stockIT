// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\0.43.11\$.uno'.
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
namespace g{namespace Fuse{namespace Controls{struct LayoutControl;}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public class LayoutControl :841
// {
::g::Fuse::Controls::Control_type* LayoutControl_typeof();
void LayoutControl__ctor_5_fn(LayoutControl* __this);
void LayoutControl__ArrangePaddingBox_fn(LayoutControl* __this, ::g::Fuse::LayoutParams* lp);
void LayoutControl__GetContentSize_fn(LayoutControl* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void LayoutControl__IsMarginBoxDependent_fn(LayoutControl* __this, ::g::Fuse::Visual* child, int* __retval);
void LayoutControl__get_Layout_fn(LayoutControl* __this, ::g::Fuse::Layouts::Layout** __retval);
void LayoutControl__set_Layout_fn(LayoutControl* __this, ::g::Fuse::Layouts::Layout* value);
void LayoutControl__OnChildAdded_fn(LayoutControl* __this, ::g::Fuse::Node* elm);
void LayoutControl__OnChildRemoved_fn(LayoutControl* __this, ::g::Fuse::Node* elm);
void LayoutControl__OnRooted_fn(LayoutControl* __this);
void LayoutControl__OnUnrooted_fn(LayoutControl* __this);

struct LayoutControl : ::g::Fuse::Controls::Control
{
    uStrong< ::g::Fuse::Layouts::Layout*> _layout;

    void ctor_5();
    ::g::Fuse::Layouts::Layout* Layout();
    void Layout(::g::Fuse::Layouts::Layout* value);
};
// }

}}} // ::g::Fuse::Controls
