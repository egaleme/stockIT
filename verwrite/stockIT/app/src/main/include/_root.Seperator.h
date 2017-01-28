// This file was generated based on C:\stockit\stockit\.uno\ux11\Seperator.g.uno.
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
namespace g{struct Seperator;}

namespace g{

// public partial sealed class Seperator :2
// {
::g::Fuse::Controls::Shape_type* Seperator_typeof();
void Seperator__ctor_8_fn(Seperator* __this);
void Seperator__InitializeUX_fn(Seperator* __this);
void Seperator__New4_fn(Seperator** __retval);

struct Seperator : ::g::Fuse::Controls::Rectangle
{
    void ctor_8();
    void InitializeUX();
    static Seperator* New4();
};
// }

} // ::g
