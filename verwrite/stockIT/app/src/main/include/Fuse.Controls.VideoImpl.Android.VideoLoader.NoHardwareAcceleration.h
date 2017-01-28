// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.VideoImpl.IVideoPlayer.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace Android{struct VideoLoader__NoHardwareAcceleration;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace Android{

// private sealed class VideoLoader.NoHardwareAcceleration :98
// {
::g::Uno::Threading::Future_type* VideoLoader__NoHardwareAcceleration_typeof();
void VideoLoader__NoHardwareAcceleration__ctor_7_fn(VideoLoader__NoHardwareAcceleration* __this);
void VideoLoader__NoHardwareAcceleration__Cancel_fn(VideoLoader__NoHardwareAcceleration* __this, bool* shutdownGracefully);
void VideoLoader__NoHardwareAcceleration__DoReject_fn(VideoLoader__NoHardwareAcceleration* __this);
void VideoLoader__NoHardwareAcceleration__New5_fn(VideoLoader__NoHardwareAcceleration** __retval);

struct VideoLoader__NoHardwareAcceleration : ::g::Uno::Threading::Promise
{
    void ctor_7();
    void DoReject();
    static VideoLoader__NoHardwareAcceleration* New5();
};
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::Android
