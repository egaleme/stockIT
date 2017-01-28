// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\time\utilities\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Time{struct Preconditions;}}}

namespace g{
namespace Uno{
namespace Time{

// internal static class Preconditions :104
// {
uClassType* Preconditions_typeof();
void Preconditions__CheckArgumentRange_fn(uString* paramName, int* value, int* minInclusive, int* maxInclusive);
void Preconditions__CheckNotNull_fn(uType* __type, uObject* argument, uString* paramName, uObject** __retval);

struct Preconditions : uObject
{
    static void CheckArgumentRange(uString* paramName, int value, int minInclusive, int maxInclusive);
    static uObject* CheckNotNull(uType* __type, uObject* argument, uString* paramName);
};
// }

}}} // ::g::Uno::Time
