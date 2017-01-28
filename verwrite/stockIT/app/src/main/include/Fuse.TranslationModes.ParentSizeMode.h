// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Fuse{struct TranslationModes__ParentSizeMode;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// private sealed class TranslationModes.ParentSizeMode :10275
// {
struct TranslationModes__ParentSizeMode_type : uType
{
    ::g::Fuse::ITranslationMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

TranslationModes__ParentSizeMode_type* TranslationModes__ParentSizeMode_typeof();
void TranslationModes__ParentSizeMode__ctor__fn(TranslationModes__ParentSizeMode* __this);
void TranslationModes__ParentSizeMode__GetAbsVector_fn(TranslationModes__ParentSizeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void TranslationModes__ParentSizeMode__New1_fn(TranslationModes__ParentSizeMode** __retval);
void TranslationModes__ParentSizeMode__Subscribe_fn(TranslationModes__ParentSizeMode* __this, uObject* transform, uObject** __retval);
void TranslationModes__ParentSizeMode__Unsubscribe_fn(TranslationModes__ParentSizeMode* __this, uObject* transform, uObject* sub);

struct TranslationModes__ParentSizeMode : uObject
{
    void ctor_();
    ::g::Uno::Float3 GetAbsVector(::g::Fuse::Translation* t);
    uObject* Subscribe(uObject* transform);
    void Unsubscribe(uObject* transform, uObject* sub);
    static TranslationModes__ParentSizeMode* New1();
};
// }

}} // ::g::Fuse
