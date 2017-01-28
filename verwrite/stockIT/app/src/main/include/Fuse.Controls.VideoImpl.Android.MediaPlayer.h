// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.VideoImpl.IVideoPlayer.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace Android{struct MediaPlayer;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace Android{

// internal sealed extern class MediaPlayer :151
// {
struct MediaPlayer_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer interface1;
};

MediaPlayer_type* MediaPlayer_typeof();
void MediaPlayer__ctor__fn(MediaPlayer* __this);
void MediaPlayer__add_Buffering_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__remove_Buffering_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__add_Completion_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__remove_Completion_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__CreateMediaPlayer_fn(MediaPlayer* __this, ::g::Java::Object* surfaceHandle, ::g::Java::Object** __retval);
void MediaPlayer__CreateSurface_fn(MediaPlayer* __this, ::g::Java::Object* surfaceTexture, ::g::Java::Object** __retval);
void MediaPlayer__CreateSurfaceTexture_fn(MediaPlayer* __this, int* glHandle, ::g::Java::Object** __retval);
void MediaPlayer__Dispose_fn(MediaPlayer* __this);
void MediaPlayer__Dispose1_fn(::g::Java::Object* mediaplayerHandle, ::g::Java::Object* surfaceHandle, ::g::Java::Object* surfaceTextureHandle);
void MediaPlayer__get_Duration_fn(MediaPlayer* __this, double* __retval);
void MediaPlayer__add_Error_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__remove_Error_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__add_ErrorOccurred_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__remove_ErrorOccurred_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__add_FrameAvailable_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__remove_FrameAvailable_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__GetCurrentPosition_fn(::g::Java::Object* handle, int* __retval);
void MediaPlayer__GetDuration_fn(::g::Java::Object* handle, int* __retval);
void MediaPlayer__GetHeight_fn(::g::Java::Object* handle, int* __retval);
void MediaPlayer__GetOrientation_fn(::g::Java::Object* handle, int* __retval);
void MediaPlayer__GetWidth_fn(::g::Java::Object* handle, int* __retval);
void MediaPlayer__IsHardwareAccelerated_fn(bool* __retval);
void MediaPlayer__LoadAsync_fn(MediaPlayer* __this, uString* url);
void MediaPlayer__LoadAsync1_fn(MediaPlayer* __this, ::g::Uno::IO::BundleFile* file);
void MediaPlayer__LoadAsyncAsset_fn(MediaPlayer* __this, ::g::Java::Object* handle, uString* assetName);
void MediaPlayer__LoadAsyncUrl_fn(MediaPlayer* __this, ::g::Java::Object* handle, uString* url);
void MediaPlayer__New1_fn(MediaPlayer** __retval);
void MediaPlayer__OnBuffer_fn(MediaPlayer* __this, int* percent);
void MediaPlayer__OnCompletion_fn(MediaPlayer* __this);
void MediaPlayer__OnEnteringBackground_fn(MediaPlayer* __this, int* args);
void MediaPlayer__OnError_fn(MediaPlayer* __this, int* what, int* extra);
void MediaPlayer__OnErrorOccurred_fn(MediaPlayer* __this, uString* msg);
void MediaPlayer__OnFrameAvailable_fn(MediaPlayer* __this);
void MediaPlayer__OnPrepared_fn(MediaPlayer* __this);
void MediaPlayer__Pause_fn(MediaPlayer* __this);
void MediaPlayer__Pause1_fn(::g::Java::Object* handle);
void MediaPlayer__Play_fn(MediaPlayer* __this);
void MediaPlayer__Play1_fn(::g::Java::Object* handle);
void MediaPlayer__get_Position_fn(MediaPlayer* __this, double* __retval);
void MediaPlayer__set_Position_fn(MediaPlayer* __this, double* value);
void MediaPlayer__add_Prepared_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__remove_Prepared_fn(MediaPlayer* __this, uDelegate* value);
void MediaPlayer__get_RotationDegrees_fn(MediaPlayer* __this, int* __retval);
void MediaPlayer__SeekTo_fn(::g::Java::Object* handle, int* position);
void MediaPlayer__SetVolume_fn(::g::Java::Object* handle, float* left, float* right);
void MediaPlayer__get_Size_fn(MediaPlayer* __this, ::g::Uno::Int2* __retval);
void MediaPlayer__Update_fn(MediaPlayer* __this);
void MediaPlayer__UpdateTexture_fn(MediaPlayer* __this);
void MediaPlayer__UpdateTexture1_fn(::g::Java::Object* surfaceTextureHandle);
void MediaPlayer__get_VideoTexture_fn(MediaPlayer* __this, ::g::Uno::Graphics::VideoTexture** __retval);
void MediaPlayer__get_Volume_fn(MediaPlayer* __this, float* __retval);
void MediaPlayer__set_Volume_fn(MediaPlayer* __this, float* value);

struct MediaPlayer : uObject
{
    bool _frameAvailable;
    uStrong< ::g::Java::Object*> _handle;
    bool _isDisposed;
    uStrong< ::g::Java::Object*> _surface;
    uStrong< ::g::Java::Object*> _surfaceTexture;
    uStrong< ::g::Uno::Graphics::VideoTexture*> _videoTexture;
    float _volume;
    uStrong<uDelegate*> Buffering1;
    uStrong<uDelegate*> Completion1;
    uStrong<uDelegate*> Error1;
    uStrong<uDelegate*> ErrorOccurred1;
    uStrong<uDelegate*> FrameAvailable1;
    uStrong<uDelegate*> Prepared1;

    void ctor_();
    void add_Buffering(uDelegate* value);
    void remove_Buffering(uDelegate* value);
    void add_Completion(uDelegate* value);
    void remove_Completion(uDelegate* value);
    ::g::Java::Object* CreateMediaPlayer(::g::Java::Object* surfaceHandle);
    ::g::Java::Object* CreateSurface(::g::Java::Object* surfaceTexture);
    ::g::Java::Object* CreateSurfaceTexture(int glHandle);
    void Dispose();
    double Duration();
    void add_Error(uDelegate* value);
    void remove_Error(uDelegate* value);
    void add_ErrorOccurred(uDelegate* value);
    void remove_ErrorOccurred(uDelegate* value);
    void add_FrameAvailable(uDelegate* value);
    void remove_FrameAvailable(uDelegate* value);
    void LoadAsync(uString* url);
    void LoadAsync1(::g::Uno::IO::BundleFile* file);
    void LoadAsyncAsset(::g::Java::Object* handle, uString* assetName);
    void LoadAsyncUrl(::g::Java::Object* handle, uString* url);
    void OnBuffer(int percent);
    void OnCompletion();
    void OnEnteringBackground(int args);
    void OnError(int what, int extra);
    void OnErrorOccurred(uString* msg);
    void OnFrameAvailable();
    void OnPrepared();
    void Pause();
    void Play();
    double Position();
    void Position(double value);
    void add_Prepared(uDelegate* value);
    void remove_Prepared(uDelegate* value);
    int RotationDegrees();
    ::g::Uno::Int2 Size();
    void Update();
    void UpdateTexture();
    ::g::Uno::Graphics::VideoTexture* VideoTexture();
    float Volume();
    void Volume(float value);
    static void Dispose1(::g::Java::Object* mediaplayerHandle, ::g::Java::Object* surfaceHandle, ::g::Java::Object* surfaceTextureHandle);
    static int GetCurrentPosition(::g::Java::Object* handle);
    static int GetDuration(::g::Java::Object* handle);
    static int GetHeight(::g::Java::Object* handle);
    static int GetOrientation(::g::Java::Object* handle);
    static int GetWidth(::g::Java::Object* handle);
    static bool IsHardwareAccelerated();
    static MediaPlayer* New1();
    static void Pause1(::g::Java::Object* handle);
    static void Play1(::g::Java::Object* handle);
    static void SeekTo(::g::Java::Object* handle, int position);
    static void SetVolume(::g::Java::Object* handle, float left, float right);
    static void UpdateTexture1(::g::Java::Object* surfaceTextureHandle);
};
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::Android
