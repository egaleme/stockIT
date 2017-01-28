// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.VideoImpl.IVideoPlayer.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace Android{struct MediaPlayer;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace Android{struct VideoLoader__VideoPromise;}}}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace Android{

// private sealed class VideoLoader.VideoPromise :18
// {
::g::Uno::Threading::Future_type* VideoLoader__VideoPromise_typeof();
void VideoLoader__VideoPromise__ctor_7_fn(VideoLoader__VideoPromise* __this);
void VideoLoader__VideoPromise__ctor_8_fn(VideoLoader__VideoPromise* __this, uString* url);
void VideoLoader__VideoPromise__ctor_9_fn(VideoLoader__VideoPromise* __this, ::g::Uno::IO::BundleFile* file);
void VideoLoader__VideoPromise__Cancel_fn(VideoLoader__VideoPromise* __this, bool* shutdownGracefully);
void VideoLoader__VideoPromise__Dispose_fn(VideoLoader__VideoPromise* __this);
void VideoLoader__VideoPromise__DoDispose_fn(VideoLoader__VideoPromise* __this);
void VideoLoader__VideoPromise__HookEvents_fn(VideoLoader__VideoPromise* __this);
void VideoLoader__VideoPromise__New6_fn(uString* url, VideoLoader__VideoPromise** __retval);
void VideoLoader__VideoPromise__New7_fn(::g::Uno::IO::BundleFile* file, VideoLoader__VideoPromise** __retval);
void VideoLoader__VideoPromise__OnError_fn(VideoLoader__VideoPromise* __this, uObject* sender, uString* msg);
void VideoLoader__VideoPromise__OnPrepared_fn(VideoLoader__VideoPromise* __this, uObject* sender, ::g::Uno::EventArgs* args);
void VideoLoader__VideoPromise__ScheduleDispose_fn(VideoLoader__VideoPromise* __this);
void VideoLoader__VideoPromise__UnhookEvents_fn(VideoLoader__VideoPromise* __this);

struct VideoLoader__VideoPromise : ::g::Uno::Threading::Promise
{
    bool _isCancelled;
    bool _readyToDispose;
    uStrong< ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer*> _videoPlayer;

    void ctor_7();
    void ctor_8(uString* url);
    void ctor_9(::g::Uno::IO::BundleFile* file);
    void DoDispose();
    void HookEvents();
    void OnError(uObject* sender, uString* msg);
    void OnPrepared(uObject* sender, ::g::Uno::EventArgs* args);
    void ScheduleDispose();
    void UnhookEvents();
    static VideoLoader__VideoPromise* New6(uString* url);
    static VideoLoader__VideoPromise* New7(::g::Uno::IO::BundleFile* file);
};
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::Android
