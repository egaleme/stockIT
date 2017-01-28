package com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class JavaToUnoArrayEntrypoints
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static long boolArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0((Object)arr,UnoHelper.GetUnoObjectRef((Object)arr));
    }
    
    public static long byteArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1((Object)arr,UnoHelper.GetUnoObjectRef((Object)arr));
    }
    
    public static Object copyBoolArray(final UnoObject array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray2((UnoObject)array);
    }
    
    public static Object copyByteArray(final UnoObject array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray3((UnoObject)array);
    }
    
    public static Object copyCharArray(final UnoObject array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray4((UnoObject)array);
    }
    
    public static Object copyDoubleArray(final UnoObject array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray5((UnoObject)array);
    }
    
    public static Object copyFloatArray(final UnoObject array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray6((UnoObject)array);
    }
    
    public static Object copyIntArray(final UnoObject array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray7((UnoObject)array);
    }
    
    public static Object copyLongArray(final UnoObject array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray8((UnoObject)array);
    }
    
    public static Object copyObjectArray(final UnoObject array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray9((UnoObject)array);
    }
    
    public static Object copyShortArray(final UnoObject array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray10((UnoObject)array);
    }
    
    public static Object copyStringArray(final UnoObject array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray11((UnoObject)array);
    }
    
    public static Object copyUByteArray(final UnoObject array)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray12((UnoObject)array);
    }
    
    public static long doubleArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr13((Object)arr,UnoHelper.GetUnoObjectRef((Object)arr));
    }
    
    public static long floatArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr14((Object)arr,UnoHelper.GetUnoObjectRef((Object)arr));
    }
    
    public static boolean getBool(final UnoObject array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool15((UnoObject)array,(int)index);
    }
    
    public static byte getByte(final UnoObject array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte16((UnoObject)array,(int)index);
    }
    
    public static char getChar(final UnoObject array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar17((UnoObject)array,(int)index);
    }
    
    public static double getDouble(final UnoObject array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble18((UnoObject)array,(int)index);
    }
    
    public static float getFloat(final UnoObject array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat19((UnoObject)array,(int)index);
    }
    
    public static int getInt(final UnoObject array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt20((UnoObject)array,(int)index);
    }
    
    public static long getLong(final UnoObject array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong21((UnoObject)array,(int)index);
    }
    
    public static Object getObject(final UnoObject array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject22((UnoObject)array,(int)index);
    }
    
    public static short getShort(final UnoObject array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort23((UnoObject)array,(int)index);
    }
    
    public static String getString(final UnoObject array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString24((UnoObject)array,(int)index);
    }
    
    public static byte getUByte(final UnoObject array,final int index)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte25((UnoObject)array,(int)index);
    }
    
    public static long intArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr26((Object)arr,UnoHelper.GetUnoObjectRef((Object)arr));
    }
    
    public static long longArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr27((Object)arr,UnoHelper.GetUnoObjectRef((Object)arr));
    }
    
    public static long newBoolArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr28((int)length);
    }
    
    public static long newByteArrayPtr(final int length,final boolean unoIsUnsigned)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr29((int)length,(boolean)unoIsUnsigned);
    }
    
    public static long newCharArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr30((int)length);
    }
    
    public static long newDoubleArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr31((int)length);
    }
    
    public static long newFloatArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr32((int)length);
    }
    
    public static long newIntArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr33((int)length);
    }
    
    public static long newLongArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr34((int)length);
    }
    
    public static long newObjectArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr35((int)length);
    }
    
    public static long newShortArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr36((int)length);
    }
    
    public static long newStringArrayPtr(final int length)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr37((int)length);
    }
    
    public static boolean setBool(final UnoObject array,final int index,final boolean val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool38((UnoObject)array,(int)index,(boolean)val);
    }
    
    public static byte setByte(final UnoObject array,final int index,final byte val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte39((UnoObject)array,(int)index,(byte)val);
    }
    
    public static char setChar(final UnoObject array,final int index,final char val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar40((UnoObject)array,(int)index,(char)val);
    }
    
    public static double setDouble(final UnoObject array,final int index,final double val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble41((UnoObject)array,(int)index,(double)val);
    }
    
    public static float setFloat(final UnoObject array,final int index,final float val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat42((UnoObject)array,(int)index,(float)val);
    }
    
    public static int setInt(final UnoObject array,final int index,final int val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt43((UnoObject)array,(int)index,(int)val);
    }
    
    public static long setLong(final UnoObject array,final int index,final long val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong44((UnoObject)array,(int)index,(long)val);
    }
    
    public static Object setObject(final UnoObject array,final int index,final UnoObject val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject45((UnoObject)array,(int)index,(UnoObject)val);
    }
    
    public static short setShort(final UnoObject array,final int index,final short val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort46((UnoObject)array,(int)index,(short)val);
    }
    
    public static String setString(final UnoObject array,final int index,final String val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString47((UnoObject)array,(int)index,(String)val);
    }
    
    public static byte setUByte(final UnoObject array,final int index,final byte val)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte48((UnoObject)array,(int)index,(byte)val);
    }
    
    public static long shortArrayToUnoArrayPtr(final Object arr)
    {
        return ExternedBlockHost.callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr49((Object)arr,UnoHelper.GetUnoObjectRef((Object)arr));
    }
    
}
