// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Control;}}}
namespace g{namespace Fuse{namespace Controls{struct ForwardProperties;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class ForwardProperties :517
// {
struct ForwardProperties_type : uType
{
    ::g::Uno::UX::IPropertyListener interface0;
    ::g::Uno::IDisposable interface1;
};

ForwardProperties_type* ForwardProperties_typeof();
void ForwardProperties__ctor__fn(ForwardProperties* __this, ::g::Fuse::Controls::Control* control, uObject* view);
void ForwardProperties__Dispose_fn(ForwardProperties* __this);
void ForwardProperties__Link_fn(::g::Fuse::Controls::Control* control, uObject* view);
void ForwardProperties__New1_fn(::g::Fuse::Controls::Control* control, uObject* view, ForwardProperties** __retval);
void ForwardProperties__Unlink_fn(::g::Fuse::Controls::Control* control);
void ForwardProperties__UnoUXIPropertyListenerOnPropertyChanged_fn(ForwardProperties* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* property);
void ForwardProperties__UpdateClipToBounds_fn(ForwardProperties* __this);
void ForwardProperties__UpdateHitTestMode_fn(ForwardProperties* __this);
void ForwardProperties__UpdateOpacity_fn(ForwardProperties* __this);

struct ForwardProperties : uObject
{
    static ::g::Uno::UX::Selector _clipToBoundsName_;
    static ::g::Uno::UX::Selector& _clipToBoundsName() { return ForwardProperties_typeof()->Init(), _clipToBoundsName_; }
    uStrong< ::g::Fuse::Controls::Control*> _control;
    static uSStrong< ::g::Fuse::PropertyHandle*> _handle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _handle() { return ForwardProperties_typeof()->Init(), _handle_; }
    static ::g::Uno::UX::Selector _hitTestModeName_;
    static ::g::Uno::UX::Selector& _hitTestModeName() { return ForwardProperties_typeof()->Init(), _hitTestModeName_; }
    static ::g::Uno::UX::Selector _opacityName_;
    static ::g::Uno::UX::Selector& _opacityName() { return ForwardProperties_typeof()->Init(), _opacityName_; }
    uStrong<uObject*> _view;

    void ctor_(::g::Fuse::Controls::Control* control, uObject* view);
    void Dispose();
    void UpdateClipToBounds();
    void UpdateHitTestMode();
    void UpdateOpacity();
    static void Link(::g::Fuse::Controls::Control* control, uObject* view);
    static ForwardProperties* New1(::g::Fuse::Controls::Control* control, uObject* view);
    static void Unlink(::g::Fuse::Controls::Control* control);
};
// }

}}} // ::g::Fuse::Controls
