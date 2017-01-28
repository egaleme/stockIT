// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Vector2Value.h>
namespace g{namespace Uno{namespace UX{struct Vector3Value;}}}

namespace g{
namespace Uno{
namespace UX{

// internal class Vector3Value :1805
// {
::g::Uno::UX::Value_type* Vector3Value_typeof();
void Vector3Value__ctor_4_fn(Vector3Value* __this, double* x, double* y, double* z);
void Vector3Value__get_Length_fn(Vector3Value* __this, int* __retval);
void Vector3Value__New4_fn(double* x, double* y, double* z, Vector3Value** __retval);
void Vector3Value__get_W_fn(Vector3Value* __this, double* __retval);
void Vector3Value__get_Z_fn(Vector3Value* __this, double* __retval);

struct Vector3Value : ::g::Uno::UX::Vector2Value
{
    double _z;

    void ctor_4(double x, double y, double z);
    static Vector3Value* New4(double x, double y, double z);
};
// }

}}} // ::g::Uno::UX
