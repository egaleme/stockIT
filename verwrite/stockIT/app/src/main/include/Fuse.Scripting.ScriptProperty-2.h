// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptProperty.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptProperty1;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptProperty<TOwner, TValue> :2203
// {
::g::Fuse::Scripting::ScriptProperty_type* ScriptProperty1_typeof();
void ScriptProperty1__ctor_2_fn(ScriptProperty1* __this, uString* name, uDelegate* getter, uString* modifier);
void ScriptProperty1__GetProperty_fn(ScriptProperty1* __this, ::g::Uno::UX::PropertyObject* owner, ::g::Uno::UX::Property** __retval);
void ScriptProperty1__New1_fn(uType* __type, uString* name, uDelegate* getter, uString* modifier, ScriptProperty1** __retval);

struct ScriptProperty1 : ::g::Fuse::Scripting::ScriptProperty
{
    uStrong<uDelegate*> _getter;

    void ctor_2(uString* name, uDelegate* getter, uString* modifier);
    static ScriptProperty1* New1(uType* __type, uString* name, uDelegate* getter, uString* modifier);
};
// }

}}} // ::g::Fuse::Scripting
