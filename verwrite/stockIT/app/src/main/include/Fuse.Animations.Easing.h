// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Easing;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public abstract class Easing :1261
// {
struct Easing_type : uType
{
    void(*fp_Map)(::g::Fuse::Animations::Easing*, double*, double*);
};

Easing_type* Easing_typeof();
void Easing__ctor__fn(Easing* __this);

struct Easing : uObject
{
    static uSStrong<Easing*> BackIn_;
    static uSStrong<Easing*>& BackIn() { return Easing_typeof()->Init(), BackIn_; }
    static uSStrong<Easing*> BackInOut_;
    static uSStrong<Easing*>& BackInOut() { return Easing_typeof()->Init(), BackInOut_; }
    static uSStrong<Easing*> BackOut_;
    static uSStrong<Easing*>& BackOut() { return Easing_typeof()->Init(), BackOut_; }
    static uSStrong<Easing*> BounceIn_;
    static uSStrong<Easing*>& BounceIn() { return Easing_typeof()->Init(), BounceIn_; }
    static uSStrong<Easing*> BounceInOut_;
    static uSStrong<Easing*>& BounceInOut() { return Easing_typeof()->Init(), BounceInOut_; }
    static uSStrong<Easing*> BounceOut_;
    static uSStrong<Easing*>& BounceOut() { return Easing_typeof()->Init(), BounceOut_; }
    static uSStrong<Easing*> CircularIn_;
    static uSStrong<Easing*>& CircularIn() { return Easing_typeof()->Init(), CircularIn_; }
    static uSStrong<Easing*> CircularInOut_;
    static uSStrong<Easing*>& CircularInOut() { return Easing_typeof()->Init(), CircularInOut_; }
    static uSStrong<Easing*> CircularOut_;
    static uSStrong<Easing*>& CircularOut() { return Easing_typeof()->Init(), CircularOut_; }
    static uSStrong<Easing*> CubicIn_;
    static uSStrong<Easing*>& CubicIn() { return Easing_typeof()->Init(), CubicIn_; }
    static uSStrong<Easing*> CubicInOut_;
    static uSStrong<Easing*>& CubicInOut() { return Easing_typeof()->Init(), CubicInOut_; }
    static uSStrong<Easing*> CubicOut_;
    static uSStrong<Easing*>& CubicOut() { return Easing_typeof()->Init(), CubicOut_; }
    static uSStrong<Easing*> ElasticIn_;
    static uSStrong<Easing*>& ElasticIn() { return Easing_typeof()->Init(), ElasticIn_; }
    static uSStrong<Easing*> ElasticInOut_;
    static uSStrong<Easing*>& ElasticInOut() { return Easing_typeof()->Init(), ElasticInOut_; }
    static uSStrong<Easing*> ElasticOut_;
    static uSStrong<Easing*>& ElasticOut() { return Easing_typeof()->Init(), ElasticOut_; }
    static uSStrong<Easing*> ExponentialIn_;
    static uSStrong<Easing*>& ExponentialIn() { return Easing_typeof()->Init(), ExponentialIn_; }
    static uSStrong<Easing*> ExponentialInOut_;
    static uSStrong<Easing*>& ExponentialInOut() { return Easing_typeof()->Init(), ExponentialInOut_; }
    static uSStrong<Easing*> ExponentialOut_;
    static uSStrong<Easing*>& ExponentialOut() { return Easing_typeof()->Init(), ExponentialOut_; }
    static uSStrong<Easing*> Linear_;
    static uSStrong<Easing*>& Linear() { return Easing_typeof()->Init(), Linear_; }
    static uSStrong<Easing*> QuadraticIn_;
    static uSStrong<Easing*>& QuadraticIn() { return Easing_typeof()->Init(), QuadraticIn_; }
    static uSStrong<Easing*> QuadraticInOut_;
    static uSStrong<Easing*>& QuadraticInOut() { return Easing_typeof()->Init(), QuadraticInOut_; }
    static uSStrong<Easing*> QuadraticOut_;
    static uSStrong<Easing*>& QuadraticOut() { return Easing_typeof()->Init(), QuadraticOut_; }
    static uSStrong<Easing*> QuarticIn_;
    static uSStrong<Easing*>& QuarticIn() { return Easing_typeof()->Init(), QuarticIn_; }
    static uSStrong<Easing*> QuarticInOut_;
    static uSStrong<Easing*>& QuarticInOut() { return Easing_typeof()->Init(), QuarticInOut_; }
    static uSStrong<Easing*> QuarticOut_;
    static uSStrong<Easing*>& QuarticOut() { return Easing_typeof()->Init(), QuarticOut_; }
    static uSStrong<Easing*> QuinticIn_;
    static uSStrong<Easing*>& QuinticIn() { return Easing_typeof()->Init(), QuinticIn_; }
    static uSStrong<Easing*> QuinticInOut_;
    static uSStrong<Easing*>& QuinticInOut() { return Easing_typeof()->Init(), QuinticInOut_; }
    static uSStrong<Easing*> QuinticOut_;
    static uSStrong<Easing*>& QuinticOut() { return Easing_typeof()->Init(), QuinticOut_; }
    static uSStrong<Easing*> SinusoidalIn_;
    static uSStrong<Easing*>& SinusoidalIn() { return Easing_typeof()->Init(), SinusoidalIn_; }
    static uSStrong<Easing*> SinusoidalInOut_;
    static uSStrong<Easing*>& SinusoidalInOut() { return Easing_typeof()->Init(), SinusoidalInOut_; }
    static uSStrong<Easing*> SinusoidalOut_;
    static uSStrong<Easing*>& SinusoidalOut() { return Easing_typeof()->Init(), SinusoidalOut_; }

    void ctor_();
    double Map(double p) { double __retval; return (((Easing_type*)__type)->fp_Map)(this, &p, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
