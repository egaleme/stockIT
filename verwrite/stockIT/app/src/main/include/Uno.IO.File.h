// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\io\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct File;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Uno{
namespace IO{

// public static class File :1275
// {
uClassType* File_typeof();
void File__AppendAllText_fn(uString* filename, uString* contents);
void File__Delete_fn(uString* filename);
void File__Exists_fn(uString* filename, bool* __retval);
void File__Move_fn(uString* oldName, uString* newName);
void File__Open_fn(uString* filename, int* filemode, ::g::Uno::IO::Stream** __retval);
void File__OpenRead_fn(uString* filename, ::g::Uno::IO::Stream** __retval);
void File__ReadAllBytes_fn(uString* filename, uArray** __retval);
void File__ReadAllText_fn(uString* filename, uString** __retval);
void File__WriteAllBytes_fn(uString* filename, uArray* bytes);
void File__WriteAllText_fn(uString* filename, uString* text);

struct File : uObject
{
    static void AppendAllText(uString* filename, uString* contents);
    static void Delete(uString* filename);
    static bool Exists(uString* filename);
    static void Move(uString* oldName, uString* newName);
    static ::g::Uno::IO::Stream* Open(uString* filename, int filemode);
    static ::g::Uno::IO::Stream* OpenRead(uString* filename);
    static uArray* ReadAllBytes(uString* filename);
    static uString* ReadAllText(uString* filename);
    static void WriteAllBytes(uString* filename, uArray* bytes);
    static void WriteAllText(uString* filename, uString* text);
};
// }

}}} // ::g::Uno::IO
