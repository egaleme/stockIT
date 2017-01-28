// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Internal.MiniList-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct MiniList__Enumerator;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct MiniList<T>.Enumerator<T> :1259
// {
struct MiniList__Enumerator_type : uStructType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

MiniList__Enumerator_type* MiniList__Enumerator_typeof();
void MiniList__Enumerator__ctor__fn(MiniList__Enumerator* __this, uType* __type, ::g::Fuse::Internal::MiniList* source);
void MiniList__Enumerator__get_Current_fn(MiniList__Enumerator* __this, uType* __type, uObject** __retval);
void MiniList__Enumerator__Dispose_fn(MiniList__Enumerator* __this, uType* __type);
void MiniList__Enumerator__MoveNext_fn(MiniList__Enumerator* __this, uType* __type, bool* __retval);
void MiniList__Enumerator__New1_fn(uType* __type, ::g::Fuse::Internal::MiniList* source, MiniList__Enumerator* __retval);
void MiniList__Enumerator__Reset_fn(MiniList__Enumerator* __this, uType* __type);

struct MiniList__Enumerator
{
    ::g::Fuse::Internal::MiniList _source;
    int _index;

    void ctor_(uType* __type, ::g::Fuse::Internal::MiniList source);
    uObject* Current(uType* __type);
    void Dispose(uType* __type);
    bool MoveNext(uType* __type);
    void Reset(uType* __type);
};

MiniList__Enumerator MiniList__Enumerator__New1(uType* __type, ::g::Fuse::Internal::MiniList source);
// }

}}} // ::g::Fuse::Internal
