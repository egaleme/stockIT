// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\exceptions\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct ObjectDisposedException;}}

namespace g{
namespace Uno{

// public sealed class ObjectDisposedException :321
// {
::g::Uno::Exception_type* ObjectDisposedException_typeof();
void ObjectDisposedException__ctor_3_fn(ObjectDisposedException* __this, uString* objectName);
void ObjectDisposedException__New4_fn(uString* objectName, ObjectDisposedException** __retval);

struct ObjectDisposedException : ::g::Uno::Exception
{
    void ctor_3(uString* objectName);
    static ObjectDisposedException* New4(uString* objectName);
};
// }

}} // ::g::Uno
