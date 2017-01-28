// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\input\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct SelectionQuery;}}}
namespace g{namespace Fuse{struct HitTestResult;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class SelectionQuery :493
// {
uType* SelectionQuery_typeof();
void SelectionQuery__ctor__fn(SelectionQuery* __this);
void SelectionQuery__New1_fn(SelectionQuery** __retval);
void SelectionQuery__Select_fn(SelectionQuery* __this, ::g::Fuse::HitTestResult* result);
void SelectionQuery__Select1_fn(SelectionQuery* __this, ::g::Fuse::Visual* root, ::g::Uno::Float2* point, ::g::Fuse::HitTestResult** __retval);

struct SelectionQuery : uObject
{
    uStrong< ::g::Fuse::HitTestResult*> _result;
    int count;

    void ctor_();
    void Select(::g::Fuse::HitTestResult* result);
    ::g::Fuse::HitTestResult* Select1(::g::Fuse::Visual* root, ::g::Uno::Float2 point);
    static SelectionQuery* New1();
};
// }

}}} // ::g::Fuse::Input
