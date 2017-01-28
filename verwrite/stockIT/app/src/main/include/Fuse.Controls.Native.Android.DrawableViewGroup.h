// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.IViewParent.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Fuse.Controls.Native.IOffscreenRenderer.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct DrawableViewGroup;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class DrawableViewGroup :125
// {
struct DrawableViewGroup_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IViewGroup interface2;
    ::g::Fuse::Controls::Native::IOffscreenRenderer interface3;
    ::g::Fuse::Controls::Native::Android::IViewParent interface4;
    ::g::Fuse::Controls::Native::INativeViewRenderer interface5;
};

DrawableViewGroup_type* DrawableViewGroup_typeof();
void DrawableViewGroup__ctor_1_fn(DrawableViewGroup* __this, int* initialState);
void DrawableViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
void DrawableViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int* index);
void DrawableViewGroup__Create_fn(::g::Java::Object** __retval);
void DrawableViewGroup__Dispose_fn(DrawableViewGroup* __this);
void DrawableViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size);
void DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn(DrawableViewGroup* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density);
void DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn(DrawableViewGroup* __this);
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(DrawableViewGroup* __this);
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(DrawableViewGroup* __this);
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn(DrawableViewGroup* __this, uObject* child);
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn(DrawableViewGroup* __this, uObject* child, int* index);
void DrawableViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn(DrawableViewGroup* __this, bool* value);
void DrawableViewGroup__FuseControlsNativeIViewGroupset_HitTestEnabled_fn(DrawableViewGroup* __this, bool* value);
void DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn(DrawableViewGroup* __this, uObject* child);
void DrawableViewGroup__HideOffscreenParent_fn(::g::Java::Object* handle);
void DrawableViewGroup__InterceptTouchEvent_fn(DrawableViewGroup* __this, ::g::Java::Object* motionEvent, bool* __retval);
void DrawableViewGroup__New1_fn(int* initialState, DrawableViewGroup** __retval);
void DrawableViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
void DrawableViewGroup__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h);
void DrawableViewGroup__SetClipToBounds_fn(::g::Java::Object* handle, bool* clipToBounds);

struct DrawableViewGroup : ::g::Fuse::Controls::Native::Android::View
{
    uStrong< ::g::Java::Object*> _container;
    bool _hitTestEnabled;
    bool _isEnabled;
    uStrong<uObject*> _nativeViewRenderer;
    uStrong< ::g::Java::Object*> _offscreenParent;

    void ctor_1(int initialState);
    bool InterceptTouchEvent(::g::Java::Object* motionEvent);
    static void AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
    static void AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int index);
    static ::g::Java::Object* Create();
    static void HideOffscreenParent(::g::Java::Object* handle);
    static DrawableViewGroup* New1(int initialState);
    static void RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
    static void SetChildSize(::g::Java::Object* handle, int w, int h);
    static void SetClipToBounds(::g::Java::Object* handle, bool clipToBounds);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
