// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.ImageHandle.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageLoader__ImageHandlePromise;}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// private sealed extern class ImageLoader.ImageHandlePromise :212
// {
::g::Uno::Threading::Future_type* ImageLoader__ImageHandlePromise_typeof();
void ImageLoader__ImageHandlePromise__ctor_7_fn(ImageLoader__ImageHandlePromise* __this, uString* url);
void ImageLoader__ImageHandlePromise__Dispose_fn(ImageLoader__ImageHandlePromise* __this);
void ImageLoader__ImageHandlePromise__Download_fn(ImageLoader__ImageHandlePromise* __this, ::g::Java::Object** __retval);
void ImageLoader__ImageHandlePromise__Download1_fn(uString* url, ::g::Java::Object** __retval);
void ImageLoader__ImageHandlePromise__New5_fn(uString* url, ImageLoader__ImageHandlePromise** __retval);
void ImageLoader__ImageHandlePromise__OnDone_fn(ImageLoader__ImageHandlePromise* __this, ::g::Java::Object* obj);

struct ImageLoader__ImageHandlePromise : ::g::Uno::Threading::Promise
{
    uStrong< ::g::Uno::Collections::List*> _dispose;
    uStrong<uString*> _url;

    void ctor_7(uString* url);
    ::g::Java::Object* Download();
    void OnDone(::g::Java::Object* obj);
    static ::g::Java::Object* Download1(uString* url);
    static ImageLoader__ImageHandlePromise* New5(uString* url);
};
// }

}}}} // ::g::Fuse::Controls::Native
