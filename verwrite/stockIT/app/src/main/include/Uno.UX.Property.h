// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class Property :651
// {
struct Property_type : uType
{
    void(*fp_GetAsObject)(::g::Uno::UX::Property*, uObject**);
    void(*fp_get_Object)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**);
    void(*fp_get_PropertyType)(::g::Uno::UX::Property*, uType**);
    void(*fp_SetAsObject)(::g::Uno::UX::Property*, uObject*, uObject*);
    void(*fp_get_SupportsOriginSetter)(::g::Uno::UX::Property*, bool*);
};

Property_type* Property_typeof();
void Property__ctor__fn(Property* __this, ::g::Uno::UX::Selector* name);
void Property__AddListener_fn(Property* __this, uObject* listener);
void Property__Equals_fn(Property* __this, uObject* obj, bool* __retval);
void Property__GetHashCode_fn(Property* __this, int* __retval);
void Property__get_Name_fn(Property* __this, ::g::Uno::UX::Selector* __retval);
void Property__RemoveListener_fn(Property* __this, uObject* listener);
void Property__SetAsObject_fn(Property* __this, uObject* value, uObject* origin);
void Property__get_SupportsOriginSetter_fn(Property* __this, bool* __retval);

struct Property : uObject
{
    ::g::Uno::UX::Selector _name;

    void ctor_(::g::Uno::UX::Selector name);
    void AddListener(uObject* listener);
    uObject* GetAsObject() { uObject* __retval; return (((Property_type*)__type)->fp_GetAsObject)(this, &__retval), __retval; }
    ::g::Uno::UX::Selector Name();
    ::g::Uno::UX::PropertyObject* Object() { ::g::Uno::UX::PropertyObject* __retval; return (((Property_type*)__type)->fp_get_Object)(this, &__retval), __retval; }
    uType* PropertyType() { uType* __retval; return (((Property_type*)__type)->fp_get_PropertyType)(this, &__retval), __retval; }
    void RemoveListener(uObject* listener);
    void SetAsObject(uObject* value, uObject* origin) { (((Property_type*)__type)->fp_SetAsObject)(this, value, origin); }
    bool SupportsOriginSetter() { bool __retval; return (((Property_type*)__type)->fp_get_SupportsOriginSetter)(this, &__retval), __retval; }
    static void SetAsObject(Property* __this, uObject* value, uObject* origin) { Property__SetAsObject_fn(__this, value, origin); }
    static bool SupportsOriginSetter(Property* __this) { bool __retval; return Property__get_SupportsOriginSetter_fn(__this, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
