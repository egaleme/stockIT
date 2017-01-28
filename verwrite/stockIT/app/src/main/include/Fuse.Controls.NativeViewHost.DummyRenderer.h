// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Fuse.Controls.Native.IOffscreenRenderer.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost__DummyRenderer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class NativeViewHost.DummyRenderer :1560
// {
struct NativeViewHost__DummyRenderer_type : uType
{
    ::g::Fuse::Controls::Native::IOffscreenRenderer interface0;
    ::g::Fuse::Controls::Native::INativeViewRenderer interface1;
    ::g::Uno::IDisposable interface2;
};

NativeViewHost__DummyRenderer_type* NativeViewHost__DummyRenderer_typeof();
void NativeViewHost__DummyRenderer__ctor__fn(NativeViewHost__DummyRenderer* __this);
void NativeViewHost__DummyRenderer__FuseControlsNativeINativeViewRendererDraw_fn(NativeViewHost__DummyRenderer* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density);
void NativeViewHost__DummyRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn(NativeViewHost__DummyRenderer* __this);
void NativeViewHost__DummyRenderer__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(NativeViewHost__DummyRenderer* __this);
void NativeViewHost__DummyRenderer__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(NativeViewHost__DummyRenderer* __this);
void NativeViewHost__DummyRenderer__get_Instance_fn(NativeViewHost__DummyRenderer** __retval);
void NativeViewHost__DummyRenderer__New1_fn(NativeViewHost__DummyRenderer** __retval);
void NativeViewHost__DummyRenderer__UnoIDisposableDispose_fn(NativeViewHost__DummyRenderer* __this);

struct NativeViewHost__DummyRenderer : uObject
{
    static uSStrong<NativeViewHost__DummyRenderer*> _instance_;
    static uSStrong<NativeViewHost__DummyRenderer*>& _instance() { return _instance_; }

    void ctor_();
    static NativeViewHost__DummyRenderer* New1();
    static NativeViewHost__DummyRenderer* Instance();
};
// }

}}} // ::g::Fuse::Controls
