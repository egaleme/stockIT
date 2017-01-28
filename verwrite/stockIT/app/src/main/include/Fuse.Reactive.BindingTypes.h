// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\reactive\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Reactive{struct BindingTypes;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal static class BindingTypes :177
// {
uClassType* BindingTypes_typeof();
void BindingTypes__CheckCompatibility_fn(::g::Uno::UX::Property* source, ::g::Uno::UX::Property* destination, uObject* src, bool* __retval);
void BindingTypes__Implements_fn(uType* t, uType* interf, bool* __retval);
void BindingTypes__Inherits_fn(uType* t, uType* baseClass, bool* __retval);
void BindingTypes__IsCompatible_fn(uType* sourceType, uType* destinationType, bool* __retval);
void BindingTypes__IsUXValueCompatible_fn(uType* t, bool* __retval);
void BindingTypes__IsUXValueConvertible_fn(uType* t, bool* __retval);

struct BindingTypes : uObject
{
    static bool CheckCompatibility(::g::Uno::UX::Property* source, ::g::Uno::UX::Property* destination, uObject* src);
    static bool Implements(uType* t, uType* interf);
    static bool Inherits(uType* t, uType* baseClass);
    static bool IsCompatible(uType* sourceType, uType* destinationType);
    static bool IsUXValueCompatible(uType* t);
    static bool IsUXValueConvertible(uType* t);
};
// }

}}} // ::g::Fuse::Reactive
