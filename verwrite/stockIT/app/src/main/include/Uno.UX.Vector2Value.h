// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.NumberValue.h>
namespace g{namespace Uno{namespace UX{struct Vector2Value;}}}

namespace g{
namespace Uno{
namespace UX{

// internal class Vector2Value :1795
// {
::g::Uno::UX::Value_type* Vector2Value_typeof();
void Vector2Value__ctor_3_fn(Vector2Value* __this, double* x, double* y);
void Vector2Value__get_Length_fn(Vector2Value* __this, int* __retval);
void Vector2Value__New3_fn(double* x, double* y, Vector2Value** __retval);
void Vector2Value__get_W_fn(Vector2Value* __this, double* __retval);
void Vector2Value__get_Y_fn(Vector2Value* __this, double* __retval);
void Vector2Value__get_Z_fn(Vector2Value* __this, double* __retval);

struct Vector2Value : ::g::Uno::UX::NumberValue
{
    double _y;

    void ctor_3(double x, double y);
    static Vector2Value* New3(double x, double y);
};
// }

}}} // ::g::Uno::UX
