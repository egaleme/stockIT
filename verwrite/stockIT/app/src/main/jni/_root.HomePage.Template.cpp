// This file was generated based on C:\stockit\stockit\.uno\ux11\HomePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HomePage.h>
#include <_root.HomePage.Template.h>
#include <_root.Icon.h>
#include <_root.Operation.h>
#include <_root.Seperator.h>
#include <_root.stockIT_bundle.h>
#include <_root.stockIT_FuseControlsShape_Color_Property.h>
#include <_root.stockIT_FuseControlsTextControl_Value_Property.h>
#include <_root.stockIT_FuseDrawingSolidColor_Color_Property.h>
#include <_root.stockIT_FuseElementsElement_Opacity_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
#include <Fuse.Triggers.AddingAnimation.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.RemovingAnimation.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[20];
static uType* TYPES[11];

namespace g{

// public partial sealed class HomePage.Template :6
// {
// static Template() :31
static void HomePage__Template__cctor__fn(uType* __type)
{
    HomePage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    HomePage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Color"*/]);
    HomePage__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Opacity"*/]);
    HomePage__Template::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"content"*/]);
    HomePage__Template::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"deleteText"*/]);
    HomePage__Template::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"checkmarkIcon"*/]);
}

static void HomePage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("Opacity");
    ::STRINGS[3] = uString::Const("content");
    ::STRINGS[4] = uString::Const("deleteText");
    ::STRINGS[5] = uString::Const("checkmarkIcon");
    ::STRINGS[6] = uString::Const("quantity");
    ::STRINGS[7] = uString::Const("expireTracker");
    ::STRINGS[8] = uString::Const("name");
    ::STRINGS[9] = uString::Const("batchno");
    ::STRINGS[10] = uString::Const("price");
    ::STRINGS[11] = uString::Const("bb");
    ::STRINGS[12] = uString::Const("updateProduct");
    ::STRINGS[13] = uString::Const("deleteProduct");
    ::STRINGS[14] = uString::Const("Name:");
    ::STRINGS[15] = uString::Const("Batch no:");
    ::STRINGS[16] = uString::Const("=N=:");
    ::STRINGS[17] = uString::Const("1*,1*");
    ::STRINGS[18] = uString::Const("Edit");
    ::STRINGS[19] = uString::Const("Delete");
    ::TYPES[0] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    type->SetFields(2,
        ::g::HomePage_typeof(), offsetof(::g::HomePage__Template, __parent1), uFieldFlagsWeak,
        ::g::HomePage_typeof(), offsetof(::g::HomePage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::HomePage__Template, background_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::HomePage__Template, checkmarkIcon_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::HomePage__Template, deleteText_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::HomePage__Template, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::HomePage__Template, temp1_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::HomePage__Template, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::HomePage__Template, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::HomePage__Template, temp4_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::HomePage__Template, temp5_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage__Template::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage__Template::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage__Template::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::HomePage__Template::__selector5_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* HomePage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 19;
    options.ObjectSize = sizeof(HomePage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("HomePage.Template", options);
    type->fp_build_ = HomePage__Template_build;
    type->fp_cctor_ = HomePage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))HomePage__Template__New1_fn;
    return type;
}

// public Template(HomePage parent, HomePage parentInstance) :10
void HomePage__Template__ctor_1_fn(HomePage__Template* __this, ::g::HomePage* parent, ::g::HomePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :34
void HomePage__Template__New1_fn(HomePage__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::Panel* self = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    __this->temp_Value_inst = ::g::stockIT_FuseControlsTextControl_Value_Property::New1(temp, HomePage__Template::__selector0());
    ::g::Fuse::Controls::Circle* temp1 = ::g::Fuse::Controls::Circle::New3();
    __this->temp1_Color_inst = ::g::stockIT_FuseControlsShape_Color_Property::New1(temp1, HomePage__Template::__selector1());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    __this->temp2_Value_inst = ::g::stockIT_FuseControlsTextControl_Value_Property::New1(temp2, HomePage__Template::__selector0());
    ::g::Fuse::Controls::Text* temp3 = ::g::Fuse::Controls::Text::New3();
    __this->temp3_Value_inst = ::g::stockIT_FuseControlsTextControl_Value_Property::New1(temp3, HomePage__Template::__selector0());
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    __this->temp4_Value_inst = ::g::stockIT_FuseControlsTextControl_Value_Property::New1(temp4, HomePage__Template::__selector0());
    ::g::Fuse::Controls::Text* temp5 = ::g::Fuse::Controls::Text::New3();
    __this->temp5_Value_inst = ::g::stockIT_FuseControlsTextControl_Value_Property::New1(temp5, HomePage__Template::__selector0());
    ::g::Operation* deleteText1 = ::g::Operation::New4();
    __this->deleteText_Opacity_inst = ::g::stockIT_FuseElementsElement_Opacity_Property::New1(deleteText1, HomePage__Template::__selector2());
    ::g::Icon* checkmarkIcon1 = ::g::Icon::New4();
    __this->checkmarkIcon_Opacity_inst = ::g::stockIT_FuseElementsElement_Opacity_Property::New1(checkmarkIcon1, HomePage__Template::__selector2());
    ::g::Fuse::Drawing::SolidColor* background1 = ::g::Fuse::Drawing::SolidColor::New2();
    __this->background_Color_inst = ::g::stockIT_FuseDrawingSolidColor_Color_Property::New1(background1, HomePage__Template::__selector1());
    ::g::Fuse::Controls::PageControl* temp6 = ::g::Fuse::Controls::PageControl::New4();
    ::g::Fuse::Controls::Page* content1 = ::g::Fuse::Controls::Page::New4();
    ::g::Seperator* temp7 = ::g::Seperator::New4();
    ::g::Fuse::Controls::DockPanel* temp8 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp9 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp10 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp_Value_inst, ::STRINGS[6/*"quantity"*/]);
    ::g::Fuse::Reactive::DataBinding* temp11 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[1/*Fuse.Reactive.DataBinding<float4>*/], __this->temp1_Color_inst, ::STRINGS[7/*"expireTracker"*/]);
    ::g::Fuse::Controls::Grid* temp12 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp13 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp14 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Text* temp15 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp16 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp2_Value_inst, ::STRINGS[8/*"name"*/]);
    ::g::Fuse::Reactive::DataBinding* temp17 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp3_Value_inst, ::STRINGS[9/*"batchno"*/]);
    ::g::Fuse::Reactive::DataBinding* temp18 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp4_Value_inst, ::STRINGS[10/*"price"*/]);
    ::g::Fuse::Reactive::DataBinding* temp19 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[0/*Fuse.Reactive.DataBinding<string>*/], __this->temp5_Value_inst, ::STRINGS[11/*"bb"*/]);
    ::g::Fuse::Controls::Panel* temp20 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp21 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Rectangle* temp22 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp23 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb61 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[12/*"updateProduct"*/]);
    ::g::Fuse::Controls::Text* temp24 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp25 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7019608f, 0.4980392f, 0.3490196f, 1.0f));
    ::g::Fuse::Controls::Rectangle* temp26 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Gestures::Clicked* temp27 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb71 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[13/*"deleteProduct"*/]);
    ::g::Fuse::Controls::Text* temp28 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Page* temp29 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Navigation::ActivatingAnimation* temp30 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Triggers::Actions::Set* temp31 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<float>*/], __this->deleteText_Opacity_inst);
    ::g::Fuse::Triggers::Actions::Set* temp32 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[2/*Fuse.Triggers.Actions.Set<float>*/], __this->checkmarkIcon_Opacity_inst);
    ::g::Fuse::Animations::Change* temp33 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<float4>*/], __this->background_Color_inst);
    ::g::Fuse::Animations::Scale* temp34 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Navigation::WhileActive* temp35 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp36 = ::g::Fuse::Triggers::Actions::Callback::New2();
    ::g::Fuse::Reactive::EventBinding* temp_eb81 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[13/*"deleteProduct"*/]);
    ::g::Fuse::Triggers::LayoutAnimation* temp37 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp38 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::AddingAnimation* temp39 = ::g::Fuse::Triggers::AddingAnimation::New2();
    ::g::Fuse::Animations::Move* temp40 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Triggers::RemovingAnimation* temp41 = ::g::Fuse::Triggers::RemovingAnimation::New2();
    ::g::Fuse::Animations::Move* temp42 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::Rectangle* temp43 = ::g::Fuse::Controls::Rectangle::New3();
    temp6->Active(content1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), content1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    content1->Name(HomePage__Template::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(content1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(content1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp7->Color(::g::Uno::Float4__New2(0.7803922f, 0.8117647f, 0.8078431f, 1.0f));
    temp7->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp7->Alignment(12);
    temp7->Opacity(0.7f);
    temp8->Margin(::g::Uno::Float4__New2(7.0f, 1.0f, 7.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp1->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    temp1->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    temp1->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 10.0f, 0.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp12->RowCount(5);
    temp12->ColumnCount(2);
    temp12->Margin(::g::Uno::Float4__New2(12.0f, 12.0f, 12.0f, 12.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp13->Value(::STRINGS[14/*"Name:"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp13, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp13, 0);
    temp14->Value(::STRINGS[15/*"Batch no:"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp14, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp14, 0);
    temp15->Value(::STRINGS[16/*"=N=:"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp15, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp15, 0);
    ::g::Fuse::Controls::Grid::SetRow(temp2, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp2, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    ::g::Fuse::Controls::Grid::SetRow(temp3, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp3, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    ::g::Fuse::Controls::Grid::SetRow(temp4, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp4, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    temp5->Alignment(9);
    ::g::Fuse::Controls::Grid::SetRow(temp5, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    ::g::Fuse::Controls::Grid::SetRow(temp20, 4);
    ::g::Fuse::Controls::Grid::SetColumn(temp20, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp21->Columns(::STRINGS[17/*"1*,1*"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp22->CornerRadius(::g::Uno::Float4__New2(100.0f, 100.0f, 100.0f, 100.0f));
    temp22->HitTestMode(6);
    temp22->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    temp22->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp22->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp22->Fill(temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp23->add_Handler(uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb61));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp23->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb61);
    temp24->Value(::STRINGS[18/*"Edit"*/]);
    temp24->FontSize(10.0f);
    temp24->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp24->Alignment(10);
    temp26->CornerRadius(::g::Uno::Float4__New2(100.0f, 100.0f, 100.0f, 100.0f));
    temp26->HitTestMode(6);
    temp26->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    temp26->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp26->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp26->Fill(::g::Fuse::Drawing::Brushes::Red());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp27->add_Handler(uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb71));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb71);
    temp28->Value(::STRINGS[19/*"Delete"*/]);
    temp28->FontSize(10.0f);
    temp28->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp28->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp31);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp30->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp32);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp31, uCRef(1.0f));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp32, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp33, uCRef(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.0f, 1.0f)));
    temp33->Easing(::g::Fuse::Animations::Easing::ExponentialOut());
    temp34->Factor(2.8f);
    temp34->Target(checkmarkIcon1);
    temp34->Easing(::g::Fuse::Animations::Easing::BackOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Actions()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp35->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb81);
    temp36->add_Handler(uDelegate::New(::TYPES[9/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb81));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp38);
    temp38->Y(1.0f);
    temp38->Duration(0.8);
    temp38->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange());
    temp38->Easing(::g::Fuse::Animations::Easing::CircularInOut());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp39->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp40);
    temp40->X(1.0f);
    temp40->Duration(0.3);
    temp40->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp40->Easing(::g::Fuse::Animations::Easing::CircularIn());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Animators()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp42);
    temp42->Y(-1.0f);
    temp42->Duration(0.4);
    temp42->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp42->Easing(::g::Fuse::Animations::Easing::CircularInOut());
    deleteText1->Value(::STRINGS[19/*"Delete"*/]);
    deleteText1->Name(HomePage__Template::__selector4());
    checkmarkIcon1->Alignment(9);
    checkmarkIcon1->Name(HomePage__Template::__selector5());
    checkmarkIcon1->File(::g::Uno::UX::BundleFileSource::New1(::g::stockIT_bundle::Checkmark137b59b0()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp43->Fills()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), background1);
    background1->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), deleteText1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), checkmarkIcon1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self->Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp43);
    return *__retval = self, void();
}

// public Template New(HomePage parent, HomePage parentInstance) :10
void HomePage__Template__New2_fn(::g::HomePage* parent, ::g::HomePage* parentInstance, HomePage__Template** __retval)
{
    *__retval = HomePage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector HomePage__Template::__selector0_;
::g::Uno::UX::Selector HomePage__Template::__selector1_;
::g::Uno::UX::Selector HomePage__Template::__selector2_;
::g::Uno::UX::Selector HomePage__Template::__selector3_;
::g::Uno::UX::Selector HomePage__Template::__selector4_;
::g::Uno::UX::Selector HomePage__Template::__selector5_;

// public Template(HomePage parent, HomePage parentInstance) [instance] :10
void HomePage__Template::ctor_1(::g::HomePage* parent, ::g::HomePage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(HomePage parent, HomePage parentInstance) [static] :10
HomePage__Template* HomePage__Template::New2(::g::HomePage* parent, ::g::HomePage* parentInstance)
{
    HomePage__Template* obj1 = (HomePage__Template*)uNew(HomePage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
