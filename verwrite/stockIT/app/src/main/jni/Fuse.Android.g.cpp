// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNative_bundle.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Android.AppRoot.AppRootParent.h>
#include <Fuse.Android.AppRoot.h>
#include <Fuse.Android.Bitmap.h>
#include <Fuse.Android.Blitter.h>
#include <Fuse.Android.Canvas.h>
#include <Fuse.Android.GLUtils.h>
#include <Fuse.Android.Helpers.h>
#include <Fuse.Android.StaticLayout.Alignment.h>
#include <Fuse.Android.StaticLayout.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Android.StatusBarHelper.h>
#include <Fuse.Android.TextControlLayout.h>
#include <Fuse.Android.TextPaint.h>
#include <Fuse.Android.TextRenderer.BackgroundRender.h>
#include <Fuse.Android.TextRenderer.h>
#include <Fuse.Android.TextUtils.h>
#include <Fuse.Android.TextUtils.TruncateAt.h>
#include <Fuse.App.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.Native.Android.InputDispatch.h>
#include <Fuse.Controls.Native.Android.IViewParent.h>
#include <Fuse.Controls.Native.Android.MotionEvent.h>
#include <Fuse.Controls.Native.Android.Typeface.h>
#include <Fuse.Controls.Native.Android.TypefaceCache.h>
#include <Fuse.Controls.Native.Android.View.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Font.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.Visual.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Application.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.ULong.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[4];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Android{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// public enum StaticLayout.Alignment :168
uEnumType* StaticLayout__Alignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Android.StaticLayout.Alignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Center", 0LL,
        "Normal", 1LL,
        "Opposite", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno
// -------------------------------------------------------------------------------

// internal static extern class AppRoot :710
// {
// static AppRoot() :733
static void AppRoot__cctor__fn(uType* __type)
{
    AppRoot::_rootContainer_ = AppRoot::CreateRootView();
    AppRoot::_rootParent_ = AppRoot__AppRootParent::New1(uDelegate::New(::TYPES[0/*Uno.Action<Fuse.Controls.Native.Android.View, float2>*/], (void*)AppRoot__SetChildSize_fn));
    AppRoot::SetAppRoot(AppRoot::_rootContainer_);
}

static void AppRoot_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Cannot set rootview to: ");
    ::STRINGS[1] = uString::Const(", already set to: ");
    ::TYPES[0] = ::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Controls::Native::Android::View_typeof(), ::g::Uno::Float2_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::App_typeof();
    ::TYPES[2] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    type->SetFields(0,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Android::AppRoot::_root_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&::g::Fuse::Android::AppRoot::_rootContainer_, uFieldFlagsStatic,
        AppRoot__AppRootParent_typeof(), (uintptr_t)&::g::Fuse::Android::AppRoot::_rootParent_, uFieldFlagsStatic);
}

uClassType* AppRoot_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.AppRoot", options);
    type->fp_build_ = AppRoot_build;
    type->fp_cctor_ = AppRoot__cctor__fn;
    return type;
}

// private static Java.Object CreateRootView() :798
void AppRoot__CreateRootView_fn(::g::Java::Object** __retval)
{
    *__retval = AppRoot::CreateRootView();
}

// private static void OnTouchEvent__(Java.Object motionEvent) :779
void AppRoot__OnTouchEvent___fn(::g::Java::Object* motionEvent)
{
    AppRoot::OnTouchEvent__(motionEvent);
}

// public static void Set(Fuse.Controls.Native.Android.View view) :752
void AppRoot__Set_fn(::g::Fuse::Controls::Native::Android::View* view)
{
    AppRoot::Set(view);
}

// private static void SetAppRoot(Java.Object rootView) :771
void AppRoot__SetAppRoot_fn(::g::Java::Object* rootView)
{
    AppRoot::SetAppRoot(rootView);
}

// private static void SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :740
void AppRoot__SetChildSize_fn(::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    AppRoot::SetChildSize(view, *size);
}

// private static void SetChildSize(Java.Object handle, int w, int h) :746
void AppRoot__SetChildSize1_fn(::g::Java::Object* handle, int* w, int* h)
{
    AppRoot::SetChildSize1(handle, *w, *h);
}

// private static void SetRootView(Java.Object handle, Java.Object rootHandle) :786
void AppRoot__SetRootView_fn(::g::Java::Object* handle, ::g::Java::Object* rootHandle)
{
    AppRoot::SetRootView(handle, rootHandle);
}

uSStrong< ::g::Java::Object*> AppRoot::_root_;
uSStrong< ::g::Java::Object*> AppRoot::_rootContainer_;
uSStrong<AppRoot__AppRootParent*> AppRoot::_rootParent_;

// private static Java.Object CreateRootView() [static] :798
::g::Java::Object* AppRoot::CreateRootView()
{
    AppRoot_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateRootView247", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void OnTouchEvent__(Java.Object motionEvent) [static] :779
void AppRoot::OnTouchEvent__(::g::Java::Object* motionEvent)
{
    AppRoot_typeof()->Init();
    ::g::Fuse::Controls::GraphicsView* root = uPtr(uCast< ::g::Fuse::App*>(::g::Uno::Application::Current(), ::TYPES[1/*Fuse.App*/]))->RootGraphicsView();
    ::g::Fuse::Controls::Native::Android::InputDispatch::RaiseEvent(root, AppRoot::_rootContainer(), ::g::Fuse::Controls::Native::Android::MotionEvent::New1(motionEvent));
}

// public static void Set(Fuse.Controls.Native.Android.View view) [static] :752
void AppRoot::Set(::g::Fuse::Controls::Native::Android::View* view)
{
    AppRoot_typeof()->Init();

    if (AppRoot::_root() != NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Cannot set ...*/], view), ::STRINGS[1/*", already s...*/]), AppRoot::_root())));

    uPtr(view)->Parent((uObject*)AppRoot::_rootParent());
    AppRoot::_root() = view->Handle();
    AppRoot::SetRootView(AppRoot::_rootContainer(), AppRoot::_root());
}

// private static void SetAppRoot(Java.Object rootView) [static] :771
void AppRoot::SetAppRoot(::g::Java::Object* rootView)
{
    AppRoot_typeof()->Init();
    ::g::Uno::Platform2::Application::RootView((uPlatform2::ViewNativeHandle)uPtr(uCast< ::g::Android::Base::Wrappers::JWrapper*>(rootView, ::TYPES[2/*Android.Base.Wrappers.JWrapper*/]))->_GetJavaObject());
}

// private static void SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) [static] :740
void AppRoot::SetChildSize(::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2 size)
{
    AppRoot_typeof()->Init();
    AppRoot::SetChildSize1(uPtr(view)->Handle(), (int)size.X, (int)size.Y);
}

// private static void SetChildSize(Java.Object handle, int w, int h) [static] :746
void AppRoot::SetChildSize1(::g::Java::Object* handle, int w, int h)
{
    AppRoot_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetChildSize1249", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uw=w;
        jint _w = (jint)_uw;
        int _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetRootView(Java.Object handle, Java.Object rootHandle) [static] :786
void AppRoot::SetRootView(::g::Java::Object* handle, ::g::Java::Object* rootHandle)
{
    AppRoot_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetRootView250", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _urootHandle=rootHandle;
        jobject _rootHandle = (_urootHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_urootHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_rootHandle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_rootHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_rootHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno
// -------------------------------------------------------------------------------

// private sealed class AppRoot.AppRootParent :713
// {
static void AppRoot__AppRootParent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::Android::IViewParent_typeof(), offsetof(AppRoot__AppRootParent_type, interface0));
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Controls::Native::Android::View_typeof(), ::g::Uno::Float2_typeof(), NULL), offsetof(::g::Fuse::Android::AppRoot__AppRootParent, _setChildSize), 0);
}

AppRoot__AppRootParent_type* AppRoot__AppRootParent_typeof()
{
    static uSStrong<AppRoot__AppRootParent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(AppRoot__AppRootParent);
    options.TypeSize = sizeof(AppRoot__AppRootParent_type);
    type = (AppRoot__AppRootParent_type*)uClassType::New("Fuse.Android.AppRoot.AppRootParent", options);
    type->fp_build_ = AppRoot__AppRootParent_build;
    type->interface0.fp_SetChildSize = (void(*)(uObject*, ::g::Fuse::Controls::Native::Android::View*, ::g::Uno::Float2*))AppRoot__AppRootParent__FuseControlsNativeAndroidIViewParentSetChildSize_fn;
    return type;
}

// public AppRootParent(Uno.Action<Fuse.Controls.Native.Android.View, float2> setChildSize) :718
void AppRoot__AppRootParent__ctor__fn(AppRoot__AppRootParent* __this, uDelegate* setChildSize)
{
    __this->ctor_(setChildSize);
}

// private void Fuse.Controls.Native.Android.IViewParent.SetChildSize(Fuse.Controls.Native.Android.View view, float2 size) :723
void AppRoot__AppRootParent__FuseControlsNativeAndroidIViewParentSetChildSize_fn(AppRoot__AppRootParent* __this, ::g::Fuse::Controls::Native::Android::View* view, ::g::Uno::Float2* size)
{
    ::g::Uno::Float2 size_ = *size;
    uPtr(__this->_setChildSize)->Invoke(2, view, uCRef(size_));
}

// public AppRootParent New(Uno.Action<Fuse.Controls.Native.Android.View, float2> setChildSize) :718
void AppRoot__AppRootParent__New1_fn(uDelegate* setChildSize, AppRoot__AppRootParent** __retval)
{
    *__retval = AppRoot__AppRootParent::New1(setChildSize);
}

// public AppRootParent(Uno.Action<Fuse.Controls.Native.Android.View, float2> setChildSize) [instance] :718
void AppRoot__AppRootParent::ctor_(uDelegate* setChildSize)
{
    _setChildSize = setChildSize;
}

// public AppRootParent New(Uno.Action<Fuse.Controls.Native.Android.View, float2> setChildSize) [static] :718
AppRoot__AppRootParent* AppRoot__AppRootParent::New1(uDelegate* setChildSize)
{
    AppRoot__AppRootParent* obj1 = (AppRoot__AppRootParent*)uNew(AppRoot__AppRootParent_typeof());
    obj1->ctor_(setChildSize);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno
// -------------------------------------------------------------------------------

// private sealed class TextRenderer.BackgroundRender :440
// {
static void TextRenderer__BackgroundRender_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Fuse::Android::StaticLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _layout), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _pixelBounds), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _result), 0,
        ::g::Fuse::Android::TextRenderer_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _textRenderer), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _textureVersion), 0);
}

uType* TextRenderer__BackgroundRender_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TextRenderer__BackgroundRender);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextRenderer.BackgroundRender", options);
    type->fp_build_ = TextRenderer__BackgroundRender_build;
    return type;
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) :448
void TextRenderer__BackgroundRender__ctor__fn(TextRenderer__BackgroundRender* __this, ::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti* pixelBounds)
{
    __this->ctor_(textRenderer, *textureVersion, layout, *pixelBounds);
}

// private void DoneCallback() :466
void TextRenderer__BackgroundRender__DoneCallback_fn(TextRenderer__BackgroundRender* __this)
{
    __this->DoneCallback();
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) :448
void TextRenderer__BackgroundRender__New1_fn(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti* pixelBounds, TextRenderer__BackgroundRender** __retval)
{
    *__retval = TextRenderer__BackgroundRender::New1(textRenderer, *textureVersion, layout, *pixelBounds);
}

// public void UpdateTextureAsync() :456
void TextRenderer__BackgroundRender__UpdateTextureAsync_fn(TextRenderer__BackgroundRender* __this)
{
    __this->UpdateTextureAsync();
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) [instance] :448
void TextRenderer__BackgroundRender::ctor_(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti pixelBounds)
{
    _textRenderer = textRenderer;
    _textureVersion = textureVersion;
    _layout = layout;
    _pixelBounds = pixelBounds;
}

// private void DoneCallback() [instance] :466
void TextRenderer__BackgroundRender::DoneCallback()
{
    if (_textureVersion == uPtr(_textRenderer)->_wantedVersion)
    {
        uPtr(_textRenderer)->SetTexture(_result);
        uPtr(_textRenderer)->_textureVersion = _textureVersion;
    }
    else
        uPtr(_result)->Dispose();
}

// public void UpdateTextureAsync() [instance] :456
void TextRenderer__BackgroundRender::UpdateTextureAsync()
{
    _result = uPtr(_textRenderer)->UpdateTexture(_layout, _pixelBounds);
    ::g::OpenGL::GL::Finish();
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__DoneCallback_fn, this));
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) [static] :448
TextRenderer__BackgroundRender* TextRenderer__BackgroundRender::New1(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti pixelBounds)
{
    TextRenderer__BackgroundRender* obj1 = (TextRenderer__BackgroundRender*)uNew(TextRenderer__BackgroundRender_typeof());
    obj1->ctor_(textRenderer, textureVersion, layout, pixelBounds);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// internal sealed extern class Bitmap :14
// {
static void Bitmap_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Bitmap_type, interface0));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Bitmap, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Bitmap, _isDisposed), 0);
}

Bitmap_type* Bitmap_typeof()
{
    static uSStrong<Bitmap_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Bitmap);
    options.TypeSize = sizeof(Bitmap_type);
    type = (Bitmap_type*)uClassType::New("Fuse.Android.Bitmap", options);
    type->fp_build_ = Bitmap_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))Bitmap__Dispose_fn;
    return type;
}

// public Bitmap(Java.Object handle) :23
void Bitmap__ctor__fn(Bitmap* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public static Fuse.Android.Bitmap CreateBitmapARGB8888(int width, int height) :33
void Bitmap__CreateBitmapARGB8888_fn(int* width, int* height, Bitmap** __retval)
{
    *__retval = Bitmap::CreateBitmapARGB8888(*width, *height);
}

// private static Java.Object CreateBitmapARGB8888Impl(int width, int height) :60
void Bitmap__CreateBitmapARGB8888Impl_fn(int* width, int* height, ::g::Java::Object** __retval)
{
    *__retval = Bitmap::CreateBitmapARGB8888Impl(*width, *height);
}

// public void Dispose() :44
void Bitmap__Dispose_fn(Bitmap* __this)
{
    __this->Dispose();
}

// public void EraseColor(float4 color) :28
void Bitmap__EraseColor_fn(Bitmap* __this, ::g::Uno::Float4* color)
{
    __this->EraseColor(*color);
}

// private static void EraseColor(Java.Object handle, int color) :66
void Bitmap__EraseColor1_fn(::g::Java::Object* handle, int* color)
{
    Bitmap::EraseColor1(handle, *color);
}

// public Java.Object get_Handle() :18
void Bitmap__get_Handle_fn(Bitmap* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Bitmap New(Java.Object handle) :23
void Bitmap__New1_fn(::g::Java::Object* handle, Bitmap** __retval)
{
    *__retval = Bitmap::New1(handle);
}

// public void Recycle() :38
void Bitmap__Recycle_fn(Bitmap* __this)
{
    __this->Recycle();
}

// private static void Recycle(Java.Object handle) :54
void Bitmap__Recycle1_fn(::g::Java::Object* handle)
{
    Bitmap::Recycle1(handle);
}

// public Bitmap(Java.Object handle) [instance] :23
void Bitmap::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public void Dispose() [instance] :44
void Bitmap::Dispose()
{
    if (!_isDisposed)
    {
        Recycle();
        _isDisposed = true;
    }
}

// public void EraseColor(float4 color) [instance] :28
void Bitmap::EraseColor(::g::Uno::Float4 color)
{
    Bitmap::EraseColor1(Handle(), ::g::Fuse::Android::Helpers::EncodeColor(color));
}

// public Java.Object get_Handle() [instance] :18
::g::Java::Object* Bitmap::Handle()
{
    return _handle;
}

// public void Recycle() [instance] :38
void Bitmap::Recycle()
{
    Bitmap::Recycle1(Handle());
}

// public static Fuse.Android.Bitmap CreateBitmapARGB8888(int width, int height) [static] :33
Bitmap* Bitmap::CreateBitmapARGB8888(int width, int height)
{
    return Bitmap::New1(Bitmap::CreateBitmapARGB8888Impl(width, height));
}

// private static Java.Object CreateBitmapARGB8888Impl(int width, int height) [static] :60
::g::Java::Object* Bitmap::CreateBitmapARGB8888Impl(int width, int height)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateBitmapARGB8888Impl251", "(II)Ljava/lang/Object;");
        int _uwidth=width;
        jint _width = (jint)_uwidth;
        int _uheight=height;
        jint _height = (jint)_uheight;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_width,_height);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void EraseColor(Java.Object handle, int color) [static] :66
void Bitmap::EraseColor1(::g::Java::Object* handle, int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "EraseColor1252", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public Bitmap New(Java.Object handle) [static] :23
Bitmap* Bitmap::New1(::g::Java::Object* handle)
{
    Bitmap* obj1 = (Bitmap*)uNew(Bitmap_typeof());
    obj1->ctor_(handle);
    return obj1;
}

// private static void Recycle(Java.Object handle) [static] :54
void Bitmap::Recycle1(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Recycle1253", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno
// -------------------------------------------------------------------------------

// internal sealed class Blitter :510
// {
// static Blitter() :510
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

static void Blitter_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Android::Blitter, _draw_67760dd9), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Android::Blitter, Blit_v_67760dd9_3_4_1), 0,
        ::TYPES[4/*float2[]*/], offsetof(::g::Fuse::Android::Blitter, Blit_verts_67760dd9_3_3_5), 0,
        type, (uintptr_t)&::g::Fuse::Android::Blitter::Singleton_, uFieldFlagsStatic);
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Blitter", options);
    type->fp_build_ = Blitter_build;
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    return type;
}

// public generated Blitter() :510
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :514
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :510
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :510
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :510
void Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :514
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    _draw_67760dd9.BlendEnabled(true);
    _draw_67760dd9.DepthTestEnabled(false);
    _draw_67760dd9.CullFace(0);
    _draw_67760dd9.BlendSrcAlpha(7);
    _draw_67760dd9.BlendDstRgb(3);
    _draw_67760dd9.Use();
    _draw_67760dd9.Attrib1(0, 2, Blit_v_67760dd9_3_4_1, 8, 0);
    _draw_67760dd9.Uniform2(1, size);
    _draw_67760dd9.Uniform2(2, pos);
    _draw_67760dd9.Uniform12(3, localToClipTransform);
    _draw_67760dd9.Sampler2(4, vt);
    _draw_67760dd9.DrawArrays(uPtr(Blit_verts_67760dd9_3_3_5)->Length());
}

// private generated void init_DrawCalls() [instance] :510
void Blitter::init_DrawCalls()
{
    uArray* verts_67760dd9_3_3_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[4/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_67760dd9_3_4_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_67760dd9_3_3_0), 0);
    Blit_verts_67760dd9_3_3_5 = verts_67760dd9_3_3_0;
    _draw_67760dd9 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsNative_bundle::Blitterbdb4a41b());
}

// public generated Blitter New() [static] :510
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// internal sealed extern class Canvas :88
// {
static void Canvas_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::Canvas, _handle), 0);
}

uType* Canvas_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Canvas);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Canvas", options);
    type->fp_build_ = Canvas_build;
    return type;
}

// public Canvas(Fuse.Android.Bitmap bitmap) :102
void Canvas__ctor__fn(Canvas* __this, ::g::Fuse::Android::Bitmap* bitmap)
{
    __this->ctor_(bitmap);
}

// public Canvas(Java.Object handle) :97
void Canvas__ctor_1_fn(Canvas* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// private static Java.Object Create(Java.Object bitmapHandle) :116
void Canvas__Create_fn(::g::Java::Object* bitmapHandle, ::g::Java::Object** __retval)
{
    *__retval = Canvas::Create(bitmapHandle);
}

// public Java.Object get_Handle() :92
void Canvas__get_Handle_fn(Canvas* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public Canvas New(Fuse.Android.Bitmap bitmap) :102
void Canvas__New1_fn(::g::Fuse::Android::Bitmap* bitmap, Canvas** __retval)
{
    *__retval = Canvas::New1(bitmap);
}

// public void Translate(float dx, float dy) :104
void Canvas__Translate_fn(Canvas* __this, float* dx, float* dy)
{
    __this->Translate(*dx, *dy);
}

// private static void Translate(Java.Object handle, float dx, float dy) :110
void Canvas__Translate1_fn(::g::Java::Object* handle, float* dx, float* dy)
{
    Canvas::Translate1(handle, *dx, *dy);
}

// public Canvas(Fuse.Android.Bitmap bitmap) [instance] :102
void Canvas::ctor_(::g::Fuse::Android::Bitmap* bitmap)
{
    ctor_1(Canvas::Create(uPtr(bitmap)->Handle()));
}

// public Canvas(Java.Object handle) [instance] :97
void Canvas::ctor_1(::g::Java::Object* handle)
{
    _handle = handle;
}

// public Java.Object get_Handle() [instance] :92
::g::Java::Object* Canvas::Handle()
{
    return _handle;
}

// public void Translate(float dx, float dy) [instance] :104
void Canvas::Translate(float dx, float dy)
{
    Canvas::Translate1(Handle(), dx, dy);
}

// private static Java.Object Create(Java.Object bitmapHandle) [static] :116
::g::Java::Object* Canvas::Create(::g::Java::Object* bitmapHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create254", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ubitmapHandle=bitmapHandle;
        jobject _bitmapHandle = (_ubitmapHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmapHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_bitmapHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_bitmapHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmapHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public Canvas New(Fuse.Android.Bitmap bitmap) [static] :102
Canvas* Canvas::New1(::g::Fuse::Android::Bitmap* bitmap)
{
    Canvas* obj2 = (Canvas*)uNew(Canvas_typeof());
    obj2->ctor_(bitmap);
    return obj2;
}

// private static void Translate(Java.Object handle, float dx, float dy) [static] :110
void Canvas::Translate1(::g::Java::Object* handle, float dx, float dy)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Translate1255", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _udx=dx;
        jfloat _dx = (jfloat)_udx;
        float _udy=dy;
        jfloat _dy = (jfloat)_udy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_dx,_dy);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// internal sealed extern class GLUtils :137
// {
static void GLUtils_build(uType* type)
{
}

uType* GLUtils_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GLUtils);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.GLUtils", options);
    type->fp_build_ = GLUtils_build;
    return type;
}

// private static void TexImage2D(int target, int level, Java.Object bitmap, int border) :145
void GLUtils__TexImage2D_fn(int* target, int* level, ::g::Java::Object* bitmap, int* border)
{
    GLUtils::TexImage2D(*target, *level, bitmap, *border);
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, Fuse.Android.Bitmap bitmap, int border) :139
void GLUtils__TexImage2D1_fn(int* target, int* level, ::g::Fuse::Android::Bitmap* bitmap, int* border)
{
    GLUtils::TexImage2D1(*target, *level, bitmap, *border);
}

// private static void TexImage2D(int target, int level, Java.Object bitmap, int border) [static] :145
void GLUtils::TexImage2D(int target, int level, ::g::Java::Object* bitmap, int border)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "TexImage2D256", "(IILjava/lang/Object;I)V");
        int _utarget=target;
        jint _target = (jint)_utarget;
        int _ulevel=level;
        jint _level = (jint)_ulevel;
        ::g::Java::Object* _ubitmap=bitmap;
        jobject _bitmap = (_ubitmap==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uborder=border;
        jint _border = (jint)_uborder;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_target,_level,_bitmap,_border);
        
        
        
        if (_bitmap!=NULL) { U_JNIVAR->DeleteLocalRef(_bitmap); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void TexImage2D(OpenGL.GLTextureTarget target, int level, Fuse.Android.Bitmap bitmap, int border) [static] :139
void GLUtils::TexImage2D1(int target, int level, ::g::Fuse::Android::Bitmap* bitmap, int border)
{
    GLUtils::TexImage2D(target, level, uPtr(bitmap)->Handle(), border);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno
// -------------------------------------------------------------------------------

// internal static class Helpers :6
// {
static void Helpers_build(uType* type)
{
}

uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Helpers", options);
    type->fp_build_ = Helpers_build;
    return type;
}

// public static int EncodeColor(float4 c) :8
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static int EncodeColor(float4 c) [static] :8
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// internal sealed extern class StaticLayout :166
// {
static void StaticLayout_build(uType* type)
{
    ::STRINGS[2] = uString::Const("");
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::StaticLayout, _handle), 0);
}

uType* StaticLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(StaticLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.StaticLayout", options);
    type->fp_build_ = StaticLayout_build;
    return type;
}

// public StaticLayout(Java.Object handle) :182
void StaticLayout__ctor__fn(StaticLayout* __this, ::g::Java::Object* handle)
{
    __this->ctor_(handle);
}

// public StaticLayout(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) :187
void StaticLayout__ctor_1_fn(StaticLayout* __this, uString* text, ::g::Fuse::Android::TextPaint* paint, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad)
{
    __this->ctor_1(text, paint, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public StaticLayout(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) :198
void StaticLayout__ctor_2_fn(StaticLayout* __this, uString* text, int* bufStart, int* bufEnd, ::g::Fuse::Android::TextPaint* paint, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith)
{
    __this->ctor_2(text, *bufStart, *bufEnd, paint, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// private static Java.Object Create(string text, int bufStart, int bufEnd, Java.Object paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith) :345
void StaticLayout__Create_fn(uString* text, int* bufStart, int* bufEnd, ::g::Java::Object* paintHandle, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith, ::g::Java::Object** __retval)
{
    *__retval = StaticLayout::Create(text, *bufStart, *bufEnd, paintHandle, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// private static Java.Object Create(string text, Java.Object paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad) :325
void StaticLayout__Create1_fn(uString* text, ::g::Java::Object* paintHandle, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad, ::g::Java::Object** __retval)
{
    *__retval = StaticLayout::Create1(text, paintHandle, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public void Draw(Fuse.Android.Canvas canvas) :258
void StaticLayout__Draw_fn(StaticLayout* __this, ::g::Fuse::Android::Canvas* canvas)
{
    __this->Draw(canvas);
}

// private static void Draw(Java.Object layoutHandle, Java.Object canvasHandle) :264
void StaticLayout__Draw1_fn(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle)
{
    StaticLayout::Draw1(layoutHandle, canvasHandle);
}

// public int get_EllipsizedWidth() :225
void StaticLayout__get_EllipsizedWidth_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->EllipsizedWidth();
}

// public static float GetDesiredWidth(string text, Fuse.Android.TextPaint paint) :213
void StaticLayout__GetDesiredWidth_fn(uString* text, ::g::Fuse::Android::TextPaint* paint, float* __retval)
{
    *__retval = StaticLayout::GetDesiredWidth(text, paint);
}

// private static float GetDesiredWidthImpl(string text, Java.Object paintHandle) :312
void StaticLayout__GetDesiredWidthImpl_fn(uString* text, ::g::Java::Object* paintHandle, float* __retval)
{
    *__retval = StaticLayout::GetDesiredWidthImpl(text, paintHandle);
}

// private static int GetEllipsizedWidth(Java.Object handle) :282
void StaticLayout__GetEllipsizedWidth_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetEllipsizedWidth(handle);
}

// private static int GetHeight(Java.Object handle) :270
void StaticLayout__GetHeight_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetHeight(handle);
}

// public int GetLineBaseline(int line) :253
void StaticLayout__GetLineBaseline_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineBaseline(*line);
}

// private static int GetLineBaseline(Java.Object handle, int line) :288
void StaticLayout__GetLineBaseline1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineBaseline1(handle, *line);
}

// private static int GetLineCount(Java.Object handle) :319
void StaticLayout__GetLineCount_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = StaticLayout::GetLineCount(handle);
}

// public int GetLineEnd(int line) :243
void StaticLayout__GetLineEnd_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineEnd(*line);
}

// private static int GetLineEnd(Java.Object handle, int line) :306
void StaticLayout__GetLineEnd1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineEnd1(handle, *line);
}

// public float GetLineLeft(int line) :248
void StaticLayout__GetLineLeft_fn(StaticLayout* __this, int* line, float* __retval)
{
    *__retval = __this->GetLineLeft(*line);
}

// private static float GetLineLeft(Java.Object handle, int line) :294
void StaticLayout__GetLineLeft1_fn(::g::Java::Object* handle, int* line, float* __retval)
{
    *__retval = StaticLayout::GetLineLeft1(handle, *line);
}

// public int GetLineStart(int line) :238
void StaticLayout__GetLineStart_fn(StaticLayout* __this, int* line, int* __retval)
{
    *__retval = __this->GetLineStart(*line);
}

// private static int GetLineStart(Java.Object handle, int line) :300
void StaticLayout__GetLineStart1_fn(::g::Java::Object* handle, int* line, int* __retval)
{
    *__retval = StaticLayout::GetLineStart1(handle, *line);
}

// public Java.Object get_Handle() :177
void StaticLayout__get_Handle_fn(StaticLayout* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public int get_Height() :230
void StaticLayout__get_Height_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->Height();
}

// public int get_LineCount() :220
void StaticLayout__get_LineCount_fn(StaticLayout* __this, int* __retval)
{
    *__retval = __this->LineCount();
}

// public StaticLayout New(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) :187
void StaticLayout__New2_fn(uString* text, ::g::Fuse::Android::TextPaint* paint, int* width, int* align, float* spacingMult, float* spacingAdd, bool* includePad, StaticLayout** __retval)
{
    *__retval = StaticLayout::New2(text, paint, *width, *align, *spacingMult, *spacingAdd, *includePad);
}

// public StaticLayout New(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) :198
void StaticLayout__New3_fn(uString* text, int* bufStart, int* bufEnd, ::g::Fuse::Android::TextPaint* paint, int* outerWidth, int* align, float* spacingMult, float* spacingAdd, bool* includePad, int* truncateAt, int* ellipsizedWith, StaticLayout** __retval)
{
    *__retval = StaticLayout::New3(text, *bufStart, *bufEnd, paint, *outerWidth, *align, *spacingMult, *spacingAdd, *includePad, *truncateAt, *ellipsizedWith);
}

// public StaticLayout(Java.Object handle) [instance] :182
void StaticLayout::ctor_(::g::Java::Object* handle)
{
    _handle = handle;
}

// public StaticLayout(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) [instance] :187
void StaticLayout::ctor_1(uString* text, ::g::Fuse::Android::TextPaint* paint, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    ctor_(StaticLayout::Create1(text, uPtr(paint)->Handle(), width, align, spacingMult, spacingAdd, includePad));
}

// public StaticLayout(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) [instance] :198
void StaticLayout::ctor_2(uString* text, int bufStart, int bufEnd, ::g::Fuse::Android::TextPaint* paint, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    ctor_(StaticLayout::Create(text, bufStart, bufEnd, uPtr(paint)->Handle(), outerWidth, align, spacingMult, spacingAdd, includePad, truncateAt, ellipsizedWith));
}

// public void Draw(Fuse.Android.Canvas canvas) [instance] :258
void StaticLayout::Draw(::g::Fuse::Android::Canvas* canvas)
{
    StaticLayout::Draw1(Handle(), uPtr(canvas)->Handle());
}

// public int get_EllipsizedWidth() [instance] :225
int StaticLayout::EllipsizedWidth()
{
    return StaticLayout::GetEllipsizedWidth(Handle());
}

// public int GetLineBaseline(int line) [instance] :253
int StaticLayout::GetLineBaseline(int line)
{
    return StaticLayout::GetLineBaseline1(Handle(), line);
}

// public int GetLineEnd(int line) [instance] :243
int StaticLayout::GetLineEnd(int line)
{
    return StaticLayout::GetLineEnd1(Handle(), line);
}

// public float GetLineLeft(int line) [instance] :248
float StaticLayout::GetLineLeft(int line)
{
    return StaticLayout::GetLineLeft1(Handle(), line);
}

// public int GetLineStart(int line) [instance] :238
int StaticLayout::GetLineStart(int line)
{
    return StaticLayout::GetLineStart1(Handle(), line);
}

// public Java.Object get_Handle() [instance] :177
::g::Java::Object* StaticLayout::Handle()
{
    return _handle;
}

// public int get_Height() [instance] :230
int StaticLayout::Height()
{
    return StaticLayout::GetHeight(Handle());
}

// public int get_LineCount() [instance] :220
int StaticLayout::LineCount()
{
    return StaticLayout::GetLineCount(Handle());
}

// private static Java.Object Create(string text, int bufStart, int bufEnd, Java.Object paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith) [static] :345
::g::Java::Object* StaticLayout::Create(uString* text, int bufStart, int bufEnd, ::g::Java::Object* paintHandle, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create257", "(Ljava/lang/String;IILjava/lang/Object;IIFFZII)Ljava/lang/Object;");
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        int _ubufStart=bufStart;
        jint _bufStart = (jint)_ubufStart;
        int _ubufEnd=bufEnd;
        jint _bufEnd = (jint)_ubufEnd;
        ::g::Java::Object* _upaintHandle=paintHandle;
        jobject _paintHandle = (_upaintHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upaintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uouterWidth=outerWidth;
        jint _outerWidth = (jint)_uouterWidth;
        int _ualign=align;
        jint _align = (jint)_ualign;
        float _uspacingMult=spacingMult;
        jfloat _spacingMult = (jfloat)_uspacingMult;
        float _uspacingAdd=spacingAdd;
        jfloat _spacingAdd = (jfloat)_uspacingAdd;
        bool _uincludePad=includePad;
        jboolean _includePad = (jboolean)_uincludePad;
        int _utruncateAt=truncateAt;
        jint _truncateAt = (jint)_utruncateAt;
        int _uellipsizedWith=ellipsizedWith;
        jint _ellipsizedWith = (jint)_uellipsizedWith;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_text,_bufStart,_bufEnd,_paintHandle,_outerWidth,_align,_spacingMult,_spacingAdd,_includePad,_truncateAt,_ellipsizedWith);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        
        
        if (_paintHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_paintHandle); }
        
        
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object Create(string text, Java.Object paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad) [static] :325
::g::Java::Object* StaticLayout::Create1(uString* text, ::g::Java::Object* paintHandle, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create1258", "(Ljava/lang/String;Ljava/lang/Object;IIFFZ)Ljava/lang/Object;");
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        ::g::Java::Object* _upaintHandle=paintHandle;
        jobject _paintHandle = (_upaintHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upaintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uwidth=width;
        jint _width = (jint)_uwidth;
        int _ualign=align;
        jint _align = (jint)_ualign;
        float _uspacingMult=spacingMult;
        jfloat _spacingMult = (jfloat)_uspacingMult;
        float _uspacingAdd=spacingAdd;
        jfloat _spacingAdd = (jfloat)_uspacingAdd;
        bool _uincludePad=includePad;
        jboolean _includePad = (jboolean)_uincludePad;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_text,_paintHandle,_width,_align,_spacingMult,_spacingAdd,_includePad);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        if (_paintHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_paintHandle); }
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void Draw(Java.Object layoutHandle, Java.Object canvasHandle) [static] :264
void StaticLayout::Draw1(::g::Java::Object* layoutHandle, ::g::Java::Object* canvasHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Draw1259", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _ulayoutHandle=layoutHandle;
        jobject _layoutHandle = (_ulayoutHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ulayoutHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ucanvasHandle=canvasHandle;
        jobject _canvasHandle = (_ucanvasHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucanvasHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_layoutHandle,_canvasHandle);
        
        if (_layoutHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_layoutHandle); }
        if (_canvasHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_canvasHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static float GetDesiredWidth(string text, Fuse.Android.TextPaint paint) [static] :213
float StaticLayout::GetDesiredWidth(uString* text, ::g::Fuse::Android::TextPaint* paint)
{
    return StaticLayout::GetDesiredWidthImpl((text != NULL) ? text : ::STRINGS[2/*""*/], uPtr(paint)->Handle());
}

// private static float GetDesiredWidthImpl(string text, Java.Object paintHandle) [static] :312
float StaticLayout::GetDesiredWidthImpl(uString* text, ::g::Java::Object* paintHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDesiredWidthImpl260", "(Ljava/lang/String;Ljava/lang/Object;)F");
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        ::g::Java::Object* _upaintHandle=paintHandle;
        jobject _paintHandle = (_upaintHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upaintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_text,_paintHandle);
        float __result = (float)__jresult;
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        if (_paintHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_paintHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetEllipsizedWidth(Java.Object handle) [static] :282
int StaticLayout::GetEllipsizedWidth(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetEllipsizedWidth261", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetHeight(Java.Object handle) [static] :270
int StaticLayout::GetHeight(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetHeight262", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineBaseline(Java.Object handle, int line) [static] :288
int StaticLayout::GetLineBaseline1(::g::Java::Object* handle, int line)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineBaseline1263", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uline=line;
        jint _line = (jint)_uline;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_line);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineCount(Java.Object handle) [static] :319
int StaticLayout::GetLineCount(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineCount264", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineEnd(Java.Object handle, int line) [static] :306
int StaticLayout::GetLineEnd1(::g::Java::Object* handle, int line)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineEnd1265", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uline=line;
        jint _line = (jint)_uline;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_line);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static float GetLineLeft(Java.Object handle, int line) [static] :294
float StaticLayout::GetLineLeft1(::g::Java::Object* handle, int line)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineLeft1266", "(Ljava/lang/Object;I)F");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uline=line;
        jint _line = (jint)_uline;
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd,_handle,_line);
        float __result = (float)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetLineStart(Java.Object handle, int line) [static] :300
int StaticLayout::GetLineStart1(::g::Java::Object* handle, int line)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetLineStart1267", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uline=line;
        jint _line = (jint)_uline;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_line);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public StaticLayout New(string text, Fuse.Android.TextPaint paint, int width, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad) [static] :187
StaticLayout* StaticLayout::New2(uString* text, ::g::Fuse::Android::TextPaint* paint, int width, int align, float spacingMult, float spacingAdd, bool includePad)
{
    StaticLayout* obj2 = (StaticLayout*)uNew(StaticLayout_typeof());
    obj2->ctor_1(text, paint, width, align, spacingMult, spacingAdd, includePad);
    return obj2;
}

// public StaticLayout New(string text, int bufStart, int bufEnd, Fuse.Android.TextPaint paint, int outerWidth, Fuse.Android.StaticLayout.Alignment align, float spacingMult, float spacingAdd, bool includePad, Fuse.Android.TextUtils.TruncateAt truncateAt, int ellipsizedWith) [static] :198
StaticLayout* StaticLayout::New3(uString* text, int bufStart, int bufEnd, ::g::Fuse::Android::TextPaint* paint, int outerWidth, int align, float spacingMult, float spacingAdd, bool includePad, int truncateAt, int ellipsizedWith)
{
    StaticLayout* obj3 = (StaticLayout*)uNew(StaticLayout_typeof());
    obj3->ctor_2(text, bufStart, bufEnd, paint, outerWidth, align, spacingMult, spacingAdd, includePad, truncateAt, ellipsizedWith);
    return obj3;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno
// -------------------------------------------------------------------------------

// public sealed class StatusBarConfig :106
// {
// static extern StatusBarConfig() :108
static void StatusBarConfig__cctor_1_fn(uType* __type)
{
    StatusBarConfig::_isVisible_ = true;
    StatusBarConfig::_isVisible_ = ::g::Uno::Platform::SystemUI::IsTopFrameVisible();
    ::g::Fuse::Android::StatusBarHelper::InstallGlobalListener();
}

static void StatusBarConfig_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Android::StatusBarConfig::_isVisible_, uFieldFlagsStatic);
}

::g::Fuse::Node_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Android.StatusBarConfig", options);
    type->fp_build_ = StatusBarConfig_build;
    type->fp_cctor_ = StatusBarConfig__cctor_1_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal static extern void SetStatusBarColor(float4 color) :144
void StatusBarConfig__SetStatusBarColor_fn(::g::Uno::Float4* color)
{
    StatusBarConfig::SetStatusBarColor(*color);
}

// internal static extern void UpdateStatusBar() :149
void StatusBarConfig__UpdateStatusBar_fn()
{
    StatusBarConfig::UpdateStatusBar();
}

bool StatusBarConfig::_isVisible_;

// internal static extern void SetStatusBarColor(float4 color) [static] :144
void StatusBarConfig::SetStatusBarColor(::g::Uno::Float4 color)
{
    StatusBarConfig_typeof()->Init();
    ::g::Fuse::Android::StatusBarHelper::SetStatusBarColor(::g::Fuse::Android::Helpers::EncodeColor(color));
}

// internal static extern void UpdateStatusBar() [static] :149
void StatusBarConfig::UpdateStatusBar()
{
    StatusBarConfig_typeof()->Init();
    ::g::Uno::Platform::SystemUI::IsTopFrameVisible(StatusBarConfig::_isVisible());
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno
// -------------------------------------------------------------------------------

// internal static extern class StatusBarHelper :40
// {
static void StatusBarHelper_build(uType* type)
{
}

uClassType* StatusBarHelper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.StatusBarHelper", options);
    type->fp_build_ = StatusBarHelper_build;
    return type;
}

// public static void InstallGlobalListener() :66
void StatusBarHelper__InstallGlobalListener_fn()
{
    StatusBarHelper::InstallGlobalListener();
}

// public static void SetStatusBarColor(int color) :53
void StatusBarHelper__SetStatusBarColor_fn(int* color)
{
    StatusBarHelper::SetStatusBarColor(*color);
}

// public static void InstallGlobalListener() [static] :66
void StatusBarHelper::InstallGlobalListener()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InstallGlobalListener270", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void SetStatusBarColor(int color) [static] :53
void StatusBarHelper::SetStatusBarColor(int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetStatusBarColor272", "(I)V");
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_color);
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno
// -------------------------------------------------------------------------------

// internal sealed extern class TextControlLayout :174
// {
static void TextControlLayout_build(uType* type)
{
    ::STRINGS[3] = uString::Const("wrapWidth");
    ::STRINGS[2] = uString::Const("");
    ::TYPES[5] = ::g::Fuse::ICommonViewport_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _cacheMin), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _cacheValid), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _cacheWrapWidthPoints), 0,
        ::g::Fuse::Android::StaticLayout_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _Layout), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _PixelBounds), 0);
}

uType* TextControlLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(TextControlLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextControlLayout", options);
    type->fp_build_ = TextControlLayout_build;
    type->fp_ctor_ = (void*)TextControlLayout__New1_fn;
    return type;
}

// public generated TextControlLayout() :174
void TextControlLayout__ctor__fn(TextControlLayout* __this)
{
    __this->ctor_();
}

// public void Invalidate() :188
void TextControlLayout__Invalidate_fn(TextControlLayout* __this)
{
    __this->Invalidate();
}

// public generated Fuse.Android.StaticLayout get_Layout() :176
void TextControlLayout__get_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::StaticLayout** __retval)
{
    *__retval = __this->Layout();
}

// private generated void set_Layout(Fuse.Android.StaticLayout value) :176
void TextControlLayout__set_Layout_fn(TextControlLayout* __this, ::g::Fuse::Android::StaticLayout* value)
{
    __this->Layout(value);
}

// public bool Measure(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint Paint, float wrapWidthPoints, bool useMin) :193
void TextControlLayout__Measure_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* Paint, float* wrapWidthPoints, bool* useMin, bool* __retval)
{
    *__retval = __this->Measure(Control, Paint, *wrapWidthPoints, *useMin);
}

// public generated TextControlLayout New() :174
void TextControlLayout__New1_fn(TextControlLayout** __retval)
{
    *__retval = TextControlLayout::New1();
}

// public generated Uno.Recti get_PixelBounds() :177
void TextControlLayout__get_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->PixelBounds();
}

// private generated void set_PixelBounds(Uno.Recti value) :177
void TextControlLayout__set_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* value)
{
    __this->PixelBounds(*value);
}

// private Fuse.Android.StaticLayout.Alignment TextAlignmentToAndroidLayoutAlignment(Fuse.Controls.TextAlignment textAlignment) :252
void TextControlLayout__TextAlignmentToAndroidLayoutAlignment_fn(TextControlLayout* __this, int* textAlignment, int* __retval)
{
    *__retval = __this->TextAlignmentToAndroidLayoutAlignment(*textAlignment);
}

// public void UpdatePaint(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint paint) :264
void TextControlLayout__UpdatePaint_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* paint)
{
    __this->UpdatePaint(Control, paint);
}

// public generated TextControlLayout() [instance] :174
void TextControlLayout::ctor_()
{
}

// public void Invalidate() [instance] :188
void TextControlLayout::Invalidate()
{
    _cacheValid = false;
}

// public generated Fuse.Android.StaticLayout get_Layout() [instance] :176
::g::Fuse::Android::StaticLayout* TextControlLayout::Layout()
{
    return _Layout;
}

// private generated void set_Layout(Fuse.Android.StaticLayout value) [instance] :176
void TextControlLayout::Layout(::g::Fuse::Android::StaticLayout* value)
{
    _Layout = value;
}

// public bool Measure(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint Paint, float wrapWidthPoints, bool useMin) [instance] :193
bool TextControlLayout::Measure(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* Paint, float wrapWidthPoints, bool useMin)
{
    if ((((Layout() != NULL) && _cacheValid) && (_cacheWrapWidthPoints == wrapWidthPoints)) && (_cacheMin == useMin))
        return false;

    if (wrapWidthPoints < 0.0f)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[3/*"wrapWidth"*/]));

    float wrapWidthPixels = wrapWidthPoints * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(Control)->Viewport()), ::TYPES[5/*Fuse.ICommonViewport*/]));
    int align = TextAlignmentToAndroidLayoutAlignment(Control->TextAlignment());
    uString* ind1 = Control->RenderValue();
    uString* text = (ind1 != NULL) ? ind1 : ::STRINGS[2/*""*/];
    float lineSpacing = Control->LineSpacing() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(Control->Viewport()), ::TYPES[5/*Fuse.ICommonViewport*/]));
    float desiredWidth = ::g::Fuse::Android::StaticLayout::GetDesiredWidth(text, Paint);

    if (useMin)
        wrapWidthPixels = ::g::Uno::Math::Min1(wrapWidthPixels, desiredWidth);

    int width = (int)::g::Uno::Math::Min1(::g::Uno::Math::Ceil1(wrapWidthPixels), 2.14748365e+09f);

    if (Control->TextWrapping() == 0)
    {
        int layoutWidth = (int)::g::Uno::Math::Ceil1(::g::Uno::Math::Max1(wrapWidthPixels, desiredWidth));
        Layout((uPtr(Control)->TextTruncation() == 0) ? (::g::Fuse::Android::StaticLayout*)::g::Fuse::Android::StaticLayout::New3(text, 0, uPtr(text)->Length(), Paint, layoutWidth, align, 1.0f, lineSpacing, false, 0, width) : (::g::Fuse::Android::StaticLayout*)::g::Fuse::Android::StaticLayout::New2(text, Paint, layoutWidth, align, 1.0f, lineSpacing, false));
    }
    else
        Layout(::g::Fuse::Android::StaticLayout::New2(text, Paint, width, align, 1.0f, lineSpacing, false));

    ::g::Uno::Rect bounds = ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    for (int i = 0; i < uPtr(Layout())->LineCount(); ++i)
    {
        ::g::Uno::Rect rLineBounds = uPtr(Paint)->GetTextBounds1(text, uPtr(Layout())->GetLineStart(i), uPtr(Layout())->GetLineEnd(i));
        ::g::Uno::Rect lineBounds = ::g::Uno::Rect__Translate(rLineBounds, ::g::Uno::Float2__New2(uPtr(Layout())->GetLineLeft(i), (float)uPtr(Layout())->GetLineBaseline(i)));
        bounds = (i == 0) ? lineBounds : ::g::Uno::Rect__Union(bounds, lineBounds);
    }

    ::g::Uno::Int2 min = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(bounds.Minimum()));
    ::g::Uno::Int2 max = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(bounds.Maximum()));
    ::g::Uno::Recti pixelBounds = ::g::Uno::Recti__New1(min.X, min.Y, max.X, max.Y);
    pixelBounds.Right = (pixelBounds.Left + ::g::Uno::Math::Min8(pixelBounds.Size().X, uPtr(Layout())->EllipsizedWidth()));
    PixelBounds(::g::Uno::Recti__Inflate(pixelBounds, 1));
    _cacheValid = true;
    _cacheWrapWidthPoints = wrapWidthPoints;
    _cacheMin = useMin;
    return true;
}

// public generated Uno.Recti get_PixelBounds() [instance] :177
::g::Uno::Recti TextControlLayout::PixelBounds()
{
    return _PixelBounds;
}

// private generated void set_PixelBounds(Uno.Recti value) [instance] :177
void TextControlLayout::PixelBounds(::g::Uno::Recti value)
{
    _PixelBounds = value;
}

// private Fuse.Android.StaticLayout.Alignment TextAlignmentToAndroidLayoutAlignment(Fuse.Controls.TextAlignment textAlignment) [instance] :252
int TextControlLayout::TextAlignmentToAndroidLayoutAlignment(int textAlignment)
{
    switch (textAlignment)
    {
        case 0:
            return 1;
        case 1:
            return 0;
        case 2:
            return 2;
    }

    return 1;
}

// public void UpdatePaint(Fuse.Controls.TextControl Control, Fuse.Android.TextPaint paint) [instance] :264
void TextControlLayout::UpdatePaint(::g::Fuse::Controls::TextControl* Control, ::g::Fuse::Android::TextPaint* paint)
{
    uPtr(paint)->AntiAlias(true);
    paint->Typeface((uPtr(Control)->Font() != ::g::Fuse::Font::PlatformDefault()) ? (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::TypefaceCache::GetTypeface(uPtr(Control)->Font()) : (::g::Fuse::Controls::Native::Android::Typeface*)::g::Fuse::Controls::Native::Android::Typeface::Default());
    paint->TextSize(Control->FontSize() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(Control->Viewport()), ::TYPES[5/*Fuse.ICommonViewport*/])));
    paint->Color(Control->TextColor());
}

// public generated TextControlLayout New() [static] :174
TextControlLayout* TextControlLayout::New1()
{
    TextControlLayout* obj2 = (TextControlLayout*)uNew(TextControlLayout_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// internal sealed extern class TextPaint :393
// {
static void TextPaint_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Int_typeof()->Array();
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Android::TextPaint, _handle), 0);
}

uType* TextPaint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TextPaint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextPaint", options);
    type->fp_build_ = TextPaint_build;
    type->fp_ctor_ = (void*)TextPaint__New1_fn;
    return type;
}

// public TextPaint() :402
void TextPaint__ctor__fn(TextPaint* __this)
{
    __this->ctor_();
}

// public TextPaint(Java.Object handle) :404
void TextPaint__ctor_1_fn(TextPaint* __this, ::g::Java::Object* handle)
{
    __this->ctor_1(handle);
}

// public void set_AntiAlias(bool value) :411
void TextPaint__set_AntiAlias_fn(TextPaint* __this, bool* value)
{
    __this->AntiAlias(*value);
}

// public void set_Color(float4 value) :433
void TextPaint__set_Color_fn(TextPaint* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// private static Java.Object Create() :472
void TextPaint__Create_fn(::g::Java::Object** __retval)
{
    *__retval = TextPaint::Create();
}

// private static void GetTextBounds(Java.Object handle, string text, int start, int end, int[] r) :443
void TextPaint__GetTextBounds_fn(::g::Java::Object* handle, uString* text, int* start, int* end, uArray* r)
{
    TextPaint::GetTextBounds(handle, text, *start, *end, r);
}

// public Uno.Rect GetTextBounds(string text, int start, int end) :414
void TextPaint__GetTextBounds1_fn(TextPaint* __this, uString* text, int* start, int* end, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetTextBounds1(text, *start, *end);
}

// public Java.Object get_Handle() :397
void TextPaint__get_Handle_fn(TextPaint* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Handle();
}

// public TextPaint New() :402
void TextPaint__New1_fn(TextPaint** __retval)
{
    *__retval = TextPaint::New1();
}

// private static void SetAntiAlias(Java.Object handle, bool value) :454
void TextPaint__SetAntiAlias_fn(::g::Java::Object* handle, bool* value)
{
    TextPaint::SetAntiAlias(handle, *value);
}

// private static void SetColor(Java.Object handle, int color) :437
void TextPaint__SetColor_fn(::g::Java::Object* handle, int* color)
{
    TextPaint::SetColor(handle, *color);
}

// private static void SetTextSize(Java.Object handle, float textSize) :466
void TextPaint__SetTextSize_fn(::g::Java::Object* handle, float* textSize)
{
    TextPaint::SetTextSize(handle, *textSize);
}

// private static void SetTypeface(Java.Object paintHandle, Java.Object typefaceHandle) :460
void TextPaint__SetTypeface_fn(::g::Java::Object* paintHandle, ::g::Java::Object* typefaceHandle)
{
    TextPaint::SetTypeface(paintHandle, typefaceHandle);
}

// public void set_TextSize(float value) :428
void TextPaint__set_TextSize_fn(TextPaint* __this, float* value)
{
    __this->TextSize(*value);
}

// public void set_Typeface(Fuse.Controls.Native.Android.Typeface value) :423
void TextPaint__set_Typeface_fn(TextPaint* __this, ::g::Fuse::Controls::Native::Android::Typeface* value)
{
    __this->Typeface(value);
}

// public TextPaint() [instance] :402
void TextPaint::ctor_()
{
    ctor_1(TextPaint::Create());
}

// public TextPaint(Java.Object handle) [instance] :404
void TextPaint::ctor_1(::g::Java::Object* handle)
{
    _handle = handle;
}

// public void set_AntiAlias(bool value) [instance] :411
void TextPaint::AntiAlias(bool value)
{
    TextPaint::SetAntiAlias(Handle(), value);
}

// public void set_Color(float4 value) [instance] :433
void TextPaint::Color(::g::Uno::Float4 value)
{
    TextPaint::SetColor(Handle(), ::g::Fuse::Android::Helpers::EncodeColor(value));
}

// public Uno.Rect GetTextBounds(string text, int start, int end) [instance] :414
::g::Uno::Rect TextPaint::GetTextBounds1(uString* text, int start, int end)
{
    uArray* r = uArray::New(::TYPES[6/*int[]*/], 4);
    TextPaint::GetTextBounds(Handle(), text, start, end, r);
    return ::g::Uno::Rect__New1((float)r->Item<int>(0), (float)r->Item<int>(1), (float)r->Item<int>(2), (float)r->Item<int>(3));
}

// public Java.Object get_Handle() [instance] :397
::g::Java::Object* TextPaint::Handle()
{
    return _handle;
}

// public void set_TextSize(float value) [instance] :428
void TextPaint::TextSize(float value)
{
    TextPaint::SetTextSize(Handle(), value);
}

// public void set_Typeface(Fuse.Controls.Native.Android.Typeface value) [instance] :423
void TextPaint::Typeface(::g::Fuse::Controls::Native::Android::Typeface* value)
{
    TextPaint::SetTypeface(Handle(), uPtr(value)->Handle());
}

// private static Java.Object Create() [static] :472
::g::Java::Object* TextPaint::Create()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create273", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void GetTextBounds(Java.Object handle, string text, int start, int end, int[] r) [static] :443
void TextPaint::GetTextBounds(::g::Java::Object* handle, uString* text, int start, int end, uArray* r)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetTextBounds274", "(Ljava/lang/Object;Ljava/lang/String;IILcom/uno/IntArray;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        int _ustart=start;
        jint _start = (jint)_ustart;
        int _uend=end;
        jint _end = (jint)_uend;
        uArray* _ur=r;
        jobject _r = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_ur);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_text,_start,_end,_r);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        
        
        if (_r!=NULL) { U_JNIVAR->DeleteLocalRef(_r); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public TextPaint New() [static] :402
TextPaint* TextPaint::New1()
{
    TextPaint* obj1 = (TextPaint*)uNew(TextPaint_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void SetAntiAlias(Java.Object handle, bool value) [static] :454
void TextPaint::SetAntiAlias(::g::Java::Object* handle, bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetAntiAlias275", "(Ljava/lang/Object;Z)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_value);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetColor(Java.Object handle, int color) [static] :437
void TextPaint::SetColor(::g::Java::Object* handle, int color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetColor276", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_color);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTextSize(Java.Object handle, float textSize) [static] :466
void TextPaint::SetTextSize(::g::Java::Object* handle, float textSize)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTextSize277", "(Ljava/lang/Object;F)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _utextSize=textSize;
        jfloat _textSize = (jfloat)_utextSize;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_textSize);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetTypeface(Java.Object paintHandle, Java.Object typefaceHandle) [static] :460
void TextPaint::SetTypeface(::g::Java::Object* paintHandle, ::g::Java::Object* typefaceHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetTypeface278", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _upaintHandle=paintHandle;
        jobject _paintHandle = (_upaintHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upaintHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _utypefaceHandle=typefaceHandle;
        jobject _typefaceHandle = (_utypefaceHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_utypefaceHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_paintHandle,_typefaceHandle);
        
        if (_paintHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_paintHandle); }
        if (_typefaceHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_typefaceHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\$.uno
// -------------------------------------------------------------------------------

// internal sealed extern class TextRenderer :276
// {
static void TextRenderer_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _arrangePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _arrangeSize), 0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _control), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _emitNewTexture), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _measureLayout), 0,
        ::g::Fuse::Android::TextPaint_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _paint), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _renderThreaded), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _textLayout), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _texture), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _textureVersion), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _wantedVersion), 0);
}

TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.Android.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Visual*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    return type;
}

// private TextRenderer(Fuse.Controls.TextControl Control) :284
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* Control)
{
    __this->ctor_(Control);
}

// public void Arrange(float2 position, float2 size) :303
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// public static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control) :278
void TextRenderer__Create_fn(::g::Fuse::Controls::TextControl* control, uObject** __retval)
{
    *__retval = TextRenderer::Create(control);
}

// private void DisposeTexture() :378
void TextRenderer__DisposeTexture_fn(TextRenderer* __this)
{
    __this->DisposeTexture();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) :503
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    __this->Draw(dc, where);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) :335
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// public Uno.Rect GetRenderBounds() :355
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// public void Invalidate() :322
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// private TextRenderer New(Fuse.Controls.TextControl Control) :284
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* Control, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(Control);
}

// private void OnBitmapDraw(Fuse.DrawContext dc, Fuse.Visual where, float2 dposition, float2 size) :478
void TextRenderer__OnBitmapDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Float2* dposition, ::g::Uno::Float2* size)
{
    __this->OnBitmapDraw(dc, where, *dposition, *size);
}

// private void PrepareDraw() :386
void TextRenderer__PrepareDraw_fn(TextRenderer* __this)
{
    __this->PrepareDraw();
}

// private void SetTexture(texture2D newTexture) :369
void TextRenderer__SetTexture_fn(TextRenderer* __this, ::g::Uno::Graphics::Texture2D* newTexture)
{
    __this->SetTexture(newTexture);
}

// public void SoftDispose() :329
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

// private void UpdateLayout() :310
void TextRenderer__UpdateLayout_fn(TextRenderer* __this)
{
    __this->UpdateLayout();
}

// private void UpdatePaint() :290
void TextRenderer__UpdatePaint_fn(TextRenderer* __this)
{
    __this->UpdatePaint();
}

// private texture2D UpdateTexture(Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) :420
void TextRenderer__UpdateTexture_fn(TextRenderer* __this, ::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti* pixelBounds, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->UpdateTexture(layout, *pixelBounds);
}

// private TextRenderer(Fuse.Controls.TextControl Control) [instance] :284
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* Control)
{
    _textLayout = ::g::Fuse::Android::TextControlLayout::New1();
    _emitNewTexture = true;
    _control = Control;
}

// public void Arrange(float2 position, float2 size) [instance] :303
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    _arrangePosition = position;
    _arrangeSize = size;
    UpdateLayout();
}

// private void DisposeTexture() [instance] :378
void TextRenderer::DisposeTexture()
{
    SetTexture(NULL);
    _textureVersion = 0ULL;
    _wantedVersion = 0ULL;
    _emitNewTexture = true;
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) [instance] :503
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    PrepareDraw();
    OnBitmapDraw(dc, where, _arrangePosition, _arrangeSize);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance] :335
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    if (_measureLayout == NULL)
        _measureLayout = ::g::Fuse::Android::TextControlLayout::New1();

    if (_paint == NULL)
        _paint = ::g::Fuse::Android::TextPaint::New1();

    float wrapWidth = lp.HasX() ? lp.X() : FLT_INF;

    if (lp.HasMaxX())
        wrapWidth = ::g::Uno::Math::Min1(wrapWidth, lp.MaxX());

    UpdatePaint();
    uPtr(_measureLayout)->Measure(_control, _paint, wrapWidth, true);
    ::g::Uno::Float2 q = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(uPtr(_measureLayout)->Layout())->EllipsizedWidth(), (float)uPtr(uPtr(_measureLayout)->Layout())->Height()), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[5/*Fuse.ICommonViewport*/])));
    return q;
}

// public Uno.Rect GetRenderBounds() [instance] :355
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    UpdateLayout();
    return ::g::Uno::Rect__Translate(::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Position()), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[5/*Fuse.ICommonViewport*/]))), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Size()), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[5/*Fuse.ICommonViewport*/])))), _arrangePosition);
}

// public void Invalidate() [instance] :322
void TextRenderer::Invalidate()
{
    uPtr(_textLayout)->Invalidate();

    if (_measureLayout != NULL)
        uPtr(_measureLayout)->Invalidate();
}

// private void OnBitmapDraw(Fuse.DrawContext dc, Fuse.Visual where, float2 dposition, float2 size) [instance] :478
void TextRenderer::OnBitmapDraw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where, ::g::Uno::Float2 dposition, ::g::Uno::Float2 size)
{
    if ((_textureVersion != _wantedVersion) || (_texture == NULL))
        return;

    ::g::Uno::Int2 pixelSize = uPtr(_textLayout)->PixelBounds().Size();
    ::g::Uno::Float2 pointSize = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[5/*Fuse.ICommonViewport*/])));
    ::g::Uno::Float2 position = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Position()), ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[5/*Fuse.ICommonViewport*/]))), dposition);
    ::g::Uno::Float4x4 m = uPtr(dc)->GetLocalToClipTransform(where);
    uPtr(::g::Fuse::Android::Blitter::Singleton())->Blit(_texture, position, pointSize, m);
}

// private void PrepareDraw() [instance] :386
void TextRenderer::PrepareDraw()
{
    UpdateLayout();

    if (!_emitNewTexture)
        return;

    _wantedVersion++;
    ::g::Uno::Recti pixelBounds = uPtr(_textLayout)->PixelBounds();

    if ((pixelBounds.Size().X <= 0) || (pixelBounds.Size().Y <= 0))
    {
        SetTexture(NULL);
        return;
    }

    if (_renderThreaded)
    {
        TextRenderer__BackgroundRender* backgroundRender = TextRenderer__BackgroundRender::New1(this, _wantedVersion, uPtr(_textLayout)->Layout(), pixelBounds);
        ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__UpdateTextureAsync_fn, backgroundRender));
    }
    else
    {
        SetTexture(UpdateTexture(uPtr(_textLayout)->Layout(), pixelBounds));
        _textureVersion = _wantedVersion;
    }

    _emitNewTexture = false;
}

// private void SetTexture(texture2D newTexture) [instance] :369
void TextRenderer::SetTexture(::g::Uno::Graphics::Texture2D* newTexture)
{
    if (_texture != NULL)
        uPtr(_texture)->Dispose();

    _texture = newTexture;
    uPtr(_control)->InvalidateVisual();
}

// public void SoftDispose() [instance] :329
void TextRenderer::SoftDispose()
{
    DisposeTexture();
    _paint = NULL;
}

// private void UpdateLayout() [instance] :310
void TextRenderer::UpdateLayout()
{
    UpdatePaint();

    if (uPtr(_textLayout)->Measure(_control, _paint, _arrangeSize.X, false))
        _emitNewTexture = true;

    int textLength = ::g::Uno::String::op_Inequality(uPtr(_control)->RenderValue(), NULL) ? uPtr(uPtr(_control)->RenderValue())->Length() : 0;
    _renderThreaded = (textLength > 50);
}

// private void UpdatePaint() [instance] :290
void TextRenderer::UpdatePaint()
{
    if (_paint == NULL)
        _paint = ::g::Fuse::Android::TextPaint::New1();

    uPtr(_textLayout)->UpdatePaint(_control, _paint);
}

// private texture2D UpdateTexture(Fuse.Android.StaticLayout layout, Uno.Recti pixelBounds) [instance] :420
::g::Uno::Graphics::Texture2D* TextRenderer::UpdateTexture(::g::Fuse::Android::StaticLayout* layout, ::g::Uno::Recti pixelBounds)
{
    ::g::Fuse::Android::Bitmap* bitmap = ::g::Fuse::Android::Bitmap::CreateBitmapARGB8888(pixelBounds.Size().X, pixelBounds.Size().Y);
    ::g::Fuse::Android::Canvas* canvas = ::g::Fuse::Android::Canvas::New1(bitmap);
    canvas->Translate((float)-pixelBounds.Position().X, (float)-pixelBounds.Position().Y);
    uPtr(bitmap)->EraseColor(::g::Uno::Float4__New1(0.0f));
    uPtr(layout)->Draw(canvas);
    ::g::Uno::Graphics::Texture2D* texture = ::g::Uno::Graphics::Texture2D::New1(pixelBounds.Size(), 3, false);
    ::g::OpenGL::GL::BindTexture(3553, texture->GLTextureHandle());
    ::g::Fuse::Android::GLUtils::TexImage2D1(3553, 0, bitmap, 0);
    ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
    bitmap->Recycle();
    return texture;
}

// public static Fuse.Controls.ITextRenderer Create(Fuse.Controls.TextControl control) [static] :278
uObject* TextRenderer::Create(::g::Fuse::Controls::TextControl* control)
{
    return (uObject*)TextRenderer::New1(control);
}

// private TextRenderer New(Fuse.Controls.TextControl Control) [static] :284
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* Control)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(Control);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// internal sealed extern class TextUtils :494
// {
static void TextUtils_build(uType* type)
{
}

uType* TextUtils_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextUtils);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextUtils", options);
    type->fp_build_ = TextUtils_build;
    return type;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Android\0.43.11\internal\$.uno
// ----------------------------------------------------------------------------------------

// public enum TextUtils.TruncateAt :496
uEnumType* TextUtils__TruncateAt_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Android.TextUtils.TruncateAt", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "End", 0LL,
        "Marquee", 1LL,
        "Middle", 2LL,
        "Start", 3LL);
    return type;
}

}}} // ::g::Fuse::Android
