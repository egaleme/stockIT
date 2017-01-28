// This file was generated based on C:\stockit\stockit\.uno\ux11\stockIT.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.stockIT_FuseElementsElement_Opacity_Property.h>
#include <Fuse.Elements.Element.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class stockIT_FuseElementsElement_Opacity_Property :37
// {
static void stockIT_FuseElementsElement_Opacity_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::stockIT_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* stockIT_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(stockIT_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("stockIT_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = stockIT_FuseElementsElement_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))stockIT_FuseElementsElement_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))stockIT_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))stockIT_FuseElementsElement_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))stockIT_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public stockIT_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :40
void stockIT_FuseElementsElement_Opacity_Property__ctor_2_fn(stockIT_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :42
void stockIT_FuseElementsElement_Opacity_Property__Get_fn(stockIT_FuseElementsElement_Opacity_Property* __this, float* __retval)
{
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public stockIT_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :40
void stockIT_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, stockIT_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = stockIT_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :41
void stockIT_FuseElementsElement_Opacity_Property__get_Object_fn(stockIT_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :43
void stockIT_FuseElementsElement_Opacity_Property__Set_fn(stockIT_FuseElementsElement_Opacity_Property* __this, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :44
void stockIT_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(stockIT_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public stockIT_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :40
void stockIT_FuseElementsElement_Opacity_Property::ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public stockIT_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :40
stockIT_FuseElementsElement_Opacity_Property* stockIT_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    stockIT_FuseElementsElement_Opacity_Property* obj1 = (stockIT_FuseElementsElement_Opacity_Property*)uNew(stockIT_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
