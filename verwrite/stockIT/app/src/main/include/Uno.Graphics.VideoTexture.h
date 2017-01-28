// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\graphics\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public intrinsic sealed class VideoTexture :1724
// {
struct VideoTexture_type : uType
{
    ::g::Uno::IDisposable interface0;
};

VideoTexture_type* VideoTexture_typeof();
void VideoTexture__ctor__fn(VideoTexture* __this, uint32_t* handle);
void VideoTexture__Dispose_fn(VideoTexture* __this);
void VideoTexture__get_GLTextureHandle_fn(VideoTexture* __this, uint32_t* __retval);
void VideoTexture__set_GLTextureHandle_fn(VideoTexture* __this, uint32_t* value);
void VideoTexture__get_IsDisposed_fn(VideoTexture* __this, bool* __retval);
void VideoTexture__set_IsDisposed_fn(VideoTexture* __this, bool* value);
void VideoTexture__New1_fn(uint32_t* handle, VideoTexture** __retval);

struct VideoTexture : uObject
{
    bool IsMipmap;
    bool IsPow2;
    uint32_t _GLTextureHandle;
    bool _IsDisposed;

    void ctor_(uint32_t handle);
    void Dispose();
    uint32_t GLTextureHandle();
    void GLTextureHandle(uint32_t value);
    bool IsDisposed();
    void IsDisposed(bool value);
    static VideoTexture* New1(uint32_t handle);
};
// }

}}} // ::g::Uno::Graphics
