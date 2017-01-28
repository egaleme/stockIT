// This file was generated based on 'C:\Users\Emenike pc\AppData\Local\Fusetools\Packages\UnoCore\0.43.8\source\uno\compiler\exporttargetinterop\foreign\android\$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.h>
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Foreign{namespace Android{struct JavaToUnoArrayEntrypoints;}}}}}}

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Foreign{
namespace Android{

// public static extern class JavaToUnoArrayEntrypoints :306
// {
uClassType* JavaToUnoArrayEntrypoints_typeof();
void JavaToUnoArrayEntrypoints__BoolArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval);
void JavaToUnoArrayEntrypoints__ByteArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval);
void JavaToUnoArrayEntrypoints__CopyBoolArray_fn(uObject* array, ::g::Java::Object** __retval);
void JavaToUnoArrayEntrypoints__CopyByteArray_fn(uObject* array, ::g::Java::Object** __retval);
void JavaToUnoArrayEntrypoints__CopyCharArray_fn(uObject* array, ::g::Java::Object** __retval);
void JavaToUnoArrayEntrypoints__CopyDoubleArray_fn(uObject* array, ::g::Java::Object** __retval);
void JavaToUnoArrayEntrypoints__CopyFloatArray_fn(uObject* array, ::g::Java::Object** __retval);
void JavaToUnoArrayEntrypoints__CopyIntArray_fn(uObject* array, ::g::Java::Object** __retval);
void JavaToUnoArrayEntrypoints__CopyLongArray_fn(uObject* array, ::g::Java::Object** __retval);
void JavaToUnoArrayEntrypoints__CopyObjectArray_fn(uObject* array, ::g::Java::Object** __retval);
void JavaToUnoArrayEntrypoints__CopyShortArray_fn(uObject* array, ::g::Java::Object** __retval);
void JavaToUnoArrayEntrypoints__CopyStringArray_fn(uObject* array, ::g::Java::Object** __retval);
void JavaToUnoArrayEntrypoints__CopyUByteArray_fn(uObject* array, ::g::Java::Object** __retval);
void JavaToUnoArrayEntrypoints__DoubleArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval);
void JavaToUnoArrayEntrypoints__FloatArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval);
void JavaToUnoArrayEntrypoints__getBool_fn(uObject* array, int* index, bool* __retval);
void JavaToUnoArrayEntrypoints__GetBool_fn(uObject* array, int* index, bool* __retval);
void JavaToUnoArrayEntrypoints__getByte_fn(uObject* array, int* index, int8_t* __retval);
void JavaToUnoArrayEntrypoints__GetByte_fn(uObject* array, int* index, int8_t* __retval);
void JavaToUnoArrayEntrypoints__GetChar_fn(uObject* array, int* index, uChar* __retval);
void JavaToUnoArrayEntrypoints__getDouble_fn(uObject* array, int* index, double* __retval);
void JavaToUnoArrayEntrypoints__GetDouble_fn(uObject* array, int* index, double* __retval);
void JavaToUnoArrayEntrypoints__getFloat_fn(uObject* array, int* index, float* __retval);
void JavaToUnoArrayEntrypoints__GetFloat_fn(uObject* array, int* index, float* __retval);
void JavaToUnoArrayEntrypoints__getInt_fn(uObject* array, int* index, int* __retval);
void JavaToUnoArrayEntrypoints__GetInt_fn(uObject* array, int* index, int* __retval);
void JavaToUnoArrayEntrypoints__getLong_fn(uObject* array, int* index, int64_t* __retval);
void JavaToUnoArrayEntrypoints__GetLong_fn(uObject* array, int* index, int64_t* __retval);
void JavaToUnoArrayEntrypoints__getObject_fn(uObject* array, int* index, uObject** __retval);
void JavaToUnoArrayEntrypoints__GetObject_fn(uObject* array, int* index, uObject** __retval);
void JavaToUnoArrayEntrypoints__getShort_fn(uObject* array, int* index, int16_t* __retval);
void JavaToUnoArrayEntrypoints__GetShort_fn(uObject* array, int* index, int16_t* __retval);
void JavaToUnoArrayEntrypoints__getString_fn(uObject* array, int* index, uString** __retval);
void JavaToUnoArrayEntrypoints__GetString_fn(uObject* array, int* index, uString** __retval);
void JavaToUnoArrayEntrypoints__GetUByte_fn(uObject* array, int* index, int8_t* __retval);
void JavaToUnoArrayEntrypoints__IntArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval);
void JavaToUnoArrayEntrypoints__LongArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval);
void JavaToUnoArrayEntrypoints__NewBoolArrayPtr_fn(int* length, int64_t* __retval);
void JavaToUnoArrayEntrypoints__NewByteArrayPtr_fn(int* length, bool* unoIsUnsigned, int64_t* __retval);
void JavaToUnoArrayEntrypoints__NewCharArrayPtr_fn(int* length, int64_t* __retval);
void JavaToUnoArrayEntrypoints__NewDoubleArrayPtr_fn(int* length, int64_t* __retval);
void JavaToUnoArrayEntrypoints__NewFloatArrayPtr_fn(int* length, int64_t* __retval);
void JavaToUnoArrayEntrypoints__NewIntArrayPtr_fn(int* length, int64_t* __retval);
void JavaToUnoArrayEntrypoints__NewLongArrayPtr_fn(int* length, int64_t* __retval);
void JavaToUnoArrayEntrypoints__NewObjectArrayPtr_fn(int* length, int64_t* __retval);
void JavaToUnoArrayEntrypoints__NewShortArrayPtr_fn(int* length, int64_t* __retval);
void JavaToUnoArrayEntrypoints__NewStringArrayPtr_fn(int* length, int64_t* __retval);
void JavaToUnoArrayEntrypoints__setBool_fn(uObject* array, int* index, bool* val, bool* __retval);
void JavaToUnoArrayEntrypoints__SetBool_fn(uObject* array, int* index, bool* val, bool* __retval);
void JavaToUnoArrayEntrypoints__setByte_fn(uObject* array, int* index, int8_t* val, int8_t* __retval);
void JavaToUnoArrayEntrypoints__SetByte_fn(uObject* array, int* index, int8_t* val, int8_t* __retval);
void JavaToUnoArrayEntrypoints__SetChar_fn(uObject* array, int* index, uChar* val, uChar* __retval);
void JavaToUnoArrayEntrypoints__setDouble_fn(uObject* array, int* index, double* val, double* __retval);
void JavaToUnoArrayEntrypoints__SetDouble_fn(uObject* array, int* index, double* val, double* __retval);
void JavaToUnoArrayEntrypoints__setFloat_fn(uObject* array, int* index, float* val, float* __retval);
void JavaToUnoArrayEntrypoints__SetFloat_fn(uObject* array, int* index, float* val, float* __retval);
void JavaToUnoArrayEntrypoints__setInt_fn(uObject* array, int* index, int* val, int* __retval);
void JavaToUnoArrayEntrypoints__SetInt_fn(uObject* array, int* index, int* val, int* __retval);
void JavaToUnoArrayEntrypoints__setLong_fn(uObject* array, int* index, int64_t* val, int64_t* __retval);
void JavaToUnoArrayEntrypoints__SetLong_fn(uObject* array, int* index, int64_t* val, int64_t* __retval);
void JavaToUnoArrayEntrypoints__setObject_fn(uObject* array, int* index, uObject* val, uObject** __retval);
void JavaToUnoArrayEntrypoints__SetObject_fn(uObject* array, int* index, uObject* val, uObject** __retval);
void JavaToUnoArrayEntrypoints__setShort_fn(uObject* array, int* index, int16_t* val, int16_t* __retval);
void JavaToUnoArrayEntrypoints__SetShort_fn(uObject* array, int* index, int16_t* val, int16_t* __retval);
void JavaToUnoArrayEntrypoints__setString_fn(uObject* array, int* index, uString* val, uString** __retval);
void JavaToUnoArrayEntrypoints__SetString_fn(uObject* array, int* index, uString* val, uString** __retval);
void JavaToUnoArrayEntrypoints__SetUByte_fn(uObject* array, int* index, int8_t* val, int8_t* __retval);
void JavaToUnoArrayEntrypoints__ShortArrayToUnoArrayPtr_fn(::g::Java::Object* jarr, int64_t* __retval);

struct JavaToUnoArrayEntrypoints : uObject
{
    static jclass _objectClass_;
    static jclass& _objectClass() { return _objectClass_; }
    static jclass _stringClass_;
    static jclass& _stringClass() { return _stringClass_; }

    static int64_t BoolArrayToUnoArrayPtr(::g::Java::Object* jarr);
    static int64_t ByteArrayToUnoArrayPtr(::g::Java::Object* jarr);
    static ::g::Java::Object* CopyBoolArray(uObject* array);
    static ::g::Java::Object* CopyByteArray(uObject* array);
    static ::g::Java::Object* CopyCharArray(uObject* array);
    static ::g::Java::Object* CopyDoubleArray(uObject* array);
    static ::g::Java::Object* CopyFloatArray(uObject* array);
    static ::g::Java::Object* CopyIntArray(uObject* array);
    static ::g::Java::Object* CopyLongArray(uObject* array);
    static ::g::Java::Object* CopyObjectArray(uObject* array);
    static ::g::Java::Object* CopyShortArray(uObject* array);
    static ::g::Java::Object* CopyStringArray(uObject* array);
    static ::g::Java::Object* CopyUByteArray(uObject* array);
    static int64_t DoubleArrayToUnoArrayPtr(::g::Java::Object* jarr);
    static int64_t FloatArrayToUnoArrayPtr(::g::Java::Object* jarr);
    static bool getBool(uObject* array, int index);
    static bool GetBool(uObject* array, int index);
    static int8_t getByte(uObject* array, int index);
    static int8_t GetByte(uObject* array, int index);
    static uChar GetChar(uObject* array, int index);
    static double getDouble(uObject* array, int index);
    static double GetDouble(uObject* array, int index);
    static float getFloat(uObject* array, int index);
    static float GetFloat(uObject* array, int index);
    static int getInt(uObject* array, int index);
    static int GetInt(uObject* array, int index);
    static int64_t getLong(uObject* array, int index);
    static int64_t GetLong(uObject* array, int index);
    static uObject* getObject(uObject* array, int index);
    static uObject* GetObject(uObject* array, int index);
    static int16_t getShort(uObject* array, int index);
    static int16_t GetShort(uObject* array, int index);
    static uString* getString(uObject* array, int index);
    static uString* GetString(uObject* array, int index);
    static int8_t GetUByte(uObject* array, int index);
    static int64_t IntArrayToUnoArrayPtr(::g::Java::Object* jarr);
    static int64_t LongArrayToUnoArrayPtr(::g::Java::Object* jarr);
    static int64_t NewBoolArrayPtr(int length);
    static int64_t NewByteArrayPtr(int length, bool unoIsUnsigned);
    static int64_t NewCharArrayPtr(int length);
    static int64_t NewDoubleArrayPtr(int length);
    static int64_t NewFloatArrayPtr(int length);
    static int64_t NewIntArrayPtr(int length);
    static int64_t NewLongArrayPtr(int length);
    static int64_t NewObjectArrayPtr(int length);
    static int64_t NewShortArrayPtr(int length);
    static int64_t NewStringArrayPtr(int length);
    static bool setBool(uObject* array, int index, bool val);
    static bool SetBool(uObject* array, int index, bool val);
    static int8_t setByte(uObject* array, int index, int8_t val);
    static int8_t SetByte(uObject* array, int index, int8_t val);
    static uChar SetChar(uObject* array, int index, uChar val);
    static double setDouble(uObject* array, int index, double val);
    static double SetDouble(uObject* array, int index, double val);
    static float setFloat(uObject* array, int index, float val);
    static float SetFloat(uObject* array, int index, float val);
    static int setInt(uObject* array, int index, int val);
    static int SetInt(uObject* array, int index, int val);
    static int64_t setLong(uObject* array, int index, int64_t val);
    static int64_t SetLong(uObject* array, int index, int64_t val);
    static uObject* setObject(uObject* array, int index, uObject* val);
    static uObject* SetObject(uObject* array, int index, uObject* val);
    static int16_t setShort(uObject* array, int index, int16_t val);
    static int16_t SetShort(uObject* array, int index, int16_t val);
    static uString* setString(uObject* array, int index, uString* val);
    static uString* SetString(uObject* array, int index, uString* val);
    static int8_t SetUByte(uObject* array, int index, int8_t val);
    static int64_t ShortArrayToUnoArrayPtr(::g::Java::Object* jarr);
};
// }

}}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android
