// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.Shape.h>
#include <Fuse.Controls.Native.IRectangleView.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Rectangle;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class Rectangle :1363
// {
struct Rectangle_type : ::g::Fuse::Controls::Native::Android::Shape_type
{
    ::g::Fuse::Controls::Native::IRectangleView interface3;
};

Rectangle_type* Rectangle_typeof();
void Rectangle__ctor_2_fn(Rectangle* __this);
void Rectangle__FuseControlsNativeIRectangleViewset_CornerRadius_fn(Rectangle* __this, ::g::Uno::Float4* value);
void Rectangle__New1_fn(Rectangle** __retval);
void Rectangle__UpdateShapeDrawable_fn(Rectangle* __this, ::g::Java::Object* handle, float* pixelsPerPoint);
void Rectangle__UpdateShapeDrawable1_fn(Rectangle* __this, ::g::Java::Object* handle, float* x, float* y, float* z, float* w);

struct Rectangle : ::g::Fuse::Controls::Native::Android::Shape
{
    ::g::Uno::Float4 _cornerRadius;

    void ctor_2();
    void UpdateShapeDrawable1(::g::Java::Object* handle, float x, float y, float z, float w);
    static Rectangle* New1();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
