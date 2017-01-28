// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Application.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler-1.h>
#include <Uno.Float.h>
#include <Uno.Graphics.GraphicsContext.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.Platform.EventModifiers.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.KeyEventArgs.h>
#include <Uno.Platform.TimerEventArgs.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Platform2.ApplicationState.h>
#include <Uno.Platform2.ApplicationStateTransitionHandler.h>
#include <Uno.Platform2.Display.h>
#include <Uno.Platform2.Display.PrivateState.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
void uInitRtti();
void uStartApp();
static uType* TYPES[7];

namespace g{
namespace Uno{
namespace Platform2{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform2\$.uno
// ----------------------------------------------------------------------------------------------

// public static class Application :25
// {
// static Application() :25
static void Application__cctor__fn(uType* __type)
{
    Application::_delayedURIS_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]));
}

static void Application_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Platform2::ApplicationStateTransitionHandler_typeof();
    ::TYPES[4] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::KeyEventArgs_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<string>*/], (uintptr_t)&::g::Uno::Platform2::Application::_delayedURIS_, uFieldFlagsStatic,
        ::g::Uno::Platform2::ApplicationState_typeof(), (uintptr_t)&::g::Uno::Platform2::Application::_State_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.EventHandler<string>*/], (uintptr_t)&::g::Uno::Platform2::Application::_receivedURI1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform2::Application::EnteringBackground1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform2::Application::EnteringForeground1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform2::Application::EnteringInteractive1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform2::Application::ExitedInteractive1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (uintptr_t)&::g::Uno::Platform2::Application::KeyDown1_, uFieldFlagsStatic,
        ::TYPES[4/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/], (uintptr_t)&::g::Uno::Platform2::Application::KeyUp1_, uFieldFlagsStatic,
        ::TYPES[5/*Uno.EventHandler*/], (uintptr_t)&::g::Uno::Platform2::Application::ReceivedLowMemoryWarning1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform2::Application::Started1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/], (uintptr_t)&::g::Uno::Platform2::Application::Terminating1_, uFieldFlagsStatic);
}

uClassType* Application_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform2.Application", options);
    type->fp_build_ = Application_build;
    type->fp_cctor_ = Application__cctor__fn;
    return type;
}

// private static void _Init() :77
void Application___Init_fn()
{
    Application::_Init();
}

// public static generated void add__receivedURI(Uno.EventHandler<string> value) :328
void Application__add__receivedURI_fn(uDelegate* value)
{
    Application::add__receivedURI(value);
}

// public static generated void remove__receivedURI(Uno.EventHandler<string> value) :328
void Application__remove__receivedURI_fn(uDelegate* value)
{
    Application::remove__receivedURI(value);
}

// private static extern void _Start() :80
void Application___Start_fn()
{
    Application::_Start();
}

// private static void DidEnterBackground() :42
void Application__DidEnterBackground_fn()
{
    Application::DidEnterBackground();
}

// private static void DidEnterForeground() :39
void Application__DidEnterForeground_fn()
{
    Application::DidEnterForeground();
}

// private static void DidEnterInteractive() :40
void Application__DidEnterInteractive_fn()
{
    Application::DidEnterInteractive();
}

// private static void DidExitInteractive() :41
void Application__DidExitInteractive_fn()
{
    Application::DidExitInteractive();
}

// private static void DidStart() :38
void Application__DidStart_fn()
{
    Application::DidStart();
}

// private static void DispatchDelayedUri() :357
void Application__DispatchDelayedUri_fn()
{
    Application::DispatchDelayedUri();
}

// internal static void EnterBackground() :192
void Application__EnterBackground_fn()
{
    Application::EnterBackground();
}

// internal static void EnterForeground() :83
void Application__EnterForeground_fn()
{
    Application::EnterForeground();
}

// public static generated void add_EnteringBackground(Uno.Platform2.ApplicationStateTransitionHandler value) :34
void Application__add_EnteringBackground_fn(uDelegate* value)
{
    Application::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Platform2.ApplicationStateTransitionHandler value) :34
void Application__remove_EnteringBackground_fn(uDelegate* value)
{
    Application::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Platform2.ApplicationStateTransitionHandler value) :31
void Application__add_EnteringForeground_fn(uDelegate* value)
{
    Application::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Platform2.ApplicationStateTransitionHandler value) :31
void Application__remove_EnteringForeground_fn(uDelegate* value)
{
    Application::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) :32
void Application__add_EnteringInteractive_fn(uDelegate* value)
{
    Application::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) :32
void Application__remove_EnteringInteractive_fn(uDelegate* value)
{
    Application::remove_EnteringInteractive(value);
}

// internal static void EnterInteractive() :117
void Application__EnterInteractive_fn()
{
    Application::EnterInteractive();
}

// public static generated void add_ExitedInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) :33
void Application__add_ExitedInteractive_fn(uDelegate* value)
{
    Application::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) :33
void Application__remove_ExitedInteractive_fn(uDelegate* value)
{
    Application::remove_ExitedInteractive(value);
}

// internal static void ExitInteractive() :156
void Application__ExitInteractive_fn()
{
    Application::ExitInteractive();
}

// private static extern Uno.Platform.ViewNativeHandle GetRootView() :290
void Application__GetRootView_fn(uPlatform2::ViewNativeHandle* __retval)
{
    *__retval = Application::GetRootView();
}

// public static generated void add_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :301
void Application__add_KeyDown_fn(uDelegate* value)
{
    Application::add_KeyDown(value);
}

// public static generated void remove_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :301
void Application__remove_KeyDown_fn(uDelegate* value)
{
    Application::remove_KeyDown(value);
}

// public static generated void add_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :302
void Application__add_KeyUp_fn(uDelegate* value)
{
    Application::add_KeyUp(value);
}

// public static generated void remove_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) :302
void Application__remove_KeyUp_fn(uDelegate* value)
{
    Application::remove_KeyUp(value);
}

// internal static bool OnKeyDown(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :305
void Application__OnKeyDown_fn(int* key, int* modifiers, bool* __retval)
{
    *__retval = Application::OnKeyDown(*key, *modifiers);
}

// internal static bool OnKeyUp(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) :316
void Application__OnKeyUp_fn(int* key, int* modifiers, bool* __retval)
{
    *__retval = Application::OnKeyUp(*key, *modifiers);
}

// internal static void OnReceivedLowMemoryWarning() :265
void Application__OnReceivedLowMemoryWarning_fn()
{
    Application::OnReceivedLowMemoryWarning();
}

// internal static void OnReceivedURI(string uri) :343
void Application__OnReceivedURI_fn(uString* uri)
{
    Application::OnReceivedURI(uri);
}

// internal static extern void Quit() :296
void Application__Quit_fn()
{
    Application::Quit();
}

// public static generated void add_ReceivedLowMemoryWarning(Uno.EventHandler value) :262
void Application__add_ReceivedLowMemoryWarning_fn(uDelegate* value)
{
    Application::add_ReceivedLowMemoryWarning(value);
}

// public static generated void remove_ReceivedLowMemoryWarning(Uno.EventHandler value) :262
void Application__remove_ReceivedLowMemoryWarning_fn(uDelegate* value)
{
    Application::remove_ReceivedLowMemoryWarning(value);
}

// public static void add_ReceivedURI(Uno.EventHandler<string> value) :331
void Application__add_ReceivedURI_fn(uDelegate* value)
{
    Application::add_ReceivedURI(value);
}

// public static void remove_ReceivedURI(Uno.EventHandler<string> value) :337
void Application__remove_ReceivedURI_fn(uDelegate* value)
{
    Application::remove_ReceivedURI(value);
}

// private static void ResetContextState() :281
void Application__ResetContextState_fn()
{
    Application::ResetContextState();
}

// public static extern Uno.Platform.ViewNativeHandle get_RootView() :278
void Application__get_RootView_fn(uPlatform2::ViewNativeHandle* __retval)
{
    *__retval = Application::RootView();
}

// public static extern void set_RootView(Uno.Platform.ViewNativeHandle value) :279
void Application__set_RootView_fn(uPlatform2::ViewNativeHandle* value)
{
    Application::RootView(*value);
}

// private static extern void SetRootView(Uno.Platform.ViewNativeHandle viewHandle) :293
void Application__SetRootView_fn(uPlatform2::ViewNativeHandle* viewHandle_)
{
    Application::SetRootView(*viewHandle_);
}

// internal static void Start() :46
void Application__Start_fn()
{
    Application::Start();
}

// public static generated void add_Started(Uno.Platform2.ApplicationStateTransitionHandler value) :29
void Application__add_Started_fn(uDelegate* value)
{
    Application::add_Started(value);
}

// public static generated void remove_Started(Uno.Platform2.ApplicationStateTransitionHandler value) :29
void Application__remove_Started_fn(uDelegate* value)
{
    Application::remove_Started(value);
}

// public static generated Uno.Platform2.ApplicationState get_State() :27
void Application__get_State_fn(int* __retval)
{
    *__retval = Application::State();
}

// private static generated void set_State(Uno.Platform2.ApplicationState value) :27
void Application__set_State_fn(int* value)
{
    Application::State(*value);
}

// internal static void Terminate() :228
void Application__Terminate_fn()
{
    Application::Terminate();
}

// public static generated void add_Terminating(Uno.Platform2.ApplicationStateTransitionHandler value) :36
void Application__add_Terminating_fn(uDelegate* value)
{
    Application::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Platform2.ApplicationStateTransitionHandler value) :36
void Application__remove_Terminating_fn(uDelegate* value)
{
    Application::remove_Terminating(value);
}

// private static void WillTerminate() :43
void Application__WillTerminate_fn()
{
    Application::WillTerminate();
}

uSStrong< ::g::Uno::Collections::List*> Application::_delayedURIS_;
int Application::_State_;
uSStrong<uDelegate*> Application::_receivedURI1_;
uSStrong<uDelegate*> Application::EnteringBackground1_;
uSStrong<uDelegate*> Application::EnteringForeground1_;
uSStrong<uDelegate*> Application::EnteringInteractive1_;
uSStrong<uDelegate*> Application::ExitedInteractive1_;
uSStrong<uDelegate*> Application::KeyDown1_;
uSStrong<uDelegate*> Application::KeyUp1_;
uSStrong<uDelegate*> Application::ReceivedLowMemoryWarning1_;
uSStrong<uDelegate*> Application::Started1_;
uSStrong<uDelegate*> Application::Terminating1_;

// private static void _Init() [static] :77
void Application::_Init()
{
    Application_typeof()->Init();
    uInitRtti();
}

// private static extern void _Start() [static] :80
void Application::_Start()
{
    Application_typeof()->Init();
    uStartApp();
}

// private static void DidEnterBackground() [static] :42
void Application::DidEnterBackground()
{
    Application_typeof()->Init();
}

// private static void DidEnterForeground() [static] :39
void Application::DidEnterForeground()
{
    Application_typeof()->Init();
}

// private static void DidEnterInteractive() [static] :40
void Application::DidEnterInteractive()
{
    Application_typeof()->Init();
}

// private static void DidExitInteractive() [static] :41
void Application::DidExitInteractive()
{
    Application_typeof()->Init();
}

// private static void DidStart() [static] :38
void Application::DidStart()
{
    Application_typeof()->Init();
}

// private static void DispatchDelayedUri() [static] :357
void Application::DispatchDelayedUri()
{
    Application_typeof()->Init();
    ::g::Uno::Collections::List__Enumerator<uStrong<uString*> > ret2;
    uDelegate* handler = Application::_receivedURI1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        if (uPtr(Application::_delayedURIS())->Count() > 0)
        {
            for (::g::Uno::Collections::List__Enumerator<uStrong<uString*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(Application::_delayedURIS()), &ret2), ret2); enum1.MoveNext(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]); )
            {
                uString* u = enum1.Current(::TYPES[1/*Uno.Collections.List<string>.Enumerator*/]);
                uPtr(handler)->Invoke(2, NULL, u);
            }

            uPtr(Application::_delayedURIS())->Clear();
        }
    }
}

// internal static void EnterBackground() [static] :192
void Application::EnterBackground()
{
    Application_typeof()->Init();

    switch (Application::State())
    {
        case -1:
            return;
        case 0:
            return;
        case 1:
            return;
        case 2:
            break;
        case 3:
        {
            Application::ExitInteractive();
            break;
        }
    }

    Application::State(1);
    Application::DidEnterBackground();
    uDelegate* handler = Application::EnteringBackground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));
}

// internal static void EnterForeground() [static] :83
void Application::EnterForeground()
{
    Application_typeof()->Init();

    switch (Application::State())
    {
        case -1:
            return;
        case 0:
            return;
        case 1:
            break;
        case 2:
        case 3:
            return;
    }

    Application::State(2);
    Application::DidEnterForeground();
    uDelegate* handler = Application::EnteringForeground1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));
}

// internal static void EnterInteractive() [static] :117
void Application::EnterInteractive()
{
    Application_typeof()->Init();
    GLHelper::SwapBackToBackgroundSurface();

    switch (Application::State())
    {
        case -1:
            return;
        case 0:
            return;
        case 1:
        {
            Application::EnterForeground();
            break;
        }
        case 2:
            break;
        case 3:
            return;
    }

    Application::State(3);
    Application::DidEnterInteractive();
    uDelegate* handler = Application::EnteringInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));
}

// internal static void ExitInteractive() [static] :156
void Application::ExitInteractive()
{
    Application_typeof()->Init();
    GLHelper::SwapBackToBackgroundSurface();

    switch (Application::State())
    {
        case -1:
            return;
        case 0:
            return;
        case 1:
        case 2:
            return;
        case 3:
            break;
    }

    Application::State(2);
    Application::DidExitInteractive();
    uDelegate* handler = Application::ExitedInteractive1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));
}

// private static extern Uno.Platform.ViewNativeHandle GetRootView() [static] :290
uPlatform2::ViewNativeHandle Application::GetRootView()
{
    Application_typeof()->Init();
    return uPlatform2::Application::GetRootView();
}

// internal static bool OnKeyDown(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [static] :305
bool Application::OnKeyDown(int key, int modifiers)
{
    Application_typeof()->Init();
    ::g::Uno::Platform::KeyEventArgs* args = ::g::Uno::Platform::KeyEventArgs::New2(key, modifiers);
    uDelegate* handler = Application::KeyDown1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, args);

    return args->Handled();
}

// internal static bool OnKeyUp(Uno.Platform.Key key, Uno.Platform.EventModifiers modifiers) [static] :316
bool Application::OnKeyUp(int key, int modifiers)
{
    Application_typeof()->Init();
    ::g::Uno::Platform::KeyEventArgs* args = ::g::Uno::Platform::KeyEventArgs::New2(key, modifiers);
    uDelegate* handler = Application::KeyUp1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, args);

    return args->Handled();
}

// internal static void OnReceivedLowMemoryWarning() [static] :265
void Application::OnReceivedLowMemoryWarning()
{
    Application_typeof()->Init();
    uDelegate* handler = Application::ReceivedLowMemoryWarning1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// internal static void OnReceivedURI(string uri) [static] :343
void Application::OnReceivedURI(uString* uri)
{
    Application_typeof()->Init();
    uDelegate* handler = Application::_receivedURI1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
    {
        Application::DispatchDelayedUri();
        uPtr(handler)->Invoke(2, NULL, uri);
    }
    else
        ::g::Uno::Collections::List__Add_fn(uPtr(Application::_delayedURIS()), uri);
}

// internal static extern void Quit() [static] :296
void Application::Quit()
{
    Application_typeof()->Init();
    uPlatform2::Application::Quit();;
}

// private static void ResetContextState() [static] :281
void Application::ResetContextState()
{
    Application_typeof()->Init();

    if ((::g::Uno::Application::Current() != NULL) && (uPtr(::g::Uno::Application::Current())->GraphicsContext() != NULL))
        uPtr(uPtr(::g::Uno::Application::Current())->GraphicsContext())->ForceResetState();
}

// private static extern void SetRootView(Uno.Platform.ViewNativeHandle viewHandle) [static] :293
void Application::SetRootView(uPlatform2::ViewNativeHandle viewHandle_)
{
    Application_typeof()->Init();
    uPlatform2::Application::SetRootView(viewHandle_);
}

// internal static void Start() [static] :46
void Application::Start()
{
    Application_typeof()->Init();

    switch (Application::State())
    {
        case 1:
        {
            Application::Terminate();
            break;
        }
        case 0:
        case -1:
            break;
    }

    Application::_Init();
    Application::_Start();
    Application::State(1);
    Application::DidStart();
    uDelegate* handler = Application::Started1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));
}

// internal static void Terminate() [static] :228
void Application::Terminate()
{
    Application_typeof()->Init();

    switch (Application::State())
    {
        case -1:
        case 0:
            return;
        case 1:
            break;
        case 2:
        case 3:
        {
            Application::EnterBackground();
            break;
        }
    }

    Application::State(-1);
    Application::WillTerminate();
    uDelegate* handler = Application::Terminating1();

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->InvokeVoid(uCRef<int>(Application::State()));

    Application::State(0);
}

// private static void WillTerminate() [static] :43
void Application::WillTerminate()
{
    Application_typeof()->Init();
}

// public static extern Uno.Platform.ViewNativeHandle get_RootView() [static] :278
uPlatform2::ViewNativeHandle Application::RootView()
{
    Application_typeof()->Init();
    return Application::GetRootView();
}

// public static extern void set_RootView(Uno.Platform.ViewNativeHandle value) [static] :279
void Application::RootView(uPlatform2::ViewNativeHandle value)
{
    Application_typeof()->Init();
    Application::SetRootView(value);
}

// public static generated Uno.Platform2.ApplicationState get_State() [static] :27
int Application::State()
{
    Application_typeof()->Init();
    return Application::_State();
}

// private static generated void set_State(Uno.Platform2.ApplicationState value) [static] :27
void Application::State(int value)
{
    Application_typeof()->Init();
    Application::_State() = value;
}

// public static generated void add__receivedURI(Uno.EventHandler<string> value) [static] :328
void Application::add__receivedURI(uDelegate* value)
{
    Application_typeof()->Init();
    Application::_receivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::_receivedURI1(), value), ::TYPES[2/*Uno.EventHandler<string>*/]);
}

// public static generated void remove__receivedURI(Uno.EventHandler<string> value) [static] :328
void Application::remove__receivedURI(uDelegate* value)
{
    Application_typeof()->Init();
    Application::_receivedURI1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::_receivedURI1(), value), ::TYPES[2/*Uno.EventHandler<string>*/]);
}

// public static generated void add_EnteringBackground(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :34
void Application::add_EnteringBackground(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::EnteringBackground1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringBackground(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :34
void Application::remove_EnteringBackground(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringBackground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::EnteringBackground1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_EnteringForeground(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :31
void Application::add_EnteringForeground(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::EnteringForeground1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringForeground(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :31
void Application::remove_EnteringForeground(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringForeground1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::EnteringForeground1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_EnteringInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :32
void Application::add_EnteringInteractive(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::EnteringInteractive1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :32
void Application::remove_EnteringInteractive(uDelegate* value)
{
    Application_typeof()->Init();
    Application::EnteringInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::EnteringInteractive1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_ExitedInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :33
void Application::add_ExitedInteractive(uDelegate* value)
{
    Application_typeof()->Init();
    Application::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::ExitedInteractive1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :33
void Application::remove_ExitedInteractive(uDelegate* value)
{
    Application_typeof()->Init();
    Application::ExitedInteractive1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::ExitedInteractive1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :301
void Application::add_KeyDown(uDelegate* value)
{
    Application_typeof()->Init();
    Application::KeyDown1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::KeyDown1(), value), ::TYPES[4/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void remove_KeyDown(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :301
void Application::remove_KeyDown(uDelegate* value)
{
    Application_typeof()->Init();
    Application::KeyDown1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::KeyDown1(), value), ::TYPES[4/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void add_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :302
void Application::add_KeyUp(uDelegate* value)
{
    Application_typeof()->Init();
    Application::KeyUp1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::KeyUp1(), value), ::TYPES[4/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void remove_KeyUp(Uno.EventHandler<Uno.Platform.KeyEventArgs> value) [static] :302
void Application::remove_KeyUp(uDelegate* value)
{
    Application_typeof()->Init();
    Application::KeyUp1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::KeyUp1(), value), ::TYPES[4/*Uno.EventHandler<Uno.Platform.KeyEventArgs>*/]);
}

// public static generated void add_ReceivedLowMemoryWarning(Uno.EventHandler value) [static] :262
void Application::add_ReceivedLowMemoryWarning(uDelegate* value)
{
    Application_typeof()->Init();
    Application::ReceivedLowMemoryWarning1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::ReceivedLowMemoryWarning1(), value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public static generated void remove_ReceivedLowMemoryWarning(Uno.EventHandler value) [static] :262
void Application::remove_ReceivedLowMemoryWarning(uDelegate* value)
{
    Application_typeof()->Init();
    Application::ReceivedLowMemoryWarning1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::ReceivedLowMemoryWarning1(), value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public static void add_ReceivedURI(Uno.EventHandler<string> value) [static] :331
void Application::add_ReceivedURI(uDelegate* value)
{
    Application_typeof()->Init();
    Application::add__receivedURI(value);
    Application::DispatchDelayedUri();
}

// public static void remove_ReceivedURI(Uno.EventHandler<string> value) [static] :337
void Application::remove_ReceivedURI(uDelegate* value)
{
    Application_typeof()->Init();
    Application::remove__receivedURI(value);
}

// public static generated void add_Started(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :29
void Application::add_Started(uDelegate* value)
{
    Application_typeof()->Init();
    Application::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::Started1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_Started(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :29
void Application::remove_Started(uDelegate* value)
{
    Application_typeof()->Init();
    Application::Started1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::Started1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void add_Terminating(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :36
void Application::add_Terminating(uDelegate* value)
{
    Application_typeof()->Init();
    Application::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Application::Terminating1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}

// public static generated void remove_Terminating(Uno.Platform2.ApplicationStateTransitionHandler value) [static] :36
void Application::remove_Terminating(uDelegate* value)
{
    Application_typeof()->Init();
    Application::Terminating1() = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Application::Terminating1(), value), ::TYPES[3/*Uno.Platform2.ApplicationStateTransitionHandler*/]);
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform2\$.uno
// ----------------------------------------------------------------------------------------------

// public enum ApplicationState :11
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Platform2.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform2\$.uno
// ----------------------------------------------------------------------------------------------

// public delegate void ApplicationStateTransitionHandler(Uno.Platform2.ApplicationState newState) :21
uDelegateType* ApplicationStateTransitionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Uno.Platform2.ApplicationStateTransitionHandler", 1, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Platform2::ApplicationState_typeof());
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform2\$.uno
// ----------------------------------------------------------------------------------------------

// public sealed extern class Display :386
// {
// ~Display() :397
static void Display__Finalize_fn(Display* __this)
{
    __this->Destroy();
}

static void Display_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::Platform::TimerEventArgs_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Uno::Platform2::Display, _frame), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Uno::Platform2::Display, _framesPerSecond), 0,
        Display__PrivateState_typeof(), offsetof(::g::Uno::Platform2::Display, _private), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Uno::Platform2::Display, _Density), 0,
        ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/], offsetof(::g::Uno::Platform2::Display, _tick1), 0,
        ::TYPES[5/*Uno.EventHandler*/], offsetof(::g::Uno::Platform2::Display, FrameChanged1), 0);
}

uType* Display_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Display);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform2.Display", options);
    type->fp_build_ = Display_build;
    type->fp_ctor_ = (void*)Display__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))Display__Finalize_fn;
    return type;
}

// private Display() :391
void Display__ctor__fn(Display* __this)
{
    __this->ctor_();
}

// private generated void add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :461
void Display__add__tick_fn(Display* __this, uDelegate* value)
{
    __this->add__tick(value);
}

// private generated void remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) :461
void Display__remove__tick_fn(Display* __this, uDelegate* value)
{
    __this->remove__tick(value);
}

// public generated float get_Density() :412
void Display__get_Density_fn(Display* __this, float* __retval)
{
    *__retval = __this->Density();
}

// private generated void set_Density(float value) :412
void Display__set_Density_fn(Display* __this, float* value)
{
    __this->Density(*value);
}

// private extern void Destroy() :403
void Display__Destroy_fn(Display* __this)
{
    __this->Destroy();
}

// public Uno.Rect get_Frame() :417
void Display__get_Frame_fn(Display* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->Frame();
}

// private void set_Frame(Uno.Rect value) :418
void Display__set_Frame_fn(Display* __this, ::g::Uno::Rect* value)
{
    __this->Frame(*value);
}

// public generated void add_FrameChanged(Uno.EventHandler value) :428
void Display__add_FrameChanged_fn(Display* __this, uDelegate* value)
{
    __this->add_FrameChanged(value);
}

// public generated void remove_FrameChanged(Uno.EventHandler value) :428
void Display__remove_FrameChanged_fn(Display* __this, uDelegate* value)
{
    __this->remove_FrameChanged(value);
}

// public uint get_FramesPerSecond() :443
void Display__get_FramesPerSecond_fn(Display* __this, uint32_t* __retval)
{
    *__retval = __this->FramesPerSecond();
}

// public void set_FramesPerSecond(uint value) :444
void Display__set_FramesPerSecond_fn(Display* __this, uint32_t* value)
{
    __this->FramesPerSecond(*value);
}

// private static extern Uno.Platform2.Display GetMainDisplay() :406
void Display__GetMainDisplay_fn(Display** __retval)
{
    *__retval = Display::GetMainDisplay();
}

// private extern void Initialize() :402
void Display__Initialize_fn(Display* __this)
{
    __this->Initialize();
}

// public static Uno.Platform2.Display get_MainDisplay() :405
void Display__get_MainDisplay_fn(Display** __retval)
{
    *__retval = Display::MainDisplay();
}

// private Display New() :391
void Display__New1_fn(Display** __retval)
{
    *__retval = Display::New1();
}

// private void OnFrameChanged() :429
void Display__OnFrameChanged_fn(Display* __this)
{
    __this->OnFrameChanged();
}

// private void OnTick(Uno.Platform.TimerEventArgs args) :483
void Display__OnTick_fn(Display* __this, ::g::Uno::Platform::TimerEventArgs* args)
{
    __this->OnTick(args);
}

// private extern void SetFramesPerSecond(uint value) :455
void Display__SetFramesPerSecond_fn(Display* __this, uint32_t* value_)
{
    __this->SetFramesPerSecond(*value_);
}

// private Display() [instance] :391
void Display::ctor_()
{
    Density(1.0f);
    Initialize();
}

// private generated void add__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :461
void Display::add__tick(uDelegate* value)
{
    _tick1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(_tick1, value), ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]);
}

// private generated void remove__tick(Uno.EventHandler<Uno.Platform.TimerEventArgs> value) [instance] :461
void Display::remove__tick(uDelegate* value)
{
    _tick1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(_tick1, value), ::TYPES[6/*Uno.EventHandler<Uno.Platform.TimerEventArgs>*/]);
}

// public generated float get_Density() [instance] :412
float Display::Density()
{
    return _Density;
}

// private generated void set_Density(float value) [instance] :412
void Display::Density(float value)
{
    _Density = value;
}

// private extern void Destroy() [instance] :403
void Display::Destroy()
{
    this->_private.Destroy(this);
}

// public Uno.Rect get_Frame() [instance] :417
::g::Uno::Rect Display::Frame()
{
    return _frame;
}

// private void set_Frame(Uno.Rect value) [instance] :418
void Display::Frame(::g::Uno::Rect value)
{
    if (::g::Uno::Rect__Equals2(_frame, value))
        return;

    _frame = value;
    OnFrameChanged();
}

// public generated void add_FrameChanged(Uno.EventHandler value) [instance] :428
void Display::add_FrameChanged(uDelegate* value)
{
    FrameChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FrameChanged1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public generated void remove_FrameChanged(Uno.EventHandler value) [instance] :428
void Display::remove_FrameChanged(uDelegate* value)
{
    FrameChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FrameChanged1, value), ::TYPES[5/*Uno.EventHandler*/]);
}

// public uint get_FramesPerSecond() [instance] :443
uint32_t Display::FramesPerSecond()
{
    return _framesPerSecond;
}

// public void set_FramesPerSecond(uint value) [instance] :444
void Display::FramesPerSecond(uint32_t value)
{
    if (_framesPerSecond == value)
        return;

    _framesPerSecond = value;

    if (::g::Uno::Delegate::op_Inequality(_tick1, NULL))
        SetFramesPerSecond(value);
}

// private extern void Initialize() [instance] :402
void Display::Initialize()
{
    this->_private.Initialize(this);
}

// private void OnFrameChanged() [instance] :429
void Display::OnFrameChanged()
{
    uDelegate* handler = FrameChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnTick(Uno.Platform.TimerEventArgs args) [instance] :483
void Display::OnTick(::g::Uno::Platform::TimerEventArgs* args)
{
    uDelegate* handler = _tick1;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, this, args);
}

// private extern void SetFramesPerSecond(uint value) [instance] :455
void Display::SetFramesPerSecond(uint32_t value_)
{
    this->_private.SetFramesPerSecond(this, value_);
}

// private static extern Uno.Platform2.Display GetMainDisplay() [static] :406
Display* Display::GetMainDisplay()
{
    static Display* mainDisplay;
    if (uEnterCriticalIfNull(&mainDisplay))
    {
        mainDisplay = Display::New1();
        uRetain(mainDisplay);
    
        mainDisplay->_private.InitializeAsMainDisplay(mainDisplay);
    
        uExitCritical();
    }
    
    return mainDisplay;
}

// private Display New() [static] :391
Display* Display::New1()
{
    Display* obj1 = (Display*)uNew(Display_typeof());
    obj1->ctor_();
    return obj1;
}

// public static Uno.Platform2.Display get_MainDisplay() [static] :405
Display* Display::MainDisplay()
{
    return Display::GetMainDisplay();
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform2\$.uno
// ----------------------------------------------------------------------------------------------

// private struct Display.PrivateState :388
// {
static void Display__PrivateState_build(uType* type)
{
}

uStructType* Display__PrivateState_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(uPlatform2::Display);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Platform2.Display.PrivateState", options);
    type->fp_build_ = Display__PrivateState_build;
    return type;
}
// }

}}} // ::g::Uno::Platform2
