// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Java.Object.h>

namespace g{
namespace Java{

// C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\compiler\exporttargetinterop\foreign\android\$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// public abstract extern class Object :289
// {
static void Object_build(uType* type)
{
}

uType* Object_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Java.Object", options);
    type->fp_build_ = Object_build;
    return type;
}

// protected generated Object() :289
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// protected generated Object() [instance] :289
void Object::ctor_()
{
}
// }

}} // ::g::Java
