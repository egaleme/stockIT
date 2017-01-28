// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\time\calendars\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Calendars{struct Era;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Calendars{

// public sealed class Era :5
// {
uType* Era_typeof();
void Era__ctor__fn(Era* __this, uString* name);
void Era__New1_fn(uString* name, Era** __retval);
void Era__ToString_fn(Era* __this, uString** __retval);

struct Era : uObject
{
    uStrong<uString*> _name;
    static uSStrong<Era*> AnnoHegirae_;
    static uSStrong<Era*>& AnnoHegirae() { return Era_typeof()->Init(), AnnoHegirae_; }
    static uSStrong<Era*> AnnoMartyrum_;
    static uSStrong<Era*>& AnnoMartyrum() { return Era_typeof()->Init(), AnnoMartyrum_; }
    static uSStrong<Era*> AnnoMundi_;
    static uSStrong<Era*>& AnnoMundi() { return Era_typeof()->Init(), AnnoMundi_; }
    static uSStrong<Era*> AnnoPersico_;
    static uSStrong<Era*>& AnnoPersico() { return Era_typeof()->Init(), AnnoPersico_; }
    static uSStrong<Era*> BeforeCommon_;
    static uSStrong<Era*>& BeforeCommon() { return Era_typeof()->Init(), BeforeCommon_; }
    static uSStrong<Era*> Common_;
    static uSStrong<Era*>& Common() { return Era_typeof()->Init(), Common_; }

    void ctor_(uString* name);
    static Era* New1(uString* name);
};
// }

}}}} // ::g::Uno::Time::Calendars
