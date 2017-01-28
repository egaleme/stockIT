// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct Route;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router__GetRouteCallback;}}}
namespace g{namespace Fuse{namespace Scripting{struct Array;}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// private sealed class Router.GetRouteCallback :2341
// {
uType* Router__GetRouteCallback_typeof();
void Router__GetRouteCallback__ctor__fn(Router__GetRouteCallback* __this, ::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context);
void Router__GetRouteCallback__New1_fn(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context, Router__GetRouteCallback** __retval);
void Router__GetRouteCallback__Run_fn(Router__GetRouteCallback* __this);
void Router__GetRouteCallback__ToArray_fn(Router__GetRouteCallback* __this, ::g::Fuse::Scripting::Array** __retval);

struct Router__GetRouteCallback : uObject
{
    uStrong< ::g::Fuse::Scripting::Function*> _callback;
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong< ::g::Fuse::Navigation::Route*> _route;

    void ctor_(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context);
    void Run();
    ::g::Fuse::Scripting::Array* ToArray();
    static Router__GetRouteCallback* New1(::g::Fuse::Navigation::Route* route, ::g::Fuse::Scripting::Function* callback, ::g::Fuse::Scripting::Context* context);
};
// }

}}} // ::g::Fuse::Navigation
