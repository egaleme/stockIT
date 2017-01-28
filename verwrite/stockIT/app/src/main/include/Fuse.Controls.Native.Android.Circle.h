// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.Shape.h>
#include <Fuse.Controls.Native.ICircleView.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Circle;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class Circle :58
// {
struct Circle_type : ::g::Fuse::Controls::Native::Android::Shape_type
{
    ::g::Fuse::Controls::Native::ICircleView interface3;
};

Circle_type* Circle_typeof();
void Circle__ctor_2_fn(Circle* __this);
void Circle__FuseControlsNativeICircleViewset_EffectiveEndAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_EndAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_StartAngleDegrees_fn(Circle* __this, float* value);
void Circle__FuseControlsNativeICircleViewset_UseAngle_fn(Circle* __this, bool* value);
void Circle__New1_fn(Circle** __retval);
void Circle__OnSizeChanged_fn(Circle* __this);
void Circle__UpdateShapeDrawable1_fn(Circle* __this, ::g::Java::Object* handle, bool* useAngle, float* width, float* height, float* startAngle, float* endAngle);
void Circle__UpdateShapeDrawable_fn(Circle* __this, ::g::Java::Object* handle, float* pixelsPerPoint);

struct Circle : ::g::Fuse::Controls::Native::Android::Shape
{
    float _endAngle;
    float _startAngle;
    bool _useAngle;

    void ctor_2();
    void UpdateShapeDrawable1(::g::Java::Object* handle, bool useAngle, float width, float height, float startAngle, float endAngle);
    static Circle* New1();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
