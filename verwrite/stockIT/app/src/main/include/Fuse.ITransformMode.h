// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\FuseCore\0.43.11\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface ITransformMode :10050
// {
uInterfaceType* ITransformMode_typeof();

struct ITransformMode
{
    void(*fp_Subscribe)(uObject*, uObject*, uObject**);
    void(*fp_Unsubscribe)(uObject*, uObject*, uObject*);
    static uObject* Subscribe(const uInterface& __this, uObject* transform) { uObject* __retval; return __this.VTable<ITransformMode>()->fp_Subscribe(__this, transform, &__retval), __retval; }
    static void Unsubscribe(const uInterface& __this, uObject* transform, uObject* sub) { __this.VTable<ITransformMode>()->fp_Unsubscribe(__this, transform, sub); }
};
// }

}} // ::g::Fuse
