// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct EdgeNavigator;}}}
namespace g{namespace Fuse{namespace Controls{struct EdgeNavigator__PageData;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Navigation{struct EdgeNavigation;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class EdgeNavigator :10
// {
::g::Fuse::Controls::Control_type* EdgeNavigator_typeof();
void EdgeNavigator__CleanupChild_fn(EdgeNavigator* __this, EdgeNavigator__PageData* pd, ::g::Fuse::Visual* elm);
void EdgeNavigator__CleanupChild1_fn(EdgeNavigator* __this, ::g::Fuse::Node* o);
void EdgeNavigator__dismiss_fn(::g::Fuse::Scripting::Context* c, EdgeNavigator* e, uArray* args);
void EdgeNavigator__Dismiss_fn(EdgeNavigator* __this);
void EdgeNavigator__GetPageData_fn(::g::Fuse::Elements::Element* elm, bool* create, EdgeNavigator__PageData** __retval);
void EdgeNavigator__GotoEdge_fn(EdgeNavigator* __this, int* edge);
void EdgeNavigator__OnChildAdded_fn(EdgeNavigator* __this, ::g::Fuse::Node* o);
void EdgeNavigator__OnChildRemoved_fn(EdgeNavigator* __this, ::g::Fuse::Node* o);
void EdgeNavigator__OnRooted_fn(EdgeNavigator* __this);
void EdgeNavigator__OnUnrooted_fn(EdgeNavigator* __this);
void EdgeNavigator__open_fn(::g::Fuse::Scripting::Context* c, EdgeNavigator* e, uArray* args);
void EdgeNavigator__SetupEdge_fn(EdgeNavigator* __this, EdgeNavigator__PageData* pd, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float2* rel, int* align);
void EdgeNavigator__UpdateChild_fn(EdgeNavigator* __this, ::g::Fuse::Node* o);

struct EdgeNavigator : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Navigation::EdgeNavigation*> _navigation;
    static uSStrong< ::g::Fuse::PropertyHandle*> _pageDataProperty_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _pageDataProperty() { return EdgeNavigator_typeof()->Init(), _pageDataProperty_; }

    void CleanupChild(EdgeNavigator__PageData* pd, ::g::Fuse::Visual* elm);
    void CleanupChild1(::g::Fuse::Node* o);
    void Dismiss();
    void GotoEdge(int edge);
    void SetupEdge(EdgeNavigator__PageData* pd, ::g::Fuse::Elements::Element* elm, ::g::Uno::Float2 rel, int align);
    void UpdateChild(::g::Fuse::Node* o);
    static void dismiss(::g::Fuse::Scripting::Context* c, EdgeNavigator* e, uArray* args);
    static EdgeNavigator__PageData* GetPageData(::g::Fuse::Elements::Element* elm, bool create);
    static void open(::g::Fuse::Scripting::Context* c, EdgeNavigator* e, uArray* args);
};
// }

}}} // ::g::Fuse::Controls
