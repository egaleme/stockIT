// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Property.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class Property<T> :691
// {
struct Property1_type : ::g::Uno::UX::Property_type
{
    void(*fp_Get)(::g::Uno::UX::Property1*, uTRef);
    void(*fp_Set)(::g::Uno::UX::Property1*, void*, uObject*);
};

Property1_type* Property1_typeof();
void Property1__ctor_1_fn(Property1* __this, ::g::Uno::UX::Selector* name);
void Property1__Get_fn(Property1* __this, uTRef __retval);
void Property1__GetAsObject_fn(Property1* __this, uObject** __retval);
void Property1__get_PropertyType_fn(Property1* __this, uType** __retval);
void Property1__Set_fn(Property1* __this, void* value, uObject* origin);
void Property1__SetAsObject_fn(Property1* __this, uObject* value, uObject* origin);

struct Property1 : ::g::Uno::UX::Property
{
    void ctor_1(::g::Uno::UX::Selector name);
    template<class T>
    T Get() { T __retval; return (((Property1_type*)__type)->fp_Get)(this, &__retval), __retval; }
    void Get_ex(uTRef __retval) { (((Property1_type*)__type)->fp_Get)(this, __retval); }
    template<class T>
    void Set(T value, uObject* origin) { (((Property1_type*)__type)->fp_Set)(this, uConstrain(__type->GetBase(Property1_typeof())->T(0), value), origin); }
    void Set_ex(void* value, uObject* origin) { (((Property1_type*)__type)->fp_Set)(this, value, origin); }
    template<class T>
    static T Get(Property1* __this) { T __retval; return Property1__Get_fn(__this, &__retval), __retval; }
    template<class T>
    static void Set(Property1* __this, T value, uObject* origin) { Property1__Set_fn(__this, uConstrain(__this->__type->GetBase(Property1_typeof())->T(0), value), origin); }
};
// }

}}} // ::g::Uno::UX
