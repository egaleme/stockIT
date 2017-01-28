// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.IPointerEventResponder.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct Pointer__DefaultPointerEventResponder;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}

namespace g{
namespace Fuse{
namespace Input{

// private sealed class Pointer.DefaultPointerEventResponder :1416
// {
struct Pointer__DefaultPointerEventResponder_type : uType
{
    ::g::Fuse::Input::IPointerEventResponder interface0;
};

Pointer__DefaultPointerEventResponder_type* Pointer__DefaultPointerEventResponder_typeof();
void Pointer__DefaultPointerEventResponder__ctor__fn(Pointer__DefaultPointerEventResponder* __this);
void Pointer__DefaultPointerEventResponder__New1_fn(Pointer__DefaultPointerEventResponder** __retval);
void Pointer__DefaultPointerEventResponder__OnPointerMoved_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerMovedArgs* args);
void Pointer__DefaultPointerEventResponder__OnPointerPressed_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerPressedArgs* args);
void Pointer__DefaultPointerEventResponder__OnPointerReleased_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerReleasedArgs* args);

struct Pointer__DefaultPointerEventResponder : uObject
{
    void ctor_();
    void OnPointerMoved(::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(::g::Fuse::Input::PointerReleasedArgs* args);
    static Pointer__DefaultPointerEventResponder* New1();
};
// }

}}} // ::g::Fuse::Input
