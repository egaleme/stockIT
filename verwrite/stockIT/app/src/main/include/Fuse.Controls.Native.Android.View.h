// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct View;}}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public abstract extern class View :3090
// {
struct View_type : uType
{
    ::g::Fuse::Controls::Native::IView interface0;
    ::g::Uno::IDisposable interface1;
    void(*fp_Dispose)(::g::Fuse::Controls::Native::Android::View*);
    void(*fp_OnSizeChanged)(::g::Fuse::Controls::Native::Android::View*);
};

View_type* View_typeof();
void View__ctor__fn(View* __this, ::g::Java::Object* handle);
void View__set_Background_fn(View* __this, ::g::Fuse::Drawing::Brush* value);
void View__Dispose_fn(View* __this);
void View__get_Handle_fn(View* __this, ::g::Java::Object** __retval);
void View__Hide_fn(View* __this);
void View__OnSizeChanged_fn(View* __this);
void View__set_Opacity_fn(View* __this, float* value);
void View__get_Parent_fn(View* __this, uObject** __retval);
void View__set_Parent_fn(View* __this, uObject* value);
void View__set_Position_fn(View* __this, ::g::Uno::Float2* value);
void View__SetBackground_fn(::g::Java::Object* handle, int* argb);
void View__SetOpacity_fn(::g::Java::Object* handle, float* value);
void View__SetPivotXY_fn(::g::Java::Object* handle, float* x, float* y);
void View__SetRotation_fn(::g::Java::Object* handle, float* value);
void View__SetRotationX_fn(::g::Java::Object* handle, float* value);
void View__SetRotationY_fn(::g::Java::Object* handle, float* value);
void View__SetScaleXY_fn(::g::Java::Object* handle, float* x, float* y);
void View__SetTranslation_fn(::g::Java::Object* handle, float* x, float* y);
void View__SetVisible_fn(::g::Java::Object* handle, bool* isVisible);
void View__Show_fn(View* __this);
void View__get_Size_fn(View* __this, ::g::Uno::Float2* __retval);
void View__set_Size_fn(View* __this, ::g::Uno::Float2* value);
void View__set_Transform_fn(View* __this, ::g::Uno::Float4x4* value);

struct View : uObject
{
    uStrong< ::g::Java::Object*> _handle;
    uStrong<uObject*> _parent;
    ::g::Uno::Float3 _rotation;
    ::g::Uno::Float2 _scale;
    ::g::Uno::Float2 _size;
    ::g::Uno::Float2 _translation;

    void ctor_(::g::Java::Object* handle);
    void Background(::g::Fuse::Drawing::Brush* value);
    void Dispose() { (((View_type*)__type)->fp_Dispose)(this); }
    ::g::Java::Object* Handle();
    void Hide();
    void OnSizeChanged() { (((View_type*)__type)->fp_OnSizeChanged)(this); }
    void Opacity(float value);
    uObject* Parent();
    void Parent(uObject* value);
    void Position(::g::Uno::Float2 value);
    void Show();
    ::g::Uno::Float2 Size();
    void Size(::g::Uno::Float2 value);
    void Transform(::g::Uno::Float4x4 value);
    static void Dispose(View* __this) { View__Dispose_fn(__this); }
    static void OnSizeChanged(View* __this) { View__OnSizeChanged_fn(__this); }
    static void SetBackground(::g::Java::Object* handle, int argb);
    static void SetOpacity(::g::Java::Object* handle, float value);
    static void SetPivotXY(::g::Java::Object* handle, float x, float y);
    static void SetRotation(::g::Java::Object* handle, float value);
    static void SetRotationX(::g::Java::Object* handle, float value);
    static void SetRotationY(::g::Java::Object* handle, float value);
    static void SetScaleXY(::g::Java::Object* handle, float x, float y);
    static void SetTranslation(::g::Java::Object* handle, float x, float y);
    static void SetVisible(::g::Java::Object* handle, bool isVisible);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
