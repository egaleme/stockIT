// This file was generated based on C:\stockit\stockit\.uno\ux11\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template4.h>
#include <_root.UpdateItem.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MainView.Template4 :89
// {
// static Template4() :98
static void MainView__Template4__cctor__fn(uType* __type)
{
    MainView__Template4::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"updateitem"*/]);
}

static void MainView__Template4_build(uType* type)
{
    ::STRINGS[0] = uString::Const("updateitem");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template4, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template4, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template4::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template4_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template4);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template4", options);
    type->fp_build_ = MainView__Template4_build;
    type->fp_cctor_ = MainView__Template4__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template4__New1_fn;
    return type;
}

// public Template4(MainView parent, MainView parentInstance) :93
void MainView__Template4__ctor_1_fn(MainView__Template4* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :101
void MainView__Template4__New1_fn(MainView__Template4* __this, uObject** __retval)
{
    ::g::UpdateItem* self = ::g::UpdateItem::New4(uPtr(__this->__parent1)->router);
    self->Name(MainView__Template4::__selector0());
    return *__retval = self, void();
}

// public Template4 New(MainView parent, MainView parentInstance) :93
void MainView__Template4__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template4** __retval)
{
    *__retval = MainView__Template4::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template4::__selector0_;

// public Template4(MainView parent, MainView parentInstance) [instance] :93
void MainView__Template4::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"updateitem"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template4 New(MainView parent, MainView parentInstance) [static] :93
MainView__Template4* MainView__Template4::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template4* obj1 = (MainView__Template4*)uNew(MainView__Template4_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
