// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Animations\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct Converter;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract class Converter<T> :693
// {
struct Converter_type : uType
{
    void(*fp_In)(::g::Fuse::Animations::Converter*, void*, ::g::Uno::Float4*);
    void(*fp_Out)(::g::Fuse::Animations::Converter*, ::g::Uno::Float4*, uTRef);
};

Converter_type* Converter_typeof();
void Converter__ctor__fn(Converter* __this);

struct Converter : uObject
{
    void ctor_();
    template<class T>
    ::g::Uno::Float4 In(T value);
    void In_ex(void* value, ::g::Uno::Float4* __retval) { (((Converter_type*)__type)->fp_In)(this, value, __retval); }
    template<class T>
    T Out(::g::Uno::Float4 value);
    void Out_ex(::g::Uno::Float4* value, uTRef __retval) { (((Converter_type*)__type)->fp_Out)(this, value, __retval); }
};

}}} // ::g::Fuse::Animations

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Animations{

template<class T>
::g::Uno::Float4 Converter::In(T value) { ::g::Uno::Float4 __retval; return (((Converter_type*)__type)->fp_In)(this, uConstrain(__type->GetBase(Converter_typeof())->T(0), value), &__retval), __retval; }
template<class T>
T Converter::Out(::g::Uno::Float4 value) { T __retval; return (((Converter_type*)__type)->fp_Out)(this, &value, &__retval), __retval; }
// }

}}} // ::g::Fuse::Animations
