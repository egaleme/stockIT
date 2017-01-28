// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Experimental.Http\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Experimental{
namespace Cache{

// public abstract interface ICacheWriter :660
// {
uInterfaceType* ICacheWriter_typeof();

struct ICacheWriter
{
    void(*fp_AddMeta)(uObject*, uString*, uString*);
    void(*fp_Close)(uObject*);
    void(*fp_get_Stream)(uObject*, ::g::Uno::IO::Stream**);
    static void AddMeta(const uInterface& __this, uString* key, uString* value) { __this.VTable<ICacheWriter>()->fp_AddMeta(__this, key, value); }
    static void Close(const uInterface& __this) { __this.VTable<ICacheWriter>()->fp_Close(__this); }
    static ::g::Uno::IO::Stream* Stream(const uInterface& __this) { ::g::Uno::IO::Stream* __retval; return __this.VTable<ICacheWriter>()->fp_get_Stream(__this, &__retval), __retval; }
};
// }

}}} // ::g::Experimental::Cache
