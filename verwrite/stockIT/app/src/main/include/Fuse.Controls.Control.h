// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Elements.Element.h>
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
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct HitTestContext;}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class Control :10
// {
struct Control_type : ::g::Fuse::Elements::Element_type
{
    void(*fp_get_BootstrapNativeViewGroup)(::g::Fuse::Controls::Control*, bool*);
    void(*fp_CompensateForScrollView)(::g::Fuse::Controls::Control*, ::g::Uno::Float4x4*);
    void(*fp_CreateNativeView)(::g::Fuse::Controls::Control*, uObject**);
    void(*fp_CreateNativeViewGroup)(::g::Fuse::Controls::Control*, uObject**);
    void(*fp_DrawVisual)(::g::Fuse::Controls::Control*, ::g::Fuse::DrawContext*);
    void(*fp_EjectTemplate)(::g::Fuse::Controls::Control*);
    void(*fp_InjectTemplate)(::g::Fuse::Controls::Control*);
    void(*fp_get_NativeParent)(::g::Fuse::Controls::Control*, uObject**);
    void(*fp_get_NativeTransform)(::g::Fuse::Controls::Control*, ::g::Uno::Float4x4*);
    void(*fp_PushPropertiesToNativeView)(::g::Fuse::Controls::Control*);
    void(*fp_RootOnNativeParent)(::g::Fuse::Controls::Control*);
};

Control_type* Control_typeof();
void Control__ctor_4_fn(Control* __this);
void Control__get_AndroidTemplate_fn(Control* __this, ::g::Uno::UX::Template** __retval);
void Control__ArrangePaddingBox_fn(Control* __this, ::g::Fuse::LayoutParams* lp);
void Control__get_Background_fn(Control* __this, ::g::Fuse::Drawing::Brush** __retval);
void Control__set_Background_fn(Control* __this, ::g::Fuse::Drawing::Brush* value);
void Control__get_BootstrapNativeViewGroup_fn(Control* __this, bool* __retval);
void Control__CalcRenderBounds_fn(Control* __this, ::g::Fuse::VisualBounds** __retval);
void Control__CompensateForScrollView_fn(Control* __this, ::g::Uno::Float4x4* t);
void Control__CreateGraphicsVisual_fn(Control* __this, ::g::Fuse::Visual** __retval);
void Control__CreateNativeView_fn(Control* __this, uObject** __retval);
void Control__CreateNativeViewGroup_fn(Control* __this, uObject** __retval);
void Control__DrawBackground_fn(Control* __this, ::g::Fuse::DrawContext* dc, float* opacity);
void Control__DrawVisual_fn(Control* __this, ::g::Fuse::DrawContext* dc);
void Control__EjectTemplate_fn(Control* __this);
void Control__GetContentSize_fn(Control* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval);
void Control__get_GraphicsTemplate_fn(Control* __this, ::g::Uno::UX::Template** __retval);
void Control__get_GraphicsVisual_fn(Control* __this, ::g::Fuse::Visual** __retval);
void Control__set_GraphicsVisual_fn(Control* __this, ::g::Fuse::Visual* value);
void Control__get_HitTestLocalVisualBounds_fn(Control* __this, ::g::Fuse::VisualBounds** __retval);
void Control__InjectTemplate_fn(Control* __this);
void Control__InvalidateLocalTransform_fn(Control* __this);
void Control__get_NativeParent_fn(Control* __this, uObject** __retval);
void Control__get_NativeTransform_fn(Control* __this, ::g::Uno::Float4x4* __retval);
void Control__get_NativeView_fn(Control* __this, uObject** __retval);
void Control__set_NativeView_fn(Control* __this, uObject* value);
void Control__get_NativeViewGroup_fn(Control* __this, uObject** __retval);
void Control__set_NativeViewGroup_fn(Control* __this, uObject* value);
void Control__OnDraw_fn(Control* __this, ::g::Fuse::DrawContext* dc);
void Control__OnHitTestLocalVisual_fn(Control* __this, ::g::Fuse::HitTestContext* htc);
void Control__OnIsVisibleChanged_fn(Control* __this);
void Control__OnPropertyChanged2_fn(Control* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop);
void Control__OnRooted_fn(Control* __this);
void Control__OnUnrooted_fn(Control* __this);
void Control__OnZOrderInvalidated_fn(Control* __this);
void Control__PostLocalTransformPush_fn(Control* __this);
void Control__PushNativeTransform_fn(Control* __this);
void Control__PushPropertiesToNativeView_fn(Control* __this);
void Control__RootOnNativeParent_fn(Control* __this);
void Control__SetBackground_fn(Control* __this, ::g::Fuse::Drawing::Brush* value);
void Control__SetNativeBackground_fn(Control* __this);
void Control__ShowNativeViewGroup_fn(Control* __this);
void Control__UpdateNativeSize_fn(Control* __this, ::g::Fuse::LayoutParams* lp);
void Control__UpdateNativeZOrder_fn(Control* __this);

struct Control : ::g::Fuse::Elements::Element
{
    uStrong< ::g::Fuse::Drawing::Brush*> _background;
    bool _postedLocalTransformPush;
    uStrong< ::g::Fuse::Visual*> _GraphicsVisual;
    uStrong<uObject*> _NativeView;
    uStrong<uObject*> _NativeViewGroup;

    void ctor_4();
    ::g::Uno::UX::Template* AndroidTemplate();
    ::g::Fuse::Drawing::Brush* Background();
    void Background(::g::Fuse::Drawing::Brush* value);
    bool BootstrapNativeViewGroup() { bool __retval; return (((Control_type*)__type)->fp_get_BootstrapNativeViewGroup)(this, &__retval), __retval; }
    void CompensateForScrollView(::g::Uno::Float4x4* t) { (((Control_type*)__type)->fp_CompensateForScrollView)(this, t); }
    ::g::Fuse::Visual* CreateGraphicsVisual();
    uObject* CreateNativeView() { uObject* __retval; return (((Control_type*)__type)->fp_CreateNativeView)(this, &__retval), __retval; }
    uObject* CreateNativeViewGroup() { uObject* __retval; return (((Control_type*)__type)->fp_CreateNativeViewGroup)(this, &__retval), __retval; }
    void DrawBackground(::g::Fuse::DrawContext* dc, float opacity);
    void DrawVisual(::g::Fuse::DrawContext* dc) { (((Control_type*)__type)->fp_DrawVisual)(this, dc); }
    void EjectTemplate() { (((Control_type*)__type)->fp_EjectTemplate)(this); }
    ::g::Uno::UX::Template* GraphicsTemplate();
    ::g::Fuse::Visual* GraphicsVisual();
    void GraphicsVisual(::g::Fuse::Visual* value);
    void InjectTemplate() { (((Control_type*)__type)->fp_InjectTemplate)(this); }
    uObject* NativeParent() { uObject* __retval; return (((Control_type*)__type)->fp_get_NativeParent)(this, &__retval), __retval; }
    ::g::Uno::Float4x4 NativeTransform();
    uObject* NativeView();
    void NativeView(uObject* value);
    uObject* NativeViewGroup();
    void NativeViewGroup(uObject* value);
    void PostLocalTransformPush();
    void PushNativeTransform();
    void PushPropertiesToNativeView() { (((Control_type*)__type)->fp_PushPropertiesToNativeView)(this); }
    void RootOnNativeParent() { (((Control_type*)__type)->fp_RootOnNativeParent)(this); }
    void SetBackground(::g::Fuse::Drawing::Brush* value);
    void SetNativeBackground();
    void ShowNativeViewGroup();
    void UpdateNativeSize(::g::Fuse::LayoutParams lp);
    void UpdateNativeZOrder();
    static void CompensateForScrollView(Control* __this, ::g::Uno::Float4x4* t) { Control__CompensateForScrollView_fn(__this, t); }
    static uObject* CreateNativeView(Control* __this) { uObject* __retval; return Control__CreateNativeView_fn(__this, &__retval), __retval; }
    static uObject* CreateNativeViewGroup(Control* __this) { uObject* __retval; return Control__CreateNativeViewGroup_fn(__this, &__retval), __retval; }
    static void DrawVisual(Control* __this, ::g::Fuse::DrawContext* dc) { Control__DrawVisual_fn(__this, dc); }
    static void EjectTemplate(Control* __this) { Control__EjectTemplate_fn(__this); }
    static void InjectTemplate(Control* __this) { Control__InjectTemplate_fn(__this); }
    static void PushPropertiesToNativeView(Control* __this) { Control__PushPropertiesToNativeView_fn(__this); }
    static void RootOnNativeParent(Control* __this) { Control__RootOnNativeParent_fn(__this); }
    static bool BootstrapNativeViewGroup(Control* __this) { bool __retval; return Control__get_BootstrapNativeViewGroup_fn(__this, &__retval), __retval; }
    static uObject* NativeParent(Control* __this) { uObject* __retval; return Control__get_NativeParent_fn(__this, &__retval), __retval; }
    static ::g::Uno::Float4x4 NativeTransform(Control* __this);
};

}}} // ::g::Fuse::Controls

#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
#include <Uno.UX.Selector.h>

namespace g{
namespace Fuse{
namespace Controls{

inline ::g::Uno::Float4x4 Control::NativeTransform() { ::g::Uno::Float4x4 __retval; return (((Control_type*)__type)->fp_get_NativeTransform)(this, &__retval), __retval; }
inline ::g::Uno::Float4x4 Control::NativeTransform(Control* __this) { ::g::Uno::Float4x4 __retval; return Control__get_NativeTransform_fn(__this, &__retval), __retval; }
// }

}}} // ::g::Fuse::Controls
