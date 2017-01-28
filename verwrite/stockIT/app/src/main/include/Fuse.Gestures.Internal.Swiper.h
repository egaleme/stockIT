// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Gestures\0.43.11\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct Swiper;}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Fuse{namespace Input{struct PointerMovedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerPressedArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerReleasedArgs;}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct PointerVelocity;}}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// internal sealed class Swiper :915
// {
uType* Swiper_typeof();
void Swiper__ctor__fn(Swiper* __this, ::g::Fuse::Elements::Element* elm);
void Swiper__AddRegion_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region);
void Swiper__AttachSwiper_fn(::g::Fuse::Elements::Element* elm, Swiper** __retval);
void Swiper__CheckNeedUpdated_fn(Swiper* __this, bool* off);
void Swiper__Detach_fn(Swiper* __this);
void Swiper__EndInteraction_fn(Swiper* __this);
void Swiper__FromWindow_fn(Swiper* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval);
void Swiper__MoveUser_fn(Swiper* __this, ::g::Uno::Float2* coord, double* elapsed, bool* release);
void Swiper__New1_fn(::g::Fuse::Elements::Element* elm, Swiper** __retval);
void Swiper__OnLostCapture_fn(Swiper* __this);
void Swiper__OnPointerMoved_fn(Swiper* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
void Swiper__OnPointerPressed_fn(Swiper* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
void Swiper__OnPointerReleased_fn(Swiper* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
void Swiper__OnRooted_fn(Swiper* __this, ::g::Fuse::Elements::Element* n);
void Swiper__OnUnrooted_fn(Swiper* __this);
void Swiper__OnUpdated_fn(Swiper* __this);
void Swiper__RemoveRegion_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region);
void Swiper__RestartMove_fn(Swiper* __this, ::g::Uno::Float2* currentCoord);
void Swiper__SelectRegion_fn(Swiper* __this, ::g::Uno::Float2* diff, bool* force, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval);
void Swiper__SetActivation_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region, bool* on, bool* bypass);

struct Swiper : uObject
{
    bool _allowNewRegion;
    int _attachCount;
    int _down;
    uStrong< ::g::Fuse::Elements::Element*> _element;
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _excludeRegion;
    bool _hasUpdated;
    bool _isHardCapture;
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> _pointerRegion;
    uStrong< ::g::Uno::Collections::List*> _pointerRegions;
    double _prevTime;
    uStrong< ::g::Uno::Collections::List*> _regions;
    ::g::Uno::Float2 _startCoord;
    double _startProgress;
    static uSStrong< ::g::Fuse::PropertyHandle*> _swiperProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _swiperProperty() { return Swiper_typeof()->Init(), _swiperProperty_; }
    uStrong< ::g::Fuse::Motion::Simulation::PointerVelocity*> _velocity;
    float _velocityThreshold;

    void ctor_(::g::Fuse::Elements::Element* elm);
    void AddRegion(::g::Fuse::Gestures::Internal::SwipeRegion* region);
    void CheckNeedUpdated(bool off);
    void Detach();
    void EndInteraction();
    ::g::Uno::Float2 FromWindow(::g::Uno::Float2 p);
    void MoveUser(::g::Uno::Float2 coord, double elapsed, bool release);
    void OnLostCapture();
    void OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args);
    void OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args);
    void OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args);
    void OnRooted(::g::Fuse::Elements::Element* n);
    void OnUnrooted();
    void OnUpdated();
    void RemoveRegion(::g::Fuse::Gestures::Internal::SwipeRegion* region);
    void RestartMove(::g::Uno::Float2 currentCoord);
    ::g::Fuse::Gestures::Internal::SwipeRegion* SelectRegion(::g::Uno::Float2 diff, bool force);
    void SetActivation(::g::Fuse::Gestures::Internal::SwipeRegion* region, bool on, bool bypass);
    static Swiper* AttachSwiper(::g::Fuse::Elements::Element* elm);
    static Swiper* New1(::g::Fuse::Elements::Element* elm);
};
// }

}}}} // ::g::Fuse::Gestures::Internal
