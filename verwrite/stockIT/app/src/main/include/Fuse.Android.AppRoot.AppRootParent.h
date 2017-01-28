// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.IViewParent.h>
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Android{struct AppRoot__AppRootParent;}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct View;}}}}}

namespace g{
namespace Fuse{
namespace Android{

// private sealed class AppRoot.AppRootParent :713
// {
struct AppRoot__AppRootParent_type : uType
{
    ::g::Fuse::Controls::Native::Android::IViewParent interface0;
};

AppRoot__AppRootParent_type* AppRoot__AppRootParent_typeof();
void AppRoot__AppRootParent__ctor__fn(AppRoot__AppRootParent* __this, uDelegate* setChildSize);
void AppRoot__AppRootParent__FuseControlsNativeAndroidIViewParentSetChildSize_fn(AppRoot__AppRootParent* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size);
void AppRoot__AppRootParent__New1_fn(uDelegate* setChildSize, AppRoot__AppRootParent** __retval);

struct AppRoot__AppRootParent : uObject
{
    uStrong<uDelegate*> _setChildSize;

    void ctor_(uDelegate* setChildSize);
    static AppRoot__AppRootParent* New1(uDelegate* setChildSize);
};
// }

}}} // ::g::Fuse::Android
