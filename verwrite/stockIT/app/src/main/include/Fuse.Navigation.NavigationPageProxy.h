// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IPagePropertyListener.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProxy;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigationPageProxy :1000
// {
struct NavigationPageProxy_type : uType
{
    ::g::Fuse::Navigation::IPagePropertyListener interface0;
};

NavigationPageProxy_type* NavigationPageProxy_typeof();
void NavigationPageProxy__ctor__fn(NavigationPageProxy* __this, uDelegate* ready, uDelegate* unready);
void NavigationPageProxy__get_Navigation_fn(NavigationPageProxy* __this, uObject** __retval);
void NavigationPageProxy__New1_fn(uDelegate* ready, uDelegate* unready, NavigationPageProxy** __retval);
void NavigationPageProxy__OnPageRootingCompleted_fn(NavigationPageProxy* __this);
void NavigationPageProxy__get_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual** __retval);
void NavigationPageProxy__set_Page_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* value);
void NavigationPageProxy__Rooted_fn(NavigationPageProxy* __this, ::g::Fuse::Visual* source);
void NavigationPageProxy__Unrooted_fn(NavigationPageProxy* __this);

struct NavigationPageProxy : uObject
{
    uStrong<uObject*> _navigation;
    uStrong< ::g::Fuse::Visual*> _pageBind;
    uStrong<uDelegate*> _ready;
    uStrong< ::g::Fuse::Visual*> _source;
    uStrong<uDelegate*> _unready;
    bool _waitRootingCompleted;
    uStrong< ::g::Fuse::Visual*> _Page;

    void ctor_(uDelegate* ready, uDelegate* unready);
    uObject* Navigation();
    void OnPageRootingCompleted();
    ::g::Fuse::Visual* Page();
    void Page(::g::Fuse::Visual* value);
    void Rooted(::g::Fuse::Visual* source);
    void Unrooted();
    static NavigationPageProxy* New1(uDelegate* ready, uDelegate* unready);
};
// }

}}} // ::g::Fuse::Navigation
