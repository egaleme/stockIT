// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// public abstract interface ITranslationMode :10245
// {
uInterfaceType* ITranslationMode_typeof();

struct ITranslationMode
{
    void(*fp_GetAbsVector)(uObject*, ::g::Fuse::Translation*, ::g::Uno::Float3*);
    static ::g::Uno::Float3 GetAbsVector(const uInterface& __this, ::g::Fuse::Translation* t);
};

}} // ::g::Fuse

#include <Uno.Float3.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Float3 ITranslationMode::GetAbsVector(const uInterface& __this, ::g::Fuse::Translation* t) { ::g::Uno::Float3 __retval; return __this.VTable<ITranslationMode>()->fp_GetAbsVector(__this, t, &__retval), __retval; }
// }

}} // ::g::Fuse
