// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{

// public sealed class Diagnostic :605
// {
uType* Diagnostic_typeof();
void Diagnostic__ctor__fn(Diagnostic* __this, int* type, uString* message, uObject* sourceObject, uString* filePath, int* lineNumber, uString* memberName, ::g::Uno::Exception* exception);
void Diagnostic__New1_fn(int* type, uString* message, uObject* sourceObject, uString* filePath, int* lineNumber, uString* memberName, ::g::Uno::Exception* exception, Diagnostic** __retval);
void Diagnostic__ToString_fn(Diagnostic* __this, uString** __retval);
void Diagnostic__get_UnoType_fn(Diagnostic* __this, int* __retval);

struct Diagnostic : uObject
{
    uStrong< ::g::Uno::Exception*> Exception;
    uStrong<uString*> FilePath;
    int LineNumber;
    uStrong<uString*> MemberName;
    uStrong<uString*> Message;
    uStrong<uObject*> SourceObject;
    int Type;

    void ctor_(int type, uString* message, uObject* sourceObject, uString* filePath, int lineNumber, uString* memberName, ::g::Uno::Exception* exception);
    int UnoType();
    static Diagnostic* New1(int type, uString* message, uObject* sourceObject, uString* filePath, int lineNumber, uString* memberName, ::g::Uno::Exception* exception);
};
// }

}} // ::g::Fuse
