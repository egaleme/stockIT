// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.INameListener.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Scripting.IObserver.h>
#include <Uno.Object.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Reactive{struct DataToResourceBinding;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DataToResourceBinding<T> :467
// {
::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof();
void DataToResourceBinding__AcceptFunction_fn(DataToResourceBinding* __this, uObject* obj, bool* __retval);
void DataToResourceBinding__OnChanged_fn(DataToResourceBinding* __this);
void DataToResourceBinding__PushValue_fn(DataToResourceBinding* __this, uObject* value);

struct DataToResourceBinding : ::g::Fuse::Reactive::DataBinding
{
    uStrong<uString*> _key;

    bool AcceptFunction(uObject* obj);
    void OnChanged();
};
// }

}}} // ::g::Fuse::Reactive
