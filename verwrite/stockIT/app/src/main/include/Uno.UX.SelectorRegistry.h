// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\ux\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct SelectorRegistry;}}}

namespace g{
namespace Uno{
namespace UX{

// internal static class SelectorRegistry :975
// {
uClassType* SelectorRegistry_typeof();
void SelectorRegistry__GetHandle_fn(uString* value, int* __retval);
void SelectorRegistry__GetValue_fn(int* handle, uString** __retval);

struct SelectorRegistry : uObject
{
    static int _counter_;
    static int& _counter() { return SelectorRegistry_typeof()->Init(), _counter_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _handleToString_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _handleToString() { return SelectorRegistry_typeof()->Init(), _handleToString_; }
    static uSStrong<uObject*> _mutex_;
    static uSStrong<uObject*>& _mutex() { return SelectorRegistry_typeof()->Init(), _mutex_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _stringToHandle_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _stringToHandle() { return SelectorRegistry_typeof()->Init(), _stringToHandle_; }

    static int GetHandle(uString* value);
    static uString* GetValue(int handle);
};
// }

}}} // ::g::Uno::UX
