// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\time\text\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct OffsetPattern__OffsetBucket;}}}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// private sealed class OffsetPattern.OffsetBucket :741
// {
uType* OffsetPattern__OffsetBucket_typeof();
void OffsetPattern__OffsetBucket__ctor__fn(OffsetPattern__OffsetBucket* __this);
void OffsetPattern__OffsetBucket__New1_fn(OffsetPattern__OffsetBucket** __retval);

struct OffsetPattern__OffsetBucket : uObject
{
    int Hour;
    int Minute;
    int Second;
    int Sign;

    void ctor_();
    static OffsetPattern__OffsetBucket* New1();
};
// }

}}}} // ::g::Uno::Time::Text
