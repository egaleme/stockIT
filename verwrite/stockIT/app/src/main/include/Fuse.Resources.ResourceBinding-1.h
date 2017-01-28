// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
namespace g{namespace Fuse{namespace Resources{struct ResourceBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class ResourceBinding<T> :446
// {
::g::Fuse::Binding_type* ResourceBinding_typeof();
void ResourceBinding__get_Key_fn(ResourceBinding* __this, uString** __retval);
void ResourceBinding__set_Key_fn(ResourceBinding* __this, uString* value);
void ResourceBinding__OnChanged_fn(ResourceBinding* __this);
void ResourceBinding__OnRooted_fn(ResourceBinding* __this);
void ResourceBinding__OnUnrooted_fn(ResourceBinding* __this);
void ResourceBinding__get_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property1** __retval);
void ResourceBinding__set_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property1* value);

struct ResourceBinding : ::g::Fuse::Binding
{
    uStrong<uObject*> _converter;
    uStrong<uString*> _Key;
    uStrong< ::g::Uno::UX::Property1*> _Target;

    uString* Key();
    void Key(uString* value);
    void OnChanged();
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
};
// }

}}} // ::g::Fuse::Resources
