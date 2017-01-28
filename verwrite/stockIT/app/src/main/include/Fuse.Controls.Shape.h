// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.43.11\shapes\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.LayoutControl.h>
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
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Fuse{namespace Controls{struct Shape__Watcher;}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Triggers{struct BusyTask;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class Shape :1010
// {
struct Shape_type : ::g::Fuse::Controls::Control_type
{
    void(*fp_DrawFill)(::g::Fuse::Controls::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Brush*);
    void(*fp_DrawStroke)(::g::Fuse::Controls::Shape*, ::g::Fuse::DrawContext*, ::g::Fuse::Drawing::Stroke*);
};

Shape_type* Shape_typeof();
void Shape__ctor_6_fn(Shape* __this);
void Shape__AddLoadingResource_fn(Shape* __this, ::g::Uno::UX::PropertyObject* res);
void Shape__CalcRenderBounds_fn(Shape* __this, ::g::Fuse::VisualBounds** __retval);
void Shape__get_Center_fn(Shape* __this, ::g::Uno::Float2* __retval);
void Shape__CheckStatus_fn(Shape* __this);
void Shape__get_Color_fn(Shape* __this, ::g::Uno::Float4* __retval);
void Shape__set_Color_fn(Shape* __this, ::g::Uno::Float4* value);
void Shape__get_ContentSize_fn(Shape* __this, ::g::Uno::Float2* __retval);
void Shape__get_ContentTopLeft_fn(Shape* __this, ::g::Uno::Float2* __retval);
void Shape__get_CurrentDrawCost_fn(Shape* __this, float* __retval);
void Shape__DrawFill_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill);
void Shape__DrawStroke_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke);
void Shape__DrawVisual_fn(Shape* __this, ::g::Fuse::DrawContext* dc);
void Shape__FastTrackDrawWithOpacity_fn(Shape* __this, ::g::Fuse::DrawContext* dc, bool* __retval);
void Shape__get_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush** __retval);
void Shape__set_Fill_fn(Shape* __this, ::g::Fuse::Drawing::Brush* value);
void Shape__get_Fills_fn(Shape* __this, uObject** __retval);
void Shape__get_HasFills_fn(Shape* __this, bool* __retval);
void Shape__get_HasLoadingResources_fn(Shape* __this, bool* __retval);
void Shape__get_HasStrokes_fn(Shape* __this, bool* __retval);
void Shape__get_HitTestLocalVisualBounds_fn(Shape* __this, ::g::Fuse::VisualBounds** __retval);
void Shape__get_LoadingResources_fn(Shape* __this, ::g::Uno::Collections::Dictionary** __retval);
void Shape__get_NativeShape_fn(Shape* __this, uObject** __retval);
void Shape__OnColorChanged_fn(Shape* __this, ::g::Uno::Float4* value, uObject* origin);
void Shape__OnFillAdded_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnFillRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Brush* f);
void Shape__OnLoadingResourcePropertyChanged_fn(Shape* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property);
void Shape__OnLoadingResourceRooted_fn(Shape* __this);
void Shape__OnLoadingResourceUnrooted_fn(Shape* __this);
void Shape__OnPropertyChanged2_fn(Shape* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property);
void Shape__OnRooted_fn(Shape* __this);
void Shape__OnStrokeAdded_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnStrokeRemoved_fn(Shape* __this, ::g::Fuse::Drawing::Stroke* s);
void Shape__OnUnrooted_fn(Shape* __this);
void Shape__PrepareDraw_fn(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void Shape__PushPropertiesToNativeView_fn(Shape* __this);
void Shape__RemoveLoadingResource_fn(Shape* __this, ::g::Uno::UX::PropertyObject* res);
void Shape__SetColor_fn(Shape* __this, ::g::Uno::Float4* value, uObject* origin);
void Shape__get_Smoothness_fn(Shape* __this, float* __retval);
void Shape__set_Smoothness_fn(Shape* __this, float* value);
void Shape__get_Strokes_fn(Shape* __this, uObject** __retval);
void Shape__UpdateNativeShape_fn(Shape* __this);

struct Shape : ::g::Fuse::Controls::LayoutControl
{
    uStrong< ::g::Uno::Collections::ObservableList*> _fills;
    static uSStrong< ::g::Fuse::PropertyHandle*> _loadingResourcesHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _loadingResourcesHandle() { return Shape_typeof()->Init(), _loadingResourcesHandle_; }
    uStrong< ::g::Fuse::Triggers::BusyTask*> _loadingResourceTask;
    static ::g::Uno::UX::Selector _offsetName_;
    static ::g::Uno::UX::Selector& _offsetName() { return Shape_typeof()->Init(), _offsetName_; }
    float _smoothness;
    uStrong< ::g::Uno::Collections::ObservableList*> _strokes;
    static ::g::Uno::UX::Selector _widthName_;
    static ::g::Uno::UX::Selector& _widthName() { return Shape_typeof()->Init(), _widthName_; }
    static ::g::Uno::UX::Selector ColorPropertyName_;
    static ::g::Uno::UX::Selector& ColorPropertyName() { return Shape_typeof()->Init(), ColorPropertyName_; }

    void ctor_6();
    void AddLoadingResource(::g::Uno::UX::PropertyObject* res);
    ::g::Uno::Float2 Center();
    void CheckStatus();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    ::g::Uno::Float2 ContentSize();
    ::g::Uno::Float2 ContentTopLeft();
    float CurrentDrawCost();
    void DrawFill(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill) { (((Shape_type*)__type)->fp_DrawFill)(this, dc, fill); }
    void DrawStroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke) { (((Shape_type*)__type)->fp_DrawStroke)(this, dc, stroke); }
    ::g::Fuse::Drawing::Brush* Fill();
    void Fill(::g::Fuse::Drawing::Brush* value);
    uObject* Fills();
    bool HasFills();
    bool HasLoadingResources();
    bool HasStrokes();
    ::g::Uno::Collections::Dictionary* LoadingResources();
    uObject* NativeShape();
    void OnColorChanged(::g::Uno::Float4 value, uObject* origin);
    void OnFillAdded(::g::Fuse::Drawing::Brush* f);
    void OnFillRemoved(::g::Fuse::Drawing::Brush* f);
    void OnLoadingResourcePropertyChanged(::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector property);
    void OnLoadingResourceRooted();
    void OnLoadingResourceUnrooted();
    void OnStrokeAdded(::g::Fuse::Drawing::Stroke* s);
    void OnStrokeRemoved(::g::Fuse::Drawing::Stroke* s);
    void PrepareDraw(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize);
    void RemoveLoadingResource(::g::Uno::UX::PropertyObject* res);
    void SetColor(::g::Uno::Float4 value, uObject* origin);
    float Smoothness();
    void Smoothness(float value);
    uObject* Strokes();
    void UpdateNativeShape();
    static void DrawFill(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Brush* fill) { Shape__DrawFill_fn(__this, dc, fill); }
    static void DrawStroke(Shape* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::Stroke* stroke) { Shape__DrawStroke_fn(__this, dc, stroke); }
};
// }

}}} // ::g::Fuse::Controls
