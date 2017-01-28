// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.UserEvents\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace Fuse{struct UserEventDispatch;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{

// public partial sealed class UserEvent :354
// {
::g::Fuse::Node_type* UserEvent_typeof();
void UserEvent__OnRooted_fn(UserEvent* __this);
void UserEvent__OnUnrooted_fn(UserEvent* __this);
void UserEvent__raise_fn(::g::Fuse::Scripting::Context* c, UserEvent* n, uArray* args);
void UserEvent__Raise_fn(UserEvent* __this, ::g::Uno::Collections::Dictionary* args);
void UserEvent__ScanTree_fn(::g::Fuse::Node* at, ::g::Uno::UX::Selector* name, ::g::Fuse::Visual** visual, UserEvent** __retval);

struct UserEvent : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::UserEventDispatch*> Dispatch;

    void Raise(::g::Uno::Collections::Dictionary* args);
    static void raise(::g::Fuse::Scripting::Context* c, UserEvent* n, uArray* args);
    static UserEvent* ScanTree(::g::Fuse::Node* at, ::g::Uno::UX::Selector name, ::g::Fuse::Visual** visual);
};
// }

}} // ::g::Fuse
