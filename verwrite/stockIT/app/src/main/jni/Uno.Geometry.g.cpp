// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float3.h>
#include <Uno.Geometry.Box.h>
#include <Uno.Geometry.Collision.h>
#include <Uno.Geometry.Ray.h>
#include <Uno.Math.h>

namespace g{
namespace Uno{
namespace Geometry{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Geometry\0.43.0\$.uno
// ------------------------------------------------------------------------------

// public struct Box :5
// {
static void Box_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Box, Minimum), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Box, Maximum), 0);
}

uStructType* Box_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Box);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Box", options);
    type->fp_build_ = Box_build;
    return type;
}

// public Box(float3 min, float3 max) :9
void Box__ctor__fn(Box* __this, ::g::Uno::Float3* min, ::g::Uno::Float3* max)
{
    __this->ctor_(*min, *max);
}

// public Box New(float3 min, float3 max) :9
void Box__New1_fn(::g::Uno::Float3* min, ::g::Uno::Float3* max, Box* __retval)
{
    *__retval = Box__New1(*min, *max);
}

// public Box(float3 min, float3 max) [instance] :9
void Box::ctor_(::g::Uno::Float3 min, ::g::Uno::Float3 max)
{
    Minimum = min;
    Maximum = max;
}

// public Box New(float3 min, float3 max) [static] :9
Box Box__New1(::g::Uno::Float3 min, ::g::Uno::Float3 max)
{
    Box obj9;
    obj9.ctor_(min, max);
    return obj9;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Geometry\0.43.0\$.uno
// ------------------------------------------------------------------------------

// public static class Collision :42
// {
static void Collision_build(uType* type)
{
}

uClassType* Collision_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Geometry.Collision", options);
    type->fp_build_ = Collision_build;
    return type;
}

// public static bool RayIntersectsBox(Uno.Geometry.Ray ray, Uno.Geometry.Box box, float& distance) :431
void Collision__RayIntersectsBox_fn(::g::Uno::Geometry::Ray* ray, ::g::Uno::Geometry::Box* box, float* distance, bool* __retval)
{
    *__retval = Collision::RayIntersectsBox(*ray, *box, distance);
}

// public static bool RayIntersectsBox(Uno.Geometry.Ray ray, Uno.Geometry.Box box, float& distance) [static] :431
bool Collision::RayIntersectsBox(::g::Uno::Geometry::Ray ray, ::g::Uno::Geometry::Box box, float* distance)
{
    *distance = 0.0f;
    float tmax = 3.402823e+38f;

    if (::g::Uno::Math::Abs1(ray.Direction.X) < 1e-05f)
    {
        if ((ray.Position.X < box.Minimum.X) || (ray.Position.X > box.Maximum.X))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse = 1.0f / ray.Direction.X;
        float t1 = (box.Minimum.X - ray.Position.X) * inverse;
        float t2 = (box.Maximum.X - ray.Position.X) * inverse;

        if (t1 > t2)
        {
            float temp = t1;
            t1 = t2;
            t2 = temp;
        }

        *distance = ::g::Uno::Math::Max1(t1, *distance);
        tmax = ::g::Uno::Math::Min1(t2, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::g::Uno::Math::Abs1(ray.Direction.Y) < 1e-05f)
    {
        if ((ray.Position.Y < box.Minimum.Y) || (ray.Position.Y > box.Maximum.Y))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse1 = 1.0f / ray.Direction.Y;
        float t11 = (box.Minimum.Y - ray.Position.Y) * inverse1;
        float t21 = (box.Maximum.Y - ray.Position.Y) * inverse1;

        if (t11 > t21)
        {
            float temp1 = t11;
            t11 = t21;
            t21 = temp1;
        }

        *distance = ::g::Uno::Math::Max1(t11, *distance);
        tmax = ::g::Uno::Math::Min1(t21, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    if (::g::Uno::Math::Abs1(ray.Direction.Z) < 1e-05f)
    {
        if ((ray.Position.Z < box.Minimum.Z) || (ray.Position.Z > box.Maximum.Z))
        {
            *distance = 0.0f;
            return false;
        }
    }
    else
    {
        float inverse2 = 1.0f / ray.Direction.Z;
        float t12 = (box.Minimum.Z - ray.Position.Z) * inverse2;
        float t22 = (box.Maximum.Z - ray.Position.Z) * inverse2;

        if (t12 > t22)
        {
            float temp2 = t12;
            t12 = t22;
            t22 = temp2;
        }

        *distance = ::g::Uno::Math::Max1(t12, *distance);
        tmax = ::g::Uno::Math::Min1(t22, tmax);

        if (*distance > tmax)
        {
            *distance = 0.0f;
            return false;
        }
    }

    return true;
}
// }

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\Uno.Geometry\0.43.0\$.uno
// ------------------------------------------------------------------------------

// public struct Ray :1604
// {
static void Ray_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Ray, Position), 0,
        ::g::Uno::Float3_typeof(), offsetof(::g::Uno::Geometry::Ray, Direction), 0);
}

uStructType* Ray_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(Ray);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Geometry.Ray", options);
    type->fp_build_ = Ray_build;
    return type;
}

// public Ray(float3 pos, float3 dir) :1609
void Ray__ctor__fn(Ray* __this, ::g::Uno::Float3* pos, ::g::Uno::Float3* dir)
{
    __this->ctor_(*pos, *dir);
}

// public Ray New(float3 pos, float3 dir) :1609
void Ray__New1_fn(::g::Uno::Float3* pos, ::g::Uno::Float3* dir, Ray* __retval)
{
    *__retval = Ray__New1(*pos, *dir);
}

// public Ray(float3 pos, float3 dir) [instance] :1609
void Ray::ctor_(::g::Uno::Float3 pos, ::g::Uno::Float3 dir)
{
    Position = pos;
    Direction = dir;
}

// public Ray New(float3 pos, float3 dir) [static] :1609
Ray Ray__New1(::g::Uno::Float3 pos, ::g::Uno::Float3 dir)
{
    Ray obj2;
    obj2.ctor_(pos, dir);
    return obj2;
}
// }

}}} // ::g::Uno::Geometry
