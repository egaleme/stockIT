// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract interface IValueConvertible :1373
// {
uInterfaceType* IValueConvertible_typeof();

struct IValueConvertible
{
    void(*fp_ToValue)(uObject*, ::g::Uno::UX::Value**);
    static ::g::Uno::UX::Value* ToValue(const uInterface& __this) { ::g::Uno::UX::Value* __retval; return __this.VTable<IValueConvertible>()->fp_ToValue(__this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
