// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativePromise__ContextClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class NativePromise<T, TJSResult>.ContextClosure :800
// {
uType* NativePromise__ContextClosure_typeof();
void NativePromise__ContextClosure__ctor__fn(NativePromise__ContextClosure* __this, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter);
void NativePromise__ContextClosure__CreatePromise_fn(NativePromise__ContextClosure* __this, uArray* args, uObject** __retval);
void NativePromise__ContextClosure__New1_fn(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter, NativePromise__ContextClosure** __retval);

struct NativePromise__ContextClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _c;
    uStrong<uDelegate*> _converter;
    uStrong<uDelegate*> _factory;

    void ctor_(::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter);
    uObject* CreatePromise(uArray* args);
    static NativePromise__ContextClosure* New1(uType* __type, ::g::Fuse::Scripting::Context* c, uDelegate* factory, uDelegate* converter);
};
// }

}}} // ::g::Fuse::Scripting
