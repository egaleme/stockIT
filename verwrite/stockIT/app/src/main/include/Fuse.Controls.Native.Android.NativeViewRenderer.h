// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Uno.IDisposable.h>
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct NativeViewRenderer;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class NativeViewRenderer :1206
// {
struct NativeViewRenderer_type : uType
{
    ::g::Fuse::Controls::Native::INativeViewRenderer interface0;
    ::g::Uno::IDisposable interface1;
};

NativeViewRenderer_type* NativeViewRenderer_typeof();
void NativeViewRenderer__ctor__fn(NativeViewRenderer* __this, ::g::Java::Object* viewHandle);
void NativeViewRenderer__CreateBitmap_fn(int* w, int* h, ::g::Java::Object** __retval);
void NativeViewRenderer__DeleteTexture_fn(NativeViewRenderer* __this);
void NativeViewRenderer__DisposeBitmap_fn(::g::Java::Object* bitmap);
void NativeViewRenderer__FuseControlsNativeINativeViewRendererDraw_fn(NativeViewRenderer* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density);
void NativeViewRenderer__FuseControlsNativeINativeViewRendererInvalidate_fn(NativeViewRenderer* __this);
void NativeViewRenderer__New1_fn(::g::Java::Object* viewHandle, NativeViewRenderer** __retval);
void NativeViewRenderer__UnoIDisposableDispose_fn(NativeViewRenderer* __this);
void NativeViewRenderer__Upload_fn(::g::Java::Object* viewHandle, ::g::Java::Object* bitmapHandle, bool* reuse, int* w, int* h);

struct NativeViewRenderer : uObject
{
    uStrong< ::g::Java::Object*> _bitmapHandle;
    ::g::Uno::Int2 _oldSize;
    uint32_t _textureHandle;
    uStrong< ::g::Java::Object*> _viewHandle;
    bool _visualValid;

    void ctor_(::g::Java::Object* viewHandle);
    void DeleteTexture();
    static ::g::Java::Object* CreateBitmap(int w, int h);
    static void DisposeBitmap(::g::Java::Object* bitmap);
    static NativeViewRenderer* New1(::g::Java::Object* viewHandle);
    static void Upload(::g::Java::Object* viewHandle, ::g::Java::Object* bitmapHandle, bool reuse, int w, int h);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
