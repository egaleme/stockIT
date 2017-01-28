// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct ThreadImpl;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal abstract class ThreadImpl :928
// {
struct ThreadImpl_type : uType
{
    void(*fp_Join)(::g::Uno::Threading::ThreadImpl*);
    void(*fp_Start)(::g::Uno::Threading::ThreadImpl*);
};

ThreadImpl_type* ThreadImpl_typeof();
void ThreadImpl__ctor__fn(ThreadImpl* __this, uDelegate* callback);

struct ThreadImpl : uObject
{
    uStrong<uDelegate*> _callback;

    void ctor_(uDelegate* callback);
    void Join() { (((ThreadImpl_type*)__type)->fp_Join)(this); }
    void Start() { (((ThreadImpl_type*)__type)->fp_Start)(this); }
};
// }

}}} // ::g::Uno::Threading
