// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct VideoDiskCache;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct EventArgs;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal static class VideoDiskCache :892
// {
uClassType* VideoDiskCache_typeof();
void VideoDiskCache__GetFileExtension_fn(uString* fileName, uString** __retval);
void VideoDiskCache__GetFilePath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval);
void VideoDiskCache__OnWindowClosed_fn(uObject* sender, ::g::Uno::EventArgs* args);

struct VideoDiskCache : uObject
{
    static int _fileCount_;
    static int& _fileCount() { return VideoDiskCache_typeof()->Init(), _fileCount_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _files_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _files() { return VideoDiskCache_typeof()->Init(), _files_; }

    static uString* GetFileExtension(uString* fileName);
    static uString* GetFilePath(::g::Uno::UX::FileSource* fileSource);
    static void OnWindowClosed(uObject* sender, ::g::Uno::EventArgs* args);
};
// }

}}}} // ::g::Fuse::Controls::VideoImpl
