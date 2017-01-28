// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct Route;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class Route :1729
// {
uType* Route_typeof();
void Route__ctor__fn(Route* __this, uString* path, uString* parameter, Route* subRoute);
void Route__Append_fn(Route* __this, Route* subRoute, Route** __retval);
void Route__Format_fn(Route* __this, uString** __retval);
void Route__get_Length_fn(Route* __this, int* __retval);
void Route__New1_fn(uString* path, uString* parameter, Route* subRoute, Route** __retval);
void Route__SubDepth_fn(Route* __this, int* count, Route** __retval);
void Route__Up_fn(Route* __this, Route** __retval);

struct Route : uObject
{
    uStrong<uString*> Parameter;
    uStrong<uString*> Path;
    uStrong<Route*> SubRoute;

    void ctor_(uString* path, uString* parameter, Route* subRoute);
    Route* Append(Route* subRoute);
    uString* Format();
    int Length();
    Route* SubDepth(int count);
    Route* Up();
    static Route* New1(uString* path, uString* parameter, Route* subRoute);
};
// }

}}} // ::g::Fuse::Navigation
