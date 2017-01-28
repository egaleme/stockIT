// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Animations\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Converter-1.h>
#include <Uno.Float.h>
namespace g{namespace Fuse{namespace Animations{struct ConverterFloat;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class ConverterFloat :699
// {
::g::Fuse::Animations::Converter_type* ConverterFloat_typeof();
void ConverterFloat__ctor_1_fn(ConverterFloat* __this);
void ConverterFloat__In_fn(ConverterFloat* __this, float* value, ::g::Uno::Float4* __retval);
void ConverterFloat__New1_fn(ConverterFloat** __retval);
void ConverterFloat__Out_fn(ConverterFloat* __this, ::g::Uno::Float4* value, float* __retval);

struct ConverterFloat : ::g::Fuse::Animations::Converter
{
    static uSStrong<ConverterFloat*> Singleton_;
    static uSStrong<ConverterFloat*>& Singleton() { return ConverterFloat_typeof()->Init(), Singleton_; }

    void ctor_1();
    static ConverterFloat* New1();
};
// }

}}} // ::g::Fuse::Animations
