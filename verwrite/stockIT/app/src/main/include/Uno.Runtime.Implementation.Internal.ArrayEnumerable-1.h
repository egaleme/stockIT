// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayEnumerable;}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public sealed class ArrayEnumerable<T> :70
// {
struct ArrayEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

ArrayEnumerable_type* ArrayEnumerable_typeof();
void ArrayEnumerable__ctor__fn(ArrayEnumerable* __this, uArray* source);
void ArrayEnumerable__GetEnumerator_fn(ArrayEnumerable* __this, uObject** __retval);
void ArrayEnumerable__New1_fn(uType* __type, uArray* source, ArrayEnumerable** __retval);

struct ArrayEnumerable : uObject
{
    uStrong<uArray*> _source;

    void ctor_(uArray* source);
    uObject* GetEnumerator();
    static ArrayEnumerable* New1(uType* __type, uArray* source);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
