// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Experimental.Http\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Experimental{namespace Http{struct HttpLoader;}}}
namespace g{namespace Experimental{namespace Http{struct HttpResponseHeader;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Experimental{
namespace Http{

// public static class HttpLoader :521
// {
uClassType* HttpLoader_typeof();
void HttpLoader__get_CacheMaxAge_fn(int* __retval);
void HttpLoader__set_CacheMaxAge_fn(int* value);
void HttpLoader__Discard_fn(uString* requestUri);
void HttpLoader__LoadBinary_fn(uString* requestUri, uDelegate* callback, uDelegate* error);

struct HttpLoader : uObject
{
    static uSStrong<uObject*> _cache_;
    static uSStrong<uObject*>& _cache() { return HttpLoader_typeof()->Init(), _cache_; }
    static int _maxAge_;
    static int& _maxAge() { return HttpLoader_typeof()->Init(), _maxAge_; }

    static void Discard(uString* requestUri);
    static void LoadBinary(uString* requestUri, uDelegate* callback, uDelegate* error);
    static int CacheMaxAge();
    static void CacheMaxAge(int value);
};
// }

}}} // ::g::Experimental::Http
