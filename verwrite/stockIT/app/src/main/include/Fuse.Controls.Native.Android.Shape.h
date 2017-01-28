// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Shape;}}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct GradientStop;}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal abstract extern class Shape :1554
// {
struct Shape_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IShapeView interface2;
    void(*fp_UpdateShapeDrawable)(::g::Fuse::Controls::Native::Android::Shape*, ::g::Java::Object*, float*);
};

Shape_type* Shape_typeof();
void Shape__ctor_1_fn(Shape* __this);
void Shape__Create_fn(::g::Java::Object** __retval);
void Shape__FuseControlsNativeIShapeViewUpdate_fn(Shape* __this, uArray* fills, uArray* strokes, float* pixelsPerPoint);
void Shape__GetLayer_fn(::g::Java::Object* handle, int* layer, ::g::Java::Object** __retval);
void Shape__MakeLayerDrawable_fn(::g::Java::Object* handle, int* layerCount, ::g::Java::Object** __retval);
void Shape__OnShapeChanged_fn(Shape* __this);
void Shape__SelectOffset_fn(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b, int* __retval);
void Shape__SetBrush_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush);
void Shape__SetLinearGradient_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::LinearGradient* linearGradient);
void Shape__SetShapeDrawableColor_fn(::g::Java::Object* shapeDrawable, int* r, int* g, int* b, int* a, int* opacity);
void Shape__SetShapeDrawableLinearGradient_fn(::g::Java::Object* shapeDrawable, float* startX, float* startY, float* endX, float* endY, uArray* colors, uArray* positions);
void Shape__SetShapeDrawableStrokeWidth_fn(::g::Java::Object* shapeDrawable, float* width);
void Shape__SetStroke_fn(Shape* __this, ::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke);

struct Shape : ::g::Fuse::Controls::Native::Android::View
{
    uStrong<uArray*> _fills;
    float _pixelsPerPoint;
    uStrong<uArray*> _strokes;

    void ctor_1();
    void OnShapeChanged();
    void SetBrush(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Brush* brush);
    void SetLinearGradient(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::LinearGradient* linearGradient);
    void SetStroke(::g::Java::Object* shapeDrawable, ::g::Fuse::Drawing::Stroke* stroke);
    void UpdateShapeDrawable(::g::Java::Object* handle, float pixelsPerPoint) { (((Shape_type*)__type)->fp_UpdateShapeDrawable)(this, handle, &pixelsPerPoint); }
    static ::g::Java::Object* Create();
    static ::g::Java::Object* GetLayer(::g::Java::Object* handle, int layer);
    static ::g::Java::Object* MakeLayerDrawable(::g::Java::Object* handle, int layerCount);
    static int SelectOffset(::g::Fuse::Drawing::GradientStop* a, ::g::Fuse::Drawing::GradientStop* b);
    static void SetShapeDrawableColor(::g::Java::Object* shapeDrawable, int r, int g, int b, int a, int opacity);
    static void SetShapeDrawableLinearGradient(::g::Java::Object* shapeDrawable, float startX, float startY, float endX, float endY, uArray* colors, uArray* positions);
    static void SetShapeDrawableStrokeWidth(::g::Java::Object* shapeDrawable, float width);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
