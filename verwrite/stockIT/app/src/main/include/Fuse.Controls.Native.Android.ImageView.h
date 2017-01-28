// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.Native.IImageView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.Float4.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct ImageView;}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle;}}}}
namespace g{namespace Fuse{namespace Resources{struct FileImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct HttpImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MultiDensityImageSource;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Exception;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class ImageView :507
// {
struct ImageView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IImageView interface2;
};

ImageView_type* ImageView_typeof();
void ImageView__ctor_1_fn(ImageView* __this);
void ImageView__ClearBitmap_fn(::g::Java::Object* handle);
void ImageView__Create_fn(::g::Java::Object* container, ::g::Java::Object** __retval);
void ImageView__CreateContainer_fn(::g::Java::Object** __retval);
void ImageView__Dispose_fn(ImageView* __this);
void ImageView__set_ImageHandle_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* value);
void ImageView__set_ImageSource_fn(ImageView* __this, ::g::Fuse::Resources::ImageSource* value);
void ImageView__New1_fn(ImageView** __retval);
void ImageView__OnImageLoaded_fn(ImageView* __this, ::g::Fuse::Controls::Native::ImageHandle* handle);
void ImageView__OnImageLoadFailed_fn(ImageView* __this, ::g::Uno::Exception* e);
void ImageView__SetBitmap_fn(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle);
void ImageView__SetImageMatrix_fn(::g::Java::Object* handle, float* x, float* y, float* scaleX, float* scaleY);
void ImageView__SetImageSize_fn(ImageView* __this, ::g::Uno::Float2* size);
void ImageView__SetImageSize1_fn(::g::Java::Object* handle, uArray* wh);
void ImageView__SetTint_fn(::g::Java::Object* handle, int* rgba);
void ImageView__set_TintColor_fn(ImageView* __this, ::g::Uno::Float4* value);
void ImageView__UpdateImage_fn(ImageView* __this, ::g::Fuse::Resources::FileImageSource* fileImageSource);
void ImageView__UpdateImage1_fn(ImageView* __this, ::g::Fuse::Resources::HttpImageSource* http);
void ImageView__UpdateImage2_fn(ImageView* __this, ::g::Fuse::Resources::MultiDensityImageSource* multi);
void ImageView__UpdateImageTransform_fn(ImageView* __this, float* density, ::g::Uno::Float2* origin, ::g::Uno::Float2* scale, ::g::Uno::Float2* drawSize);

struct ImageView : ::g::Fuse::Controls::Native::Android::View
{
    uStrong<uObject*> _imageHandle;
    uStrong< ::g::Java::Object*> _imageView;
    ::g::Uno::Float4 _tintColor;

    void ctor_1();
    void ImageHandle(::g::Fuse::Controls::Native::ImageHandle* value);
    void ImageSource(::g::Fuse::Resources::ImageSource* value);
    void OnImageLoaded(::g::Fuse::Controls::Native::ImageHandle* handle);
    void OnImageLoadFailed(::g::Uno::Exception* e);
    void SetImageSize(::g::Uno::Float2 size);
    void TintColor(::g::Uno::Float4 value);
    void UpdateImage(::g::Fuse::Resources::FileImageSource* fileImageSource);
    void UpdateImage1(::g::Fuse::Resources::HttpImageSource* http);
    void UpdateImage2(::g::Fuse::Resources::MultiDensityImageSource* multi);
    void UpdateImageTransform(float density, ::g::Uno::Float2 origin, ::g::Uno::Float2 scale, ::g::Uno::Float2 drawSize);
    static void ClearBitmap(::g::Java::Object* handle);
    static ::g::Java::Object* Create(::g::Java::Object* container);
    static ::g::Java::Object* CreateContainer();
    static ImageView* New1();
    static void SetBitmap(::g::Java::Object* handle, ::g::Java::Object* bitmapHandle);
    static void SetImageMatrix(::g::Java::Object* handle, float x, float y, float scaleX, float scaleY);
    static void SetImageSize1(::g::Java::Object* handle, uArray* wh);
    static void SetTint(::g::Java::Object* handle, int rgba);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
