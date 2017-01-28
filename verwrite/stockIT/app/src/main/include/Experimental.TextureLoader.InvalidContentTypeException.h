// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Experimental.TextureLoader\0.43.0\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Experimental{namespace TextureLoader{struct InvalidContentTypeException;}}}

namespace g{
namespace Experimental{
namespace TextureLoader{

// public sealed class InvalidContentTypeException :27
// {
::g::Uno::Exception_type* InvalidContentTypeException_typeof();
void InvalidContentTypeException__ctor_3_fn(InvalidContentTypeException* __this, uString* reason);
void InvalidContentTypeException__New4_fn(uString* reason, InvalidContentTypeException** __retval);

struct InvalidContentTypeException : ::g::Uno::Exception
{
    void ctor_3(uString* reason);
    static InvalidContentTypeException* New4(uString* reason);
};
// }

}}} // ::g::Experimental::TextureLoader
