// This file was generated based on C:\stockit\stockit\.uno\ux11\Icon.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Image.h>
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
namespace g{struct Icon;}

namespace g{

// public partial sealed class Icon :2
// {
::g::Fuse::Controls::Control_type* Icon_typeof();
void Icon__ctor_7_fn(Icon* __this);
void Icon__InitializeUX_fn(Icon* __this);
void Icon__New4_fn(Icon** __retval);

struct Icon : ::g::Fuse::Controls::Image
{
    void ctor_7();
    void InitializeUX();
    static Icon* New4();
};
// }

} // ::g
