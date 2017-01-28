// This file was generated based on C:\stockit\stockit\.uno\ux11\CreateUser.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CreateUser.h>
#include <_root.HorizontalLine.h>
#include <_root.stockIT_bundle.h>
#include <_root.stockIT_FuseControlsTextControl_Value_Property.h>
#include <_root.stockIT_FuseControlsTextInputControl_Value_Property.h>
#include <_root.WhiteTextInput.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[15];
static uType* TYPES[6];

namespace g{

// public partial sealed class CreateUser :2
// {
// static CreateUser() :15
static void CreateUser__cctor_4_fn(uType* __type)
{
    CreateUser::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"router"*/]);
    CreateUser::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void CreateUser_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("goBack");
    ::STRINGS[3] = uString::Const("err");
    ::STRINGS[4] = uString::Const("username");
    ::STRINGS[5] = uString::Const("email");
    ::STRINGS[6] = uString::Const("password");
    ::STRINGS[7] = uString::Const("createUser");
    ::STRINGS[8] = uString::Const("var API_URL = require(\"Modules/api.js\")\n"
        "    var Observable = require(\"FuseJS/Observable\");\n"
        "    var Context = require(\"Modules/Context\")\n"
        "    var username = Observable();\n"
        "    var password = Observable();\n"
        "    var email = Observable();\n"
        "    var err = Observable();\n"
        "\n"
        "      function goBack() {\n"
        "        err.value = \"\"\n"
        "        router.goBack()\n"
        "      }\n"
        "\n"
        "      function createUser() {\n"
        "        fetch(`${API_URL}/users`, {\n"
        "          method: 'post',\n"
        "          mode: 'cors',\n"
        "          credentials: 'same-origin',\n"
        "          headers: new Headers({'Content-Type': 'application/json'}),\n"
        "          body: JSON.stringify({grant_type: \"password\", email: email.value,username: username.value, password: password.value})\n"
        "\n"
        "        }).\n"
        "        then(function(response) {\n"
        "          if (response.ok) {\n"
        "            return response.json()\n"
        "          } else {\n"
        "            throw new Error(\"Please make sure all fields are filled !\")\n"
        "          }\n"
        "        }).\n"
        "        then(function(data) {\n"
        "          username.value=\"\"\n"
        "          password.value=\"\"\n"
        "          email.value = \"\"\n"
        "          err.value = \"\"\n"
        "          Context.user.value = data.data[0].id\n"
        "          router.push(\"home\")\n"
        "        }).\n"
        "        catch(function(error) {\n"
        "          err.value = error.message\n"
        "        })\n"
        "\n"
        "      };\n"
        "      module.exports = {goBack, err, createUser, email, username,  password}");
    ::STRINGS[9] = uString::Const("Pages/createuser.ux");
    ::STRINGS[10] = uString::Const("Create User");
    ::STRINGS[11] = uString::Const("Username");
    ::STRINGS[12] = uString::Const("Email");
    ::STRINGS[13] = uString::Const("Password");
    ::STRINGS[14] = uString::Const("Sign Up");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(99,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::CreateUser, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::CreateUser, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CreateUser, temp_eb2), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::CreateUser, temp_eb3), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CreateUser, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CreateUser, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CreateUser, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CreateUser, temp3_Value_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::CreateUser::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CreateUser::__selector0_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* CreateUser_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 109;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(CreateUser);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("CreateUser", options);
    type->fp_build_ = CreateUser_build;
    type->fp_cctor_ = CreateUser__cctor_4_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public CreateUser(Fuse.Navigation.Router router) :19
void CreateUser__ctor_7_fn(CreateUser* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_7(router1);
}

// private void InitializeUX() :25
void CreateUser__InitializeUX_fn(CreateUser* __this)
{
    __this->InitializeUX();
}

// public CreateUser New(Fuse.Navigation.Router router) :19
void CreateUser__New4_fn(::g::Fuse::Navigation::Router* router1, CreateUser** __retval)
{
    *__retval = CreateUser::New4(router1);
}

uSStrong<uArray*> CreateUser::__g_static_nametable1_;
::g::Uno::UX::Selector CreateUser::__selector0_;

// public CreateUser(Fuse.Navigation.Router router) [instance] :19
void CreateUser::ctor_7(::g::Fuse::Navigation::Router* router1)
{
    ctor_6();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :25
void CreateUser::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, CreateUser::__g_static_nametable1());
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::stockIT_FuseControlsTextControl_Value_Property::New1(temp, CreateUser::__selector0());
    ::g::WhiteTextInput* temp1 = ::g::WhiteTextInput::New4();
    temp1_Value_inst = ::g::stockIT_FuseControlsTextInputControl_Value_Property::New1(temp1, CreateUser::__selector0());
    ::g::WhiteTextInput* temp2 = ::g::WhiteTextInput::New4();
    temp2_Value_inst = ::g::stockIT_FuseControlsTextInputControl_Value_Property::New1(temp2, CreateUser::__selector0());
    ::g::WhiteTextInput* temp3 = ::g::WhiteTextInput::New4();
    temp3_Value_inst = ::g::stockIT_FuseControlsTextInputControl_Value_Property::New1(temp3, CreateUser::__selector0());
    ::g::Fuse::Reactive::JavaScript* temp4 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp5 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp6 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp7 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::Panel* temp8 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp9 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Image* temp10 = ::g::Fuse::Controls::Image::New3();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[2/*"goBack"*/]);
    ::g::Fuse::Controls::StackPanel* temp11 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp12 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[3/*"err"*/]);
    ::g::Fuse::Reactive::DataBinding* temp13 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[4/*"username"*/]);
    ::g::HorizontalLine* temp14 = ::g::HorizontalLine::New4();
    ::g::Fuse::Reactive::DataBinding* temp15 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp2_Value_inst, ::STRINGS[5/*"email"*/]);
    ::g::HorizontalLine* temp16 = ::g::HorizontalLine::New4();
    ::g::Fuse::Reactive::DataBinding* temp17 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<string>*/], temp3_Value_inst, ::STRINGS[6/*"password"*/]);
    ::g::HorizontalLine* temp18 = ::g::HorizontalLine::New4();
    ::g::Fuse::Controls::Panel* temp19 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp20 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[7/*"createUser"*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp22 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.07058824f, 0.4666667f, 0.6f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp23 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.06666667f, 0.5333334f, 1.0f, 1.0f));
    temp4->Code(::STRINGS[8/*"var API_URL...*/]);
    temp4->LineNumber(6);
    temp4->FileName(::STRINGS[9/*"Pages/creat...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp6->Color(::g::Uno::Float4__New2(0.06666667f, 0.5333334f, 1.0f, 1.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp6, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Fuse::Controls::DockPanel::SetDock(temp7, 2);
    temp8->Height(::g::Uno::UX::Size__New1(48.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp9->Value(::STRINGS[10/*"Create User"*/]);
    temp9->FontSize(20.0f);
    temp9->Color(::g::Fuse::Drawing::Colors::White());
    temp9->Alignment(10);
    temp10->Alignment(1);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp10, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    temp10->File(::g::Uno::UX::BundleFileSource::New1(::g::stockIT_bundle::arrowd81ec3f0()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp11->Alignment(4);
    temp11->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp->TextColor(::g::Fuse::Drawing::Colors::Red());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp1->PlaceholderText(::STRINGS[11/*"Username"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    temp2->PlaceholderText(::STRINGS[12/*"Email"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp3->IsPassword(true);
    temp3->PlaceholderText(::STRINGS[13/*"Password"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp19->Alignment(8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp20->CornerRadius(::g::Uno::Float4__New2(80.0f, 80.0f, 80.0f, 80.0f));
    temp20->Width(::g::Uno::UX::Size__New1(100.0f, 1));
    temp20->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp20->Margin(::g::Uno::Float4__New2(10.0f, 50.0f, 10.0f, 50.0f));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp20, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    temp20->Fill(temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp21->Value(::STRINGS[14/*"Sign Up"*/]);
    temp21->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp21->Alignment(10);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[5/*Uno.Collections.ICollection<object>*/]), router);
    Background(temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
}

// public CreateUser New(Fuse.Navigation.Router router) [static] :19
CreateUser* CreateUser::New4(::g::Fuse::Navigation::Router* router1)
{
    CreateUser* obj1 = (CreateUser*)uNew(CreateUser_typeof());
    obj1->ctor_7(router1);
    return obj1;
}
// }

} // ::g
