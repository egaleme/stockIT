// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.IsFocusableChangedArgs.h>
#include <Fuse.Input.IsFocusableChangedHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct IsFocusableChangedEvent;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class IsFocusableChangedEvent :50
// {
::g::Fuse::VisualEvent_type* IsFocusableChangedEvent_typeof();
void IsFocusableChangedEvent__ctor_1_fn(IsFocusableChangedEvent* __this);
void IsFocusableChangedEvent__Invoke_fn(IsFocusableChangedEvent* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::IsFocusableChangedArgs* args);
void IsFocusableChangedEvent__New1_fn(IsFocusableChangedEvent** __retval);

struct IsFocusableChangedEvent : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static IsFocusableChangedEvent* New1();
};
// }

}}} // ::g::Fuse::Input
