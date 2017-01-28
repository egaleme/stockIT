// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.IViewParent.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct ViewGroup;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class ViewGroup :3318
// {
struct ViewGroup_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::Android::IViewParent interface2;
    ::g::Fuse::Controls::Native::IViewGroup interface3;
};

ViewGroup_type* ViewGroup_typeof();
void ViewGroup__ctor_1_fn(ViewGroup* __this);
void ViewGroup__Add_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child);
void ViewGroup__Add1_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child, int* index);
void ViewGroup__AddView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
void ViewGroup__AddView1_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int* index);
void ViewGroup__Create_fn(::g::Java::Object** __retval);
void ViewGroup__FuseControlsNativeAndroidIViewParentSetChildSize_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size);
void ViewGroup__FuseControlsNativeIViewGroupAdd_fn(ViewGroup* __this, uObject* child);
void ViewGroup__FuseControlsNativeIViewGroupAdd1_fn(ViewGroup* __this, uObject* child, int* index);
void ViewGroup__FuseControlsNativeIViewGroupset_ClipToBounds_fn(ViewGroup* __this, bool* value);
void ViewGroup__FuseControlsNativeIViewGroupset_HitTestEnabled_fn(ViewGroup* __this, bool* value);
void ViewGroup__FuseControlsNativeIViewGroupRemove_fn(ViewGroup* __this, uObject* child);
void ViewGroup__InstallTouchInterceptCallback_fn(::g::Java::Object* handle, uDelegate* callback);
void ViewGroup__InterceptTouchEvent_fn(ViewGroup* __this, ::g::Java::Object* motionEvent, bool* __retval);
void ViewGroup__New1_fn(ViewGroup** __retval);
void ViewGroup__Remove_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::Android::View* child);
void ViewGroup__RemoveView_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
void ViewGroup__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h);
void ViewGroup__SetClipToBounds_fn(::g::Java::Object* handle, bool* clipToBounds);

struct ViewGroup : ::g::Fuse::Controls::Native::Android::View
{
    bool _hitTestEnabled;

    void ctor_1();
    void Add(::g::Fuse::Controls::Native::Android::View* child);
    void Add1(::g::Fuse::Controls::Native::Android::View* child, int index);
    bool InterceptTouchEvent(::g::Java::Object* motionEvent);
    void Remove(::g::Fuse::Controls::Native::Android::View* child);
    static void AddView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
    static void AddView1(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle, int index);
    static ::g::Java::Object* Create();
    static void InstallTouchInterceptCallback(::g::Java::Object* handle, uDelegate* callback);
    static ViewGroup* New1();
    static void RemoveView(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
    static void SetChildSize(::g::Java::Object* handle, int w, int h);
    static void SetClipToBounds(::g::Java::Object* handle, bool clipToBounds);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
