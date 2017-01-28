// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Gestures\0.43.11\internal\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion;}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{struct SwipeRegion__DoSwiped;}}}}

namespace g{
namespace Fuse{
namespace Gestures{
namespace Internal{

// private sealed class SwipeRegion.DoSwiped :798
// {
uType* SwipeRegion__DoSwiped_typeof();
void SwipeRegion__DoSwiped__ctor__fn(SwipeRegion__DoSwiped* __this);
void SwipeRegion__DoSwiped__New1_fn(SwipeRegion__DoSwiped** __retval);
void SwipeRegion__DoSwiped__Perform_fn(SwipeRegion__DoSwiped* __this);

struct SwipeRegion__DoSwiped : uObject
{
    bool Active;
    bool Cancelled;
    uStrong< ::g::Fuse::Gestures::Internal::SwipeRegion*> Region;

    void ctor_();
    void Perform();
    static SwipeRegion__DoSwiped* New1();
};
// }

}}}} // ::g::Fuse::Gestures::Internal
