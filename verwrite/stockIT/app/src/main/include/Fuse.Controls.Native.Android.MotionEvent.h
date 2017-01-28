// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct MotionEvent;}}}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class MotionEvent :972
// {
uType* MotionEvent_typeof();
void MotionEvent__ctor__fn(MotionEvent* __this, ::g::Java::Object* handle);
void MotionEvent__get_Action_fn(MotionEvent* __this, int* __retval);
void MotionEvent__get_ActionMasked_fn(MotionEvent* __this, int* __retval);
void MotionEvent__Compare_fn(::g::Java::Object* handle1, ::g::Java::Object* handle2, bool* __retval);
void MotionEvent__Equals_fn(MotionEvent* __this, uObject* obj, bool* __retval);
void MotionEvent__get_EventTime_fn(MotionEvent* __this, int64_t* __retval);
void MotionEvent__GetAction_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval);
void MotionEvent__GetActionMasked_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval);
void MotionEvent__GetEventTime_fn(MotionEvent* __this, ::g::Java::Object* handle, int64_t* __retval);
void MotionEvent__GetLocationOnScreen_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, ::g::Uno::Float2* __retval);
void MotionEvent__GetLocationOnScreenX_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, int* __retval);
void MotionEvent__GetLocationOnScreenY_fn(MotionEvent* __this, ::g::Java::Object* viewHandle, int* __retval);
void MotionEvent__GetPointerCount_fn(MotionEvent* __this, ::g::Java::Object* handle, int* __retval);
void MotionEvent__GetPointerId_fn(MotionEvent* __this, int* pointerIndex, int* __retval);
void MotionEvent__GetPointerId1_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, int* __retval);
void MotionEvent__GetPointerIndexMask_fn(int* __retval);
void MotionEvent__GetPointerIndexShift_fn(int* __retval);
void MotionEvent__GetPosition_fn(MotionEvent* __this, int* pointerIndex, ::g::Uno::Float2* __retval);
void MotionEvent__GetX_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval);
void MotionEvent__GetY_fn(MotionEvent* __this, ::g::Java::Object* handle, int* pointerIndex, float* __retval);
void MotionEvent__New1_fn(::g::Java::Object* handle, MotionEvent** __retval);
void MotionEvent__get_PointerCount_fn(MotionEvent* __this, int* __retval);
void MotionEvent__PointerEventDataForView_fn(MotionEvent* __this, ::g::Java::Object* view, float* pointDensity, uArray** __retval);
void MotionEvent__get_PointerIndexMask_fn(int* __retval);
void MotionEvent__get_PointerIndexShift_fn(int* __retval);

struct MotionEvent : uObject
{
    uStrong< ::g::Java::Object*> _handle;

    void ctor_(::g::Java::Object* handle);
    int Action();
    int ActionMasked();
    int64_t EventTime();
    int GetAction(::g::Java::Object* handle);
    int GetActionMasked(::g::Java::Object* handle);
    int64_t GetEventTime(::g::Java::Object* handle);
    ::g::Uno::Float2 GetLocationOnScreen(::g::Java::Object* viewHandle);
    int GetLocationOnScreenX(::g::Java::Object* viewHandle);
    int GetLocationOnScreenY(::g::Java::Object* viewHandle);
    int GetPointerCount(::g::Java::Object* handle);
    int GetPointerId(int pointerIndex);
    int GetPointerId1(::g::Java::Object* handle, int pointerIndex);
    ::g::Uno::Float2 GetPosition(int pointerIndex);
    float GetX(::g::Java::Object* handle, int pointerIndex);
    float GetY(::g::Java::Object* handle, int pointerIndex);
    int PointerCount();
    uArray* PointerEventDataForView(::g::Java::Object* view, float pointDensity);
    static bool Compare(::g::Java::Object* handle1, ::g::Java::Object* handle2);
    static int GetPointerIndexMask();
    static int GetPointerIndexShift();
    static MotionEvent* New1(::g::Java::Object* handle);
    static int PointerIndexMask();
    static int PointerIndexShift();
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
