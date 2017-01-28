// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Scripting\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.NativeMember.h>
namespace g{namespace Fuse{namespace Scripting{struct NativePromise;}}}
namespace g{namespace Uno{namespace Threading{struct Future1;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class NativePromise<T, TJSResult> :769
// {
::g::Fuse::Scripting::NativeMember_type* NativePromise_typeof();
void NativePromise__ctor_1_fn(NativePromise* __this, uString* name, uDelegate* futureFactory, uDelegate* resultConverter);
void NativePromise__ctor_2_fn(NativePromise* __this, uString* name, uDelegate* func, uDelegate* resultConverter);
void NativePromise__CreateObject_fn(NativePromise* __this, uObject** __retval);
void NativePromise__Factory_fn(NativePromise* __this, uArray* args, ::g::Uno::Threading::Future1** __retval);
void NativePromise__New1_fn(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter, NativePromise** __retval);
void NativePromise__New2_fn(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter, NativePromise** __retval);

struct NativePromise : ::g::Fuse::Scripting::NativeMember
{
    uStrong<uDelegate*> _func;
    uStrong<uDelegate*> _futureFactory;
    uStrong<uDelegate*> _resultConverter;

    void ctor_1(uString* name, uDelegate* futureFactory, uDelegate* resultConverter);
    void ctor_2(uString* name, uDelegate* func, uDelegate* resultConverter);
    ::g::Uno::Threading::Future1* Factory(uArray* args);
    static NativePromise* New1(uType* __type, uString* name, uDelegate* futureFactory, uDelegate* resultConverter);
    static NativePromise* New2(uType* __type, uString* name, uDelegate* func, uDelegate* resultConverter);
};
// }

}}} // ::g::Fuse::Scripting
