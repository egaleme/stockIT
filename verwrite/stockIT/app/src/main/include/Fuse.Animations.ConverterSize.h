// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Animations\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Converter-1.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Animations{struct ConverterSize;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class ConverterSize :706
// {
::g::Fuse::Animations::Converter_type* ConverterSize_typeof();
void ConverterSize__ctor_1_fn(ConverterSize* __this);
void ConverterSize__In_fn(ConverterSize* __this, ::g::Uno::UX::Size* value, ::g::Uno::Float4* __retval);
void ConverterSize__New1_fn(ConverterSize** __retval);
void ConverterSize__Out_fn(ConverterSize* __this, ::g::Uno::Float4* value, ::g::Uno::UX::Size* __retval);

struct ConverterSize : ::g::Fuse::Animations::Converter
{
    static uSStrong<ConverterSize*> Singleton_;
    static uSStrong<ConverterSize*>& Singleton() { return ConverterSize_typeof()->Init(), Singleton_; }

    void ctor_1();
    static ConverterSize* New1();
};
// }

}}} // ::g::Fuse::Animations
