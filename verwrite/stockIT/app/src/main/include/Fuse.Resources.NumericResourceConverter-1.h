// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\resources\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.IResourceConverter-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal abstract class NumericResourceConverter<T> :344
// {
struct NumericResourceConverter_type : uType
{
    ::g::Fuse::Resources::IResourceConverter interface0;
    void(*fp_Convert)(::g::Fuse::Resources::NumericResourceConverter*, uObject*, uTRef);
};

NumericResourceConverter_type* NumericResourceConverter_typeof();
void NumericResourceConverter__ctor__fn(NumericResourceConverter* __this);
void NumericResourceConverter__Accept_fn(NumericResourceConverter* __this, uObject* o, bool* __retval);
void NumericResourceConverter__InternConvert_fn(NumericResourceConverter* __this, uObject* o, double* __retval);

struct NumericResourceConverter : uObject
{
    void ctor_();
    bool Accept(uObject* o);
    template<class T>
    T Convert(uObject* o) { T __retval; return (((NumericResourceConverter_type*)__type)->fp_Convert)(this, o, &__retval), __retval; }
    void Convert_ex(uObject* o, uTRef __retval) { (((NumericResourceConverter_type*)__type)->fp_Convert)(this, o, __retval); }
    double InternConvert(uObject* o);
};
// }

}}} // ::g::Fuse::Resources
