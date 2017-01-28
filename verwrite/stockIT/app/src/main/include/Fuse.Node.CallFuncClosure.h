// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}
namespace g{namespace Fuse{struct Node__CallFuncClosure;}}

namespace g{
namespace Fuse{

// private sealed class Node.CallFuncClosure :4632
// {
uType* Node__CallFuncClosure_typeof();
void Node__CallFuncClosure__ctor__fn(Node__CallFuncClosure* __this, ::g::Fuse::Scripting::Function* func, uObject* arg);
void Node__CallFuncClosure__New1_fn(::g::Fuse::Scripting::Function* func, uObject* arg, Node__CallFuncClosure** __retval);
void Node__CallFuncClosure__Run_fn(Node__CallFuncClosure* __this);

struct Node__CallFuncClosure : uObject
{
    uStrong<uObject*> _arg;
    uStrong< ::g::Fuse::Scripting::Function*> _func;

    void ctor_(::g::Fuse::Scripting::Function* func, uObject* arg);
    void Run();
    static Node__CallFuncClosure* New1(::g::Fuse::Scripting::Function* func, uObject* arg);
};
// }

}} // ::g::Fuse
