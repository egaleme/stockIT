// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Input{struct Capturer;}}}
namespace g{namespace Fuse{namespace Input{struct Pointer;}}}
namespace g{namespace Fuse{namespace Input{struct Pointer__PELHolder;}}}
namespace g{namespace Fuse{namespace Input{struct Pointer__PointerRecord;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEntered;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEnteredArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{namespace Input{struct PointerLeft;}}}
namespace g{namespace Fuse{namespace Input{struct PointerLeftArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMoved;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressed;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleased;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerWheelMoved;}}}
namespace g{namespace Fuse{struct HitTestResult;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Fuse{struct VisualEvent;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Input{

// public partial static class Pointer :959
// {
uClassType* Pointer_typeof();
void Pointer__CheckFocus_fn(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes);
void Pointer__get_Coord_fn(::g::Uno::Float2* __retval);
void Pointer__set_Coord_fn(::g::Uno::Float2* value);
void Pointer__get_Entered_fn(::g::Fuse::VisualEvent** __retval);
void Pointer__get_EventResponder_fn(uObject** __retval);
void Pointer__set_EventResponder_fn(uObject* value);
void Pointer__GetHardCapturer_fn(int* pointIndex, ::g::Fuse::Input::Capturer** __retval);
void Pointer__GetLastHitList_fn(int* pointIndex, ::g::Uno::Collections::List** __retval);
void Pointer__GetSoftCapturer_fn(int* pointIndex, ::g::Fuse::Input::Capturer** __retval);
void Pointer__HardCapture_fn(int* pointIndex, ::g::Fuse::Visual* node, uObject* identity, uDelegate* lostCallback, bool* __retval);
void Pointer__IsHardCaptured_fn(int* pointIndex, bool* __retval);
void Pointer__IsHardCaptured1_fn(int* pointIndex, uObject* behavior, bool* __retval);
void Pointer__IsPressed1_fn(int* pointIndex, bool* __retval);
void Pointer__IsSoftCaptured1_fn(int* pointIndex, uObject* capturerIdentity, bool* __retval);
void Pointer__get_Left_fn(::g::Fuse::VisualEvent** __retval);
void Pointer__MarkAncestorHits_fn(::g::Fuse::Visual* hitObject, ::g::Uno::Collections::List* list);
void Pointer__get_Moved_fn(::g::Fuse::VisualEvent** __retval);
void Pointer__get_Pressed_fn(::g::Fuse::VisualEvent** __retval);
void Pointer__ProcessPointerEnterLeave_fn(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args);
void Pointer__RaiseMoved_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval);
void Pointer__RaisePressed_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval);
void Pointer__RaiseReleased_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval);
void Pointer__ReleaseAllCaptures_fn(uObject* identity);
void Pointer__get_Released_fn(::g::Fuse::VisualEvent** __retval);
void Pointer__ReleaseHardCapture_fn(int* pointIndex);
void Pointer__ReleaseSoftCapture_fn(int* pointIndex, uObject* identity);
void Pointer__RoutePointerEvent_fn(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Visual* root, ::g::Fuse::Visual** __retval);
void Pointer__RouteToCapturer_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual** __retval);
void Pointer__RouteToHit_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual* root, ::g::Fuse::Visual** __retval);
void Pointer__RouteToSoftCapturer_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual** __retval);
void Pointer__SoftCapture_fn(int* pointIndex, ::g::Fuse::Visual* softCapturer, uObject* identity, uDelegate* lostCallback, bool* __retval);

struct Pointer : uObject
{
    static uSStrong< ::g::Fuse::Input::PointerEntered*> _entered_;
    static uSStrong< ::g::Fuse::Input::PointerEntered*>& _entered() { return Pointer_typeof()->Init(), _entered_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _hardCapturers_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _hardCapturers() { return Pointer_typeof()->Init(), _hardCapturers_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _lastHitVisuals_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _lastHitVisuals() { return Pointer_typeof()->Init(), _lastHitVisuals_; }
    static uSStrong< ::g::Fuse::Input::PointerLeft*> _left_;
    static uSStrong< ::g::Fuse::Input::PointerLeft*>& _left() { return Pointer_typeof()->Init(), _left_; }
    static uSStrong< ::g::Fuse::Input::PointerMoved*> _moved_;
    static uSStrong< ::g::Fuse::Input::PointerMoved*>& _moved() { return Pointer_typeof()->Init(), _moved_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _pointersDown_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _pointersDown() { return Pointer_typeof()->Init(), _pointersDown_; }
    static uSStrong< ::g::Fuse::Input::PointerPressed*> _pressed_;
    static uSStrong< ::g::Fuse::Input::PointerPressed*>& _pressed() { return Pointer_typeof()->Init(), _pressed_; }
    static uSStrong< ::g::Fuse::Input::PointerReleased*> _released_;
    static uSStrong< ::g::Fuse::Input::PointerReleased*>& _released() { return Pointer_typeof()->Init(), _released_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _softCapturers_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _softCapturers() { return Pointer_typeof()->Init(), _softCapturers_; }
    static uSStrong< ::g::Fuse::Input::PointerWheelMoved*> _wheelMoved_;
    static uSStrong< ::g::Fuse::Input::PointerWheelMoved*>& _wheelMoved() { return Pointer_typeof()->Init(), _wheelMoved_; }
    static ::g::Uno::Float2 _Coord_;
    static ::g::Uno::Float2& _Coord() { return Pointer_typeof()->Init(), _Coord_; }
    static uSStrong<uObject*> _EventResponder_;
    static uSStrong<uObject*>& _EventResponder() { return Pointer_typeof()->Init(), _EventResponder_; }

    static void CheckFocus(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes);
    static ::g::Fuse::Input::Capturer* GetHardCapturer(int pointIndex);
    static ::g::Uno::Collections::List* GetLastHitList(int pointIndex);
    static ::g::Fuse::Input::Capturer* GetSoftCapturer(int pointIndex);
    static bool HardCapture(int pointIndex, ::g::Fuse::Visual* node, uObject* identity, uDelegate* lostCallback);
    static bool IsHardCaptured(int pointIndex);
    static bool IsHardCaptured1(int pointIndex, uObject* behavior);
    static bool IsPressed1(int pointIndex);
    static bool IsSoftCaptured1(int pointIndex, uObject* capturerIdentity);
    static void MarkAncestorHits(::g::Fuse::Visual* hitObject, ::g::Uno::Collections::List* list);
    static void ProcessPointerEnterLeave(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args);
    static bool RaiseMoved(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
    static bool RaisePressed(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
    static bool RaiseReleased(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data);
    static void ReleaseAllCaptures(uObject* identity);
    static void ReleaseHardCapture(int pointIndex);
    static void ReleaseSoftCapture(int pointIndex, uObject* identity);
    static ::g::Fuse::Visual* RoutePointerEvent(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Visual* root);
    static ::g::Fuse::Visual* RouteToCapturer(::g::Fuse::Input::PointerEventData* args);
    static ::g::Fuse::Visual* RouteToHit(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual* root);
    static ::g::Fuse::Visual* RouteToSoftCapturer(::g::Fuse::Input::PointerEventData* args);
    static bool SoftCapture(int pointIndex, ::g::Fuse::Visual* softCapturer, uObject* identity, uDelegate* lostCallback);
    static ::g::Uno::Float2 Coord();
    static void Coord(::g::Uno::Float2 value);
    static ::g::Fuse::VisualEvent* Entered();
    static uObject* EventResponder();
    static void EventResponder(uObject* value);
    static ::g::Fuse::VisualEvent* Left();
    static ::g::Fuse::VisualEvent* Moved();
    static ::g::Fuse::VisualEvent* Pressed();
    static ::g::Fuse::VisualEvent* Released();
};
// }

}}} // ::g::Fuse::Input
