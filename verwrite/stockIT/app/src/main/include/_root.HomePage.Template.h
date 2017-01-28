// This file was generated based on C:\stockit\stockit\.uno\ux11\HomePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HomePage;}
namespace g{struct HomePage__Template;}

namespace g{

// public partial sealed class HomePage.Template :6
// {
::g::Uno::UX::Template_type* HomePage__Template_typeof();
void HomePage__Template__ctor_1_fn(HomePage__Template* __this, ::g::HomePage* parent, ::g::HomePage* parentInstance);
void HomePage__Template__New1_fn(HomePage__Template* __this, uObject** __retval);
void HomePage__Template__New2_fn(::g::HomePage* parent, ::g::HomePage* parentInstance, HomePage__Template** __retval);

struct HomePage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::HomePage*> __parent1;
    uWeak< ::g::HomePage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return HomePage__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return HomePage__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return HomePage__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return HomePage__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return HomePage__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return HomePage__Template_typeof()->Init(), __selector5_; }
    uStrong< ::g::Uno::UX::Property1*> background_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> checkmarkIcon_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> deleteText_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp5_Value_inst;

    void ctor_1(::g::HomePage* parent, ::g::HomePage* parentInstance);
    static HomePage__Template* New2(::g::HomePage* parent, ::g::HomePage* parentInstance);
};
// }

} // ::g
