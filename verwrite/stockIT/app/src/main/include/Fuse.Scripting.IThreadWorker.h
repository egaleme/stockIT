// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\scripting\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IThreadWorker :488
// {
uInterfaceType* IThreadWorker_typeof();

struct IThreadWorker
{
    void(*fp_get_Dispatcher)(uObject*, uObject**);
    void(*fp_get_Observable)(uObject*, ::g::Fuse::Scripting::Function**);
    static uObject* Dispatcher(const uInterface& __this) { uObject* __retval; return __this.VTable<IThreadWorker>()->fp_get_Dispatcher(__this, &__retval), __retval; }
    static ::g::Fuse::Scripting::Function* Observable(const uInterface& __this) { ::g::Fuse::Scripting::Function* __retval; return __this.VTable<IThreadWorker>()->fp_get_Observable(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
