// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Elements\0.43.11\triggers\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__PositionChangeMode;}}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{
namespace Triggers{

// private sealed class LayoutTransition.PositionChangeMode :61
// {
struct LayoutTransition__PositionChangeMode_type : uType
{
    ::g::Fuse::ITranslationMode interface0;
    ::g::Fuse::ITransformMode interface1;
};

LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof();
void LayoutTransition__PositionChangeMode__ctor__fn(LayoutTransition__PositionChangeMode* __this);
void LayoutTransition__PositionChangeMode__GetAbsVector_fn(LayoutTransition__PositionChangeMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void LayoutTransition__PositionChangeMode__New1_fn(LayoutTransition__PositionChangeMode** __retval);
void LayoutTransition__PositionChangeMode__Subscribe_fn(LayoutTransition__PositionChangeMode* __this, uObject* transform, uObject** __retval);
void LayoutTransition__PositionChangeMode__Unsubscribe_fn(LayoutTransition__PositionChangeMode* __this, uObject* transform, uObject* sub);

struct LayoutTransition__PositionChangeMode : uObject
{
    void ctor_();
    ::g::Uno::Float3 GetAbsVector(::g::Fuse::Translation* t);
    uObject* Subscribe(uObject* transform);
    void Unsubscribe(uObject* transform, uObject* sub);
    static LayoutTransition__PositionChangeMode* New1();
};
// }

}}} // ::g::Fuse::Triggers
