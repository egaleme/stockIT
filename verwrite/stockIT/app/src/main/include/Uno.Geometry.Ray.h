// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Geometry\0.43.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float3.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}

namespace g{
namespace Uno{
namespace Geometry{

// public struct Ray :1604
// {
uStructType* Ray_typeof();
void Ray__ctor__fn(Ray* __this, ::g::Uno::Float3* pos, ::g::Uno::Float3* dir);
void Ray__New1_fn(::g::Uno::Float3* pos, ::g::Uno::Float3* dir, Ray* __retval);

struct Ray
{
    ::g::Uno::Float3 Position;
    ::g::Uno::Float3 Direction;

    void ctor_(::g::Uno::Float3 pos, ::g::Uno::Float3 dir);
};

Ray Ray__New1(::g::Uno::Float3 pos, ::g::Uno::Float3 dir);
// }

}}} // ::g::Uno::Geometry
