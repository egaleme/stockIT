// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct JavaScript;}}}
namespace g{namespace Fuse{namespace Reactive{struct JavaScript__EvaluateDataContext;}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class JavaScript.EvaluateDataContext :1547
// {
uType* JavaScript__EvaluateDataContext_typeof();
void JavaScript__EvaluateDataContext__ctor__fn(JavaScript__EvaluateDataContext* __this, ::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js);
void JavaScript__EvaluateDataContext__Evaluate_fn(JavaScript__EvaluateDataContext* __this);
void JavaScript__EvaluateDataContext__New1_fn(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js, JavaScript__EvaluateDataContext** __retval);
void JavaScript__EvaluateDataContext__SetDataContext_fn(JavaScript__EvaluateDataContext* __this);

struct JavaScript__EvaluateDataContext : uObject
{
    uStrong<uObject*> _dc;
    uStrong< ::g::Fuse::Reactive::JavaScript*> _js;
    uStrong< ::g::Fuse::Reactive::ThreadWorker*> _worker;

    void ctor_(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js);
    void Evaluate();
    void SetDataContext();
    static JavaScript__EvaluateDataContext* New1(::g::Fuse::Reactive::ThreadWorker* worker, ::g::Fuse::Reactive::JavaScript* js);
};
// }

}}} // ::g::Fuse::Reactive
