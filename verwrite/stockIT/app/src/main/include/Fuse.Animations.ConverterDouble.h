// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Animations\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Converter-1.h>
#include <Uno.Double.h>
namespace g{namespace Fuse{namespace Animations{struct ConverterDouble;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class ConverterDouble :742
// {
::g::Fuse::Animations::Converter_type* ConverterDouble_typeof();
void ConverterDouble__ctor_1_fn(ConverterDouble* __this);
void ConverterDouble__In_fn(ConverterDouble* __this, double* value, ::g::Uno::Float4* __retval);
void ConverterDouble__New1_fn(ConverterDouble** __retval);
void ConverterDouble__Out_fn(ConverterDouble* __this, ::g::Uno::Float4* value, double* __retval);

struct ConverterDouble : ::g::Fuse::Animations::Converter
{
    static uSStrong<ConverterDouble*> Singleton_;
    static uSStrong<ConverterDouble*>& Singleton() { return ConverterDouble_typeof()->Init(), Singleton_; }

    void ctor_1();
    static ConverterDouble* New1();
};
// }

}}} // ::g::Fuse::Animations
