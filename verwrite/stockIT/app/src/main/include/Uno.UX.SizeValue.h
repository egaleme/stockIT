// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.NumberValue.h>
namespace g{namespace Uno{namespace UX{struct SizeValue;}}}

namespace g{
namespace Uno{
namespace UX{

// internal class SizeValue :1822
// {
::g::Uno::UX::Value_type* SizeValue_typeof();
void SizeValue__ctor_3_fn(SizeValue* __this, double* x, int* ux);
void SizeValue__get_HasUnits_fn(SizeValue* __this, bool* __retval);
void SizeValue__New3_fn(double* x, int* ux, SizeValue** __retval);
void SizeValue__get_WUnit_fn(SizeValue* __this, int* __retval);
void SizeValue__get_XUnit_fn(SizeValue* __this, int* __retval);
void SizeValue__get_YUnit_fn(SizeValue* __this, int* __retval);
void SizeValue__get_ZUnit_fn(SizeValue* __this, int* __retval);

struct SizeValue : ::g::Uno::UX::NumberValue
{
    int _ux;

    void ctor_3(double x, int ux);
    static SizeValue* New3(double x, int ux);
};
// }

}}} // ::g::Uno::UX
