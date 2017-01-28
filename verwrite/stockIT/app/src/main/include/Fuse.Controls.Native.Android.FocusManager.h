// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct FocusManager;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class FocusManager :2423
// {
uType* FocusManager_typeof();
void FocusManager__ctor__fn(FocusManager* __this);
void FocusManager__CompleteFocusLoss_fn(FocusManager* __this);
void FocusManager__GetContext_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval);
void FocusManager__GetWindowToken_fn(::g::Java::Object* viewHandle, ::g::Java::Object** __retval);
void FocusManager__HasFocus_fn(::g::Java::Object* viewHandle, bool* __retval);
void FocusManager__New1_fn(FocusManager** __retval);
void FocusManager__RequestRootViewFocus_fn(::g::Java::Object* viewHandle);

struct FocusManager : uObject
{
    uStrong< ::g::Java::Object*> HideKeyboardContext;
    uStrong< ::g::Java::Object*> HideKeyboardWindowToken;
    uStrong< ::g::Java::Object*> LoseFocus;
    static uSStrong<FocusManager*> Singleton_;
    static uSStrong<FocusManager*>& Singleton() { return FocusManager_typeof()->Init(), Singleton_; }

    void ctor_();
    void CompleteFocusLoss();
    static ::g::Java::Object* GetContext(::g::Java::Object* viewHandle);
    static ::g::Java::Object* GetWindowToken(::g::Java::Object* viewHandle);
    static bool HasFocus(::g::Java::Object* viewHandle);
    static FocusManager* New1();
    static void RequestRootViewFocus(::g::Java::Object* viewHandle);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
