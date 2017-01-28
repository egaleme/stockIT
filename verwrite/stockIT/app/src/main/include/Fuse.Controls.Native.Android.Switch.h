// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.43.11\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.Android.LeafView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IToggleView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Switch;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class Switch :1918
// {
struct Switch_type : ::g::Fuse::Controls::Native::Android::LeafView_type
{
    ::g::Fuse::Controls::Native::IToggleView interface3;
};

Switch_type* Switch_typeof();
void Switch__Dispose_fn(Switch* __this);
void Switch__OnToggleChanged_fn(Switch* __this, bool* value);
void Switch__SetValue_fn(::g::Java::Object* handle, bool* value);
void Switch__set_Value_fn(Switch* __this, bool* value);

struct Switch : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong<uObject*> _host;

    void OnToggleChanged(bool value);
    void Value(bool value);
    static void SetValue(::g::Java::Object* handle, bool value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
