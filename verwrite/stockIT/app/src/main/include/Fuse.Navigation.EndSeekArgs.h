// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Fuse.Navigation\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class EndSeekArgs :3644
// {
uType* EndSeekArgs_typeof();
void EndSeekArgs__ctor__fn(EndSeekArgs* __this, int* snapTo, float* velocity);
void EndSeekArgs__New1_fn(int* snapTo, float* velocity, EndSeekArgs** __retval);
void EndSeekArgs__get_SnapTo_fn(EndSeekArgs* __this, int* __retval);
void EndSeekArgs__set_SnapTo_fn(EndSeekArgs* __this, int* value);
void EndSeekArgs__get_Velocity_fn(EndSeekArgs* __this, float* __retval);
void EndSeekArgs__set_Velocity_fn(EndSeekArgs* __this, float* value);

struct EndSeekArgs : uObject
{
    int _SnapTo;
    float _Velocity;

    void ctor_(int snapTo, float velocity);
    int SnapTo();
    void SnapTo(int value);
    float Velocity();
    void Velocity(float value);
    static EndSeekArgs* New1(int snapTo, float velocity);
};
// }

}}} // ::g::Fuse::Navigation
