// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Controls.AutoCapitalizationHint.h>
#include <Fuse.Controls.AutoCorrectHint.h>
#include <Fuse.Controls.Native.ICircleView.h>
#include <Fuse.Controls.Native.IGraphicsView.h>
#include <Fuse.Controls.Native.IImageView.h>
#include <Fuse.Controls.Native.ILabelView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.ImageHandle.h>
#include <Fuse.Controls.Native.ImageLoader.h>
#include <Fuse.Controls.Native.ImageLoader.ImageHandlePromise.h>
#include <Fuse.Controls.Native.ImageLoader.PendingPromise.h>
#include <Fuse.Controls.Native.INativeViewRenderer.h>
#include <Fuse.Controls.Native.IOffscreenRenderer.h>
#include <Fuse.Controls.Native.IRangeViewHost.h>
#include <Fuse.Controls.Native.IRectangleView.h>
#include <Fuse.Controls.Native.IScrollView.h>
#include <Fuse.Controls.Native.IScrollViewHost.h>
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.ITextEdit.h>
#include <Fuse.Controls.Native.ITextEditHost.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IToggleView.h>
#include <Fuse.Controls.Native.IToggleViewHost.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewGroup.h>
#include <Fuse.Controls.Native.OffscreenRendering.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.TextInputActionType.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Font.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.UpdateManager.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[3];
static uType* TYPES[11];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface ICircleView :473
// {
uInterfaceType* ICircleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ICircleView", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IGraphicsView :378
// {
uInterfaceType* IGraphicsView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IGraphicsView", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IImageView :456
// {
uInterfaceType* IImageView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IImageView", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface ILabelView :384
// {
uInterfaceType* ILabelView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ILabelView", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface ILeafView :373
// {
uInterfaceType* ILeafView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ILeafView", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// internal sealed extern class ImageHandle :41
// {
static void ImageHandle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ImageHandle is disposed");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ImageHandle_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _isDisposed), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _name), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::ImageHandle, _pinCount), 0);
}

ImageHandle_type* ImageHandle_typeof()
{
    static uSStrong<ImageHandle_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageHandle);
    options.TypeSize = sizeof(ImageHandle_type);
    type = (ImageHandle_type*)uClassType::New("Fuse.Controls.Native.ImageHandle", options);
    type->fp_build_ = ImageHandle_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageHandle__Dispose_fn;
    return type;
}

// public ImageHandle(string name, object handle) :62
void ImageHandle__ctor__fn(ImageHandle* __this, uString* name, uObject* handle)
{
    __this->ctor_(name, handle);
}

// public void Dispose() :75
void ImageHandle__Dispose_fn(ImageHandle* __this)
{
    __this->Dispose();
}

// public object get_Handle() :45
void ImageHandle__get_Handle_fn(ImageHandle* __this, uObject** __retval)
{
    *__retval = __this->Handle();
}

// public string get_Name() :55
void ImageHandle__get_Name_fn(ImageHandle* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public ImageHandle New(string name, object handle) :62
void ImageHandle__New1_fn(uString* name, uObject* handle, ImageHandle** __retval)
{
    *__retval = ImageHandle::New1(name, handle);
}

// public void Pin() :69
void ImageHandle__Pin_fn(ImageHandle* __this)
{
    __this->Pin();
}

// public ImageHandle(string name, object handle) [instance] :62
void ImageHandle::ctor_(uString* name, uObject* handle)
{
    _handle = handle;
    _name = name;
    Pin();
}

// public void Dispose() [instance] :75
void ImageHandle::Dispose()
{
    if (!_isDisposed)
    {
        _pinCount--;

        if (_pinCount == 0)
        {
            ::g::Fuse::Controls::Native::ImageLoader::ReleaseHandle(this);
            _isDisposed = true;
        }
    }
}

// public object get_Handle() [instance] :45
uObject* ImageHandle::Handle()
{
    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"ImageHandle...*/]));

    return _handle;
}

// public string get_Name() [instance] :55
uString* ImageHandle::Name()
{
    return _name;
}

// public void Pin() [instance] :69
void ImageHandle::Pin()
{
    _pinCount++;
}

// public ImageHandle New(string name, object handle) [static] :62
ImageHandle* ImageHandle::New1(uString* name, uObject* handle)
{
    ImageHandle* obj1 = (ImageHandle*)uNew(ImageHandle_typeof());
    obj1->ctor_(name, handle);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// private sealed extern class ImageLoader.ImageHandlePromise :212
// {
static void ImageLoader__ImageHandlePromise_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Failed to load image from: ");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Threading::Future1_typeof()->MakeType(::g::Java::Object_typeof(), NULL), NULL);
    ::TYPES[1] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Func_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Threading::Future1_typeof()->MakeType(::g::Java::Object_typeof(), NULL), NULL);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::TYPES[0/*Uno.Collections.List<Uno.Threading.Future<Java.Object>>*/], offsetof(::g::Fuse::Controls::Native::ImageLoader__ImageHandlePromise, _dispose), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::Native::ImageLoader__ImageHandlePromise, _url), 0);
}

::g::Uno::Threading::Future_type* ImageLoader__ImageHandlePromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageLoader__ImageHandlePromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Native.ImageLoader.ImageHandlePromise", options);
    type->fp_build_ = ImageLoader__ImageHandlePromise_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))ImageLoader__ImageHandlePromise__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageLoader__ImageHandlePromise__Dispose_fn;
    return type;
}

// public ImageHandlePromise(string url) :218
void ImageLoader__ImageHandlePromise__ctor_7_fn(ImageLoader__ImageHandlePromise* __this, uString* url)
{
    __this->ctor_7(url);
}

// public override sealed void Dispose() :267
void ImageLoader__ImageHandlePromise__Dispose_fn(ImageLoader__ImageHandlePromise* __this)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Threading::Future1*> > ret3;
    ::g::Uno::Threading::Future1__Dispose_fn(__this);

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Threading::Future1*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_dispose), &ret3), ret3); enum1.MoveNext(::TYPES[4/*Uno.Collections.List<Uno.Threading.Future<Java.Object>>.Enumerator*/]); )
    {
        ::g::Uno::Threading::Future1* p = enum1.Current(::TYPES[4/*Uno.Collections.List<Uno.Threading.Future<Java.Object>>.Enumerator*/]);
        uPtr(p)->Dispose();
    }
}

// private Java.Object Download() :243
void ImageLoader__ImageHandlePromise__Download_fn(ImageLoader__ImageHandlePromise* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Download();
}

// private static Java.Object Download(string url) :249
void ImageLoader__ImageHandlePromise__Download1_fn(uString* url, ::g::Java::Object** __retval)
{
    *__retval = ImageLoader__ImageHandlePromise::Download1(url);
}

// public ImageHandlePromise New(string url) :218
void ImageLoader__ImageHandlePromise__New5_fn(uString* url, ImageLoader__ImageHandlePromise** __retval)
{
    *__retval = ImageLoader__ImageHandlePromise::New5(url);
}

// private void OnDone(Java.Object obj) :228
void ImageLoader__ImageHandlePromise__OnDone_fn(ImageLoader__ImageHandlePromise* __this, ::g::Java::Object* obj)
{
    __this->OnDone(obj);
}

// public ImageHandlePromise(string url) [instance] :218
void ImageLoader__ImageHandlePromise::ctor_7(uString* url)
{
    _dispose = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Threading.Future<Java.Object>>*/]));
    ctor_5(::g::Fuse::UpdateManager::Dispatcher());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(::g::Fuse::Controls::Native::ImageLoader::_pendingeImages()), url, this);
    _url = url;
    ::g::Uno::Threading::Future1* download = (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run1(::TYPES[1/*Uno.Threading.Promise<Java.Object>*/], ::g::Fuse::UpdateManager::Dispatcher(), uDelegate::New(::TYPES[2/*Uno.Func<Java.Object>*/], (void*)ImageLoader__ImageHandlePromise__Download_fn, this));
    ::g::Uno::Threading::Future1* then = (::g::Uno::Threading::Future1*)uPtr(download)->Then(uDelegate::New(::TYPES[3/*Uno.Action<Java.Object>*/], (void*)ImageLoader__ImageHandlePromise__OnDone_fn, this));
    ::g::Uno::Collections::List__Add_fn(uPtr(_dispose), download);
    ::g::Uno::Collections::List__Add_fn(uPtr(_dispose), then);
}

// private Java.Object Download() [instance] :243
::g::Java::Object* ImageLoader__ImageHandlePromise::Download()
{
    return ImageLoader__ImageHandlePromise::Download1(_url);
}

// private void OnDone(Java.Object obj) [instance] :228
void ImageLoader__ImageHandlePromise::OnDone(::g::Java::Object* obj)
{
    bool ret4;

    if (obj == NULL)
        Reject(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[1/*"Failed to l...*/], _url)));
    else
    {
        ::g::Fuse::Controls::Native::ImageHandle* imageHandle = ::g::Fuse::Controls::Native::ImageHandle::New1(_url, obj);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(::g::Fuse::Controls::Native::ImageLoader::_imageHandleCache()), _url, imageHandle);
        ::g::Uno::Threading::Promise__Resolve_fn(this, imageHandle);
    }

    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(::g::Fuse::Controls::Native::ImageLoader::_pendingeImages()), _url, &ret4);
}

// private static Java.Object Download(string url) [static] :249
::g::Java::Object* ImageLoader__ImageHandlePromise::Download1(uString* url)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Download1198", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _uurl=url;
        jstring _url = JniHelper::UnoToJavaString(_uurl);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_url);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_url!=NULL) { U_JNIVAR->DeleteLocalRef(_url); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ImageHandlePromise New(string url) [static] :218
ImageLoader__ImageHandlePromise* ImageLoader__ImageHandlePromise::New5(uString* url)
{
    ImageLoader__ImageHandlePromise* obj2 = (ImageLoader__ImageHandlePromise*)uNew(ImageLoader__ImageHandlePromise_typeof());
    obj2->ctor_7(url);
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// internal static extern class ImageLoader :89
// {
// static ImageLoader() :89
static void ImageLoader__cctor__fn(uType* __type)
{
    ImageLoader::_imageHandleCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[5/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageHandle>*/]));
    ImageLoader::_pendingeImages_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[6/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageLoader.ImageHandlePromise>*/]));
}

static void ImageLoader_build(uType* type)
{
    ::STRINGS[2] = uString::Const("/tempImage");
    ::TYPES[5] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ImageLoader__ImageHandlePromise_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[9] = ::g::Java::Object_typeof();
    type->SetFields(0,
        ::TYPES[5/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageHandle>*/], (uintptr_t)&::g::Fuse::Controls::Native::ImageLoader::_imageHandleCache_, uFieldFlagsStatic,
        ::TYPES[6/*Uno.Collections.Dictionary<string, Fuse.Controls.Native.ImageLoader.ImageHandlePromise>*/], (uintptr_t)&::g::Fuse::Controls::Native::ImageLoader::_pendingeImages_, uFieldFlagsStatic);
}

uClassType* ImageLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ImageLoader", options);
    type->fp_build_ = ImageLoader_build;
    type->fp_cctor_ = ImageLoader__cctor__fn;
    return type;
}

// public static extern Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> Load(Fuse.Resources.HttpImageSource http) :170
void ImageLoader__Load_fn(::g::Fuse::Resources::HttpImageSource* http, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageLoader::Load(http);
}

// public static Fuse.Controls.Native.ImageHandle Load(string uri) :138
void ImageLoader__Load1_fn(uString* uri, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load1(uri);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile) :126
void ImageLoader__Load2_fn(::g::Uno::IO::BundleFile* bundleFile, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load2(bundleFile);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource) :98
void ImageLoader__Load3_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load3(fileSource);
}

// private static extern Java.Object LoadFile(string filePath) :313
void ImageLoader__LoadFile_fn(uString* filePath, ::g::Java::Object** __retval)
{
    *__retval = ImageLoader::LoadFile(filePath);
}

// private static extern Java.Object LoadUri(string uri) :292
void ImageLoader__LoadUri_fn(uString* uri, ::g::Java::Object** __retval)
{
    *__retval = ImageLoader::LoadUri(uri);
}

// private static extern void Release(Java.Object bitmap) :286
void ImageLoader__Release_fn(::g::Java::Object* bitmap)
{
    ImageLoader::Release(bitmap);
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) :275
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader::ReleaseHandle(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ImageLoader::_imageHandleCache_;
uSStrong< ::g::Uno::Collections::Dictionary*> ImageLoader::_pendingeImages_;

// public static extern Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> Load(Fuse.Resources.HttpImageSource http) [static] :170
::g::Uno::Threading::Future1* ImageLoader::Load(::g::Fuse::Resources::HttpImageSource* http)
{
    ImageLoader_typeof()->Init();
    bool ret1;
    ::g::Fuse::Controls::Native::ImageHandle* ret2;
    ::g::Uno::Threading::Promise* ret3;
    bool ret4;
    ImageLoader__ImageHandlePromise* pending = NULL;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(http)->Url(), &ret1), ret1))
    {
        ::g::Fuse::Controls::Native::ImageHandle* h = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(http)->Url(), &ret2), ret2);
        uPtr(h)->Pin();
        return (::g::Uno::Threading::Promise__New2_fn(::TYPES[7/*Uno.Threading.Promise<Fuse.Controls.Native.ImageHandle>*/], h, &ret3), ret3);
    }
    else if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_pendingeImages()), uPtr(http)->Url(), (void**)(&pending), &ret4), ret4))
        return ImageLoader__PendingPromise::New5(pending);
    else
        return ImageLoader__ImageHandlePromise::New5(uPtr(http)->Url());
}

// public static Fuse.Controls.Native.ImageHandle Load(string uri) [static] :138
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load1(uString* uri)
{
    ImageLoader_typeof()->Init();
    bool ret5;
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache()), uri, (void**)(&handle), &ret5), ret5))
        uPtr(handle)->Pin();
    else
    {
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(uri, ImageLoader::LoadUri(uri));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache()), uri, handle);
    }

    return handle;
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile) [static] :126
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load2(::g::Uno::IO::BundleFile* bundleFile)
{
    ImageLoader_typeof()->Init();
    return ImageLoader::Load1(uPtr(bundleFile)->BundlePath());
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource) [static] :98
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load3(::g::Uno::UX::FileSource* fileSource)
{
    ImageLoader_typeof()->Init();
    bool ret6;
    ::g::Fuse::Controls::Native::ImageHandle* handle = NULL;

    if (uIs(fileSource, ::TYPES[8/*Uno.UX.BundleFileSource*/]))
        handle = ImageLoader::Load2(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[8/*Uno.UX.BundleFileSource*/]))->BundleFile);
    else if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(fileSource)->Name, (void**)(&handle), &ret6), ret6))
        uPtr(handle)->Pin();
    else
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[2/*"/tempImage"*/]);
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(fileSource->Name, ImageLoader::LoadFile(path));
        ::g::Uno::IO::File::Delete(path);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache()), fileSource->Name, handle);
    }

    return handle;
}

// private static extern Java.Object LoadFile(string filePath) [static] :313
::g::Java::Object* ImageLoader::LoadFile(uString* filePath)
{
    ImageLoader_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadFile199", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _ufilePath=filePath;
        jstring _filePath = JniHelper::UnoToJavaString(_ufilePath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_filePath);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_filePath!=NULL) { U_JNIVAR->DeleteLocalRef(_filePath); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern Java.Object LoadUri(string uri) [static] :292
::g::Java::Object* ImageLoader::LoadUri(uString* uri)
{
    ImageLoader_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadUri200", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _uuri=uri;
        jstring _uri = JniHelper::UnoToJavaString(_uuri);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_uri);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_uri!=NULL) { U_JNIVAR->DeleteLocalRef(_uri); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern void Release(Java.Object bitmap) [static] :286
void ImageLoader::Release(::g::Java::Object* bitmap)
{
    ImageLoader_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Release201", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _ubitmap=bitmap;
        jobject _bitmap = (_ubitmap==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_bitmap);
        
        if (_bitmap!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmap); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) [static] :275
void ImageLoader::ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader_typeof()->Init();
    bool ret7;
    bool ret8;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(handle)->Name(), &ret7), ret7))
    {
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(ImageLoader::_imageHandleCache()), uPtr(handle)->Name(), &ret8);
        ImageLoader::Release(uCast< ::g::Java::Object*>(handle->Handle(), ::TYPES[9/*Java.Object*/]));
    }
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface INativeViewRenderer :493
// {
uInterfaceType* INativeViewRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.INativeViewRenderer", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IOffscreenRenderer :505
// {
uInterfaceType* IOffscreenRenderer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IOffscreenRenderer", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IRangeViewHost :425
// {
uInterfaceType* IRangeViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IRangeViewHost", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IRectangleView :468
// {
uInterfaceType* IRectangleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IRectangleView", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IScrollView :481
// {
uInterfaceType* IScrollView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollView", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IScrollViewHost :487
// {
uInterfaceType* IScrollViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollViewHost", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IShapeView :463
// {
uInterfaceType* IShapeView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IShapeView", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface ITextEdit :430
// {
uInterfaceType* ITextEdit_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextEdit", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface ITextEditHost :402
// {
uInterfaceType* ITextEditHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextEditHost", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface ITextView :389
// {
uInterfaceType* ITextView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextView", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IToggleView :410
// {
uInterfaceType* IToggleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IToggleView", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IToggleViewHost :415
// {
uInterfaceType* IToggleViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IToggleViewHost", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IView :360
// {
uInterfaceType* IView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IView", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public abstract interface IViewGroup :447
// {
uInterfaceType* IViewGroup_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IViewGroup", 0, 0);
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// public enum OffscreenRendering :499
uEnumType* OffscreenRendering_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.OffscreenRendering", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Enabled", 0LL,
        "Disabled", 1LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\$.uno
// ---------------------------------------------------------------------------------------

// private sealed extern class ImageLoader.PendingPromise :189
// {
static void ImageLoader__PendingPromise_build(uType* type)
{
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), NULL), offsetof(::g::Fuse::Controls::Native::ImageLoader__PendingPromise, _future), 0);
}

::g::Uno::Threading::Future_type* ImageLoader__PendingPromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageLoader__PendingPromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Native.ImageLoader.PendingPromise", options);
    type->fp_build_ = ImageLoader__PendingPromise_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))ImageLoader__PendingPromise__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageLoader__PendingPromise__Dispose_fn;
    return type;
}

// public PendingPromise(Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> future) :193
void ImageLoader__PendingPromise__ctor_7_fn(ImageLoader__PendingPromise* __this, ::g::Uno::Threading::Future1* future)
{
    __this->ctor_7(future);
}

// public override sealed void Dispose() :205
void ImageLoader__PendingPromise__Dispose_fn(ImageLoader__PendingPromise* __this)
{
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    uPtr(__this->_future)->Dispose();
}

// public PendingPromise New(Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> future) :193
void ImageLoader__PendingPromise__New5_fn(::g::Uno::Threading::Future1* future, ImageLoader__PendingPromise** __retval)
{
    *__retval = ImageLoader__PendingPromise::New5(future);
}

// private void OnResolve(Fuse.Controls.Native.ImageHandle handle) :199
void ImageLoader__PendingPromise__OnResolve_fn(ImageLoader__PendingPromise* __this, ::g::Fuse::Controls::Native::ImageHandle* handle)
{
    __this->OnResolve(handle);
}

// public PendingPromise(Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> future) [instance] :193
void ImageLoader__PendingPromise::ctor_7(::g::Uno::Threading::Future1* future)
{
    ctor_3();
    _future = future;
    uPtr(_future)->Then(uDelegate::New(::TYPES[10/*Uno.Action<Fuse.Controls.Native.ImageHandle>*/], (void*)ImageLoader__PendingPromise__OnResolve_fn, this));
}

// private void OnResolve(Fuse.Controls.Native.ImageHandle handle) [instance] :199
void ImageLoader__PendingPromise::OnResolve(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    uPtr(handle)->Pin();
    ::g::Uno::Threading::Promise__Resolve_fn(this, handle);
}

// public PendingPromise New(Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> future) [static] :193
ImageLoader__PendingPromise* ImageLoader__PendingPromise::New5(::g::Uno::Threading::Future1* future)
{
    ImageLoader__PendingPromise* obj1 = (ImageLoader__PendingPromise*)uNew(ImageLoader__PendingPromise_typeof());
    obj1->ctor_7(future);
    return obj1;
}
// }

}}}} // ::g::Fuse::Controls::Native
