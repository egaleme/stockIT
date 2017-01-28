// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptMember.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptProperty;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class ScriptProperty :2193
// {
struct ScriptProperty_type : uType
{
    void(*fp_GetProperty)(::g::Fuse::Scripting::ScriptProperty*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Property**);
};

ScriptProperty_type* ScriptProperty_typeof();
void ScriptProperty__ctor_1_fn(ScriptProperty* __this, uString* name, uString* modifier);

struct ScriptProperty : ::g::Fuse::Scripting::ScriptMember
{
    uStrong<uString*> Modifier;

    void ctor_1(uString* name, uString* modifier);
    ::g::Uno::UX::Property* GetProperty(::g::Uno::UX::PropertyObject* owner) { ::g::Uno::UX::Property* __retval; return (((ScriptProperty_type*)__type)->fp_GetProperty)(this, owner, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
