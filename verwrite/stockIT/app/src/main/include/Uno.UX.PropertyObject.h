// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Uno{
namespace UX{

// public class PropertyObject :724
// {
uType* PropertyObject_typeof();
void PropertyObject__ctor__fn(PropertyObject* __this);
void PropertyObject__AddPropertyListener_fn(PropertyObject* __this, uObject* listener);
void PropertyObject__OnPropertyChanged_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property);
void PropertyObject__OnPropertyChanged1_fn(PropertyObject* __this, ::g::Uno::UX::Selector* property, uObject* origin);
void PropertyObject__RemovePropertyListener_fn(PropertyObject* __this, uObject* listener);

struct PropertyObject : uObject
{
    uStrong< ::g::Uno::Collections::List*> _propListeners;

    void ctor_();
    void AddPropertyListener(uObject* listener);
    void OnPropertyChanged(::g::Uno::UX::Selector property);
    void OnPropertyChanged1(::g::Uno::UX::Selector property, uObject* origin);
    void RemovePropertyListener(uObject* listener);
};
// }

}}} // ::g::Uno::UX
