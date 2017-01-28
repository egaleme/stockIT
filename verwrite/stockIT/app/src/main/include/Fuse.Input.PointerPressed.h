// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct PointerPressed;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class PointerPressed :809
// {
::g::Fuse::VisualEvent_type* PointerPressed_typeof();
void PointerPressed__ctor_1_fn(PointerPressed* __this);
void PointerPressed__Invoke_fn(PointerPressed* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void PointerPressed__New1_fn(PointerPressed** __retval);

struct PointerPressed : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static PointerPressed* New1();
};
// }

}}} // ::g::Fuse::Input
