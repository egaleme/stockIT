// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Resources{struct DisposalManager;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal static class DisposalManager :9
// {
uClassType* DisposalManager_typeof();
void DisposalManager__Add_fn(uObject* item);
void DisposalManager__Add1_fn(uObject* item);
void DisposalManager__Clean_fn(int* dr);
void DisposalManager__Remove_fn(uObject* item);
void DisposalManager__Update_fn();
void DisposalManager__VerifyAttach_fn();

struct DisposalManager : uObject
{
    static bool _actionAdded_;
    static bool& _actionAdded() { return DisposalManager_typeof()->Init(), _actionAdded_; }
    static int _disposeAt_;
    static int& _disposeAt() { return DisposalManager_typeof()->Init(), _disposeAt_; }
    static uSStrong< ::g::Uno::Collections::List*> _items_;
    static uSStrong< ::g::Uno::Collections::List*>& _items() { return DisposalManager_typeof()->Init(), _items_; }
    static uSStrong< ::g::Uno::Collections::List*> _softDisposables_;
    static uSStrong< ::g::Uno::Collections::List*>& _softDisposables() { return DisposalManager_typeof()->Init(), _softDisposables_; }

    static void Add(uObject* item);
    static void Add1(uObject* item);
    static void Clean(int dr);
    static void Remove(uObject* item);
    static void Update();
    static void VerifyAttach();
};
// }

}}} // ::g::Fuse::Resources
