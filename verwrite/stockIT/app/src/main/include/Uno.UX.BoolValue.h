// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Value.h>
namespace g{namespace Uno{namespace UX{struct BoolValue;}}}

namespace g{
namespace Uno{
namespace UX{

// internal sealed class BoolValue :1679
// {
::g::Uno::UX::Value_type* BoolValue_typeof();
void BoolValue__ctor_1_fn(BoolValue* __this, bool* value);
void BoolValue__New1_fn(bool* value, BoolValue** __retval);
void BoolValue__ToBool_fn(BoolValue* __this, bool* __retval);
void BoolValue__ToDouble_fn(BoolValue* __this, double* __retval);
void BoolValue__ToObject_fn(BoolValue* __this, uObject** __retval);
void BoolValue__ToString_fn(BoolValue* __this, uString** __retval);

struct BoolValue : ::g::Uno::UX::Value
{
    bool _value;

    void ctor_1(bool value);
    static BoolValue* New1(bool value);
};
// }

}}} // ::g::Uno::UX
