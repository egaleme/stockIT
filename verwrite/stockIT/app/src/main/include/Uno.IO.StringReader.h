// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.IO.TextReader.h>
namespace g{namespace Uno{namespace IO{struct StringReader;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class StringReader :3216
// {
::g::Uno::IO::TextReader_type* StringReader_typeof();
void StringReader__ctor_1_fn(StringReader* __this, uString* text);
void StringReader__Dispose1_fn(StringReader* __this, bool* disposing);
void StringReader__New1_fn(uString* text, StringReader** __retval);
void StringReader__Peek_fn(StringReader* __this, int* __retval);
void StringReader__Read_fn(StringReader* __this, int* __retval);

struct StringReader : ::g::Uno::IO::TextReader
{
    int _index;
    int _length;
    uStrong<uString*> _string;

    void ctor_1(uString* text);
    static StringReader* New1(uString* text);
};
// }

}}} // ::g::Uno::IO
