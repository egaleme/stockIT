// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Value.h>
namespace g{namespace Uno{namespace UX{struct VectorValue;}}}

namespace g{
namespace Uno{
namespace UX{

// internal class VectorValue :1706
// {
::g::Uno::UX::Value_type* VectorValue_typeof();
void VectorValue__ctor_1_fn(VectorValue* __this);
void VectorValue__AddOp_fn(double* a, double* b, double* __retval);
void VectorValue__DivOp_fn(double* a, double* b, double* __retval);
void VectorValue__MaxOp_fn(double* a, double* b, double* __retval);
void VectorValue__MinOp_fn(double* a, double* b, double* __retval);
void VectorValue__MulOp_fn(double* a, double* b, double* __retval);
void VectorValue__SubOp_fn(double* a, double* b, double* __retval);
void VectorValue__ToDouble_fn(VectorValue* __this, double* __retval);
void VectorValue__ToObject_fn(VectorValue* __this, uObject** __retval);
void VectorValue__ToString_fn(VectorValue* __this, uString** __retval);

struct VectorValue : ::g::Uno::UX::Value
{
    static uSStrong<uDelegate*> _add_;
    static uSStrong<uDelegate*>& _add() { return VectorValue_typeof()->Init(), _add_; }
    static uSStrong<uDelegate*> _div_;
    static uSStrong<uDelegate*>& _div() { return VectorValue_typeof()->Init(), _div_; }
    static uSStrong<uDelegate*> _max_;
    static uSStrong<uDelegate*>& _max() { return VectorValue_typeof()->Init(), _max_; }
    static uSStrong<uDelegate*> _min_;
    static uSStrong<uDelegate*>& _min() { return VectorValue_typeof()->Init(), _min_; }
    static uSStrong<uDelegate*> _mul_;
    static uSStrong<uDelegate*>& _mul() { return VectorValue_typeof()->Init(), _mul_; }
    static uSStrong<uDelegate*> _sub_;
    static uSStrong<uDelegate*>& _sub() { return VectorValue_typeof()->Init(), _sub_; }

    void ctor_1();
    static double AddOp(double a, double b);
    static double DivOp(double a, double b);
    static double MaxOp(double a, double b);
    static double MinOp(double a, double b);
    static double MulOp(double a, double b);
    static double SubOp(double a, double b);
};
// }

}}} // ::g::Uno::UX
