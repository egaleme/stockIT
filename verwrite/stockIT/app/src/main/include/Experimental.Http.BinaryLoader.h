// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Experimental.Http\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Experimental.Http.Loader.h>
namespace g{namespace Experimental{namespace Http{struct BinaryLoader;}}}
namespace g{namespace Experimental{namespace Http{struct HttpResponseHeader;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Experimental{
namespace Http{

// internal sealed class BinaryLoader :10
// {
::g::Experimental::Http::Loader_type* BinaryLoader_typeof();
void BinaryLoader__ctor_1_fn(BinaryLoader* __this);
void BinaryLoader__CompleteLoading_fn(BinaryLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* resp);
void BinaryLoader__LoadCacheData_fn(BinaryLoader* __this);
void BinaryLoader__LoadCacheRaw_fn(BinaryLoader* __this, uObject* record, bool* __retval);
void BinaryLoader__New1_fn(BinaryLoader** __retval);
void BinaryLoader__OnBufferLoaded_fn(BinaryLoader* __this, uArray* data);
void BinaryLoader__PrepareRequest_fn(BinaryLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request);

struct BinaryLoader : ::g::Experimental::Http::Loader
{
    uStrong< ::g::Uno::Buffer*> _loadedCache;
    uStrong<uDelegate*> Callback;

    void ctor_1();
    void OnBufferLoaded(uArray* data);
    static BinaryLoader* New1();
};
// }

}}} // ::g::Experimental::Http
