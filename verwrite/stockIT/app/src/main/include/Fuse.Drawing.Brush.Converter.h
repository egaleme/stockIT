// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Marshal.IConverter.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush__Converter;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// private sealed class Brush.Converter :88
// {
struct Brush__Converter_type : uType
{
    ::g::Fuse::Scripting::Marshal__IConverter interface0;
};

Brush__Converter_type* Brush__Converter_typeof();
void Brush__Converter__ctor__fn(Brush__Converter* __this);
void Brush__Converter__CanConvert_fn(Brush__Converter* __this, uType* t, bool* __retval);
void Brush__Converter__New1_fn(Brush__Converter** __retval);
void Brush__Converter__TryConvert_fn(Brush__Converter* __this, uType* t, uObject* o, uObject** __retval);

struct Brush__Converter : uObject
{
    void ctor_();
    bool CanConvert(uType* t);
    uObject* TryConvert(uType* t, uObject* o);
    static Brush__Converter* New1();
};
// }

}}} // ::g::Fuse::Drawing
