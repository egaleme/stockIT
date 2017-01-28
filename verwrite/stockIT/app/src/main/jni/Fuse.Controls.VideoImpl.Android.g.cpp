// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Controls.VideoImpl.Android.MediaPlayer.h>
#include <Fuse.Controls.VideoImpl.Android.VideoLoader.h>
#include <Fuse.Controls.VideoImpl.Android.VideoLoader.NoHardwareAcceleration.h>
#include <Fuse.Controls.VideoImpl.Android.VideoLoader.VideoPromise.h>
#include <Fuse.Controls.VideoImpl.IVideoPlayer.h>
#include <Fuse.Controls.VideoImpl.VideoDiskCache.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[3];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{
namespace Android{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\0.43.11\android\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed extern class MediaPlayer :151
// {
static void MediaPlayer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("what: ");
    ::STRINGS[1] = uString::Const(" extra: ");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::EventHandler_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Exception_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(MediaPlayer_type, interface0),
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), offsetof(MediaPlayer_type, interface1));
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, _frameAvailable), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, _handle), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, _isDisposed), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, _surface), 0,
        ::g::Java::Object_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, _surfaceTexture), 0,
        ::g::Uno::Graphics::VideoTexture_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, _videoTexture), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, _volume), 0,
        ::TYPES[1/*Uno.EventHandler<int>*/], offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, Buffering1), 0,
        ::TYPES[2/*Uno.EventHandler*/], offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, Completion1), 0,
        ::TYPES[3/*Uno.EventHandler<string>*/], offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, Error1), 0,
        ::TYPES[4/*Uno.EventHandler<Uno.Exception>*/], offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, ErrorOccurred1), 0,
        ::TYPES[2/*Uno.EventHandler*/], offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, FrameAvailable1), 0,
        ::TYPES[2/*Uno.EventHandler*/], offsetof(::g::Fuse::Controls::VideoImpl::Android::MediaPlayer, Prepared1), 0);
}

MediaPlayer_type* MediaPlayer_typeof()
{
    static uSStrong<MediaPlayer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MediaPlayer);
    options.TypeSize = sizeof(MediaPlayer_type);
    type = (MediaPlayer_type*)uClassType::New("Fuse.Controls.VideoImpl.Android.MediaPlayer", options);
    type->fp_build_ = MediaPlayer_build;
    type->fp_ctor_ = (void*)MediaPlayer__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))MediaPlayer__Dispose_fn;
    type->interface1.fp_Play = (void(*)(uObject*))MediaPlayer__Play_fn;
    type->interface1.fp_Pause = (void(*)(uObject*))MediaPlayer__Pause_fn;
    type->interface1.fp_Update = (void(*)(uObject*))MediaPlayer__Update_fn;
    type->interface1.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))MediaPlayer__get_VideoTexture_fn;
    type->interface1.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))MediaPlayer__get_Size_fn;
    type->interface1.fp_get_RotationDegrees = (void(*)(uObject*, int*))MediaPlayer__get_RotationDegrees_fn;
    type->interface1.fp_get_Volume = (void(*)(uObject*, float*))MediaPlayer__get_Volume_fn;
    type->interface1.fp_set_Volume = (void(*)(uObject*, float*))MediaPlayer__set_Volume_fn;
    type->interface1.fp_get_Duration = (void(*)(uObject*, double*))MediaPlayer__get_Duration_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, double*))MediaPlayer__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, double*))MediaPlayer__set_Position_fn;
    type->interface1.fp_add_FrameAvailable = (void(*)(uObject*, uDelegate*))MediaPlayer__add_FrameAvailable_fn;
    type->interface1.fp_remove_FrameAvailable = (void(*)(uObject*, uDelegate*))MediaPlayer__remove_FrameAvailable_fn;
    type->interface1.fp_add_ErrorOccurred = (void(*)(uObject*, uDelegate*))MediaPlayer__add_ErrorOccurred_fn;
    type->interface1.fp_remove_ErrorOccurred = (void(*)(uObject*, uDelegate*))MediaPlayer__remove_ErrorOccurred_fn;
    return type;
}

// public MediaPlayer() :197
void MediaPlayer__ctor__fn(MediaPlayer* __this)
{
    __this->ctor_();
}

// public generated void add_Buffering(Uno.EventHandler<int> value) :162
void MediaPlayer__add_Buffering_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_Buffering(value);
}

// public generated void remove_Buffering(Uno.EventHandler<int> value) :162
void MediaPlayer__remove_Buffering_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_Buffering(value);
}

// public generated void add_Completion(Uno.EventHandler value) :160
void MediaPlayer__add_Completion_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_Completion(value);
}

// public generated void remove_Completion(Uno.EventHandler value) :160
void MediaPlayer__remove_Completion_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_Completion(value);
}

// private Java.Object CreateMediaPlayer(Java.Object surfaceHandle) :264
void MediaPlayer__CreateMediaPlayer_fn(MediaPlayer* __this, ::g::Java::Object* surfaceHandle, ::g::Java::Object** __retval)
{
    *__retval = __this->CreateMediaPlayer(surfaceHandle);
}

// private Java.Object CreateSurface(Java.Object surfaceTexture) :306
void MediaPlayer__CreateSurface_fn(MediaPlayer* __this, ::g::Java::Object* surfaceTexture, ::g::Java::Object** __retval)
{
    *__retval = __this->CreateSurface(surfaceTexture);
}

// private Java.Object CreateSurfaceTexture(int glHandle) :294
void MediaPlayer__CreateSurfaceTexture_fn(MediaPlayer* __this, int* glHandle, ::g::Java::Object** __retval)
{
    *__retval = __this->CreateSurfaceTexture(*glHandle);
}

// public void Dispose() :442
void MediaPlayer__Dispose_fn(MediaPlayer* __this)
{
    __this->Dispose();
}

// private static void Dispose(Java.Object mediaplayerHandle, Java.Object surfaceHandle, Java.Object surfaceTextureHandle) :454
void MediaPlayer__Dispose1_fn(::g::Java::Object* mediaplayerHandle, ::g::Java::Object* surfaceHandle, ::g::Java::Object* surfaceTextureHandle)
{
    MediaPlayer::Dispose1(mediaplayerHandle, surfaceHandle, surfaceTextureHandle);
}

// public double get_Duration() :167
void MediaPlayer__get_Duration_fn(MediaPlayer* __this, double* __retval)
{
    *__retval = __this->Duration();
}

// public generated void add_Error(Uno.EventHandler<string> value) :161
void MediaPlayer__add_Error_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Uno.EventHandler<string> value) :161
void MediaPlayer__remove_Error_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// public generated void add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :165
void MediaPlayer__add_ErrorOccurred_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_ErrorOccurred(value);
}

// public generated void remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) :165
void MediaPlayer__remove_ErrorOccurred_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_ErrorOccurred(value);
}

// public generated void add_FrameAvailable(Uno.EventHandler value) :164
void MediaPlayer__add_FrameAvailable_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_FrameAvailable(value);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) :164
void MediaPlayer__remove_FrameAvailable_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_FrameAvailable(value);
}

// private static int GetCurrentPosition(Java.Object handle) :501
void MediaPlayer__GetCurrentPosition_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = MediaPlayer::GetCurrentPosition(handle);
}

// private static int GetDuration(Java.Object handle) :531
void MediaPlayer__GetDuration_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = MediaPlayer::GetDuration(handle);
}

// private static int GetHeight(Java.Object handle) :519
void MediaPlayer__GetHeight_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = MediaPlayer::GetHeight(handle);
}

// private static int GetOrientation(Java.Object handle) :209
void MediaPlayer__GetOrientation_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = MediaPlayer::GetOrientation(handle);
}

// private static int GetWidth(Java.Object handle) :513
void MediaPlayer__GetWidth_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = MediaPlayer::GetWidth(handle);
}

// public static bool IsHardwareAccelerated() :238
void MediaPlayer__IsHardwareAccelerated_fn(bool* __retval)
{
    *__retval = MediaPlayer::IsHardwareAccelerated();
}

// public void LoadAsync(string url) :347
void MediaPlayer__LoadAsync_fn(MediaPlayer* __this, uString* url)
{
    __this->LoadAsync(url);
}

// public void LoadAsync(Uno.IO.BundleFile file) :342
void MediaPlayer__LoadAsync1_fn(MediaPlayer* __this, ::g::Uno::IO::BundleFile* file)
{
    __this->LoadAsync1(file);
}

// private void LoadAsyncAsset(Java.Object handle, string assetName) :371
void MediaPlayer__LoadAsyncAsset_fn(MediaPlayer* __this, ::g::Java::Object* handle, uString* assetName)
{
    __this->LoadAsyncAsset(handle, assetName);
}

// private void LoadAsyncUrl(Java.Object handle, string url) :353
void MediaPlayer__LoadAsyncUrl_fn(MediaPlayer* __this, ::g::Java::Object* handle, uString* url)
{
    __this->LoadAsyncUrl(handle, url);
}

// public MediaPlayer New() :197
void MediaPlayer__New1_fn(MediaPlayer** __retval)
{
    *__retval = MediaPlayer::New1();
}

// private void OnBuffer(int percent) :494
void MediaPlayer__OnBuffer_fn(MediaPlayer* __this, int* percent)
{
    __this->OnBuffer(*percent);
}

// private void OnCompletion() :473
void MediaPlayer__OnCompletion_fn(MediaPlayer* __this)
{
    __this->OnCompletion();
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState args) :337
void MediaPlayer__OnEnteringBackground_fn(MediaPlayer* __this, int* args)
{
    __this->OnEnteringBackground(*args);
}

// private void OnError(int what, int extra) :479
void MediaPlayer__OnError_fn(MediaPlayer* __this, int* what, int* extra)
{
    __this->OnError(*what, *extra);
}

// private void OnErrorOccurred(string msg) :488
void MediaPlayer__OnErrorOccurred_fn(MediaPlayer* __this, uString* msg)
{
    __this->OnErrorOccurred(msg);
}

// private void OnFrameAvailable() :319
void MediaPlayer__OnFrameAvailable_fn(MediaPlayer* __this)
{
    __this->OnFrameAvailable();
}

// private void OnPrepared() :467
void MediaPlayer__OnPrepared_fn(MediaPlayer* __this)
{
    __this->OnPrepared();
}

// public void Pause() :415
void MediaPlayer__Pause_fn(MediaPlayer* __this)
{
    __this->Pause();
}

// private static void Pause(Java.Object handle) :430
void MediaPlayer__Pause1_fn(::g::Java::Object* handle)
{
    MediaPlayer::Pause1(handle);
}

// public void Play() :414
void MediaPlayer__Play_fn(MediaPlayer* __this)
{
    __this->Play();
}

// private static void Play(Java.Object handle) :418
void MediaPlayer__Play1_fn(::g::Java::Object* handle)
{
    MediaPlayer::Play1(handle);
}

// public double get_Position() :171
void MediaPlayer__get_Position_fn(MediaPlayer* __this, double* __retval)
{
    *__retval = __this->Position();
}

// public void set_Position(double value) :172
void MediaPlayer__set_Position_fn(MediaPlayer* __this, double* value)
{
    __this->Position(*value);
}

// public generated void add_Prepared(Uno.EventHandler value) :159
void MediaPlayer__add_Prepared_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->add_Prepared(value);
}

// public generated void remove_Prepared(Uno.EventHandler value) :159
void MediaPlayer__remove_Prepared_fn(MediaPlayer* __this, uDelegate* value)
{
    __this->remove_Prepared(value);
}

// public int get_RotationDegrees() :177
void MediaPlayer__get_RotationDegrees_fn(MediaPlayer* __this, int* __retval)
{
    *__retval = __this->RotationDegrees();
}

// private static void SeekTo(Java.Object handle, int position) :507
void MediaPlayer__SeekTo_fn(::g::Java::Object* handle, int* position)
{
    MediaPlayer::SeekTo(handle, *position);
}

// private static void SetVolume(Java.Object handle, float left, float right) :525
void MediaPlayer__SetVolume_fn(::g::Java::Object* handle, float* left, float* right)
{
    MediaPlayer::SetVolume(handle, *left, *right);
}

// public int2 get_Size() :168
void MediaPlayer__get_Size_fn(MediaPlayer* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// public void Update() :324
void MediaPlayer__Update_fn(MediaPlayer* __this)
{
    __this->Update();
}

// private void UpdateTexture() :311
void MediaPlayer__UpdateTexture_fn(MediaPlayer* __this)
{
    __this->UpdateTexture();
}

// private static void UpdateTexture(Java.Object surfaceTextureHandle) :313
void MediaPlayer__UpdateTexture1_fn(::g::Java::Object* surfaceTextureHandle)
{
    MediaPlayer::UpdateTexture1(surfaceTextureHandle);
}

// public Uno.Graphics.VideoTexture get_VideoTexture() :156
void MediaPlayer__get_VideoTexture_fn(MediaPlayer* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    *__retval = __this->VideoTexture();
}

// public float get_Volume() :183
void MediaPlayer__get_Volume_fn(MediaPlayer* __this, float* __retval)
{
    *__retval = __this->Volume();
}

// public void set_Volume(float value) :184
void MediaPlayer__set_Volume_fn(MediaPlayer* __this, float* value)
{
    __this->Volume(*value);
}

// public MediaPlayer() [instance] :197
void MediaPlayer::ctor_()
{
    _volume = 1.0f;
    uint32_t glHandle = ::g::OpenGL::GL::CreateTexture();
    _videoTexture = ::g::Uno::Graphics::VideoTexture::New1(glHandle);
    _surfaceTexture = CreateSurfaceTexture(::g::OpenGL::GLTextureHandle::op_Explicit1(glHandle));
    _surface = CreateSurface(_surfaceTexture);
    _handle = CreateMediaPlayer(_surface);
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::TYPES[0/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MediaPlayer__OnEnteringBackground_fn, this));
}

// public generated void add_Buffering(Uno.EventHandler<int> value) [instance] :162
void MediaPlayer::add_Buffering(uDelegate* value)
{
    Buffering1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Buffering1, value), ::TYPES[1/*Uno.EventHandler<int>*/]);
}

// public generated void remove_Buffering(Uno.EventHandler<int> value) [instance] :162
void MediaPlayer::remove_Buffering(uDelegate* value)
{
    Buffering1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Buffering1, value), ::TYPES[1/*Uno.EventHandler<int>*/]);
}

// public generated void add_Completion(Uno.EventHandler value) [instance] :160
void MediaPlayer::add_Completion(uDelegate* value)
{
    Completion1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Completion1, value), ::TYPES[2/*Uno.EventHandler*/]);
}

// public generated void remove_Completion(Uno.EventHandler value) [instance] :160
void MediaPlayer::remove_Completion(uDelegate* value)
{
    Completion1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Completion1, value), ::TYPES[2/*Uno.EventHandler*/]);
}

// private Java.Object CreateMediaPlayer(Java.Object surfaceHandle) [instance] :264
::g::Java::Object* MediaPlayer::CreateMediaPlayer(::g::Java::Object* surfaceHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateMediaPlayer202", "(Lcom/uno/UnoObject;Ljava/lang/Object;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _usurfaceHandle=surfaceHandle;
        jobject _surfaceHandle = (_usurfaceHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_usurfaceHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_,_surfaceHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_surfaceHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_surfaceHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private Java.Object CreateSurface(Java.Object surfaceTexture) [instance] :306
::g::Java::Object* MediaPlayer::CreateSurface(::g::Java::Object* surfaceTexture)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateSurface207", "(Lcom/uno/UnoObject;Ljava/lang/Object;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _usurfaceTexture=surfaceTexture;
        jobject _surfaceTexture = (_usurfaceTexture==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_usurfaceTexture, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_,_surfaceTexture);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_surfaceTexture!=NULL) { U_JNIVAR->DeleteLocalRef(_surfaceTexture); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private Java.Object CreateSurfaceTexture(int glHandle) [instance] :294
::g::Java::Object* MediaPlayer::CreateSurfaceTexture(int glHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateSurfaceTexture208", "(Lcom/uno/UnoObject;I)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        int _uglHandle=glHandle;
        jint _glHandle = (jint)_uglHandle;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_,_glHandle);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void Dispose() [instance] :442
void MediaPlayer::Dispose()
{
    if (!_isDisposed)
    {
        _isDisposed = true;
        ::g::Fuse::Platform::Lifecycle::remove_EnteringBackground(uDelegate::New(::TYPES[0/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)MediaPlayer__OnEnteringBackground_fn, this));
        MediaPlayer::Dispose1(_handle, _surface, _surfaceTexture);
        uPtr(_videoTexture)->Dispose();
    }
}

// public double get_Duration() [instance] :167
double MediaPlayer::Duration()
{
    return (double)MediaPlayer::GetDuration(_handle) / 1000.0;
}

// public generated void add_Error(Uno.EventHandler<string> value) [instance] :161
void MediaPlayer::add_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public generated void remove_Error(Uno.EventHandler<string> value) [instance] :161
void MediaPlayer::remove_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[3/*Uno.EventHandler<string>*/]);
}

// public generated void add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) [instance] :165
void MediaPlayer::add_ErrorOccurred(uDelegate* value)
{
    ErrorOccurred1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ErrorOccurred1, value), ::TYPES[4/*Uno.EventHandler<Uno.Exception>*/]);
}

// public generated void remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value) [instance] :165
void MediaPlayer::remove_ErrorOccurred(uDelegate* value)
{
    ErrorOccurred1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ErrorOccurred1, value), ::TYPES[4/*Uno.EventHandler<Uno.Exception>*/]);
}

// public generated void add_FrameAvailable(Uno.EventHandler value) [instance] :164
void MediaPlayer::add_FrameAvailable(uDelegate* value)
{
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameAvailable1, value), ::TYPES[2/*Uno.EventHandler*/]);
}

// public generated void remove_FrameAvailable(Uno.EventHandler value) [instance] :164
void MediaPlayer::remove_FrameAvailable(uDelegate* value)
{
    FrameAvailable1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameAvailable1, value), ::TYPES[2/*Uno.EventHandler*/]);
}

// public void LoadAsync(string url) [instance] :347
void MediaPlayer::LoadAsync(uString* url)
{
    LoadAsyncUrl(_handle, url);
}

// public void LoadAsync(Uno.IO.BundleFile file) [instance] :342
void MediaPlayer::LoadAsync1(::g::Uno::IO::BundleFile* file)
{
    LoadAsyncAsset(_handle, uPtr(file)->BundlePath());
}

// private void LoadAsyncAsset(Java.Object handle, string assetName) [instance] :371
void MediaPlayer::LoadAsyncAsset(::g::Java::Object* handle, uString* assetName)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadAsyncAsset217", "(Lcom/uno/UnoObject;Ljava/lang/Object;Ljava/lang/String;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uassetName=assetName;
        jstring _assetName = JniHelper::UnoToJavaString(_uassetName);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_assetName);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_assetName!=NULL) { U_JNIVAR->DeleteLocalRef(_assetName); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void LoadAsyncUrl(Java.Object handle, string url) [instance] :353
void MediaPlayer::LoadAsyncUrl(::g::Java::Object* handle, uString* url)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadAsyncUrl219", "(Lcom/uno/UnoObject;Ljava/lang/Object;Ljava/lang/String;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        uString* _uurl=url;
        jstring _url = JniHelper::UnoToJavaString(_uurl);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_handle,_url);
        
        if (_this_!=NULL) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        if (_url!=NULL) { U_JNIVAR->DeleteLocalRef(_url); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void OnBuffer(int percent) [instance] :494
void MediaPlayer::OnBuffer(int percent)
{
    if (::g::Uno::Delegate::op_Inequality(Buffering1, NULL))
        uPtr(Buffering1)->Invoke(2, this, uCRef<int>(percent));
}

// private void OnCompletion() [instance] :473
void MediaPlayer::OnCompletion()
{
    if (::g::Uno::Delegate::op_Inequality(Completion1, NULL))
        uPtr(Completion1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState args) [instance] :337
void MediaPlayer::OnEnteringBackground(int args)
{
    Pause();
}

// private void OnError(int what, int extra) [instance] :479
void MediaPlayer::OnError(int what, int extra)
{
    uString* msg = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[0/*"what: "*/], uBox<int>(::g::Uno::Int_typeof(), what)), ::STRINGS[1/*" extra: "*/]), uBox<int>(::g::Uno::Int_typeof(), extra));

    if (::g::Uno::Delegate::op_Inequality(Error1, NULL))
        uPtr(Error1)->Invoke(2, this, msg);

    OnErrorOccurred(msg);
}

// private void OnErrorOccurred(string msg) [instance] :488
void MediaPlayer::OnErrorOccurred(uString* msg)
{
    if (::g::Uno::Delegate::op_Inequality(ErrorOccurred1, NULL))
        uPtr(ErrorOccurred1)->Invoke(2, this, (::g::Uno::Exception*)::g::Uno::Exception::New2(msg));
}

// private void OnFrameAvailable() [instance] :319
void MediaPlayer::OnFrameAvailable()
{
    _frameAvailable = true;
}

// private void OnPrepared() [instance] :467
void MediaPlayer::OnPrepared()
{
    if (::g::Uno::Delegate::op_Inequality(Prepared1, NULL))
        uPtr(Prepared1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void Pause() [instance] :415
void MediaPlayer::Pause()
{
    MediaPlayer::Pause1(_handle);
}

// public void Play() [instance] :414
void MediaPlayer::Play()
{
    MediaPlayer::Play1(_handle);
}

// public double get_Position() [instance] :171
double MediaPlayer::Position()
{
    return (double)MediaPlayer::GetCurrentPosition(_handle) / 1000.0;
}

// public void set_Position(double value) [instance] :172
void MediaPlayer::Position(double value)
{
    MediaPlayer::SeekTo(_handle, (int)(value * 1000.0));
}

// public generated void add_Prepared(Uno.EventHandler value) [instance] :159
void MediaPlayer::add_Prepared(uDelegate* value)
{
    Prepared1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Prepared1, value), ::TYPES[2/*Uno.EventHandler*/]);
}

// public generated void remove_Prepared(Uno.EventHandler value) [instance] :159
void MediaPlayer::remove_Prepared(uDelegate* value)
{
    Prepared1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Prepared1, value), ::TYPES[2/*Uno.EventHandler*/]);
}

// public int get_RotationDegrees() [instance] :177
int MediaPlayer::RotationDegrees()
{
    return MediaPlayer::GetOrientation(_handle);
}

// public int2 get_Size() [instance] :168
::g::Uno::Int2 MediaPlayer::Size()
{
    return ::g::Uno::Int2__New2(MediaPlayer::GetWidth(_handle), MediaPlayer::GetHeight(_handle));
}

// public void Update() [instance] :324
void MediaPlayer::Update()
{
    if (_frameAvailable)
    {
        GLHelper::SwapBackToBackgroundSurface();
        UpdateTexture();
        _frameAvailable = false;

        if (::g::Uno::Delegate::op_Inequality(FrameAvailable1, NULL))
            uPtr(FrameAvailable1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }
}

// private void UpdateTexture() [instance] :311
void MediaPlayer::UpdateTexture()
{
    MediaPlayer::UpdateTexture1(_surfaceTexture);
}

// public Uno.Graphics.VideoTexture get_VideoTexture() [instance] :156
::g::Uno::Graphics::VideoTexture* MediaPlayer::VideoTexture()
{
    return _videoTexture;
}

// public float get_Volume() [instance] :183
float MediaPlayer::Volume()
{
    return _volume;
}

// public void set_Volume(float value) [instance] :184
void MediaPlayer::Volume(float value)
{
    _volume = ::g::Uno::Math::Clamp1(value, 0.0f, 1.0f);
    MediaPlayer::SetVolume(_handle, _volume, _volume);
}

// private static void Dispose(Java.Object mediaplayerHandle, Java.Object surfaceHandle, Java.Object surfaceTextureHandle) [static] :454
void MediaPlayer::Dispose1(::g::Java::Object* mediaplayerHandle, ::g::Java::Object* surfaceHandle, ::g::Java::Object* surfaceTextureHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Dispose1210", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _umediaplayerHandle=mediaplayerHandle;
        jobject _mediaplayerHandle = (_umediaplayerHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_umediaplayerHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _usurfaceHandle=surfaceHandle;
        jobject _surfaceHandle = (_usurfaceHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_usurfaceHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _usurfaceTextureHandle=surfaceTextureHandle;
        jobject _surfaceTextureHandle = (_usurfaceTextureHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_usurfaceTextureHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_mediaplayerHandle,_surfaceHandle,_surfaceTextureHandle);
        
        if (_mediaplayerHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_mediaplayerHandle); }
        if (_surfaceHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_surfaceHandle); }
        if (_surfaceTextureHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_surfaceTextureHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static int GetCurrentPosition(Java.Object handle) [static] :501
int MediaPlayer::GetCurrentPosition(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetCurrentPosition211", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetDuration(Java.Object handle) [static] :531
int MediaPlayer::GetDuration(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDuration212", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetHeight(Java.Object handle) [static] :519
int MediaPlayer::GetHeight(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetHeight213", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetOrientation(Java.Object handle) [static] :209
int MediaPlayer::GetOrientation(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetOrientation214", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetWidth(Java.Object handle) [static] :513
int MediaPlayer::GetWidth(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetWidth215", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static bool IsHardwareAccelerated() [static] :238
bool MediaPlayer::IsHardwareAccelerated()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "IsHardwareAccelerated216", "()Z");
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd);
        bool __result = (bool)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public MediaPlayer New() [static] :197
MediaPlayer* MediaPlayer::New1()
{
    MediaPlayer* obj1 = (MediaPlayer*)uNew(MediaPlayer_typeof());
    obj1->ctor_();
    return obj1;
}

// private static void Pause(Java.Object handle) [static] :430
void MediaPlayer::Pause1(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Pause1220", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void Play(Java.Object handle) [static] :418
void MediaPlayer::Play1(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Play1221", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SeekTo(Java.Object handle, int position) [static] :507
void MediaPlayer::SeekTo(::g::Java::Object* handle, int position)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SeekTo222", "(Ljava/lang/Object;I)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _uposition=position;
        jint _position = (jint)_uposition;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_position);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetVolume(Java.Object handle, float left, float right) [static] :525
void MediaPlayer::SetVolume(::g::Java::Object* handle, float left, float right)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetVolume223", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uleft=left;
        jfloat _left = (jfloat)_uleft;
        float _uright=right;
        jfloat _right = (jfloat)_uright;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_left,_right);
        
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void UpdateTexture(Java.Object surfaceTextureHandle) [static] :313
void MediaPlayer::UpdateTexture1(::g::Java::Object* surfaceTextureHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateTexture1224", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _usurfaceTextureHandle=surfaceTextureHandle;
        jobject _surfaceTextureHandle = (_usurfaceTextureHandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_usurfaceTextureHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_surfaceTextureHandle);
        
        if (_surfaceTextureHandle!=NULL) { U_JNIVAR->DeleteLocalRef(_surfaceTextureHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\0.43.11\android\$.uno
// ----------------------------------------------------------------------------------------------

// private sealed class VideoLoader.NoHardwareAcceleration :98
// {
static void VideoLoader__NoHardwareAcceleration_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Video not supported on this device due to lack of hardware acceleration");
    ::TYPES[5] = ::g::Uno::Action_typeof();
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9);
}

::g::Uno::Threading::Future_type* VideoLoader__NoHardwareAcceleration_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VideoLoader__NoHardwareAcceleration);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.VideoImpl.Android.VideoLoader.NoHardwareAcceleration", options);
    type->fp_build_ = VideoLoader__NoHardwareAcceleration_build;
    type->fp_ctor_ = (void*)VideoLoader__NoHardwareAcceleration__New5_fn;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))VideoLoader__NoHardwareAcceleration__Cancel_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Uno::Threading::Future1__Dispose_fn;
    return type;
}

// public NoHardwareAcceleration() :100
void VideoLoader__NoHardwareAcceleration__ctor_7_fn(VideoLoader__NoHardwareAcceleration* __this)
{
    __this->ctor_7();
}

// public override sealed void Cancel([bool shutdownGracefully]) :110
void VideoLoader__NoHardwareAcceleration__Cancel_fn(VideoLoader__NoHardwareAcceleration* __this, bool* shutdownGracefully)
{
}

// private void DoReject() :105
void VideoLoader__NoHardwareAcceleration__DoReject_fn(VideoLoader__NoHardwareAcceleration* __this)
{
    __this->DoReject();
}

// public NoHardwareAcceleration New() :100
void VideoLoader__NoHardwareAcceleration__New5_fn(VideoLoader__NoHardwareAcceleration** __retval)
{
    *__retval = VideoLoader__NoHardwareAcceleration::New5();
}

// public NoHardwareAcceleration() [instance] :100
void VideoLoader__NoHardwareAcceleration::ctor_7()
{
    ctor_3();
    ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)VideoLoader__NoHardwareAcceleration__DoReject_fn, this), 0);
}

// private void DoReject() [instance] :105
void VideoLoader__NoHardwareAcceleration::DoReject()
{
    Reject(::g::Uno::Exception::New2(::STRINGS[2/*"Video not s...*/]));
}

// public NoHardwareAcceleration New() [static] :100
VideoLoader__NoHardwareAcceleration* VideoLoader__NoHardwareAcceleration::New5()
{
    VideoLoader__NoHardwareAcceleration* obj1 = (VideoLoader__NoHardwareAcceleration*)uNew(VideoLoader__NoHardwareAcceleration_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\0.43.11\android\$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed extern class VideoLoader :16
// {
static void VideoLoader_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::UX::BundleFileSource_typeof();
}

uType* VideoLoader_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(VideoLoader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.VideoImpl.Android.VideoLoader", options);
    type->fp_build_ = VideoLoader_build;
    return type;
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) :125
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load(url);
}

// private static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.IO.BundleFile file) :137
void VideoLoader__Load1_fn(::g::Uno::IO::BundleFile* file, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load1(file);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource fileSource) :113
void VideoLoader__Load2_fn(::g::Uno::UX::FileSource* fileSource, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load2(fileSource);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) [static] :125
::g::Uno::Threading::Future1* VideoLoader::Load(uString* url)
{
    if (::g::Fuse::Controls::VideoImpl::Android::MediaPlayer::IsHardwareAccelerated())
        return VideoLoader__VideoPromise::New6(url);
    else
        return VideoLoader__NoHardwareAcceleration::New5();
}

// private static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.IO.BundleFile file) [static] :137
::g::Uno::Threading::Future1* VideoLoader::Load1(::g::Uno::IO::BundleFile* file)
{
    if (::g::Fuse::Controls::VideoImpl::Android::MediaPlayer::IsHardwareAccelerated())
        return VideoLoader__VideoPromise::New7(file);
    else
        return VideoLoader__NoHardwareAcceleration::New5();
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource fileSource) [static] :113
::g::Uno::Threading::Future1* VideoLoader::Load2(::g::Uno::UX::FileSource* fileSource)
{
    if (uIs(fileSource, ::TYPES[6/*Uno.UX.BundleFileSource*/]))
        return VideoLoader::Load1(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::TYPES[6/*Uno.UX.BundleFileSource*/]))->BundleFile);
    else
        return VideoLoader::Load(::g::Fuse::Controls::VideoImpl::VideoDiskCache::GetFilePath(fileSource));
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\0.43.11\android\$.uno
// ----------------------------------------------------------------------------------------------

// private sealed class VideoLoader.VideoPromise :18
// {
static void VideoLoader__VideoPromise_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::EventHandler_typeof();
    ::TYPES[3] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Android::VideoLoader__VideoPromise, _isCancelled), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Android::VideoLoader__VideoPromise, _readyToDispose), 0,
        ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer_typeof(), offsetof(::g::Fuse::Controls::VideoImpl::Android::VideoLoader__VideoPromise, _videoPlayer), 0);
}

::g::Uno::Threading::Future_type* VideoLoader__VideoPromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(VideoLoader__VideoPromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.VideoImpl.Android.VideoLoader.VideoPromise", options);
    type->fp_build_ = VideoLoader__VideoPromise_build;
    type->fp_Cancel = (void(*)(::g::Uno::Threading::Future*, bool*))VideoLoader__VideoPromise__Cancel_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))VideoLoader__VideoPromise__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))VideoLoader__VideoPromise__Dispose_fn;
    return type;
}

// private VideoPromise() :22
void VideoLoader__VideoPromise__ctor_7_fn(VideoLoader__VideoPromise* __this)
{
    __this->ctor_7();
}

// public VideoPromise(string url) :33
void VideoLoader__VideoPromise__ctor_8_fn(VideoLoader__VideoPromise* __this, uString* url)
{
    __this->ctor_8(url);
}

// public VideoPromise(Uno.IO.BundleFile file) :28
void VideoLoader__VideoPromise__ctor_9_fn(VideoLoader__VideoPromise* __this, ::g::Uno::IO::BundleFile* file)
{
    __this->ctor_9(file);
}

// public override sealed void Cancel([bool shutdownGracefully]) :68
void VideoLoader__VideoPromise__Cancel_fn(VideoLoader__VideoPromise* __this, bool* shutdownGracefully)
{
    __this->ScheduleDispose();
}

// public override sealed void Dispose() :91
void VideoLoader__VideoPromise__Dispose_fn(VideoLoader__VideoPromise* __this)
{
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    __this->ScheduleDispose();
}

// private void DoDispose() :82
void VideoLoader__VideoPromise__DoDispose_fn(VideoLoader__VideoPromise* __this)
{
    __this->DoDispose();
}

// private void HookEvents() :38
void VideoLoader__VideoPromise__HookEvents_fn(VideoLoader__VideoPromise* __this)
{
    __this->HookEvents();
}

// public VideoPromise New(string url) :33
void VideoLoader__VideoPromise__New6_fn(uString* url, VideoLoader__VideoPromise** __retval)
{
    *__retval = VideoLoader__VideoPromise::New6(url);
}

// public VideoPromise New(Uno.IO.BundleFile file) :28
void VideoLoader__VideoPromise__New7_fn(::g::Uno::IO::BundleFile* file, VideoLoader__VideoPromise** __retval)
{
    *__retval = VideoLoader__VideoPromise::New7(file);
}

// private void OnError(object sender, string msg) :58
void VideoLoader__VideoPromise__OnError_fn(VideoLoader__VideoPromise* __this, uObject* sender, uString* msg)
{
    __this->OnError(sender, msg);
}

// private void OnPrepared(object sender, Uno.EventArgs args) :50
void VideoLoader__VideoPromise__OnPrepared_fn(VideoLoader__VideoPromise* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPrepared(sender, args);
}

// private void ScheduleDispose() :73
void VideoLoader__VideoPromise__ScheduleDispose_fn(VideoLoader__VideoPromise* __this)
{
    __this->ScheduleDispose();
}

// private void UnhookEvents() :44
void VideoLoader__VideoPromise__UnhookEvents_fn(VideoLoader__VideoPromise* __this)
{
    __this->UnhookEvents();
}

// private VideoPromise() [instance] :22
void VideoLoader__VideoPromise::ctor_7()
{
    ctor_3();
    _videoPlayer = ::g::Fuse::Controls::VideoImpl::Android::MediaPlayer::New1();
    HookEvents();
}

// public VideoPromise(string url) [instance] :33
void VideoLoader__VideoPromise::ctor_8(uString* url)
{
    ctor_7();
    uPtr(_videoPlayer)->LoadAsync(url);
}

// public VideoPromise(Uno.IO.BundleFile file) [instance] :28
void VideoLoader__VideoPromise::ctor_9(::g::Uno::IO::BundleFile* file)
{
    ctor_7();
    uPtr(_videoPlayer)->LoadAsync1(file);
}

// private void DoDispose() [instance] :82
void VideoLoader__VideoPromise::DoDispose()
{
    if (_readyToDispose)
    {
        uPtr(_videoPlayer)->Dispose();
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)VideoLoader__VideoPromise__DoDispose_fn, this), 0);
    }
}

// private void HookEvents() [instance] :38
void VideoLoader__VideoPromise::HookEvents()
{
    uPtr(_videoPlayer)->add_Prepared(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)VideoLoader__VideoPromise__OnPrepared_fn, this));
    uPtr(_videoPlayer)->add_Error(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)VideoLoader__VideoPromise__OnError_fn, this));
}

// private void OnError(object sender, string msg) [instance] :58
void VideoLoader__VideoPromise::OnError(uObject* sender, uString* msg)
{
    UnhookEvents();
    _readyToDispose = true;

    if (!_isCancelled)
        Reject(::g::Uno::Exception::New2(msg));
}

// private void OnPrepared(object sender, Uno.EventArgs args) [instance] :50
void VideoLoader__VideoPromise::OnPrepared(uObject* sender, ::g::Uno::EventArgs* args)
{
    UnhookEvents();
    _readyToDispose = true;

    if (!_isCancelled)
        ::g::Uno::Threading::Promise__Resolve_fn(this, (uObject*)_videoPlayer);
}

// private void ScheduleDispose() [instance] :73
void VideoLoader__VideoPromise::ScheduleDispose()
{
    if (!_isCancelled)
    {
        _isCancelled = true;
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[5/*Uno.Action*/], (void*)VideoLoader__VideoPromise__DoDispose_fn, this), 0);
    }
}

// private void UnhookEvents() [instance] :44
void VideoLoader__VideoPromise::UnhookEvents()
{
    uPtr(_videoPlayer)->remove_Prepared(uDelegate::New(::TYPES[2/*Uno.EventHandler*/], (void*)VideoLoader__VideoPromise__OnPrepared_fn, this));
    uPtr(_videoPlayer)->remove_Error(uDelegate::New(::TYPES[3/*Uno.EventHandler<string>*/], (void*)VideoLoader__VideoPromise__OnError_fn, this));
}

// public VideoPromise New(string url) [static] :33
VideoLoader__VideoPromise* VideoLoader__VideoPromise::New6(uString* url)
{
    VideoLoader__VideoPromise* obj3 = (VideoLoader__VideoPromise*)uNew(VideoLoader__VideoPromise_typeof());
    obj3->ctor_8(url);
    return obj3;
}

// public VideoPromise New(Uno.IO.BundleFile file) [static] :28
VideoLoader__VideoPromise* VideoLoader__VideoPromise::New7(::g::Uno::IO::BundleFile* file)
{
    VideoLoader__VideoPromise* obj2 = (VideoLoader__VideoPromise*)uNew(VideoLoader__VideoPromise_typeof());
    obj2->ctor_9(file);
    return obj2;
}
// }

}}}}} // ::g::Fuse::Controls::VideoImpl::Android
