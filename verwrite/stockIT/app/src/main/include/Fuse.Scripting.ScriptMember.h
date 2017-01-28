// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ScriptMember;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract class ScriptMember :2183
// {
uType* ScriptMember_typeof();
void ScriptMember__ctor__fn(ScriptMember* __this, uString* name);

struct ScriptMember : uObject
{
    uStrong<uString*> Name;

    void ctor_(uString* name);
};
// }

}}} // ::g::Fuse::Scripting
