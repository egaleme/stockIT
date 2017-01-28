// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Motion\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}
namespace g{namespace Fuse{namespace Motion{struct DestinationMotion;}}}

namespace g{
namespace Fuse{
namespace Motion{

// public sealed class DestinationMotion<T> :243
// {
uType* DestinationMotion_typeof();
void DestinationMotion__ctor__fn(DestinationMotion* __this);
void DestinationMotion__Create_fn(DestinationMotion* __this, uObject** __retval);
void DestinationMotion__get_Distance_fn(DestinationMotion* __this, float* __retval);
void DestinationMotion__set_Distance_fn(DestinationMotion* __this, float* value);
void DestinationMotion__get_Duration_fn(DestinationMotion* __this, float* __retval);
void DestinationMotion__set_Duration_fn(DestinationMotion* __this, float* value);
void DestinationMotion__get_DurationExp_fn(DestinationMotion* __this, float* __retval);
void DestinationMotion__set_DurationExp_fn(DestinationMotion* __this, float* value);
void DestinationMotion__get_Easing_fn(DestinationMotion* __this, ::g::Fuse::Animations::Easing** __retval);
void DestinationMotion__set_Easing_fn(DestinationMotion* __this, ::g::Fuse::Animations::Easing* value);
void DestinationMotion__New1_fn(uType* __type, DestinationMotion** __retval);
void DestinationMotion__get_Type_fn(DestinationMotion* __this, int* __retval);
void DestinationMotion__set_Type_fn(DestinationMotion* __this, int* value);
void DestinationMotion__get_Unit_fn(DestinationMotion* __this, int* __retval);
void DestinationMotion__set_Unit_fn(DestinationMotion* __this, int* value);

struct DestinationMotion : uObject
{
    float _distance;
    float _duration;
    float _durationExp;
    uStrong< ::g::Fuse::Animations::Easing*> _easing;
    bool _explicitType;
    bool _hasDistance;
    bool _hasDuration;
    int _type;
    int _unit;

    void ctor_();
    uObject* Create();
    float Distance();
    void Distance(float value);
    float Duration();
    void Duration(float value);
    float DurationExp();
    void DurationExp(float value);
    ::g::Fuse::Animations::Easing* Easing();
    void Easing(::g::Fuse::Animations::Easing* value);
    int Type();
    void Type(int value);
    int Unit();
    void Unit(int value);
    static DestinationMotion* New1(uType* __type);
};
// }

}}} // ::g::Fuse::Motion
