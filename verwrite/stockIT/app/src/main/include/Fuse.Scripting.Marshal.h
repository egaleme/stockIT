// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct Marshal;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{namespace Uno{namespace UX{struct Size2;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Scripting{

// public static class Marshal :1005
// {
uClassType* Marshal_typeof();
void Marshal__AddConverter_fn(uObject* conv);
void Marshal__CanConvertClass_fn(uType* t, bool* __retval);
void Marshal__ToBool_fn(uObject* obj, bool* __retval);
void Marshal__ToDouble_fn(uObject* o, double* __retval);
void Marshal__ToFloat_fn(uObject* o, float* __retval);
void Marshal__ToFloat4_fn(uObject* values, ::g::Uno::Float4* __retval);
void Marshal__ToFloat41_fn(uObject* o, ::g::Uno::Float4* __retval);
void Marshal__ToInt_fn(uObject* o, int* __retval);
void Marshal__ToSelector_fn(uObject* o, ::g::Uno::UX::Selector* __retval);
void Marshal__ToSize_fn(uObject* o, ::g::Uno::UX::Size* __retval);
void Marshal__ToSize2_fn(uObject* o, ::g::Uno::UX::Size2* __retval);
void Marshal__ToType_fn(uType* __type, uObject* o, uTRef __retval);
void Marshal__TryConvertTo_fn(uType* t, uObject* o, uObject** __retval);
void Marshal__TryConvertTo1_fn(uType* __type, uObject* obj, uTRef value, bool* __retval);

struct Marshal : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _converters_;
    static uSStrong< ::g::Uno::Collections::List*>& _converters() { return Marshal_typeof()->Init(), _converters_; }

    static void AddConverter(uObject* conv);
    static bool CanConvertClass(uType* t);
    static bool ToBool(uObject* obj);
    static double ToDouble(uObject* o);
    static float ToFloat(uObject* o);
    static ::g::Uno::Float4 ToFloat4(uObject* values);
    static ::g::Uno::Float4 ToFloat41(uObject* o);
    static int ToInt(uObject* o);
    static ::g::Uno::UX::Selector ToSelector(uObject* o);
    static ::g::Uno::UX::Size ToSize(uObject* o);
    static ::g::Uno::UX::Size2 ToSize2(uObject* o);
    template<class T>
    static T ToType(uType* __type, uObject* o) { T __retval; return Marshal__ToType_fn(__type, o, &__retval), __retval; }
    static uObject* TryConvertTo(uType* t, uObject* o);
    template<class T>
    static bool TryConvertTo1(uType* __type, uObject* obj, T* value) { bool __retval; return Marshal__TryConvertTo1_fn(__type, obj, uConstrain(__type->U(0), value), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
