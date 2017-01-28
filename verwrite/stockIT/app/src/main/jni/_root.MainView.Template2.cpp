// This file was generated based on C:\stockit\stockit\.uno\ux11\MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CreateUser.h>
#include <_root.MainView.h>
#include <_root.MainView.Template2.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];

namespace g{

// public partial sealed class MainView.Template2 :47
// {
// static Template2() :56
static void MainView__Template2__cctor__fn(uType* __type)
{
    MainView__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"createuser"*/]);
}

static void MainView__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("createuser");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template2, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(::g::MainView__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView__Template2::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template2", options);
    type->fp_build_ = MainView__Template2_build;
    type->fp_cctor_ = MainView__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template2__New1_fn;
    return type;
}

// public Template2(MainView parent, MainView parentInstance) :51
void MainView__Template2__ctor_1_fn(MainView__Template2* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :59
void MainView__Template2__New1_fn(MainView__Template2* __this, uObject** __retval)
{
    ::g::CreateUser* self = ::g::CreateUser::New4(uPtr(__this->__parent1)->router);
    self->Name(MainView__Template2::__selector0());
    return *__retval = self, void();
}

// public Template2 New(MainView parent, MainView parentInstance) :51
void MainView__Template2__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template2** __retval)
{
    *__retval = MainView__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template2::__selector0_;

// public Template2(MainView parent, MainView parentInstance) [instance] :51
void MainView__Template2::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"createuser"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(MainView parent, MainView parentInstance) [static] :51
MainView__Template2* MainView__Template2::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template2* obj1 = (MainView__Template2*)uNew(MainView__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
