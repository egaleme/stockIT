#include <uBase/Time.h>
#include <XliPlatform/PlatformSpecific/Android.h>
#include <Uno/Activity/AApplication.h>
#include <Uno/Activity/EntryPoints.h>
#include <Uno/Platform2.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost.h>

void uStartApp();

int AApplication::_topFrameSize;
int AApplication::_bottomFrameSize;
int AApplication::_forceDrawForNext;

::g::Uno::Platform2::Display* AApplication::_rootDisplay;

void AApplication::cppOnCreate()
{
    uAutoReleasePool pool;
    ::g::Uno::Platform2::Application::Start();
}

void AApplication::cppOnDestroy()
{
    uAutoReleasePool pool;
    ::g::Uno::Platform2::Application::Terminate();

    AApplication::_bottomFrameSize = 0;
    // {NOTE} We dont call GLHelper::DeInitGL() here as there is no reliable way to
    //        tell if it really is a destory or if we are going to get ressurected
    //        and we really want to survive that with gl intact if possible
}

void AApplication::cppOnPause()
{
    uAutoReleasePool pool;
    ::g::Uno::Platform2::Application::EnterBackground();
}

void AApplication::cppOnResume()
{
    uAutoReleasePool pool;
    ::g::Uno::Platform2::Application::EnterForeground();
}

void AApplication::cppOnRestart()
{
    uAutoReleasePool pool;
    GLHelper::SwapBackToBackgroundSurface();
    ::g::Uno::Platform2::Application::ResetContextState();
}

void AApplication::cppOnStart()
{
    // uAutoReleasePool pool;
}

void AApplication::cppOnStop()
{
    // uAutoReleasePool pool;
}

void AApplication::cppOnSaveInstanceState()
{
    // uAutoReleasePool pool;
}

void AApplication::cppOnConfigChanged()
{
    uAutoReleasePool pool;
    if (_rootDisplay) {
        GLHelper::SwapBackToBackgroundSurface();
        _rootDisplay->_private.ResetGeometry(_rootDisplay);
    }
}

void AApplication::cppOnLowMemory()
{
    uAutoReleasePool pool;
    ::g::Uno::Platform2::Application::OnReceivedLowMemoryWarning();
}

void AApplication::cppOnWindowFocusChanged(bool hasFocus)
{
    uAutoReleasePool pool;
    if (hasFocus)
    {
        ::g::Uno::Platform2::Application::EnterInteractive();
    } else {
        ::g::Uno::Platform2::Application::ExitInteractive();
    }
}

void AApplication::cppJavaThrowError (uBase::String message)
{
    throw uBase::Exception(message.Ptr());
}

void AApplication::cppOnReceiveURI (jstring data)
{
    uAutoReleasePool pool;
    uString* unoUri = JniHelper::JavaToUnoString(data);
    JniHelper jni;
    jni->DeleteGlobalRef(data);
    ::g::Uno::Platform2::Application::OnReceivedURI(unoUri);
}

void AApplication::cppTimerCallback (int timerID)
{
    // uAutoReleasePool pool;
}

::g::Uno::Float2 AApplication::_GetRootDisplaySize()
{
    jclass cls = JniHelper::GetDisplayClass();
    WITH_STATIC_JAVA_METHOD(getRealDisplayWidth, cls, "GetRealDisplayWidth", "()I");
    WITH_STATIC_JAVA_METHOD_USEJNI(getRealDisplayHeight, cls, "GetRealDisplayHeight", "()I");
    float w = (int)__jni->CallStaticIntMethod(cls, getRealDisplayWidth);
    float h = (int)__jni->CallStaticIntMethod(cls, getRealDisplayHeight);
    return  ::g::Uno::Float2__New2(w, h);
}

int AApplication::GetBottomFrameHeight()
{
    return _bottomFrameSize;
}

void AApplication::cppOnKeyboardResized (int height) //{TODO} rename to cppOnBottomFrameChanged(int height)
{
    uAutoReleasePool pool;
    int resizeReason;

    ::g::Uno::Float2 size = _GetRootDisplaySize();

    ::g::Uno::Float2 start_pos = ::g::Uno::Float2__New2(0, size.Y - _bottomFrameSize);
    ::g::Uno::Float2 start_size = ::g::Uno::Float2__New2(size.X, _bottomFrameSize);

    ::g::Uno::Float2 end_pos = ::g::Uno::Float2__New2(0, size.Y - height);
    ::g::Uno::Float2 end_size = ::g::Uno::Float2__New2(size.X, height);

    ::g::Uno::Rect startFrame = ::g::Uno::Rect__New2(start_pos, start_size);
    ::g::Uno::Rect endFrame = ::g::Uno::Rect__New2(end_pos, end_size);

    if (_bottomFrameSize==0 && height>0) {
        resizeReason = 0;
    } else if (_bottomFrameSize>0 && height==0) {
        resizeReason = 2;
    } else if (_bottomFrameSize>0 && height > 0 && height != _bottomFrameSize) {
        resizeReason = 1;
    }
    _bottomFrameSize = height;

    // make the event args
    ::g::Uno::Platform::SystemUIWillResizeEventArgs* args = ::g::Uno::Platform::SystemUIWillResizeEventArgs::New2(1, resizeReason, endFrame, startFrame, 1, 0);

    //Make the call
    ::g::Uno::Platform::SystemUI::OnWillResize(args);
}

void AApplication::cppOnTopFrameChanged (int height) //{TODO} rename to cppOnTopFrameChanged(int height)
{
    if (_topFrameSize != height)
    {
        uAutoReleasePool pool;
        int resizeReason;

        ::g::Uno::Float2 size = _GetRootDisplaySize();

        ::g::Uno::Float2 start_pos = ::g::Uno::Float2__New2(0, size.Y - _topFrameSize);
        ::g::Uno::Float2 start_size = ::g::Uno::Float2__New2(size.X, _topFrameSize);

        ::g::Uno::Float2 end_pos = ::g::Uno::Float2__New2(0, size.Y - height);
        ::g::Uno::Float2 end_size = ::g::Uno::Float2__New2(size.X, height);

        ::g::Uno::Rect startFrame = ::g::Uno::Rect__New2(start_pos, start_size);
        ::g::Uno::Rect endFrame = ::g::Uno::Rect__New2(end_pos, end_size);

        if (_topFrameSize==0 && height>0) {
            resizeReason = 0;
        } else if (_topFrameSize>0 && height==0) {
            resizeReason = 2;
        } else if (_topFrameSize>0 && height > 0 && height != _topFrameSize) {
            resizeReason = 1;
        }
        _topFrameSize = height;

        // make the event args
        ::g::Uno::Platform::SystemUIWillResizeEventArgs* args = ::g::Uno::Platform::SystemUIWillResizeEventArgs::New2(0, resizeReason, endFrame, startFrame, 1, 0);

        //Make the call
        ::g::Uno::Platform::SystemUI::OnWillResize(args);
    }
}

void AApplication::cppOnKeyUp (int key)
{
    uAutoReleasePool pool;
    ::g::Uno::Platform2::Application::OnKeyUp(key, 0);
}


void AApplication::cppOnKeyDown (int key)
{
    uAutoReleasePool pool;
    ::g::Uno::Platform2::Application::OnKeyDown(key, 0);
}

void AApplication::cppForceRedraw (int forFrames)
{
    _forceDrawForNext = forFrames;
}

//--------------------------------------------------

static double lastTimeStamp;

// This is used only when dictated by the java activity.
// It is possible on later versions of android (v >= 4.2) to use the choreographer
void AApplication::mainLoop(bool resurrected)
{
    if (resurrected) {
        JniHelper jni;
        jni.UpdateActivityObject();
        GLHelper::SwapBackToBackgroundSurface();
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::ResetContextState();
    } else {
        GLHelper::InitGL();
        // register java native extern callbacks
        ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::ExternBlockHost::RegisterFunctions();
    }
}

void AApplication::Init()
{
    Xli::PlatformSpecific::Android::SetLogTag("stockIT");
    _forceDrawForNext = -1;
}
