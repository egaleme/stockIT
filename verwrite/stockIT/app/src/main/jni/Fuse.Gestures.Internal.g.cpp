// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Internal.EdgeSwiper.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.Internal.SwipeRegion.DoSwiped.h>
#include <Fuse.Gestures.Internal.SwipeRegion.h>
#include <Fuse.Gestures.Internal.SwipeRegion.ProgressFlags.h>
#include <Fuse.Gestures.Internal.SwipeRegionArea.h>
#include <Fuse.Gestures.SwipeGestureHelper.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerPressedHandler.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerReleasedHandler.h>
#include <Fuse.Internal.VectorUtil.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Motion.Simulation.DestinationSimulation-1.h>
#include <Fuse.Motion.Simulation.MotionSimulation-1.h>
#include <Fuse.Motion.Simulation.PointerVelocity-1.h>
#include <Fuse.Motion.Simulation.SampleFlags.h>
#include <Fuse.Motion.Simulation.Simulation.h>
#include <Fuse.Motion.Simulation.SmoothSnap-1.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
#include <Uno.Vector.h>
static uString* STRINGS[8];
static uType* TYPES[13];

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Gestures\0.43.11\internal\$.uno
// -----------------------------------------------------------------------------------------

// private sealed class SwipeRegion.DoSwiped :798
// {
static void SwipeRegion__DoSwiped_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion__DoSwiped, Active), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion__DoSwiped, Cancelled), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion__DoSwiped, Region), 0);
}

uType* SwipeRegion__DoSwiped_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(SwipeRegion__DoSwiped);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Internal.SwipeRegion.DoSwiped", options);
    type->fp_build_ = SwipeRegion__DoSwiped_build;
    type->fp_ctor_ = (void*)SwipeRegion__DoSwiped__New1_fn;
    return type;
}

// public generated DoSwiped() :798
void SwipeRegion__DoSwiped__ctor__fn(SwipeRegion__DoSwiped* __this)
{
    __this->ctor_();
}

// public generated DoSwiped New() :798
void SwipeRegion__DoSwiped__New1_fn(SwipeRegion__DoSwiped** __retval)
{
    *__retval = SwipeRegion__DoSwiped::New1();
}

// public void Perform() :804
void SwipeRegion__DoSwiped__Perform_fn(SwipeRegion__DoSwiped* __this)
{
    __this->Perform();
}

// public generated DoSwiped() [instance] :798
void SwipeRegion__DoSwiped::ctor_()
{
}

// public void Perform() [instance] :804
void SwipeRegion__DoSwiped::Perform()
{
    if (::g::Uno::Delegate::op_Inequality(uPtr(Region)->Swiped1, NULL))
        uPtr(uPtr(Region)->Swiped1)->Invoke(2, uCRef(Active), uCRef(Cancelled));
}

// public generated DoSwiped New() [static] :798
SwipeRegion__DoSwiped* SwipeRegion__DoSwiped::New1()
{
    SwipeRegion__DoSwiped* obj1 = (SwipeRegion__DoSwiped*)uNew(SwipeRegion__DoSwiped_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Gestures\0.43.11\internal\$.uno
// -----------------------------------------------------------------------------------------

// internal sealed class EdgeSwiper :282
// {
// static EdgeSwiper() :282
static void EdgeSwiper__cctor__fn(uType* __type)
{
    EdgeSwiper::_leftRightSwipe_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[0/*Fuse.Gestures.DegreeSpan[]*/], 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f)));
    EdgeSwiper::_upDownSwipe_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(10.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::TYPES[0/*Fuse.Gestures.DegreeSpan[]*/], 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f)));
}

static void EdgeSwiper_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Gestures::DegreeSpan_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::SmoothSnap_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[5] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[10] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), ::g::Uno::Double_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _currentCoord), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _down), 0,
        ::g::Fuse::Gestures::Edge_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _edge), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _edgeThreshold), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _element), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _isHardCapture), 0,
        ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/], offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _pointBody1D), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _previousCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _prevTime), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _progress), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _startProgress), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _target), 0,
        ::TYPES[2/*Fuse.Motion.Simulation.PointerVelocity<float2>*/], offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _velocity), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, _velocityThreshold), 0,
        ::TYPES[10/*Uno.Action<object, double>*/], offsetof(::g::Fuse::Gestures::Internal::EdgeSwiper, ProgressChanged1), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::EdgeSwiper::_leftRightSwipe_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::EdgeSwiper::_upDownSwipe_, uFieldFlagsStatic);
}

uType* EdgeSwiper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 19;
    options.ObjectSize = sizeof(EdgeSwiper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Internal.EdgeSwiper", options);
    type->fp_build_ = EdgeSwiper_build;
    type->fp_ctor_ = (void*)EdgeSwiper__New1_fn;
    type->fp_cctor_ = EdgeSwiper__cctor__fn;
    return type;
}

// public generated EdgeSwiper() :282
void EdgeSwiper__ctor__fn(EdgeSwiper* __this)
{
    __this->ctor_();
}

// private void CalcProgress() :555
void EdgeSwiper__CalcProgress_fn(EdgeSwiper* __this)
{
    __this->CalcProgress();
}

// private void CheckNeedUpdated([bool off]) :383
void EdgeSwiper__CheckNeedUpdated_fn(EdgeSwiper* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public void Disable() :376
void EdgeSwiper__Disable_fn(EdgeSwiper* __this)
{
    __this->Disable();
}

// public Fuse.Gestures.Edge get_Edge() :286
void EdgeSwiper__get_Edge_fn(EdgeSwiper* __this, int* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value) :287
void EdgeSwiper__set_Edge_fn(EdgeSwiper* __this, int* value)
{
    __this->Edge(*value);
}

// public float get_EdgeThreshold() :292
void EdgeSwiper__get_EdgeThreshold_fn(EdgeSwiper* __this, float* __retval)
{
    *__retval = __this->EdgeThreshold();
}

// public void set_EdgeThreshold(float value) :293
void EdgeSwiper__set_EdgeThreshold_fn(EdgeSwiper* __this, float* value)
{
    __this->EdgeThreshold(*value);
}

// public void Enable() :370
void EdgeSwiper__Enable_fn(EdgeSwiper* __this)
{
    __this->Enable();
}

// private float2 FromWindow(float2 p) :435
void EdgeSwiper__FromWindow_fn(EdgeSwiper* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// private bool IsWithinSwipeBounds(float2 windowPoint) :528
void EdgeSwiper__IsWithinSwipeBounds_fn(EdgeSwiper* __this, ::g::Uno::Float2* windowPoint, bool* __retval)
{
    *__retval = __this->IsWithinSwipeBounds(*windowPoint);
}

// private void MoveUser(float2 coord, [bool release]) :443
void EdgeSwiper__MoveUser_fn(EdgeSwiper* __this, ::g::Uno::Float2* coord, bool* release)
{
    __this->MoveUser(*coord, *release);
}

// public generated EdgeSwiper New() :282
void EdgeSwiper__New1_fn(EdgeSwiper** __retval)
{
    *__retval = EdgeSwiper::New1();
}

// private void OnLostCapture() :408
void EdgeSwiper__OnLostCapture_fn(EdgeSwiper* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :458
void EdgeSwiper__OnPointerMoved_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :417
void EdgeSwiper__OnPointerPressed_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :495
void EdgeSwiper__OnPointerReleased_fn(EdgeSwiper* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnUpdated() :401
void EdgeSwiper__OnUpdated_fn(EdgeSwiper* __this)
{
    __this->OnUpdated();
}

// private float PrimaryValue(float2 v) :563
void EdgeSwiper__PrimaryValue_fn(EdgeSwiper* __this, ::g::Uno::Float2* v, float* __retval)
{
    *__retval = __this->PrimaryValue(*v);
}

// public double get_Progress() :316
void EdgeSwiper__get_Progress_fn(EdgeSwiper* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// private void set_Progress(double value) :317
void EdgeSwiper__set_Progress_fn(EdgeSwiper* __this, double* value)
{
    __this->Progress(*value);
}

// public generated void add_ProgressChanged(Uno.Action<object, double> value) :312
void EdgeSwiper__add_ProgressChanged_fn(EdgeSwiper* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.Action<object, double> value) :312
void EdgeSwiper__remove_ProgressChanged_fn(EdgeSwiper* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Rooted(Fuse.Elements.Element e) :347
void EdgeSwiper__Rooted_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element* e)
{
    __this->Rooted(e);
}

// public Fuse.Elements.Element get_Target() :298
void EdgeSwiper__get_Target_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Elements.Element value) :299
void EdgeSwiper__set_Target_fn(EdgeSwiper* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Target(value);
}

// public void Unrooted() :355
void EdgeSwiper__Unrooted_fn(EdgeSwiper* __this)
{
    __this->Unrooted();
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> EdgeSwiper::_leftRightSwipe_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> EdgeSwiper::_upDownSwipe_;

// public generated EdgeSwiper() [instance] :282
void EdgeSwiper::ctor_()
{
    _pointBody1D = (uObject*)((::g::Fuse::Motion::Simulation::SmoothSnap*)::g::Fuse::Motion::Simulation::SmoothSnap::CreateNormalized(::TYPES[1/*Fuse.Motion.Simulation.SmoothSnap<float>*/]));
    _edgeThreshold = 32.0f;
    _previousCoord = ::g::Uno::Float2__New1(0.0f);
    _currentCoord = ::g::Uno::Float2__New1(0.0f);
    _startCoord = ::g::Uno::Float2__New1(0.0f);
    _velocityThreshold = 300.0f;
    _down = -1;
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[2/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
}

// private void CalcProgress() [instance] :555
void EdgeSwiper::CalcProgress()
{
    ::g::Fuse::Elements::Element* ind1 = Target();
    ::g::Fuse::Elements::Element* t = (ind1 != NULL) ? ind1 : (::g::Fuse::Elements::Element*)_element;
    ::g::Uno::Float2 bounds = uPtr(t)->ActualSize();
    ::g::Uno::Float2 progress = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord), bounds);
    Progress(::g::Uno::Math::Clamp(_startProgress + (double)PrimaryValue(progress), 0.0, 1.0));
}

// private void CheckNeedUpdated([bool off]) [instance] :383
void EdgeSwiper::CheckNeedUpdated(bool off)
{
    bool needUpdated = (_down == -1) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_pointBody1D), ::TYPES[3/*Fuse.Motion.Simulation.Simulation*/]));

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EdgeSwiper__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EdgeSwiper__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public void Disable() [instance] :376
void EdgeSwiper::Disable()
{
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_pointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), uCRef(0.0f));
    CheckNeedUpdated(false);
}

// public Fuse.Gestures.Edge get_Edge() [instance] :286
int EdgeSwiper::Edge()
{
    return _edge;
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance] :287
void EdgeSwiper::Edge(int value)
{
    _edge = value;
}

// public float get_EdgeThreshold() [instance] :292
float EdgeSwiper::EdgeThreshold()
{
    return _edgeThreshold;
}

// public void set_EdgeThreshold(float value) [instance] :293
void EdgeSwiper::EdgeThreshold(float value)
{
    _edgeThreshold = value;
}

// public void Enable() [instance] :370
void EdgeSwiper::Enable()
{
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_pointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), uCRef(1.0f));
    CheckNeedUpdated(false);
}

// private float2 FromWindow(float2 p) [instance] :435
::g::Uno::Float2 EdgeSwiper::FromWindow(::g::Uno::Float2 p)
{
    if ((_element == NULL) || (uPtr(_element)->Parent() == NULL))
        return p;

    return uPtr(uPtr(_element)->Parent())->WindowToLocal(p);
}

// private bool IsWithinSwipeBounds(float2 windowPoint) [instance] :528
bool EdgeSwiper::IsWithinSwipeBounds(::g::Uno::Float2 windowPoint)
{
    if ((Target() != NULL) && (uPtr(Target())->GetHitWindowPoint(windowPoint) != NULL))
        return true;

    ::g::Uno::Float2 coord = uPtr(_element)->WindowToLocal(windowPoint);
    ::g::Uno::Float2 bounds = uPtr(_element)->ActualSize();
    float threshold = EdgeThreshold();

    switch (Edge())
    {
        case 0:
            return (coord.X >= 0.0f) && (coord.X <= threshold);
        case 1:
            return (coord.X <= bounds.X) && (coord.X >= (bounds.X - threshold));
        case 2:
            return (coord.Y >= 0.0f) && (coord.Y <= threshold);
        case 3:
            return (coord.Y <= bounds.Y) && (coord.Y >= (bounds.Y - threshold));
    }

    return false;
}

// private void MoveUser(float2 coord, [bool release]) [instance] :443
void EdgeSwiper::MoveUser(::g::Uno::Float2 coord, bool release)
{
    _currentCoord = coord;
    _previousCoord = coord;
    double t = ::g::Uno::Diagnostics::Clock::GetSeconds();
    double elapsed = t - _prevTime;
    _prevTime = t;
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef((double)(float)elapsed), uCRef<int>((!_isHardCapture ? 1 : 0) | (release ? 2 : 0)));
}

// private void OnLostCapture() [instance] :408
void EdgeSwiper::OnLostCapture()
{
    _down = -1;
    _isHardCapture = false;
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_pointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef((float)Progress()));
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    CheckNeedUpdated(false);
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :458
void EdgeSwiper::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    MoveUser(FromWindow(uPtr(args)->WindowPoint()), false);

    if (!_isHardCapture)
    {
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(_currentCoord, _startCoord);
        bool withinBounds = false;

        switch (Edge())
        {
            case 1:
            case 0:
            {
                withinBounds = uPtr(EdgeSwiper::_leftRightSwipe())->IsWithinBounds(diff);
                break;
            }
            case 2:
            case 3:
            {
                withinBounds = uPtr(EdgeSwiper::_upDownSwipe())->IsWithinBounds(diff);
                break;
            }
        }

        if (withinBounds)
        {
            if (uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EdgeSwiper__OnLostCapture_fn, this), _element))
                _isHardCapture = true;
            else
                OnLostCapture();
        }
    }

    CalcProgress();
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :417
void EdgeSwiper::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    if ((_down != -1) || !IsWithinSwipeBounds(uPtr(args)->WindowPoint()))
        return;

    _isHardCapture = false;

    if (uPtr(args)->TrySoftCapture(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)EdgeSwiper__OnLostCapture_fn, this), _element))
    {
        _startProgress = Progress();
        _down = uPtr(args)->PointIndex();
        _prevTime = ::g::Uno::Diagnostics::Clock::GetSeconds();
        _previousCoord = FromWindow(args->WindowPoint());
        _currentCoord = FromWindow(args->WindowPoint());
        _startCoord = FromWindow(args->WindowPoint());
        ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(_velocity), uCRef(_currentCoord), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(0.0));
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :495
void EdgeSwiper::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    ::g::Uno::Float2 ret3;

    if (_down != uPtr(args)->PointIndex())
        return;

    if (!_isHardCapture)
    {
        OnLostCapture();
        return;
    }

    MoveUser(FromWindow(uPtr(args)->WindowPoint()), true);
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    float v = PrimaryValue((::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret3), ret3));
    bool on = false;

    if (v < -_velocityThreshold)
        on = false;
    else if (v > _velocityThreshold)
        on = true;
    else if (Progress() > 0.5)
        on = true;

    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_pointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), uCRef((float)(on ? 1 : 0)));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_pointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef((float)Progress()));
    _down = -1;
    _isHardCapture = false;
    CheckNeedUpdated(false);
}

// private void OnUpdated() [instance] :401
void EdgeSwiper::OnUpdated()
{
    float ret4;
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_pointBody1D), ::TYPES[3/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval());
    Progress((double)(::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_pointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), &ret4), ret4));
    CheckNeedUpdated(true);
}

// private float PrimaryValue(float2 v) [instance] :563
float EdgeSwiper::PrimaryValue(::g::Uno::Float2 v)
{
    switch (Edge())
    {
        case 0:
            return v.X;
        case 1:
            return -v.X;
        case 2:
            return v.Y;
        case 3:
            return -v.Y;
    }

    return 0.0f;
}

// public double get_Progress() [instance] :316
double EdgeSwiper::Progress()
{
    return _progress;
}

// private void set_Progress(double value) [instance] :317
void EdgeSwiper::Progress(double value)
{
    _progress = ::g::Uno::Math::Max(value, 0.0);

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, NULL))
        uPtr(ProgressChanged1)->Invoke(2, this, uCRef(_progress));
}

// public generated void add_ProgressChanged(Uno.Action<object, double> value) [instance] :312
void EdgeSwiper::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[10/*Uno.Action<object, double>*/]);
}

// public generated void remove_ProgressChanged(Uno.Action<object, double> value) [instance] :312
void EdgeSwiper::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[10/*Uno.Action<object, double>*/]);
}

// public void Rooted(Fuse.Elements.Element e) [instance] :347
void EdgeSwiper::Rooted(::g::Fuse::Elements::Element* e)
{
    _element = e;
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _element, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)EdgeSwiper__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _element, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)EdgeSwiper__OnPointerMoved_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _element, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)EdgeSwiper__OnPointerReleased_fn, this));
}

// public Fuse.Elements.Element get_Target() [instance] :298
::g::Fuse::Elements::Element* EdgeSwiper::Target()
{
    return _target;
}

// public void set_Target(Fuse.Elements.Element value) [instance] :299
void EdgeSwiper::Target(::g::Fuse::Elements::Element* value)
{
    _target = value;
}

// public void Unrooted() [instance] :355
void EdgeSwiper::Unrooted()
{
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _element, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)EdgeSwiper__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _element, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)EdgeSwiper__OnPointerMoved_fn, this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _element, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)EdgeSwiper__OnPointerReleased_fn, this));
}

// public generated EdgeSwiper New() [static] :282
EdgeSwiper* EdgeSwiper::New1()
{
    EdgeSwiper* obj2 = (EdgeSwiper*)uNew(EdgeSwiper_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Gestures\0.43.11\internal\$.uno
// -----------------------------------------------------------------------------------------

// public enum SwipeRegion.ProgressFlags :700
uEnumType* SwipeRegion__ProgressFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Internal.SwipeRegion.ProgressFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Interacting", 1LL,
        "EndProgress", 2LL);
    return type;
}

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Gestures\0.43.11\internal\$.uno
// -----------------------------------------------------------------------------------------

// internal sealed class Swiper :915
// {
// static Swiper() :915
static void Swiper__cctor__fn(uType* __type)
{
    Swiper::_swiperProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void Swiper_build(uType* type)
{
    ::STRINGS[0] = uString::Const("incomplete swipe detected");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Gestures\\0.43.11\\internal\\$.uno");
    ::STRINGS[2] = uString::Const("CheckNeedUpdated");
    ::TYPES[11] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[6] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Input::PointerPressedHandler_typeof();
    ::TYPES[9] = ::g::Fuse::Input::PointerReleasedHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Input::PointerMovedHandler_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[5] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _allowNewRegion), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _attachCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _down), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _element), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _excludeRegion), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _isHardCapture), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _pointerRegion), 0,
        ::TYPES[11/*Uno.Collections.List<Fuse.Gestures.Internal.SwipeRegion>*/], offsetof(::g::Fuse::Gestures::Internal::Swiper, _pointerRegions), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _prevTime), 0,
        ::TYPES[11/*Uno.Collections.List<Fuse.Gestures.Internal.SwipeRegion>*/], offsetof(::g::Fuse::Gestures::Internal::Swiper, _regions), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _startCoord), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _startProgress), 0,
        ::TYPES[2/*Fuse.Motion.Simulation.PointerVelocity<float2>*/], offsetof(::g::Fuse::Gestures::Internal::Swiper, _velocity), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::Swiper, _velocityThreshold), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::Swiper::_swiperProperty_, uFieldFlagsStatic);
}

uType* Swiper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 16;
    options.ObjectSize = sizeof(Swiper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.Internal.Swiper", options);
    type->fp_build_ = Swiper_build;
    type->fp_cctor_ = Swiper__cctor__fn;
    return type;
}

// private Swiper(Fuse.Elements.Element elm) :921
void Swiper__ctor__fn(Swiper* __this, ::g::Fuse::Elements::Element* elm)
{
    __this->ctor_(elm);
}

// public void AddRegion(Fuse.Gestures.Internal.SwipeRegion region) :961
void Swiper__AddRegion_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    __this->AddRegion(region);
}

// public static Fuse.Gestures.Internal.Swiper AttachSwiper(Fuse.Elements.Element elm) :927
void Swiper__AttachSwiper_fn(::g::Fuse::Elements::Element* elm, Swiper** __retval)
{
    *__retval = Swiper::AttachSwiper(elm);
}

// private void CheckNeedUpdated([bool off]) :998
void Swiper__CheckNeedUpdated_fn(Swiper* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public void Detach() :943
void Swiper__Detach_fn(Swiper* __this)
{
    __this->Detach();
}

// private void EndInteraction() :1056
void Swiper__EndInteraction_fn(Swiper* __this)
{
    __this->EndInteraction();
}

// private float2 FromWindow(float2 p) :1103
void Swiper__FromWindow_fn(Swiper* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// private void MoveUser(float2 coord, double elapsed, [bool release]) :1111
void Swiper__MoveUser_fn(Swiper* __this, ::g::Uno::Float2* coord, double* elapsed, bool* release)
{
    __this->MoveUser(*coord, *elapsed, *release);
}

// private Swiper New(Fuse.Elements.Element elm) :921
void Swiper__New1_fn(::g::Fuse::Elements::Element* elm, Swiper** __retval)
{
    *__retval = Swiper::New1(elm);
}

// private void OnLostCapture() :1047
void Swiper__OnLostCapture_fn(Swiper* __this)
{
    __this->OnLostCapture();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) :1125
void Swiper__OnPointerMoved_fn(Swiper* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) :1074
void Swiper__OnPointerPressed_fn(Swiper* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) :1228
void Swiper__OnPointerReleased_fn(Swiper* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// private void OnRooted(Fuse.Elements.Element n) :978
void Swiper__OnRooted_fn(Swiper* __this, ::g::Fuse::Elements::Element* n)
{
    __this->OnRooted(n);
}

// private void OnUnrooted() :989
void Swiper__OnUnrooted_fn(Swiper* __this)
{
    __this->OnUnrooted();
}

// private void OnUpdated() :1031
void Swiper__OnUpdated_fn(Swiper* __this)
{
    __this->OnUpdated();
}

// public void RemoveRegion(Fuse.Gestures.Internal.SwipeRegion region) :972
void Swiper__RemoveRegion_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    __this->RemoveRegion(region);
}

// private void RestartMove(float2 currentCoord) :1118
void Swiper__RestartMove_fn(Swiper* __this, ::g::Uno::Float2* currentCoord)
{
    __this->RestartMove(*currentCoord);
}

// private Fuse.Gestures.Internal.SwipeRegion SelectRegion(float2 diff, bool force) :1205
void Swiper__SelectRegion_fn(Swiper* __this, ::g::Uno::Float2* diff, bool* force, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->SelectRegion(*diff, *force);
}

// public void SetActivation(Fuse.Gestures.Internal.SwipeRegion region, bool on, [bool bypass]) :1260
void Swiper__SetActivation_fn(Swiper* __this, ::g::Fuse::Gestures::Internal::SwipeRegion* region, bool* on, bool* bypass)
{
    __this->SetActivation(region, *on, *bypass);
}

uSStrong< ::g::Fuse::PropertyHandle*> Swiper::_swiperProperty_;

// private Swiper(Fuse.Elements.Element elm) [instance] :921
void Swiper::ctor_(::g::Fuse::Elements::Element* elm)
{
    _attachCount = 1;
    _pointerRegions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[11/*Uno.Collections.List<Fuse.Gestures.Internal.SwipeRegion>*/]));
    _regions = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[11/*Uno.Collections.List<Fuse.Gestures.Internal.SwipeRegion>*/]));
    _down = -1;
    _velocityThreshold = 300.0f;
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::TYPES[2/*Fuse.Motion.Simulation.PointerVelocity<float2>*/]));
    _element = elm;
}

// public void AddRegion(Fuse.Gestures.Internal.SwipeRegion region) [instance] :961
void Swiper::AddRegion(::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret2;
    int i = 0;

    for (i = 0; i < uPtr(_regions)->Count(); ++i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_regions), uCRef<int>(i), &ret2), ret2))->Priority > uPtr(region)->Priority)
            break;

    ::g::Uno::Collections::List__Insert_fn(uPtr(_regions), uCRef<int>(i), region);
    CheckNeedUpdated(false);
}

// private void CheckNeedUpdated([bool off]) [instance] :998
void Swiper::CheckNeedUpdated(bool off)
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret3;
    bool needUpdated = false;

    for (int i = 0; i < uPtr(_regions)->Count(); ++i)
    {
        ::g::Fuse::Gestures::Internal::SwipeRegion* region = (::g::Uno::Collections::List__get_Item_fn(uPtr(_regions), uCRef<int>(i), &ret3), ret3);

        if (!uPtr(region)->IsStatic())
            needUpdated = true;
        else if (uPtr(region)->InProgress())
        {
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[0/*"incomplete ...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 1011, ::STRINGS[2/*"CheckNeedUp...*/]);
            uPtr(region)->SetProgress(uPtr(region)->StableProgress(), 2);
        }
    }

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Swiper__OnUpdated_fn, this), 0);
        _hasUpdated = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Swiper__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public void Detach() [instance] :943
void Swiper::Detach()
{
    _attachCount--;

    if (_attachCount == 0)
    {
        uPtr(uPtr(_element)->Properties())->Clear(Swiper::_swiperProperty());
        OnUnrooted();
    }
}

// private void EndInteraction() [instance] :1056
void Swiper::EndInteraction()
{
    ::g::Fuse::Input::Pointer::ReleaseAllCaptures(this);
    _down = -1;
    _isHardCapture = false;
    uPtr(_element)->EndInteraction(this);
    CheckNeedUpdated(false);
}

// private float2 FromWindow(float2 p) [instance] :1103
::g::Uno::Float2 Swiper::FromWindow(::g::Uno::Float2 p)
{
    if ((_element == NULL) || (uPtr(_element)->Parent() == NULL))
        return p;

    return uPtr(uPtr(_element)->Parent())->WindowToLocal(p);
}

// private void MoveUser(float2 coord, double elapsed, [bool release]) [instance] :1111
void Swiper::MoveUser(::g::Uno::Float2 coord, double elapsed, bool release)
{
    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(coord), uCRef((double)(float)elapsed), uCRef<int>((!_isHardCapture ? 1 : 0) | (release ? 2 : 0)));
}

// private void OnLostCapture() [instance] :1047
void Swiper::OnLostCapture()
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret4;
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret5;

    for (int i = 0; i < uPtr(_pointerRegions)->Count(); ++i)
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_pointerRegions), uCRef<int>(i), &ret4), ret4))->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef((float)uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(_pointerRegions), uCRef<int>(i), &ret5), ret5))->Progress()));

    if (_pointerRegion != NULL)
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(uPtr(_pointerRegion)->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef((float)uPtr(_pointerRegion)->Progress()));

    EndInteraction();
}

// private void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance] :1125
void Swiper::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    if (_down != uPtr(args)->PointIndex())
        return;

    MoveUser(FromWindow(uPtr(args)->WindowPoint()), uPtr(args)->Timestamp() - _prevTime, false);
    ::g::Uno::Float2 currentCoord = FromWindow(args->WindowPoint());
    _prevTime = args->Timestamp();

    for (int i = 0; i < 2; ++i)
    {
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(currentCoord, _startCoord);

        if (!_isHardCapture || _allowNewRegion)
        {
            ::g::Fuse::Gestures::Internal::SwipeRegion* selRegion = SelectRegion(diff, _isHardCapture);

            if ((selRegion == _excludeRegion) && (_excludeRegion != NULL))
                RestartMove(currentCoord);
            else if ((selRegion != NULL) && (selRegion != _pointerRegion))
            {
                if (_pointerRegion != NULL)
                    SetActivation(_pointerRegion, uPtr(_pointerRegion)->StableProgress() > 0.5, false);

                _excludeRegion = NULL;
                _pointerRegion = selRegion;

                if (!_isHardCapture)
                {
                    if (!uPtr(args)->TryHardCapture(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Swiper__OnLostCapture_fn, this), _element))
                    {
                        OnLostCapture();
                        return;
                    }

                    _isHardCapture = true;
                    RestartMove(FromWindow(uPtr(args)->WindowPoint()));
                    uPtr(_element)->BeginInteraction(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Swiper__OnLostCapture_fn, this));
                }

                _startProgress = uPtr(_pointerRegion)->Progress();
                currentCoord = FromWindow(uPtr(args)->WindowPoint());
                diff = ::g::Uno::Float2__op_Subtraction2(currentCoord, _startCoord);
                _allowNewRegion = uPtr(_pointerRegion)->Continuous;
            }
        }

        if (_pointerRegion != NULL)
        {
            if (uPtr(_pointerRegion)->InteractProgress(diff, _startProgress))
            {
                RestartMove(currentCoord);
                _excludeRegion = _pointerRegion;
                _pointerRegion = NULL;
                _allowNewRegion = true;
            }
            else if (!_allowNewRegion)
            {
                _allowNewRegion = ((_startProgress == 0.0) && (uPtr(_pointerRegion)->Progress() == 0.0));
                continue;
            }
        }

        break;
    }
}

// private void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance] :1074
void Swiper::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret6;

    if (_down != -1)
        return;

    ::g::Uno::Float2 coord = FromWindow(uPtr(args)->WindowPoint());
    _prevTime = args->Timestamp();
    uPtr(_pointerRegions)->Clear();
    _pointerRegion = NULL;
    _excludeRegion = NULL;

    for (int i = 0; i < uPtr(_regions)->Count(); ++i)
    {
        ::g::Fuse::Gestures::Internal::SwipeRegion* region = (::g::Uno::Collections::List__get_Item_fn(uPtr(_regions), uCRef<int>(i), &ret6), ret6);

        if (uPtr(region)->IsSelectable() && uPtr(region)->IsPointInside(_element, coord))
            ::g::Uno::Collections::List__Add_fn(uPtr(_pointerRegions), region);
    }

    if (uPtr(_pointerRegions)->Count() == 0)
        return;

    _isHardCapture = false;

    if (args->TrySoftCapture(this, uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)Swiper__OnLostCapture_fn, this), _element))
    {
        _down = uPtr(args)->PointIndex();
        _startCoord = FromWindow(args->WindowPoint());
        ::g::Fuse::Motion::Simulation::PointerVelocity__Reset_fn(uPtr(_velocity), uCRef(_startCoord));
    }
}

// private void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance] :1228
void Swiper::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    ::g::Uno::Float2 ret7;

    if (_down != uPtr(args)->PointIndex())
        return;

    if (!_isHardCapture || (_pointerRegion == NULL))
    {
        OnLostCapture();
        return;
    }

    ::g::Uno::Float2 currentCoord = FromWindow(uPtr(args)->WindowPoint());
    uPtr(_pointerRegion)->InteractProgress(::g::Uno::Float2__op_Subtraction2(currentCoord, _startCoord), _startProgress);
    MoveUser(currentCoord, args->Timestamp() - _prevTime, true);
    float v = uPtr(_pointerRegion)->ScalarValue((::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(_velocity), &ret7), ret7));
    double pdiff = uPtr(_pointerRegion)->Progress() - _startProgress;
    bool on = false;

    if (v < -_velocityThreshold)
        on = false;
    else if (v > _velocityThreshold)
        on = true;
    else if (pdiff >= 0.0)
        on = uPtr(_pointerRegion)->Progress() > (double)uPtr(_pointerRegion)->ActivationThreshold;
    else
        on = !(uPtr(_pointerRegion)->Progress() < (double)uPtr(_pointerRegion)->DeactivationThreshold);

    SetActivation(_pointerRegion, on, false);
    EndInteraction();
}

// private void OnRooted(Fuse.Elements.Element n) [instance] :978
void Swiper::OnRooted(::g::Fuse::Elements::Element* n)
{
    _pointerRegion = NULL;
    uPtr(_pointerRegions)->Clear();
    _element = n;
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _element, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)Swiper__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _element, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)Swiper__OnPointerReleased_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _element, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)Swiper__OnPointerMoved_fn, this));
}

// private void OnUnrooted() [instance] :989
void Swiper::OnUnrooted()
{
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), _element, uDelegate::New(::TYPES[7/*Fuse.Input.PointerPressedHandler*/], (void*)Swiper__OnPointerPressed_fn, this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), _element, uDelegate::New(::TYPES[9/*Fuse.Input.PointerReleasedHandler*/], (void*)Swiper__OnPointerReleased_fn, this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), _element, uDelegate::New(::TYPES[8/*Fuse.Input.PointerMovedHandler*/], (void*)Swiper__OnPointerMoved_fn, this));
    _element = NULL;
}

// private void OnUpdated() [instance] :1031
void Swiper::OnUpdated()
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret8;
    float ret9;

    for (int i = 0; i < uPtr(_regions)->Count(); ++i)
    {
        ::g::Fuse::Gestures::Internal::SwipeRegion* region = (::g::Uno::Collections::List__get_Item_fn(uPtr(_regions), uCRef<int>(i), &ret8), ret8);

        if (uPtr(region)->IsStatic() && !uPtr(region)->InProgress())
            continue;

        if (!uPtr(region)->IsStatic())
            ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[3/*Fuse.Motion.Simulation.Simulation*/]), ::g::Fuse::Time::FrameInterval() * uPtr(region)->TimeMultiplier);

        uPtr(region)->SetProgress((double)(::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), &ret9), ret9), uPtr(region)->IsStatic() ? 2 : 0);
    }

    CheckNeedUpdated(true);
}

// public void RemoveRegion(Fuse.Gestures.Internal.SwipeRegion region) [instance] :972
void Swiper::RemoveRegion(::g::Fuse::Gestures::Internal::SwipeRegion* region)
{
    bool ret10;
    ::g::Uno::Collections::List__Remove_fn(uPtr(_regions), region, &ret10);
    CheckNeedUpdated(false);
}

// private void RestartMove(float2 currentCoord) [instance] :1118
void Swiper::RestartMove(::g::Uno::Float2 currentCoord)
{
    _startCoord = currentCoord;
    ::g::Fuse::Motion::Simulation::PointerVelocity__Reset_fn(uPtr(_velocity), uCRef(_startCoord));
}

// private Fuse.Gestures.Internal.SwipeRegion SelectRegion(float2 diff, bool force) [instance] :1205
::g::Fuse::Gestures::Internal::SwipeRegion* Swiper::SelectRegion(::g::Uno::Float2 diff, bool force)
{
    ::g::Fuse::Gestures::Internal::SwipeRegion* ret11;
    ::g::Fuse::Gestures::Internal::SwipeRegion* sel = NULL;

    for (int i = 0; i < uPtr(_pointerRegions)->Count(); i++)
    {
        ::g::Fuse::Gestures::Internal::SwipeRegion* region = (::g::Uno::Collections::List__get_Item_fn(uPtr(_pointerRegions), uCRef<int>(i), &ret11), ret11);
        float str = uPtr(region)->ActivateStrength(diff);

        if (str <= 0.0f)
            continue;

        if (!force && (str < 10.0f))
            continue;

        if ((sel == NULL) || (uPtr(sel)->Progress() < region->Progress()))
            sel = region;
    }

    return sel;
}

// public void SetActivation(Fuse.Gestures.Internal.SwipeRegion region, bool on, [bool bypass]) [instance] :1260
void Swiper::SetActivation(::g::Fuse::Gestures::Internal::SwipeRegion* region, bool on, bool bypass)
{
    float ret12;
    float ret13;
    float d = on ? 1.0f : 0.0f;

    if (d != (::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), &ret12), ret12))
    {
        ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), uCRef(d));
        region->IsActive(on);
    }

    if (bypass)
    {
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef(d));
        region->SetProgress((double)d, 2);
    }
    else
    {
        uPtr(region)->TriggerSwipe = true;
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(region->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), uCRef((float)region->Progress()));

        if (region->IsStatic())
            uPtr(region)->SetProgress((double)(::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(uPtr(region)->PointBody1D), ::TYPES[6/*Fuse.Motion.Simulation.MotionSimulation<float>*/]), &ret13), ret13), 2);
    }

    CheckNeedUpdated(false);
}

// public static Fuse.Gestures.Internal.Swiper AttachSwiper(Fuse.Elements.Element elm) [static] :927
Swiper* Swiper::AttachSwiper(::g::Fuse::Elements::Element* elm)
{
    Swiper_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(Swiper::_swiperProperty(), &v))
    {
        Swiper* s = uAs<Swiper*>(v, Swiper_typeof());
        uPtr(s)->_attachCount++;
        return s;
    }

    Swiper* ns = Swiper::New1(elm);
    uPtr(uPtr(elm)->Properties())->Set(Swiper::_swiperProperty(), ns);
    ns->OnRooted(elm);
    return ns;
}

// private Swiper New(Fuse.Elements.Element elm) [static] :921
Swiper* Swiper::New1(::g::Fuse::Elements::Element* elm)
{
    Swiper* obj1 = (Swiper*)uNew(Swiper_typeof());
    obj1->ctor_(elm);
    return obj1;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Gestures\0.43.11\internal\$.uno
// -----------------------------------------------------------------------------------------

// internal sealed class SwipeRegion :677
// {
// static SwipeRegion() :677
static void SwipeRegion__cctor__fn(uType* __type)
{
    SwipeRegion::InProgressName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"InProgress"*/]);
    SwipeRegion::ProgressName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Progress"*/]);
    SwipeRegion::_isActiveName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"IsActive"*/]);
}

static void SwipeRegion_build(uType* type)
{
    ::STRINGS[3] = uString::Const("InProgress");
    ::STRINGS[4] = uString::Const("Progress");
    ::STRINGS[5] = uString::Const("IsActive");
    ::STRINGS[6] = uString::Const("Unexpected progress in swipe");
    ::STRINGS[1] = uString::Const("C:\\Users\\Emenike pc\\AppData\\Local\\Fusetools\\Packages\\Fuse.Gestures\\0.43.11\\internal\\$.uno");
    ::STRINGS[7] = uString::Const("SetProgress");
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::SmoothSnap_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[12] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipeRegion_type, interface0));
    type->SetFields(1,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _inProgress), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _isActive), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _isEnabled), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _progress), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, _stableProgress), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, ActivationThreshold), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegionArea_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Area), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, AreaVector), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, AreaVectorDistance), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, AutoTrigger), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Continuous), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, DeactivationThreshold), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Direction), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, IsInterruptible), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Length), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, LengthElement), 0,
        ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/], offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, PointBody1D), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Priority), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Range), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, RevertActive), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, TimeMultiplier), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, TriggerSwipe), 0,
        ::TYPES[12/*Uno.Action<bool, bool>*/], offsetof(::g::Fuse::Gestures::Internal::SwipeRegion, Swiped1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::SwipeRegion::_isActiveName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::SwipeRegion::InProgressName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Gestures::Internal::SwipeRegion::ProgressName_, uFieldFlagsStatic);
}

SwipeRegion_type* SwipeRegion_typeof()
{
    static uSStrong<SwipeRegion_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 27;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SwipeRegion);
    options.TypeSize = sizeof(SwipeRegion_type);
    type = (SwipeRegion_type*)uClassType::New("Fuse.Gestures.Internal.SwipeRegion", options);
    type->fp_build_ = SwipeRegion_build;
    type->fp_ctor_ = (void*)SwipeRegion__New2_fn;
    type->fp_cctor_ = SwipeRegion__cctor__fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipeRegion__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public generated SwipeRegion() :677
void SwipeRegion__ctor_1_fn(SwipeRegion* __this)
{
    __this->ctor_1();
}

// public float ActivateStrength(float2 diff) :883
void SwipeRegion__ActivateStrength_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, float* __retval)
{
    *__retval = __this->ActivateStrength(*diff);
}

// private void DoRevertActive() :790
void SwipeRegion__DoRevertActive_fn(SwipeRegion* __this)
{
    __this->DoRevertActive();
}

// public bool get_InProgress() :711
void SwipeRegion__get_InProgress_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->InProgress();
}

// private void set_InProgress(bool value) :712
void SwipeRegion__set_InProgress_fn(SwipeRegion* __this, bool* value)
{
    __this->InProgress(*value);
}

// public bool InteractProgress(float2 diff, double startProgress) :898
void SwipeRegion__InteractProgress_fn(SwipeRegion* __this, ::g::Uno::Float2* diff, double* startProgress, bool* __retval)
{
    *__retval = __this->InteractProgress(*diff, *startProgress);
}

// public bool get_IsActive() :779
void SwipeRegion__get_IsActive_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value) :780
void SwipeRegion__set_IsActive_fn(SwipeRegion* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsEnabled() :684
void SwipeRegion__get_IsEnabled_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value) :685
void SwipeRegion__set_IsEnabled_fn(SwipeRegion* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public bool IsPointInside(Fuse.Elements.Element prime, float2 coord) :863
void SwipeRegion__IsPointInside_fn(SwipeRegion* __this, ::g::Fuse::Elements::Element* prime, ::g::Uno::Float2* coord, bool* __retval)
{
    *__retval = __this->IsPointInside(prime, *coord);
}

// public bool get_IsSelectable() :826
void SwipeRegion__get_IsSelectable_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->IsSelectable();
}

// public bool get_IsStatic() :821
void SwipeRegion__get_IsStatic_fn(SwipeRegion* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public generated SwipeRegion New() :677
void SwipeRegion__New2_fn(SwipeRegion** __retval)
{
    *__retval = SwipeRegion::New2();
}

// public double get_Progress() :691
void SwipeRegion__get_Progress_fn(SwipeRegion* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public float ScalarValue(float2 x) :909
void SwipeRegion__ScalarValue_fn(SwipeRegion* __this, ::g::Uno::Float2* x, float* __retval)
{
    *__retval = __this->ScalarValue(*x);
}

// public void SetActive(bool active) :722
void SwipeRegion__SetActive_fn(SwipeRegion* __this, bool* active)
{
    __this->SetActive(*active);
}

// internal bool SetProgress(double value, [Fuse.Gestures.Internal.SwipeRegion.ProgressFlags flags]) :728
void SwipeRegion__SetProgress_fn(SwipeRegion* __this, double* value, int* flags, bool* __retval)
{
    *__retval = __this->SetProgress(*value, *flags);
}

// public double get_StableProgress() :697
void SwipeRegion__get_StableProgress_fn(SwipeRegion* __this, double* __retval)
{
    *__retval = __this->StableProgress();
}

// public generated void add_Swiped(Uno.Action<bool, bool> value) :773
void SwipeRegion__add_Swiped_fn(SwipeRegion* __this, uDelegate* value)
{
    __this->add_Swiped(value);
}

// public generated void remove_Swiped(Uno.Action<bool, bool> value) :773
void SwipeRegion__remove_Swiped_fn(SwipeRegion* __this, uDelegate* value)
{
    __this->remove_Swiped(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :679
void SwipeRegion__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipeRegion* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
}

::g::Uno::UX::Selector SwipeRegion::_isActiveName_;
::g::Uno::UX::Selector SwipeRegion::InProgressName_;
::g::Uno::UX::Selector SwipeRegion::ProgressName_;

// public generated SwipeRegion() [instance] :677
void SwipeRegion::ctor_1()
{
    _isEnabled = true;
    Range = ::g::Uno::Math::DegreesToRadians1(30.0f);
    PointBody1D = (uObject*)((::g::Fuse::Motion::Simulation::SmoothSnap*)::g::Fuse::Motion::Simulation::SmoothSnap::CreateNormalized(::TYPES[1/*Fuse.Motion.Simulation.SmoothSnap<float>*/]));
    AreaVectorDistance = 100.0f;
    Length = 100.0;
    ActivationThreshold = 0.5f;
    DeactivationThreshold = 0.5f;
    IsInterruptible = true;
    TimeMultiplier = 1.0;
    ctor_();
}

// public float ActivateStrength(float2 diff) [instance] :883
float SwipeRegion::ActivateStrength(::g::Uno::Float2 diff)
{
    float l = ::g::Uno::Vector::Length(diff);
    float a = ::g::Fuse::Internal::VectorUtil::Angle(diff, Direction);

    if ((Progress() < 1.0) && (a < (Range / 2.0f)))
        return l;

    if ((Progress() > 0.0) && (a > (3.14159274f - (Range / 2.0f))))
        return l;

    return 0.0f;
}

// private void DoRevertActive() [instance] :790
void SwipeRegion::DoRevertActive()
{
    SetProgress(0.0, 2);
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(PointBody1D), ::TYPES[5/*Fuse.Motion.Simulation.DestinationSimulation<float>*/]), uCRef(0.0f));
    IsActive(false);
}

// public bool get_InProgress() [instance] :711
bool SwipeRegion::InProgress()
{
    return _inProgress;
}

// private void set_InProgress(bool value) [instance] :712
void SwipeRegion::InProgress(bool value)
{
    if (value == _inProgress)
        return;

    _inProgress = value;
    OnPropertyChanged(SwipeRegion::InProgressName());
}

// public bool InteractProgress(float2 diff, double startProgress) [instance] :898
bool SwipeRegion::InteractProgress(::g::Uno::Float2 diff, double startProgress)
{
    float l = ::g::Fuse::Internal::VectorUtil::ScalarProjection(diff, Direction);
    double extent = Length;

    if (LengthElement != NULL)
        extent = (double)::g::Uno::Math::Abs1(::g::Uno::Vector::Dot(Direction, uPtr(LengthElement)->ActualSize()));

    double p = ::g::Uno::Math::Clamp(((double)l / extent) + startProgress, 0.0, 1.0);
    return SetProgress(p, 1);
}

// public bool get_IsActive() [instance] :779
bool SwipeRegion::IsActive()
{
    return _isActive;
}

// public void set_IsActive(bool value) [instance] :780
void SwipeRegion::IsActive(bool value)
{
    if (value != _isActive)
    {
        _isActive = value;
        OnPropertyChanged(SwipeRegion::_isActiveName());
    }
}

// public bool get_IsEnabled() [instance] :684
bool SwipeRegion::IsEnabled()
{
    return _isEnabled;
}

// public void set_IsEnabled(bool value) [instance] :685
void SwipeRegion::IsEnabled(bool value)
{
    _isEnabled = value;
}

// public bool IsPointInside(Fuse.Elements.Element prime, float2 coord) [instance] :863
bool SwipeRegion::IsPointInside(::g::Fuse::Elements::Element* prime, ::g::Uno::Float2 coord)
{
    if (Area == 0)
        return true;

    if (Area == 1)
    {
        ::g::Uno::Float2 size = uPtr(prime)->ActualSize();

        if ((((coord.X < 0.0f) || (coord.Y < 0.0f)) || (coord.X > size.X)) || (coord.Y > size.Y))
            return false;

        ::g::Uno::Float4 v = ::g::Uno::Float4__op_Multiply2(AreaVector, ::g::Uno::Float4__New7(size, size));
        float l = ::g::Fuse::Internal::VectorUtil::DistanceLine(v, coord);
        return l < AreaVectorDistance;
    }

    return false;
}

// public bool get_IsSelectable() [instance] :826
bool SwipeRegion::IsSelectable()
{
    return (IsStatic() || IsInterruptible) && IsEnabled();
}

// public bool get_IsStatic() [instance] :821
bool SwipeRegion::IsStatic()
{
    return ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(PointBody1D), ::TYPES[3/*Fuse.Motion.Simulation.Simulation*/]));
}

// public double get_Progress() [instance] :691
double SwipeRegion::Progress()
{
    return _progress;
}

// public float ScalarValue(float2 x) [instance] :909
float SwipeRegion::ScalarValue(::g::Uno::Float2 x)
{
    return ::g::Fuse::Internal::VectorUtil::ScalarProjection(x, Direction);
}

// public void SetActive(bool active) [instance] :722
void SwipeRegion::SetActive(bool active)
{
    SetProgress((double)(active ? 1 : 0), 2);
}

// internal bool SetProgress(double value, [Fuse.Gestures.Internal.SwipeRegion.ProgressFlags flags]) [instance] :728
bool SwipeRegion::SetProgress(double value, int flags)
{
    SwipeRegion__DoSwiped* collection1;
    bool interacting = (flags & 1) == 1;
    bool endProgress = (flags & 2) == 2;
    _progress = value;
    OnPropertyChanged(SwipeRegion::ProgressName());
    InProgress(!endProgress);

    if (interacting && !AutoTrigger)
        return false;

    bool swiped = false;

    if (endProgress)
    {
        if (!((_progress == 1.0) || (_progress == 0.0)))
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[6/*"Unexpected ...*/], this, ::STRINGS[1/*"C:\\Users\\...*/], 748, ::STRINGS[7/*"SetProgress"*/]);

        bool active = _progress == 1.0;
        bool cancelled = _stableProgress == _progress;

        if (TriggerSwipe || AutoTrigger)
        {
            ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)SwipeRegion__DoSwiped__Perform_fn, uPtr((collection1 = SwipeRegion__DoSwiped::New1(), uPtr(collection1)->Active = active, uPtr(collection1)->Region = this, uPtr(collection1)->Cancelled = cancelled, collection1))), -1, 0);
            TriggerSwipe = false;
            swiped = true;
        }

        _stableProgress = _progress;

        if (active && RevertActive)
            ::g::Fuse::UpdateManager::AddDeferredAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)SwipeRegion__DoRevertActive_fn, this), ::g::Fuse::LayoutPriority::Post());
    }

    return swiped;
}

// public double get_StableProgress() [instance] :697
double SwipeRegion::StableProgress()
{
    return _stableProgress;
}

// public generated void add_Swiped(Uno.Action<bool, bool> value) [instance] :773
void SwipeRegion::add_Swiped(uDelegate* value)
{
    Swiped1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Swiped1, value), ::TYPES[12/*Uno.Action<bool, bool>*/]);
}

// public generated void remove_Swiped(Uno.Action<bool, bool> value) [instance] :773
void SwipeRegion::remove_Swiped(uDelegate* value)
{
    Swiped1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Swiped1, value), ::TYPES[12/*Uno.Action<bool, bool>*/]);
}

// public generated SwipeRegion New() [static] :677
SwipeRegion* SwipeRegion::New2()
{
    SwipeRegion* obj2 = (SwipeRegion*)uNew(SwipeRegion_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Gestures\0.43.11\internal\$.uno
// -----------------------------------------------------------------------------------------

// internal enum SwipeRegionArea :671
uEnumType* SwipeRegionArea_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Gestures.Internal.SwipeRegionArea", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "All", 0LL,
        "Vector", 1LL);
    return type;
}

}}}} // ::g::Fuse::Gestures::Internal
