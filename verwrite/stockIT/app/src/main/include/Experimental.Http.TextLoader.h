// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Experimental.Http\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Experimental.Http.Loader.h>
namespace g{namespace Experimental{namespace Http{struct HttpResponseHeader;}}}
namespace g{namespace Experimental{namespace Http{struct TextLoader;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest;}}}}

namespace g{
namespace Experimental{
namespace Http{

// internal sealed class TextLoader :1157
// {
::g::Experimental::Http::Loader_type* TextLoader_typeof();
void TextLoader__CompleteLoading_fn(TextLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* resp);
void TextLoader__LoadCacheData_fn(TextLoader* __this);
void TextLoader__LoadCacheRaw_fn(TextLoader* __this, uObject* record, bool* __retval);
void TextLoader__OnBufferLoaded_fn(TextLoader* __this, uString* data);
void TextLoader__PrepareRequest_fn(TextLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* request);

struct TextLoader : ::g::Experimental::Http::Loader
{
    uStrong<uString*> _loadedCache;
    uStrong<uDelegate*> Callback;

    void OnBufferLoaded(uString* data);
};
// }

}}} // ::g::Experimental::Http
