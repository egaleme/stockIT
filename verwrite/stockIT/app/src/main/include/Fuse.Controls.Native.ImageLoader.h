// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageLoader;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageLoader__ImageHandlePromise;}}}}
namespace g{namespace Fuse{namespace Resources{struct HttpImageSource;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// internal static extern class ImageLoader :89
// {
uClassType* ImageLoader_typeof();
void ImageLoader__Load_fn(::g::Fuse::Resources::HttpImageSource* http, ::g::Uno::Threading::Future1** __retval);
void ImageLoader__Load1_fn(uString* uri, ::g::Fuse::Controls::Native::ImageHandle** __retval);
void ImageLoader__Load2_fn(::g::Uno::IO::BundleFile* bundleFile, ::g::Fuse::Controls::Native::ImageHandle** __retval);
void ImageLoader__Load3_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::ImageHandle** __retval);
void ImageLoader__LoadFile_fn(uString* filePath, ::g::Java::Object** __retval);
void ImageLoader__LoadUri_fn(uString* uri, ::g::Java::Object** __retval);
void ImageLoader__Release_fn(::g::Java::Object* bitmap);
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle);

struct ImageLoader : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _imageHandleCache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _imageHandleCache() { return ImageLoader_typeof()->Init(), _imageHandleCache_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _pendingeImages_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _pendingeImages() { return ImageLoader_typeof()->Init(), _pendingeImages_; }

    static ::g::Uno::Threading::Future1* Load(::g::Fuse::Resources::HttpImageSource* http);
    static ::g::Fuse::Controls::Native::ImageHandle* Load1(uString* uri);
    static ::g::Fuse::Controls::Native::ImageHandle* Load2(::g::Uno::IO::BundleFile* bundleFile);
    static ::g::Fuse::Controls::Native::ImageHandle* Load3(::g::Uno::UX::FileSource* fileSource);
    static ::g::Java::Object* LoadFile(uString* filePath);
    static ::g::Java::Object* LoadUri(uString* uri);
    static void Release(::g::Java::Object* bitmap);
    static void ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle);
};
// }

}}}} // ::g::Fuse::Controls::Native
