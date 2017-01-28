// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Animations\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Converter-1.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Animations{struct ConverterFloat4;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class ConverterFloat4 :735
// {
::g::Fuse::Animations::Converter_type* ConverterFloat4_typeof();
void ConverterFloat4__ctor_1_fn(ConverterFloat4* __this);
void ConverterFloat4__In_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval);
void ConverterFloat4__New1_fn(ConverterFloat4** __retval);
void ConverterFloat4__Out_fn(ConverterFloat4* __this, ::g::Uno::Float4* value, ::g::Uno::Float4* __retval);

struct ConverterFloat4 : ::g::Fuse::Animations::Converter
{
    static uSStrong<ConverterFloat4*> Singleton_;
    static uSStrong<ConverterFloat4*>& Singleton() { return ConverterFloat4_typeof()->Init(), Singleton_; }

    void ctor_1();
    static ConverterFloat4* New1();
};
// }

}}} // ::g::Fuse::Animations
