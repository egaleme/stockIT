// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont;}}}
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont__Alias;}}}
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont__Family;}}}
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct HashSet;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static extern class AndroidSystemFont :13
// {
uClassType* AndroidSystemFont_typeof();
void AndroidSystemFont__AddAlias_fn(uString* name, uString* to, int* weight);
void AndroidSystemFont__AddFamily_fn(uString* name, uString* language, uString* variant);
void AndroidSystemFont__AddFont_fn(uString* path, int* index, int* weight, bool* isItalic);
void AndroidSystemFont__AddFonts_fn();
void AndroidSystemFont__get_Default_fn(::g::Uno::Collections::List** __retval);
void AndroidSystemFont__EnsureFontsAdded_fn();
void AndroidSystemFont__Get_fn(AndroidSystemFont__Family* family, int* style, int* weight, ::g::Fuse::Internal::FontFaceDescriptor** __retval);
void AndroidSystemFont__Get1_fn(uString* familyName, int* style, int* weight, ::g::Uno::Collections::List** __retval);
void AndroidSystemFont__ThrowUno_fn(uString* message);
void AndroidSystemFont__ToWeight_fn(int* w, int* __retval);

struct AndroidSystemFont : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _aliases_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _aliases() { return _aliases_; }
    static uSStrong< ::g::Uno::Collections::List*> _default_;
    static uSStrong< ::g::Uno::Collections::List*>& _default() { return _default_; }
    static uSStrong< ::g::Uno::Collections::List*> _families_;
    static uSStrong< ::g::Uno::Collections::List*>& _families() { return _families_; }
    static uSStrong< ::g::Uno::Collections::HashSet*> _familyNames_;
    static uSStrong< ::g::Uno::Collections::HashSet*>& _familyNames() { return _familyNames_; }

    static void AddAlias(uString* name, uString* to, int weight);
    static void AddFamily(uString* name, uString* language, uString* variant);
    static void AddFont(uString* path, int index, int weight, bool isItalic);
    static void AddFonts();
    static void EnsureFontsAdded();
    static ::g::Fuse::Internal::FontFaceDescriptor* Get(AndroidSystemFont__Family family, int style, int weight);
    static ::g::Uno::Collections::List* Get1(uString* familyName, int style, int weight);
    static void ThrowUno(uString* message);
    static int ToWeight(int w);
    static ::g::Uno::Collections::List* Default();
};
// }

}}} // ::g::Fuse::Internal
