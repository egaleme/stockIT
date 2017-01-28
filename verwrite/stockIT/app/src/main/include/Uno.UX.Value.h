// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{namespace Uno{namespace UX{struct Size2;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class Value :1394
// {
struct Value_type : uType
{
    void(*fp_get_HasUnits)(::g::Uno::UX::Value*, bool*);
    void(*fp_get_Length)(::g::Uno::UX::Value*, int*);
    void(*fp_ToBool)(::g::Uno::UX::Value*, bool*);
    void(*fp_ToDouble)(::g::Uno::UX::Value*, double*);
    void(*fp_ToObject)(::g::Uno::UX::Value*, uObject**);
    void(*fp_get_W)(::g::Uno::UX::Value*, double*);
    void(*fp_get_WUnit)(::g::Uno::UX::Value*, int*);
    void(*fp_get_X)(::g::Uno::UX::Value*, double*);
    void(*fp_get_XUnit)(::g::Uno::UX::Value*, int*);
    void(*fp_get_Y)(::g::Uno::UX::Value*, double*);
    void(*fp_get_YUnit)(::g::Uno::UX::Value*, int*);
    void(*fp_get_Z)(::g::Uno::UX::Value*, double*);
    void(*fp_get_ZUnit)(::g::Uno::UX::Value*, int*);
};

Value_type* Value_typeof();
void Value__ctor__fn(Value* __this);
void Value__Cast_fn(uType* targetType, uObject* value, uObject** __retval);
void Value__get_HasUnits_fn(Value* __this, bool* __retval);
void Value__get_Length_fn(Value* __this, int* __retval);
void Value__op_Implicit_fn(bool* f, Value** __retval);
void Value__op_Implicit1_fn(double* f, Value** __retval);
void Value__op_Implicit2_fn(float* f, Value** __retval);
void Value__op_Implicit3_fn(::g::Uno::Float2* f, Value** __retval);
void Value__op_Implicit4_fn(::g::Uno::Float3* f, Value** __retval);
void Value__op_Implicit5_fn(::g::Uno::Float4* f, Value** __retval);
void Value__op_Implicit6_fn(int* f, Value** __retval);
void Value__op_Implicit7_fn(uString* f, Value** __retval);
void Value__op_Implicit8_fn(uObject* v, Value** __retval);
void Value__op_Implicit9_fn(::g::Uno::UX::Size* f, Value** __retval);
void Value__op_Implicit10_fn(::g::Uno::UX::Size2* f, Value** __retval);
void Value__ToAbstract_fn(uObject* value, uObject** __retval);
void Value__ToBool_fn(Value* __this, bool* __retval);
void Value__ToFloat_fn(Value* __this, float* __retval);
void Value__ToFloat2_fn(Value* __this, ::g::Uno::Float2* __retval);
void Value__ToFloat3_fn(Value* __this, ::g::Uno::Float3* __retval);
void Value__ToFloat4_fn(Value* __this, ::g::Uno::Float4* __retval);
void Value__ToInt_fn(Value* __this, int* __retval);
void Value__ToSize_fn(Value* __this, ::g::Uno::UX::Size* __retval);
void Value__ToSize2_fn(Value* __this, ::g::Uno::UX::Size2* __retval);
void Value__ToSpecific_fn(uType* t, uObject* obj, uObject** __retval);
void Value__ToString_fn(Value* __this, uString** __retval);
void Value__get_W_fn(Value* __this, double* __retval);
void Value__get_WUnit_fn(Value* __this, int* __retval);
void Value__get_X_fn(Value* __this, double* __retval);
void Value__get_XUnit_fn(Value* __this, int* __retval);
void Value__get_Y_fn(Value* __this, double* __retval);
void Value__get_YUnit_fn(Value* __this, int* __retval);
void Value__get_Z_fn(Value* __this, double* __retval);
void Value__get_ZUnit_fn(Value* __this, int* __retval);

struct Value : uObject
{
    void ctor_();
    bool HasUnits() { bool __retval; return (((Value_type*)__type)->fp_get_HasUnits)(this, &__retval), __retval; }
    int Length() { int __retval; return (((Value_type*)__type)->fp_get_Length)(this, &__retval), __retval; }
    bool ToBool() { bool __retval; return (((Value_type*)__type)->fp_ToBool)(this, &__retval), __retval; }
    double ToDouble() { double __retval; return (((Value_type*)__type)->fp_ToDouble)(this, &__retval), __retval; }
    float ToFloat();
    ::g::Uno::Float2 ToFloat2();
    ::g::Uno::Float3 ToFloat3();
    ::g::Uno::Float4 ToFloat4();
    int ToInt();
    uObject* ToObject() { uObject* __retval; return (((Value_type*)__type)->fp_ToObject)(this, &__retval), __retval; }
    ::g::Uno::UX::Size ToSize();
    ::g::Uno::UX::Size2 ToSize2();
    double W() { double __retval; return (((Value_type*)__type)->fp_get_W)(this, &__retval), __retval; }
    int WUnit() { int __retval; return (((Value_type*)__type)->fp_get_WUnit)(this, &__retval), __retval; }
    double X() { double __retval; return (((Value_type*)__type)->fp_get_X)(this, &__retval), __retval; }
    int XUnit() { int __retval; return (((Value_type*)__type)->fp_get_XUnit)(this, &__retval), __retval; }
    double Y() { double __retval; return (((Value_type*)__type)->fp_get_Y)(this, &__retval), __retval; }
    int YUnit() { int __retval; return (((Value_type*)__type)->fp_get_YUnit)(this, &__retval), __retval; }
    double Z() { double __retval; return (((Value_type*)__type)->fp_get_Z)(this, &__retval), __retval; }
    int ZUnit() { int __retval; return (((Value_type*)__type)->fp_get_ZUnit)(this, &__retval), __retval; }
    static uObject* Cast(uType* targetType, uObject* value);
    static Value* op_Implicit(bool f);
    static Value* op_Implicit1(double f);
    static Value* op_Implicit2(float f);
    static Value* op_Implicit3(::g::Uno::Float2 f);
    static Value* op_Implicit4(::g::Uno::Float3 f);
    static Value* op_Implicit5(::g::Uno::Float4 f);
    static Value* op_Implicit6(int f);
    static Value* op_Implicit7(uString* f);
    static Value* op_Implicit8(uObject* v);
    static Value* op_Implicit9(::g::Uno::UX::Size f);
    static Value* op_Implicit10(::g::Uno::UX::Size2 f);
    static uObject* ToAbstract(uObject* value);
    static bool ToBool(Value* __this) { bool __retval; return Value__ToBool_fn(__this, &__retval), __retval; }
    static uObject* ToSpecific(uType* t, uObject* obj);
    static bool HasUnits(Value* __this) { bool __retval; return Value__get_HasUnits_fn(__this, &__retval), __retval; }
    static int Length(Value* __this) { int __retval; return Value__get_Length_fn(__this, &__retval), __retval; }
    static double W(Value* __this) { double __retval; return Value__get_W_fn(__this, &__retval), __retval; }
    static int WUnit(Value* __this) { int __retval; return Value__get_WUnit_fn(__this, &__retval), __retval; }
    static double X(Value* __this) { double __retval; return Value__get_X_fn(__this, &__retval), __retval; }
    static int XUnit(Value* __this) { int __retval; return Value__get_XUnit_fn(__this, &__retval), __retval; }
    static double Y(Value* __this) { double __retval; return Value__get_Y_fn(__this, &__retval), __retval; }
    static int YUnit(Value* __this) { int __retval; return Value__get_YUnit_fn(__this, &__retval), __retval; }
    static double Z(Value* __this) { double __retval; return Value__get_Z_fn(__this, &__retval), __retval; }
    static int ZUnit(Value* __this) { int __retval; return Value__get_ZUnit_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
