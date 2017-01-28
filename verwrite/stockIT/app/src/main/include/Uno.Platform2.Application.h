// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\platform2\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
#include <Uno/Platform2.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Platform{struct KeyEventArgs;}}}
namespace g{namespace Uno{namespace Platform2{struct Application;}}}

namespace g{
namespace Uno{
namespace Platform2{

// public static class Application :25
// {
uClassType* Application_typeof();
void Application___Init_fn();
void Application__add__receivedURI_fn(uDelegate* value);
void Application__remove__receivedURI_fn(uDelegate* value);
void Application___Start_fn();
void Application__DidEnterBackground_fn();
void Application__DidEnterForeground_fn();
void Application__DidEnterInteractive_fn();
void Application__DidExitInteractive_fn();
void Application__DidStart_fn();
void Application__DispatchDelayedUri_fn();
void Application__EnterBackground_fn();
void Application__EnterForeground_fn();
void Application__add_EnteringBackground_fn(uDelegate* value);
void Application__remove_EnteringBackground_fn(uDelegate* value);
void Application__add_EnteringForeground_fn(uDelegate* value);
void Application__remove_EnteringForeground_fn(uDelegate* value);
void Application__add_EnteringInteractive_fn(uDelegate* value);
void Application__remove_EnteringInteractive_fn(uDelegate* value);
void Application__EnterInteractive_fn();
void Application__add_ExitedInteractive_fn(uDelegate* value);
void Application__remove_ExitedInteractive_fn(uDelegate* value);
void Application__ExitInteractive_fn();
void Application__GetRootView_fn(uPlatform2::ViewNativeHandle* __retval);
void Application__add_KeyDown_fn(uDelegate* value);
void Application__remove_KeyDown_fn(uDelegate* value);
void Application__add_KeyUp_fn(uDelegate* value);
void Application__remove_KeyUp_fn(uDelegate* value);
void Application__OnKeyDown_fn(int* key, int* modifiers, bool* __retval);
void Application__OnKeyUp_fn(int* key, int* modifiers, bool* __retval);
void Application__OnReceivedLowMemoryWarning_fn();
void Application__OnReceivedURI_fn(uString* uri);
void Application__Quit_fn();
void Application__add_ReceivedLowMemoryWarning_fn(uDelegate* value);
void Application__remove_ReceivedLowMemoryWarning_fn(uDelegate* value);
void Application__add_ReceivedURI_fn(uDelegate* value);
void Application__remove_ReceivedURI_fn(uDelegate* value);
void Application__ResetContextState_fn();
void Application__get_RootView_fn(uPlatform2::ViewNativeHandle* __retval);
void Application__set_RootView_fn(uPlatform2::ViewNativeHandle* value);
void Application__SetRootView_fn(uPlatform2::ViewNativeHandle* viewHandle_);
void Application__Start_fn();
void Application__add_Started_fn(uDelegate* value);
void Application__remove_Started_fn(uDelegate* value);
void Application__get_State_fn(int* __retval);
void Application__set_State_fn(int* value);
void Application__Terminate_fn();
void Application__add_Terminating_fn(uDelegate* value);
void Application__remove_Terminating_fn(uDelegate* value);
void Application__WillTerminate_fn();

struct Application : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _delayedURIS_;
    static uSStrong< ::g::Uno::Collections::List*>& _delayedURIS() { return Application_typeof()->Init(), _delayedURIS_; }
    static int _State_;
    static int& _State() { return Application_typeof()->Init(), _State_; }
    static uSStrong<uDelegate*> _receivedURI1_;
    static uSStrong<uDelegate*>& _receivedURI1() { return Application_typeof()->Init(), _receivedURI1_; }
    static uSStrong<uDelegate*> EnteringBackground1_;
    static uSStrong<uDelegate*>& EnteringBackground1() { return Application_typeof()->Init(), EnteringBackground1_; }
    static uSStrong<uDelegate*> EnteringForeground1_;
    static uSStrong<uDelegate*>& EnteringForeground1() { return Application_typeof()->Init(), EnteringForeground1_; }
    static uSStrong<uDelegate*> EnteringInteractive1_;
    static uSStrong<uDelegate*>& EnteringInteractive1() { return Application_typeof()->Init(), EnteringInteractive1_; }
    static uSStrong<uDelegate*> ExitedInteractive1_;
    static uSStrong<uDelegate*>& ExitedInteractive1() { return Application_typeof()->Init(), ExitedInteractive1_; }
    static uSStrong<uDelegate*> KeyDown1_;
    static uSStrong<uDelegate*>& KeyDown1() { return Application_typeof()->Init(), KeyDown1_; }
    static uSStrong<uDelegate*> KeyUp1_;
    static uSStrong<uDelegate*>& KeyUp1() { return Application_typeof()->Init(), KeyUp1_; }
    static uSStrong<uDelegate*> ReceivedLowMemoryWarning1_;
    static uSStrong<uDelegate*>& ReceivedLowMemoryWarning1() { return Application_typeof()->Init(), ReceivedLowMemoryWarning1_; }
    static uSStrong<uDelegate*> Started1_;
    static uSStrong<uDelegate*>& Started1() { return Application_typeof()->Init(), Started1_; }
    static uSStrong<uDelegate*> Terminating1_;
    static uSStrong<uDelegate*>& Terminating1() { return Application_typeof()->Init(), Terminating1_; }

    static void _Init();
    static void _Start();
    static void DidEnterBackground();
    static void DidEnterForeground();
    static void DidEnterInteractive();
    static void DidExitInteractive();
    static void DidStart();
    static void DispatchDelayedUri();
    static void EnterBackground();
    static void EnterForeground();
    static void EnterInteractive();
    static void ExitInteractive();
    static uPlatform2::ViewNativeHandle GetRootView();
    static bool OnKeyDown(int key, int modifiers);
    static bool OnKeyUp(int key, int modifiers);
    static void OnReceivedLowMemoryWarning();
    static void OnReceivedURI(uString* uri);
    static void Quit();
    static void ResetContextState();
    static void SetRootView(uPlatform2::ViewNativeHandle viewHandle_);
    static void Start();
    static void Terminate();
    static void WillTerminate();
    static uPlatform2::ViewNativeHandle RootView();
    static void RootView(uPlatform2::ViewNativeHandle value);
    static int State();
    static void State(int value);
    static void add__receivedURI(uDelegate* value);
    static void remove__receivedURI(uDelegate* value);
    static void add_EnteringBackground(uDelegate* value);
    static void remove_EnteringBackground(uDelegate* value);
    static void add_EnteringForeground(uDelegate* value);
    static void remove_EnteringForeground(uDelegate* value);
    static void add_EnteringInteractive(uDelegate* value);
    static void remove_EnteringInteractive(uDelegate* value);
    static void add_ExitedInteractive(uDelegate* value);
    static void remove_ExitedInteractive(uDelegate* value);
    static void add_KeyDown(uDelegate* value);
    static void remove_KeyDown(uDelegate* value);
    static void add_KeyUp(uDelegate* value);
    static void remove_KeyUp(uDelegate* value);
    static void add_ReceivedLowMemoryWarning(uDelegate* value);
    static void remove_ReceivedLowMemoryWarning(uDelegate* value);
    static void add_ReceivedURI(uDelegate* value);
    static void remove_ReceivedURI(uDelegate* value);
    static void add_Started(uDelegate* value);
    static void remove_Started(uDelegate* value);
    static void add_Terminating(uDelegate* value);
    static void remove_Terminating(uDelegate* value);
};
// }

}}} // ::g::Uno::Platform2
