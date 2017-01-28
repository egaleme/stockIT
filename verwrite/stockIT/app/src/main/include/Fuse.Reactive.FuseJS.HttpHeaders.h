// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Reactive\0.43.11\fusejs\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{struct HttpHeaders;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace FuseJS{

// internal sealed class HttpHeaders :591
// {
uType* HttpHeaders_typeof();
void HttpHeaders__ctor__fn(HttpHeaders* __this, uString* headers);
void HttpHeaders__GetValue_fn(HttpHeaders* __this, uString* key, uString** __retval);
void HttpHeaders__New1_fn(uString* headers, HttpHeaders** __retval);
void HttpHeaders__ParseHeader_fn(HttpHeaders* __this, uString* headerLine);

struct HttpHeaders : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _headers;

    void ctor_(uString* headers);
    uString* GetValue(uString* key);
    void ParseHeader(uString* headerLine);
    static HttpHeaders* New1(uString* headers);
};
// }

}}}} // ::g::Fuse::Reactive::FuseJS
