// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptMethod.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethodInline;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptMethodInline :2229
// {
::g::Fuse::Scripting::ScriptMethod_type* ScriptMethodInline_typeof();
void ScriptMethodInline__ctor_2_fn(ScriptMethodInline* __this, uString* name, int* thread, uString* code);
void ScriptMethodInline__Call_fn(ScriptMethodInline* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval);
void ScriptMethodInline__New1_fn(uString* name, int* thread, uString* code, ScriptMethodInline** __retval);

struct ScriptMethodInline : ::g::Fuse::Scripting::ScriptMethod
{
    uStrong<uString*> Code;

    void ctor_2(uString* name, int thread, uString* code);
    static ScriptMethodInline* New1(uString* name, int thread, uString* code);
};
// }

}}} // ::g::Fuse::Scripting
