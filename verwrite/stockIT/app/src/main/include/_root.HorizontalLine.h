// This file was generated based on C:\stockit\stockit\.uno\ux11\HorizontalLine.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
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
namespace g{struct HorizontalLine;}

namespace g{

// public partial sealed class HorizontalLine :2
// {
::g::Fuse::Controls::Shape_type* HorizontalLine_typeof();
void HorizontalLine__ctor_8_fn(HorizontalLine* __this);
void HorizontalLine__InitializeUX_fn(HorizontalLine* __this);
void HorizontalLine__New4_fn(HorizontalLine** __retval);

struct HorizontalLine : ::g::Fuse::Controls::Rectangle
{
    void ctor_8();
    void InitializeUX();
    static HorizontalLine* New4();
};
// }

} // ::g
