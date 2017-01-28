// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct JSCallback;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public static class JSCallback :1088
// {
uClassType* JSCallback_typeof();
void JSCallback__FromAction_fn(uDelegate* action, uDelegate** __retval);
void JSCallback__FromAction1_fn(uType* __type, uDelegate* action, uDelegate** __retval);
void JSCallback__FromAction2_fn(uType* __type, uDelegate* action, uDelegate** __retval);
void JSCallback__FromFunc_fn(uType* __type, uDelegate* func, uDelegate** __retval);
void JSCallback__FromFunc1_fn(uType* __type, uDelegate* func, uDelegate** __retval);
void JSCallback__GetArg_fn(uType* __type, uArray* args, uTRef arg, int* index, bool* __retval);

struct JSCallback : uObject
{
    static uDelegate* FromAction(uDelegate* action);
    static uDelegate* FromAction1(uType* __type, uDelegate* action);
    static uDelegate* FromAction2(uType* __type, uDelegate* action);
    static uDelegate* FromFunc(uType* __type, uDelegate* func);
    static uDelegate* FromFunc1(uType* __type, uDelegate* func);
    template<class T>
    static bool GetArg(uType* __type, uArray* args, T* arg, int index) { bool __retval; return JSCallback__GetArg_fn(__type, args, uConstrain(__type->U(0), arg), &index, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
