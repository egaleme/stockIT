// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\collections\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct LinkedList;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList__Enumerator;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedListNode;}}}

namespace g{
namespace Uno{
namespace Collections{

// public struct LinkedList<T>.Enumerator :823
// {
struct LinkedList__Enumerator_type : uStructType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

LinkedList__Enumerator_type* LinkedList__Enumerator_typeof();
void LinkedList__Enumerator__ctor__fn(LinkedList__Enumerator* __this, uType* __type, ::g::Uno::Collections::LinkedList* list);
void LinkedList__Enumerator__get_Current_fn(LinkedList__Enumerator* __this, uType* __type, uTRef __retval);
void LinkedList__Enumerator__Dispose_fn(LinkedList__Enumerator* __this, uType* __type);
void LinkedList__Enumerator__MoveNext_fn(LinkedList__Enumerator* __this, uType* __type, bool* __retval);
void LinkedList__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::LinkedList* list, LinkedList__Enumerator* __retval);
void LinkedList__Enumerator__Reset_fn(LinkedList__Enumerator* __this, uType* __type);

struct LinkedList__Enumerator
{
    uStrong< ::g::Uno::Collections::LinkedList*> _list;
    uStrong< ::g::Uno::Collections::LinkedListNode*> _current;
    uStrong< ::g::Uno::Collections::LinkedListNode*> _next;

    void ctor_(uType* __type, ::g::Uno::Collections::LinkedList* list);
    template<class T>
    T Current(uType* __type) { T __retval; return LinkedList__Enumerator__get_Current_fn(this, __type, &__retval), __retval; }
    void Dispose(uType* __type);
    bool MoveNext(uType* __type);
    void Reset(uType* __type);
};

LinkedList__Enumerator LinkedList__Enumerator__New1(uType* __type, ::g::Uno::Collections::LinkedList* list);
// }

}}} // ::g::Uno::Collections
