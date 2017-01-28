// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__WorldPositionChangeMode;}}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class LayoutTransition.WorldPositionChangeMode :32
// {
struct LayoutTransition__WorldPositionChangeMode_type : uType
{
    ::g::Fuse::ITranslationMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof();
void LayoutTransition__WorldPositionChangeMode__ctor__fn(LayoutTransition__WorldPositionChangeMode* __this);
void LayoutTransition__WorldPositionChangeMode__GetAbsVector_fn(LayoutTransition__WorldPositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void LayoutTransition__WorldPositionChangeMode__New1_fn(LayoutTransition__WorldPositionChangeMode** __retval);
void LayoutTransition__WorldPositionChangeMode__Subscribe_fn(LayoutTransition__WorldPositionChangeMode* __this, uObject* transform, uObject** __retval);
void LayoutTransition__WorldPositionChangeMode__Unsubscribe_fn(LayoutTransition__WorldPositionChangeMode* __this, uObject* transform, uObject* sub);

struct LayoutTransition__WorldPositionChangeMode : uObject
{
    void ctor_();
    ::g::Uno::Float3 GetAbsVector(::g::Fuse::Translation* t);
    uObject* Subscribe(uObject* transform);
    void Unsubscribe(uObject* transform, uObject* sub);
    static LayoutTransition__WorldPositionChangeMode* New1();
};
// }

}}} // ::g::Fuse::Triggers
