// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.IViewParent.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.IScrollView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct ScrollView;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class ScrollView :1402
// {
struct ScrollView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::Android::IViewParent interface2;
    ::g::Fuse::Controls::Native::IScrollView interface3;
    ::g::Fuse::Controls::Native::IViewGroup interface4;
};

ScrollView_type* ScrollView_typeof();
void ScrollView__ctor_1_fn(ScrollView* __this, uObject* host);
void ScrollView__AddCallback_fn(ScrollView* __this, ::g::Java::Object* handle, ::g::Java::Object** __retval);
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int* value);
void ScrollView__set_Content_fn(ScrollView* __this, ::g::Fuse::Controls::Native::Android::View* value);
void ScrollView__Create_fn(::g::Java::Object** __retval);
void ScrollView__Dispose_fn(ScrollView* __this);
void ScrollView__FuseControlsNativeAndroidIViewParentSetChildSize_fn(ScrollView* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size);
void ScrollView__FuseControlsNativeIViewGroupAdd_fn(ScrollView* __this, uObject* child);
void ScrollView__FuseControlsNativeIViewGroupAdd1_fn(ScrollView* __this, uObject* child, int* index);
void ScrollView__FuseControlsNativeIViewGroupset_ClipToBounds_fn(ScrollView* __this, bool* value);
void ScrollView__FuseControlsNativeIViewGroupset_HitTestEnabled_fn(ScrollView* __this, bool* value);
void ScrollView__FuseControlsNativeIViewGroupRemove_fn(ScrollView* __this, uObject* child);
void ScrollView__New1_fn(uObject* host, ScrollView** __retval);
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int* x, int* y, int* oldx, int* oldy);
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value);
void ScrollView__SetChildSize_fn(::g::Java::Object* handle, int* w, int* h);
void ScrollView__SetClipToBounds_fn(::g::Java::Object* handle, bool* clipToBounds);
void ScrollView__SetContent_fn(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
void ScrollView__SetScrollPosition_fn(::g::Java::Object* handle, int* x, int* y);

struct ScrollView : ::g::Fuse::Controls::Native::Android::View
{
    uStrong< ::g::Java::Object*> _callbackHandle;
    uStrong< ::g::Fuse::Controls::Native::Android::View*> _content;
    uStrong<uObject*> _host;

    void ctor_1(uObject* host);
    ::g::Java::Object* AddCallback(::g::Java::Object* handle);
    void AllowedScrollDirections(int value);
    void Content(::g::Fuse::Controls::Native::Android::View* value);
    void OnScrollChanged(int x, int y, int oldx, int oldy);
    void ScrollPosition(::g::Uno::Float2 value);
    static ::g::Java::Object* Create();
    static ScrollView* New1(uObject* host);
    static void SetChildSize(::g::Java::Object* handle, int w, int h);
    static void SetClipToBounds(::g::Java::Object* handle, bool clipToBounds);
    static void SetContent(::g::Java::Object* parentHandle, ::g::Java::Object* childHandle);
    static void SetScrollPosition(::g::Java::Object* handle, int x, int y);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
