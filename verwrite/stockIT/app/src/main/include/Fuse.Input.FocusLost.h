// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct FocusLost;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class FocusLost :34
// {
::g::Fuse::VisualEvent_type* FocusLost_typeof();
void FocusLost__ctor_1_fn(FocusLost* __this);
void FocusLost__Invoke_fn(FocusLost* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusLostArgs* args);
void FocusLost__New1_fn(FocusLost** __retval);

struct FocusLost : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static FocusLost* New1();
};
// }

}}} // ::g::Fuse::Input
