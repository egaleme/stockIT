// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Threading\0.43.8\tasks\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct CancellationToken;}}}

namespace g{
namespace Uno{
namespace Threading{

// internal sealed class CancellationToken :34
// {
uType* CancellationToken_typeof();
void CancellationToken__ctor__fn(CancellationToken* __this);
void CancellationToken__get_IsCancellationRequested_fn(CancellationToken* __this, bool* __retval);
void CancellationToken__set_IsCancellationRequested_fn(CancellationToken* __this, bool* value);
void CancellationToken__New1_fn(CancellationToken** __retval);
void CancellationToken__SetCancellationRequested_fn(CancellationToken* __this);

struct CancellationToken : uObject
{
    bool _IsCancellationRequested;

    void ctor_();
    bool IsCancellationRequested();
    void IsCancellationRequested(bool value);
    void SetCancellationRequested();
    static CancellationToken* New1();
};
// }

}}} // ::g::Uno::Threading
