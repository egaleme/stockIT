// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Resources{struct ResourceRegistry;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public static class ResourceRegistry :497
// {
uClassType* ResourceRegistry_typeof();
void ResourceRegistry__AddResourceChangedHandler_fn(uString* key, uDelegate* handler);
void ResourceRegistry__NotifyResourceChanged_fn(uString* key);
void ResourceRegistry__RemoveResourceChangedHandler_fn(uString* key, uDelegate* handler);

struct ResourceRegistry : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _handlers_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _handlers() { return ResourceRegistry_typeof()->Init(), _handlers_; }

    static void AddResourceChangedHandler(uString* key, uDelegate* handler);
    static void NotifyResourceChanged(uString* key);
    static void RemoveResourceChangedHandler(uString* key, uDelegate* handler);
};
// }

}}} // ::g::Fuse::Resources
