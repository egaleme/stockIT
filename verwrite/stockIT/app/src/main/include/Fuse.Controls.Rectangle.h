// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.43.11\shapes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial class Rectangle :782
// {
::g::Fuse::Controls::Shape_type* Rectangle_typeof();
void Rectangle__ctor_7_fn(Rectangle* __this);
void Rectangle__get_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* __retval);
void Rectangle__set_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value);
void Rectangle__CreateNativeView_fn(Rectangle* __this, uObject** __retval);
void Rectangle__DrawFill_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill);
void Rectangle__DrawStroke_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke);
void Rectangle__get_NativeRect_fn(Rectangle* __this, uObject** __retval);
void Rectangle__New3_fn(Rectangle** __retval);
void Rectangle__OnHitTestLocalVisual_fn(Rectangle* __this, ::g::Fuse::HitTestContext* htc);
void Rectangle__PushPropertiesToNativeView_fn(Rectangle* __this);
void Rectangle__SetCornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value, uObject* origin);

struct Rectangle : ::g::Fuse::Controls::Shape
{
    ::g::Uno::Float4 _cornerRadius;
    static ::g::Uno::UX::Selector CornerRadiusPropertyName_;
    static ::g::Uno::UX::Selector& CornerRadiusPropertyName() { return Rectangle_typeof()->Init(), CornerRadiusPropertyName_; }

    void ctor_7();
    ::g::Uno::Float4 CornerRadius();
    void CornerRadius(::g::Uno::Float4 value);
    uObject* NativeRect();
    void SetCornerRadius(::g::Uno::Float4 value, uObject* origin);
    static Rectangle* New3();
};
// }

}}} // ::g::Fuse::Controls
