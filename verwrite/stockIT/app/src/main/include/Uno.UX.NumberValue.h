// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.VectorValue.h>
namespace g{namespace Uno{namespace UX{struct NumberValue;}}}

namespace g{
namespace Uno{
namespace UX{

// internal class NumberValue :1784
// {
::g::Uno::UX::Value_type* NumberValue_typeof();
void NumberValue__ctor_2_fn(NumberValue* __this, double* v);
void NumberValue__New2_fn(double* v, NumberValue** __retval);
void NumberValue__ToDouble_fn(NumberValue* __this, double* __retval);
void NumberValue__get_W_fn(NumberValue* __this, double* __retval);
void NumberValue__get_X_fn(NumberValue* __this, double* __retval);
void NumberValue__get_Y_fn(NumberValue* __this, double* __retval);
void NumberValue__get_Z_fn(NumberValue* __this, double* __retval);

struct NumberValue : ::g::Uno::UX::VectorValue
{
    double _x;

    void ctor_2(double v);
    static NumberValue* New2(double v);
};
// }

}}} // ::g::Uno::UX
