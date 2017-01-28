// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Motion\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct BasicBoundedRegion2D;}}}}
namespace g{namespace Fuse{namespace Motion{struct DestinationMotion;}}}
namespace g{namespace Fuse{namespace Motion{struct MotionConfig;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public class MotionConfig :15
// {
uType* MotionConfig_typeof();
void MotionConfig__ctor__fn(MotionConfig* __this);
void MotionConfig__AcquireSimulation_fn(MotionConfig* __this, uObject** __retval);
void MotionConfig__CreateImpl_fn(MotionConfig* __this);
void MotionConfig__get_Goto_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval);
void MotionConfig__get_Overflow_fn(MotionConfig* __this, int* __retval);
void MotionConfig__set_Overflow_fn(MotionConfig* __this, int* value);
void MotionConfig__get_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* __retval);
void MotionConfig__set_OverflowExtent_fn(MotionConfig* __this, ::g::Uno::Float2* value);
void MotionConfig__ReleaseSimulation_fn(MotionConfig* __this);
void MotionConfig__get_Snap_fn(MotionConfig* __this, ::g::Fuse::Motion::DestinationMotion** __retval);
void MotionConfig__get_Unit_fn(MotionConfig* __this, int* __retval);
void MotionConfig__set_Unit_fn(MotionConfig* __this, int* value);

struct MotionConfig : uObject
{
    uStrong< ::g::Fuse::Motion::DestinationMotion*> _goto;
    uStrong< ::g::Fuse::Motion::Simulation::BasicBoundedRegion2D*> _impl;
    int _overflow;
    ::g::Uno::Float2 _overflowExtent;
    uStrong< ::g::Fuse::Motion::DestinationMotion*> _snap;

    void ctor_();
    uObject* AcquireSimulation();
    void CreateImpl();
    ::g::Fuse::Motion::DestinationMotion* Goto();
    int Overflow();
    void Overflow(int value);
    ::g::Uno::Float2 OverflowExtent();
    void OverflowExtent(::g::Uno::Float2 value);
    void ReleaseSimulation();
    ::g::Fuse::Motion::DestinationMotion* Snap();
    int Unit();
    void Unit(int value);
};
// }

}}} // ::g::Fuse::Motion
