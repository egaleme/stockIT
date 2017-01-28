// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.TranslationModes.SizeMode.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Fuse{struct TranslationModes__HeightMode;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// private sealed class TranslationModes.HeightMode :10320
// {
::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__HeightMode_typeof();
void TranslationModes__HeightMode__ctor_1_fn(TranslationModes__HeightMode* __this);
void TranslationModes__HeightMode__GetAbsVector_fn(TranslationModes__HeightMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void TranslationModes__HeightMode__New2_fn(TranslationModes__HeightMode** __retval);

struct TranslationModes__HeightMode : ::g::Fuse::TranslationModes__SizeMode
{
    void ctor_1();
    static TranslationModes__HeightMode* New2();
};
// }

}} // ::g::Fuse
