// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\compiler\exporttargetinterop\foreign\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.h>
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Foreign{namespace Android{struct JavaUnoObject;}}}}}}

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Foreign{
namespace Android{

// public static extern class JavaUnoObject :45
// {
uClassType* JavaUnoObject_typeof();
void JavaUnoObject__Box_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box1_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box2_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box3_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box4_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box5_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box6_fn(uObject* unoObject, jobject* __retval);
void JavaUnoObject__Box7_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box8_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box9_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__Box10_fn(uArray* unoArray, jobject* __retval);
void JavaUnoObject__BoxDelegate_fn(uObject* delegateObj, const char** javaClassName, jobject* __retval);
void JavaUnoObject__EnsureInitialized_fn();
void JavaUnoObject__UnBox_fn(jobject* javaObject, uObject** __retval);
void JavaUnoObject__UnBoxFreeingLocalRef_fn(jobject* javaObject, uObject** __retval);

struct JavaUnoObject : uObject
{
    static jclass _unoBoolArrayClass_;
    static jclass& _unoBoolArrayClass() { return _unoBoolArrayClass_; }
    static jmethodID _unoBoolArrayFactoryMethod_;
    static jmethodID& _unoBoolArrayFactoryMethod() { return _unoBoolArrayFactoryMethod_; }
    static jclass _unoByteArrayClass_;
    static jclass& _unoByteArrayClass() { return _unoByteArrayClass_; }
    static jmethodID _unoByteArrayFactoryMethod_;
    static jmethodID& _unoByteArrayFactoryMethod() { return _unoByteArrayFactoryMethod_; }
    static jclass _unoDoubleArrayClass_;
    static jclass& _unoDoubleArrayClass() { return _unoDoubleArrayClass_; }
    static jmethodID _unoDoubleArrayFactoryMethod_;
    static jmethodID& _unoDoubleArrayFactoryMethod() { return _unoDoubleArrayFactoryMethod_; }
    static jclass _unoFloatArrayClass_;
    static jclass& _unoFloatArrayClass() { return _unoFloatArrayClass_; }
    static jmethodID _unoFloatArrayFactoryMethod_;
    static jmethodID& _unoFloatArrayFactoryMethod() { return _unoFloatArrayFactoryMethod_; }
    static jclass _unoIntArrayClass_;
    static jclass& _unoIntArrayClass() { return _unoIntArrayClass_; }
    static jmethodID _unoIntArrayFactoryMethod_;
    static jmethodID& _unoIntArrayFactoryMethod() { return _unoIntArrayFactoryMethod_; }
    static jclass _unoLongArrayClass_;
    static jclass& _unoLongArrayClass() { return _unoLongArrayClass_; }
    static jmethodID _unoLongArrayFactoryMethod_;
    static jmethodID& _unoLongArrayFactoryMethod() { return _unoLongArrayFactoryMethod_; }
    static jclass _unoObjectArrayClass_;
    static jclass& _unoObjectArrayClass() { return _unoObjectArrayClass_; }
    static jmethodID _unoObjectArrayFactoryMethod_;
    static jmethodID& _unoObjectArrayFactoryMethod() { return _unoObjectArrayFactoryMethod_; }
    static jclass _unoObjectClass_;
    static jclass& _unoObjectClass() { return _unoObjectClass_; }
    static jmethodID _unoObjectConstructor_;
    static jmethodID& _unoObjectConstructor() { return _unoObjectConstructor_; }
    static jmethodID _unoObjectGetRetainedUnoPtr_;
    static jmethodID& _unoObjectGetRetainedUnoPtr() { return _unoObjectGetRetainedUnoPtr_; }
    static jclass _unoShortArrayClass_;
    static jclass& _unoShortArrayClass() { return _unoShortArrayClass_; }
    static jmethodID _unoShortArrayFactoryMethod_;
    static jmethodID& _unoShortArrayFactoryMethod() { return _unoShortArrayFactoryMethod_; }
    static jclass _unoStringArrayClass_;
    static jclass& _unoStringArrayClass() { return _unoStringArrayClass_; }
    static jmethodID _unoStringArrayFactoryMethod_;
    static jmethodID& _unoStringArrayFactoryMethod() { return _unoStringArrayFactoryMethod_; }

    static jobject Box(uArray* unoArray);
    static jobject Box1(uArray* unoArray);
    static jobject Box2(uArray* unoArray);
    static jobject Box3(uArray* unoArray);
    static jobject Box4(uArray* unoArray);
    static jobject Box5(uArray* unoArray);
    static jobject Box6(uObject* unoObject);
    static jobject Box7(uArray* unoArray);
    static jobject Box8(uArray* unoArray);
    static jobject Box9(uArray* unoArray);
    static jobject Box10(uArray* unoArray);
    static jobject BoxDelegate(uObject* delegateObj, const char* javaClassName);
    static void EnsureInitialized();
    static uObject* UnBox(jobject javaObject);
    static uObject* UnBoxFreeingLocalRef(jobject javaObject);
};
// }

}}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android
