#include <Uno/Platform2.h>
#include <Uno/Activity/AApplication.h>
#include <Uno/JNIHelper.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno.Float2.h>
#include <Uno.Rect.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>
#include <Android.Base.JNI.h>
//
// Uno.Platform2.Application
//

namespace uPlatform2
{
    ViewNativeHandle Application::GetRootView()
    {
        // TODO
        return NULL;
    }

    void Application::SetRootView(ViewNativeHandle view)
    {
        jclass activityClass = JniHelper::GetActivityClass();
        WITH_STATIC_JAVA_METHOD(setAsRootView, activityClass, "SetAsRootView", "(Ljava/lang/Object;)V");
        __jni->CallStaticVoidMethod(activityClass, setAsRootView, view);
        ::g::Android::Base::JNI::CheckException();
    }

    bool Application::GetIsStatusBarVisible()
    {
        jclass activityClass = JniHelper::GetActivityClass();
        WITH_STATIC_JAVA_METHOD(getSysUIHeight, activityClass, "GetStatusBarHeight", "()F");
        float height = (float)__jni->CallStaticFloatMethod(activityClass, getSysUIHeight);
        ::g::Android::Base::JNI::CheckException();
        return height != 0.0;
    }

    void Application::SetStatusBarVisible(bool visible)
    {
        jclass activityClass = JniHelper::GetActivityClass();
        if (visible) {
            WITH_STATIC_JAVA_METHOD(showSysUI, activityClass, "ShowStatusBar", "()V");
            __jni->CallStaticVoidMethod(activityClass, showSysUI);
            ::g::Android::Base::JNI::CheckException();
        } else {
            WITH_STATIC_JAVA_METHOD(hideSysUI, activityClass, "HideStatusBar", "()V");
            __jni->CallStaticVoidMethod(activityClass, hideSysUI);
            ::g::Android::Base::JNI::CheckException();
        }
    }

    void Application::EnterFullscreen()
    {
        jclass activityClass = JniHelper::GetActivityClass();
        WITH_STATIC_JAVA_METHOD(showSysUI, activityClass, "EnterFullscreen", "()V");
        __jni->CallStaticVoidMethod(activityClass, showSysUI);
    }

    void Application::Quit()
    {
        jclass activityClass = JniHelper::GetActivityClass();
        WITH_STATIC_JAVA_METHOD(quitAct, activityClass, "TerminateNow", "()V");
        __jni->CallStaticVoidMethod(activityClass, quitAct);
    }

    ::g::Uno::Rect Application::GetStatusBarFrame()
    {
        jclass activityClass = JniHelper::GetActivityClass();
        WITH_STATIC_JAVA_METHOD(getSysUIFrameHeight, activityClass, "GetStatusBarHeight", "()F");

        ::g::Uno::Float2 dispSize = AApplication::_GetRootDisplaySize();
        ::g::Uno::Float2 origin = ::g::Uno::Float2__New2(0, 0);

        float height = (float)__jni->CallStaticFloatMethod(activityClass, getSysUIFrameHeight);
        ::g::Android::Base::JNI::CheckException();
        ::g::Uno::Float2 size = ::g::Uno::Float2__New2(dispSize.X, height);
        return ::g::Uno::Rect__New2(origin, size);
    }
}

//
// Uno.Platform2.Display
//

namespace uPlatform2
{
    void Display::Initialize(Display::UnoDisplay this_)
    {
    }

    void Display::Destroy(Display::UnoDisplay this_)
    {
    }

    void Display::InitializeAsMainDisplay(Display::UnoDisplay mainDisplay)
    {
        AApplication::_rootDisplay = mainDisplay;
        ResetGeometry(mainDisplay);
    }

    void Display::ResetGeometry(Display::UnoDisplay this_)
    {
        // TODO: hard-coded for the MainDisplay, for now.
        GLHelper::SwapBackToBackgroundSurface();
        float density = JniHelper::GetDensity();
        ::g::Uno::Float2 position = ::g::Uno::Float2__New2(0.0, 0.0);
        ::g::Uno::Float2 size = AApplication::_GetRootDisplaySize();
        ::g::Uno::Rect frame = ::g::Uno::Rect__New2(position, size);

        this_->Density(density);
        this_->Frame(frame);

    }

    void Display::SetFramesPerSecond(Display::UnoDisplay this_, unsigned fps)
    {

    }

    void Display::EnableTickNotifications(Display::UnoDisplay this_)
    {
    }

    void Display::DisableTickNotifications(Display::UnoDisplay this_)
    {
    }
}
