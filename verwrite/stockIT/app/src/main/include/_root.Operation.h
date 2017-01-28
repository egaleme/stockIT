// This file was generated based on C:\stockit\stockit\.uno\ux11\Operation.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct Operation;}

namespace g{

// public partial sealed class Operation :2
// {
::g::Fuse::Controls::TextControl_type* Operation_typeof();
void Operation__ctor_8_fn(Operation* __this);
void Operation__InitializeUX_fn(Operation* __this);
void Operation__New4_fn(Operation** __retval);

struct Operation : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX();
    static Operation* New4();
};
// }

} // ::g
