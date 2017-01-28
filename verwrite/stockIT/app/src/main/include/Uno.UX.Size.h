// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct Size;}}}

namespace g{
namespace Uno{
namespace UX{

// public struct Size :1105
// {
uStructType* Size_typeof();
void Size__ctor__fn(Size* __this, float* value, int* unit);
void Size__get_Auto_fn(Size* __retval);
void Size__Combine_fn(int* a, int* b, int* __retval);
void Size__DetermineUnit_fn(Size* __this, int* __retval);
void Size__Equals_fn(Size* __this, uType* __type, uObject* obj, bool* __retval);
void Size__GetHashCode_fn(Size* __this, uType* __type, int* __retval);
void Size__get_IsAuto_fn(Size* __this, bool* __retval);
void Size__New1_fn(float* value, int* unit, Size* __retval);
void Size__op_Addition_fn(Size* a, Size* b, Size* __retval);
void Size__op_Explicit_fn(Size* s, float* __retval);
void Size__op_Implicit_fn(float* unspecifiedUnits, Size* __retval);
void Size__op_Implicit1_fn(int* unspecifiedUnits, Size* __retval);
void Size__op_Inequality_fn(Size* a, Size* b, bool* __retval);
void Size__op_Multiply_fn(Size* a, float* b, Size* __retval);
void Size__op_Subtraction_fn(Size* a, Size* b, Size* __retval);
void Size__Percent_fn(float* value, Size* __retval);
void Size__Pixels_fn(float* value, Size* __retval);
void Size__Points_fn(float* value, Size* __retval);
void Size__ToString_fn(Size* __this, uType* __type, uString** __retval);

struct Size
{
    float Value;
    int Unit;

    void ctor_(float value, int unit);
    int DetermineUnit();
    bool Equals(uType* __type, uObject* obj) { bool __retval; return Size__Equals_fn(this, __type, obj, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return Size__GetHashCode_fn(this, __type, &__retval), __retval; }
    bool IsAuto();
    uString* ToString(uType* __type) { uString* __retval; return Size__ToString_fn(this, __type, &__retval), __retval; }
    static int Combine(int a, int b);
};

Size Size__New1(float value, int unit);
Size Size__op_Addition(Size a, Size b);
float Size__op_Explicit(Size s);
Size Size__op_Implicit(float unspecifiedUnits);
Size Size__op_Implicit1(int unspecifiedUnits);
bool Size__op_Inequality(Size a, Size b);
Size Size__op_Multiply(Size a, float b);
Size Size__op_Subtraction(Size a, Size b);
Size Size__Percent(float value);
Size Size__Pixels(float value);
Size Size__Points(float value);
Size Size__Auto();
// }

}}} // ::g::Uno::UX
