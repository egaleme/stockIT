// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.SizeValue.h>
namespace g{namespace Uno{namespace UX{struct Size2Value;}}}

namespace g{
namespace Uno{
namespace UX{

// internal sealed class Size2Value :1833
// {
::g::Uno::UX::Value_type* Size2Value_typeof();
void Size2Value__ctor_4_fn(Size2Value* __this, double* x, double* y, int* ux, int* uy);
void Size2Value__get_Length_fn(Size2Value* __this, int* __retval);
void Size2Value__New4_fn(double* x, double* y, int* ux, int* uy, Size2Value** __retval);
void Size2Value__get_W_fn(Size2Value* __this, double* __retval);
void Size2Value__get_WUnit_fn(Size2Value* __this, int* __retval);
void Size2Value__get_Y_fn(Size2Value* __this, double* __retval);
void Size2Value__get_YUnit_fn(Size2Value* __this, int* __retval);
void Size2Value__get_Z_fn(Size2Value* __this, double* __retval);
void Size2Value__get_ZUnit_fn(Size2Value* __this, int* __retval);

struct Size2Value : ::g::Uno::UX::SizeValue
{
    int _uy;
    double _y;

    void ctor_4(double x, double y, int ux, int uy);
    static Size2Value* New4(double x, double y, int ux, int uy);
};
// }

}}} // ::g::Uno::UX
