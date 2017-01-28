// This file was generated based on C:\stockit\stockit\.uno\ux11\ProductText.g.uno.
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
namespace g{struct ProductText;}

namespace g{

// public partial sealed class ProductText :2
// {
::g::Fuse::Controls::TextControl_type* ProductText_typeof();
void ProductText__ctor_8_fn(ProductText* __this);
void ProductText__InitializeUX_fn(ProductText* __this);
void ProductText__New4_fn(ProductText** __retval);

struct ProductText : ::g::Fuse::Controls::Text
{
    void ctor_8();
    void InitializeUX();
    static ProductText* New4();
};
// }

} // ::g
