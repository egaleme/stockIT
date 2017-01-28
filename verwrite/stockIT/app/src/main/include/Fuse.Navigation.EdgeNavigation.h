// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.Navigation.IBaseNavigation.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.VisualNavigation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct EdgeSwiper;}}}}
namespace g{namespace Fuse{namespace Navigation{struct EdgeNavigation;}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageState;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class EdgeNavigation :295
// {
::g::Fuse::Navigation::VisualNavigation_type* EdgeNavigation_typeof();
void EdgeNavigation__get_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual** __retval);
void EdgeNavigation__set_Active_fn(EdgeNavigation* __this, ::g::Fuse::Visual* value);
void EdgeNavigation__get_CanGoBack_fn(EdgeNavigation* __this, bool* __retval);
void EdgeNavigation__CheckChildren_fn(EdgeNavigation* __this);
void EdgeNavigation__ClearChildren_fn(EdgeNavigation* __this);
void EdgeNavigation__GetEdge_fn(::g::Fuse::Visual* elm, int* __retval);
void EdgeNavigation__GetPageState_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page, ::g::Fuse::Navigation::NavigationPageState* __retval);
void EdgeNavigation__GoBack_fn(EdgeNavigation* __this);
void EdgeNavigation__Goto_fn(EdgeNavigation* __this, ::g::Fuse::Visual* element, int* mode);
void EdgeNavigation__IsAnyPanelActive_fn(EdgeNavigation* __this, bool* __retval);
void EdgeNavigation__OnChildAddedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child);
void EdgeNavigation__OnChildRemovedWhileRooted_fn(EdgeNavigation* __this, ::g::Fuse::Node* child);
void EdgeNavigation__OnProgressChanged_fn(EdgeNavigation* __this, uObject* s, double* progress);
void EdgeNavigation__OnRooted_fn(EdgeNavigation* __this);
void EdgeNavigation__OnUnrooted_fn(EdgeNavigation* __this);
void EdgeNavigation__Toggle_fn(EdgeNavigation* __this, ::g::Fuse::Visual* page);

struct EdgeNavigation : ::g::Fuse::Navigation::VisualNavigation
{
    uStrong< ::g::Fuse::Visual*> _active;
    static uSStrong< ::g::Fuse::PropertyHandle*> _edgeHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _edgeHandle() { return EdgeNavigation_typeof()->Init(), _edgeHandle_; }
    uStrong< ::g::Uno::Collections::List*> _mains;
    double _maxProgress;
    uStrong< ::g::Uno::Collections::Dictionary*> _swipers;

    void CheckChildren();
    void ClearChildren();
    bool IsAnyPanelActive();
    void OnProgressChanged(uObject* s, double progress);
    static int GetEdge(::g::Fuse::Visual* elm);
};
// }

}}} // ::g::Fuse::Navigation
