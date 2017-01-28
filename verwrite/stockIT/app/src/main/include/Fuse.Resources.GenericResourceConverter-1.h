// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.IResourceConverter-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct GenericResourceConverter;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class GenericResourceConverter<T> :376
// {
struct GenericResourceConverter_type : uType
{
    ::g::Fuse::Resources::IResourceConverter interface0;
};

GenericResourceConverter_type* GenericResourceConverter_typeof();
void GenericResourceConverter__ctor__fn(GenericResourceConverter* __this);
void GenericResourceConverter__Accept_fn(GenericResourceConverter* __this, uObject* o, bool* __retval);
void GenericResourceConverter__Convert_fn(GenericResourceConverter* __this, uObject* o, uTRef __retval);
void GenericResourceConverter__New1_fn(uType* __type, GenericResourceConverter** __retval);

struct GenericResourceConverter : uObject
{
    void ctor_();
    bool Accept(uObject* o);
    template<class T>
    T Convert(uObject* o) { T __retval; return GenericResourceConverter__Convert_fn(this, o, &__retval), __retval; }
    static GenericResourceConverter* New1(uType* __type);
};
// }

}}} // ::g::Fuse::Resources
