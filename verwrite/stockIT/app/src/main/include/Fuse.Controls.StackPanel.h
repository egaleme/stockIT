// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Layouts{struct StackLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class StackPanel :1917
// {
::g::Fuse::Controls::Control_type* StackPanel_typeof();
void StackPanel__ctor_7_fn(StackPanel* __this);
void StackPanel__New4_fn(StackPanel** __retval);

struct StackPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::StackLayout*> _stackLayout;

    void ctor_7();
    static StackPanel* New4();
};
// }

}}} // ::g::Fuse::Controls
