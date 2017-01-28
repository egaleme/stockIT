// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Vector3Value.h>
namespace g{namespace Uno{namespace UX{struct Vector4Value;}}}

namespace g{
namespace Uno{
namespace UX{

// internal sealed class Vector4Value :1814
// {
::g::Uno::UX::Value_type* Vector4Value_typeof();
void Vector4Value__ctor_5_fn(Vector4Value* __this, double* x, double* y, double* z, double* w);
void Vector4Value__get_Length_fn(Vector4Value* __this, int* __retval);
void Vector4Value__New5_fn(double* x, double* y, double* z, double* w, Vector4Value** __retval);
void Vector4Value__get_W_fn(Vector4Value* __this, double* __retval);

struct Vector4Value : ::g::Uno::UX::Vector3Value
{
    double _w;

    void ctor_5(double x, double y, double z, double w);
    static Vector4Value* New5(double x, double y, double z, double w);
};
// }

}}} // ::g::Uno::UX
