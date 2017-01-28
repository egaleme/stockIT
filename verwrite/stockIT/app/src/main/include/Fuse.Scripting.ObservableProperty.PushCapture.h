// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct ObservableProperty__PushCapture;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class ObservableProperty.PushCapture :2136
// {
uType* ObservableProperty__PushCapture_typeof();
void ObservableProperty__PushCapture__ctor__fn(ObservableProperty__PushCapture* __this, uDelegate* push, uObject* arg);
void ObservableProperty__PushCapture__New1_fn(uDelegate* push, uObject* arg, ObservableProperty__PushCapture** __retval);
void ObservableProperty__PushCapture__Run_fn(ObservableProperty__PushCapture* __this);

struct ObservableProperty__PushCapture : uObject
{
    uStrong<uObject*> _arg;
    uStrong<uDelegate*> _push;

    void ctor_(uDelegate* push, uObject* arg);
    void Run();
    static ObservableProperty__PushCapture* New1(uDelegate* push, uObject* arg);
};
// }

}}} // ::g::Fuse::Scripting
