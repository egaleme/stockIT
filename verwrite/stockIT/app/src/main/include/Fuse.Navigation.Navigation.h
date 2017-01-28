// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct Navigation;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct PropertyHandle;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public interfacemodifiers class Navigation :819
// {
uType* Navigation_typeof();
void Navigation__GetLocalNavigation_fn(::g::Fuse::Visual* node, uObject** __retval);
void Navigation__GetNavigationNavigation_fn(::g::Fuse::Visual* n, uObject** __retval);
void Navigation__IsPage_fn(::g::Fuse::Node* n, bool* __retval);
void Navigation__TryFind_fn(::g::Fuse::Visual* node, uObject** __retval);
void Navigation__TryFindBaseNavigation_fn(::g::Fuse::Node* node, uObject** __retval);
void Navigation__TryFindBaseNavigation1_fn(::g::Fuse::Node* node, ::g::Fuse::Visual** parent, uObject** __retval);
void Navigation__TryFindPage_fn(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind, ::g::Fuse::Visual** __retval);
void Navigation__TryFindPage1_fn(::g::Fuse::Visual* node, ::g::Fuse::Visual** __retval);

struct Navigation : uObject
{
    static uSStrong< ::g::Fuse::PropertyHandle*> _contextHandle_;
    static uSStrong< ::g::Fuse::PropertyHandle*>& _contextHandle() { return Navigation_typeof()->Init(), _contextHandle_; }

    static uObject* GetLocalNavigation(::g::Fuse::Visual* node);
    static uObject* GetNavigationNavigation(::g::Fuse::Visual* n);
    static bool IsPage(::g::Fuse::Node* n);
    static uObject* TryFind(::g::Fuse::Visual* node);
    static uObject* TryFindBaseNavigation(::g::Fuse::Node* node);
    static uObject* TryFindBaseNavigation1(::g::Fuse::Node* node, ::g::Fuse::Visual** parent);
    static ::g::Fuse::Visual* TryFindPage(::g::Fuse::Node* node, uObject** nav, ::g::Fuse::Visual** pageBind);
    static ::g::Fuse::Visual* TryFindPage1(::g::Fuse::Visual* node);
};
// }

}}} // ::g::Fuse::Navigation
