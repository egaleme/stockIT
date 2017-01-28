// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGestureHelper;}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct PointerVelocity;}}}}
namespace g{namespace Fuse{namespace Navigation{struct SwipeNavigate;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class SwipeNavigate :3683
// {
::g::Fuse::Node_type* SwipeNavigate_typeof();
void SwipeNavigate__ctor_3_fn(SwipeNavigate* __this);
void SwipeNavigate__get_AllowedDirections_fn(SwipeNavigate* __this, int* __retval);
void SwipeNavigate__set_AllowedDirections_fn(SwipeNavigate* __this, int* value);
void SwipeNavigate__DetermineSnap_fn(SwipeNavigate* __this, int* __retval);
void SwipeNavigate__get_Distance_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval);
void SwipeNavigate__get_ElapsedTime_fn(SwipeNavigate* __this, double* __retval);
void SwipeNavigate__get_ForwardDirection_fn(SwipeNavigate* __this, int* __retval);
void SwipeNavigate__set_ForwardDirection_fn(SwipeNavigate* __this, int* value);
void SwipeNavigate__GetNavigationArgs_fn(SwipeNavigate* __this, ::g::Fuse::Navigation::UpdateSeekArgs** __retval);
void SwipeNavigate__Invert_fn(SwipeNavigate* __this, int* sd, int* __retval);
void SwipeNavigate__get_IsHorizontal_fn(SwipeNavigate* __this, bool* __retval);
void SwipeNavigate__get_Navigation_fn(SwipeNavigate* __this, uObject** __retval);
void SwipeNavigate__New2_fn(SwipeNavigate** __retval);
void SwipeNavigate__OnLostCapture_fn(SwipeNavigate* __this);
void SwipeNavigate__OnPointerMoved_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void SwipeNavigate__OnPointerPressed_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void SwipeNavigate__OnPointerReleased_fn(SwipeNavigate* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void SwipeNavigate__OnRooted_fn(SwipeNavigate* __this);
void SwipeNavigate__OnUnrooted_fn(SwipeNavigate* __this);
void SwipeNavigate__get_ProgressVelocity_fn(SwipeNavigate* __this, float* __retval);
void SwipeNavigate__get_Scale_fn(SwipeNavigate* __this, ::g::Uno::Float2* __retval);
void SwipeNavigate__get_SwipeDirection_fn(SwipeNavigate* __this, int* __retval);
void SwipeNavigate__set_SwipeDirection_fn(SwipeNavigate* __this, int* value);
void SwipeNavigate__get_VelocityThreshold_fn(SwipeNavigate* __this, float* __retval);
void SwipeNavigate__set_VelocityThreshold_fn(SwipeNavigate* __this, float* value);

struct SwipeNavigate : ::g::Fuse::Behavior
{
    ::g::Uno::Float2 _currentCoord;
    uStrong<uObject*> _currentNavigation;
    int _down;
    int _forwardDirection;
    bool _hasMaxPages;
    uStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _horizontalGesture;
    uStrong< ::g::Fuse::Elements::Element*> _lengthNode;
    float _maxPages;
    float _prevDistance;
    ::g::Uno::Float2 _startCoord;
    double _startTime;
    int _swipeAllow;
    uStrong< ::g::Fuse::Motion::Simulation::PointerVelocity*> _velocity;
    uStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> _verticalGesture;
    static float elasticDecay_;
    static float& elasticDecay() { return SwipeNavigate_typeof()->Init(), elasticDecay_; }
    static float elasticScale_;
    static float& elasticScale() { return SwipeNavigate_typeof()->Init(), elasticScale_; }
    float _VelocityThreshold;

    void ctor_3();
    int AllowedDirections();
    void AllowedDirections(int value);
    int DetermineSnap();
    ::g::Uno::Float2 Distance();
    double ElapsedTime();
    int ForwardDirection();
    void ForwardDirection(int value);
    ::g::Fuse::Navigation::UpdateSeekArgs* GetNavigationArgs();
    int Invert(int sd);
    bool IsHorizontal();
    uObject* Navigation();
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    float ProgressVelocity();
    ::g::Uno::Float2 Scale();
    int SwipeDirection();
    void SwipeDirection(int value);
    float VelocityThreshold();
    void VelocityThreshold(float value);
    static SwipeNavigate* New2();
};
// }

}}} // ::g::Fuse::Navigation
