// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost;}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost__Disable;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed extern class NativeViewHost.Disable :1313
// {
struct NativeViewHost__Disable_type : uType
{
    ::g::Uno::IDisposable interface0;
};

NativeViewHost__Disable_type* NativeViewHost__Disable_typeof();
void NativeViewHost__Disable__ctor__fn(NativeViewHost__Disable* __this, ::g::Fuse::Controls::NativeViewHost* host);
void NativeViewHost__Disable__New1_fn(::g::Fuse::Controls::NativeViewHost* host, NativeViewHost__Disable** __retval);
void NativeViewHost__Disable__NextFrame_fn(NativeViewHost__Disable* __this);
void NativeViewHost__Disable__UnoIDisposableDispose_fn(NativeViewHost__Disable* __this);

struct NativeViewHost__Disable : uObject
{
    bool _canceled;
    uStrong< ::g::Fuse::Controls::NativeViewHost*> _host;

    void ctor_(::g::Fuse::Controls::NativeViewHost* host);
    void NextFrame();
    static NativeViewHost__Disable* New1(::g::Fuse::Controls::NativeViewHost* host);
};
// }

}}} // ::g::Fuse::Controls
