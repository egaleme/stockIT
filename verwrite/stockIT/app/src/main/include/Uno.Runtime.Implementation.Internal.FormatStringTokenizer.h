// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\runtime\implementation\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken;}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringTokenizer;}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public sealed class FormatStringTokenizer :1037
// {
uType* FormatStringTokenizer_typeof();
void FormatStringTokenizer__ctor__fn(FormatStringTokenizer* __this, uString* format);
void FormatStringTokenizer__AddFormatItemAndGoTo_fn(FormatStringTokenizer* __this, int* state);
void FormatStringTokenizer__AddLiteralAndGoTo_fn(FormatStringTokenizer* __this, int* state);
void FormatStringTokenizer__AtEnd_fn(FormatStringTokenizer* __this, bool* __retval);
void FormatStringTokenizer__DiscardCharacterAndGoTo_fn(FormatStringTokenizer* __this, int* state);
void FormatStringTokenizer__New1_fn(uString* format, FormatStringTokenizer** __retval);
void FormatStringTokenizer__Throw_fn(FormatStringTokenizer* __this);
void FormatStringTokenizer__TokenizeFormatString_fn(uString* format, ::g::Uno::Collections::List** __retval);
void FormatStringTokenizer__TokenizeFormatStringInternal_fn(FormatStringTokenizer* __this, ::g::Uno::Collections::List** __retval);

struct FormatStringTokenizer : uObject
{
    uStrong<uString*> _format;
    int _index;
    int _prevIndex;
    int _state;
    uStrong< ::g::Uno::Collections::List*> _tokens;

    void ctor_(uString* format);
    void AddFormatItemAndGoTo(int state);
    void AddLiteralAndGoTo(int state);
    bool AtEnd();
    void DiscardCharacterAndGoTo(int state);
    void Throw();
    ::g::Uno::Collections::List* TokenizeFormatStringInternal();
    static FormatStringTokenizer* New1(uString* format);
    static ::g::Uno::Collections::List* TokenizeFormatString(uString* format);
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
