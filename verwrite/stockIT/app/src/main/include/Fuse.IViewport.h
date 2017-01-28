// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ICommonViewport.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Geometry{struct Ray;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{

// public abstract interface IViewport :3118
// {
uInterfaceType* IViewport_typeof();

struct IViewport
{
    void(*fp_PointToWorldRay)(uObject*, ::g::Uno::Float2*, ::g::Uno::Geometry::Ray*);
    void(*fp_WorldToLocalRay)(uObject*, uObject*, ::g::Uno::Geometry::Ray*, ::g::Fuse::Visual*, ::g::Uno::Geometry::Ray*);
    static ::g::Uno::Geometry::Ray PointToWorldRay(const uInterface& __this, ::g::Uno::Float2 pointPos);
    static ::g::Uno::Geometry::Ray WorldToLocalRay(const uInterface& __this, uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where);
};

}} // ::g::Fuse

#include <Uno.Float2.h>
#include <Uno.Geometry.Ray.h>

namespace g{
namespace Fuse{

inline ::g::Uno::Geometry::Ray IViewport::PointToWorldRay(const uInterface& __this, ::g::Uno::Float2 pointPos) { ::g::Uno::Geometry::Ray __retval; return __this.VTable<IViewport>()->fp_PointToWorldRay(__this, &pointPos, &__retval), __retval; }
inline ::g::Uno::Geometry::Ray IViewport::WorldToLocalRay(const uInterface& __this, uObject* world, ::g::Uno::Geometry::Ray worldRay, ::g::Fuse::Visual* where) { ::g::Uno::Geometry::Ray __retval; return __this.VTable<IViewport>()->fp_WorldToLocalRay(__this, world, &worldRay, where, &__retval), __retval; }
// }

}} // ::g::Fuse
