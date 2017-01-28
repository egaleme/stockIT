package com.Bindings;

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
public class ExternedBlockHost
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_BoolArrayToUnoArrayPtr0(final Object jarr,long jarrPtr);
    public static long boolArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.boolArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ByteArrayToUnoArrayPtr1(final Object jarr,long jarrPtr);
    public static long byteArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.byteArrayToUnoArrayPtr(arr);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyBoolArray2(final UnoObject array);
    public static Object copyBoolArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyBoolArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyByteArray3(final UnoObject array);
    public static Object copyByteArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyByteArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyCharArray4(final UnoObject array);
    public static Object copyCharArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyCharArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyDoubleArray5(final UnoObject array);
    public static Object copyDoubleArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyDoubleArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyFloatArray6(final UnoObject array);
    public static Object copyFloatArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyFloatArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyIntArray7(final UnoObject array);
    public static Object copyIntArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyIntArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyLongArray8(final UnoObject array);
    public static Object copyLongArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyLongArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyObjectArray9(final UnoObject array);
    public static Object copyObjectArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyObjectArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyShortArray10(final UnoObject array);
    public static Object copyShortArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyShortArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyStringArray11(final UnoObject array);
    public static Object copyStringArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyStringArray(array);
    }
    
    public static native Object callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_CopyUByteArray12(final UnoObject array);
    public static Object copyUByteArray(final UnoObject array)
    {
        return (Object) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.copyUByteArray(array);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_DoubleArrayToUnoArrayPtr13(final Object jarr,long jarrPtr);
    public static long doubleArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.doubleArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_FloatArrayToUnoArrayPtr14(final Object jarr,long jarrPtr);
    public static long floatArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.floatArrayToUnoArrayPtr(arr);
    }
    
    public static native boolean callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetBool15(final UnoObject array,final int index);
    public static boolean getBool(final UnoObject array,final int index)
    {
        return (boolean) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getBool(array,index);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetByte16(final UnoObject array,final int index);
    public static byte getByte(final UnoObject array,final int index)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getByte(array,index);
    }
    
    public static native char callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetChar17(final UnoObject array,final int index);
    public static char getChar(final UnoObject array,final int index)
    {
        return (char) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getChar(array,index);
    }
    
    public static native double callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetDouble18(final UnoObject array,final int index);
    public static double getDouble(final UnoObject array,final int index)
    {
        return (double) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getDouble(array,index);
    }
    
    public static native float callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetFloat19(final UnoObject array,final int index);
    public static float getFloat(final UnoObject array,final int index)
    {
        return (float) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getFloat(array,index);
    }
    
    public static native int callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetInt20(final UnoObject array,final int index);
    public static int getInt(final UnoObject array,final int index)
    {
        return (int) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getInt(array,index);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetLong21(final UnoObject array,final int index);
    public static long getLong(final UnoObject array,final int index)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getLong(array,index);
    }
    
    public static native UnoObject callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetObject22(final UnoObject array,final int index);
    public static UnoObject getObject(final UnoObject array,final int index)
    {
        return (UnoObject) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getObject(array,index);
    }
    
    public static native short callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetShort23(final UnoObject array,final int index);
    public static short getShort(final UnoObject array,final int index)
    {
        return (short) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getShort(array,index);
    }
    
    public static native String callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetString24(final UnoObject array,final int index);
    public static String getString(final UnoObject array,final int index)
    {
        return (String) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getString(array,index);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_GetUByte25(final UnoObject array,final int index);
    public static byte getUByte(final UnoObject array,final int index)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.getUByte(array,index);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_IntArrayToUnoArrayPtr26(final Object jarr,long jarrPtr);
    public static long intArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.intArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_LongArrayToUnoArrayPtr27(final Object jarr,long jarrPtr);
    public static long longArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.longArrayToUnoArrayPtr(arr);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewBoolArrayPtr28(final int length);
    public static long newBoolArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newBoolArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewByteArrayPtr29(final int length,final boolean unoIsUnsigned);
    public static long newByteArrayPtr(final int length,final boolean unoIsUnsigned)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newByteArrayPtr(length,unoIsUnsigned);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewCharArrayPtr30(final int length);
    public static long newCharArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newCharArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewDoubleArrayPtr31(final int length);
    public static long newDoubleArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newDoubleArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewFloatArrayPtr32(final int length);
    public static long newFloatArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newFloatArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewIntArrayPtr33(final int length);
    public static long newIntArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newIntArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewLongArrayPtr34(final int length);
    public static long newLongArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newLongArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewObjectArrayPtr35(final int length);
    public static long newObjectArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newObjectArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewShortArrayPtr36(final int length);
    public static long newShortArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newShortArrayPtr(length);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_NewStringArrayPtr37(final int length);
    public static long newStringArrayPtr(final int length)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.newStringArrayPtr(length);
    }
    
    public static native boolean callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetBool38(final UnoObject array,final int index,final boolean val);
    public static boolean setBool(final UnoObject array,final int index,final boolean val)
    {
        return (boolean) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setBool(array,index,val);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetByte39(final UnoObject array,final int index,final byte val);
    public static byte setByte(final UnoObject array,final int index,final byte val)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setByte(array,index,val);
    }
    
    public static native char callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetChar40(final UnoObject array,final int index,final char val);
    public static char setChar(final UnoObject array,final int index,final char val)
    {
        return (char) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setChar(array,index,val);
    }
    
    public static native double callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetDouble41(final UnoObject array,final int index,final double val);
    public static double setDouble(final UnoObject array,final int index,final double val)
    {
        return (double) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setDouble(array,index,val);
    }
    
    public static native float callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetFloat42(final UnoObject array,final int index,final float val);
    public static float setFloat(final UnoObject array,final int index,final float val)
    {
        return (float) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setFloat(array,index,val);
    }
    
    public static native int callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetInt43(final UnoObject array,final int index,final int val);
    public static int setInt(final UnoObject array,final int index,final int val)
    {
        return (int) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setInt(array,index,val);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetLong44(final UnoObject array,final int index,final long val);
    public static long setLong(final UnoObject array,final int index,final long val)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setLong(array,index,val);
    }
    
    public static native UnoObject callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetObject45(final UnoObject array,final int index,final UnoObject val);
    public static UnoObject setObject(final UnoObject array,final int index,final UnoObject val)
    {
        return (UnoObject) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setObject(array,index,val);
    }
    
    public static native short callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetShort46(final UnoObject array,final int index,final short val);
    public static short setShort(final UnoObject array,final int index,final short val)
    {
        return (short) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setShort(array,index,val);
    }
    
    public static native String callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetString47(final UnoObject array,final int index,final String val);
    public static String setString(final UnoObject array,final int index,final String val)
    {
        return (String) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setString(array,index,val);
    }
    
    public static native byte callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_SetUByte48(final UnoObject array,final int index,final byte val);
    public static byte setUByte(final UnoObject array,final int index,final byte val)
    {
        return (byte) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.setUByte(array,index,val);
    }
    
    public static native long callUno_Uno_Compiler_ExportTargetInterop_Foreign_Android_JavaToUnoArrayEntrypoints_ShortArrayToUnoArrayPtr49(final Object jarr,long jarrPtr);
    public static long shortArrayToUnoArrayPtr(final Object arr)
    {
        return (long) com.foreign.Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaToUnoArrayEntrypoints.shortArrayToUnoArrayPtr(arr);
    }
    
    public static native void callUno_Uno_Collections_List_lt_string_gt__Add51(final UnoObject jthis,final String item);
    public static boolean JavaGetLocalAddresses50(final UnoObject addresses)
    {
        return (boolean) com.foreign.Uno.Net.Dns.JavaGetLocalAddresses50(addresses);
    }
    
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddFamily53(final String name,final String language,final String variant);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddFont54(final String path,final int index,final int weight,final boolean isItalic);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_AddAlias55(final String name,final String to,final int weight);
    public static native void callUno_Fuse_Internal_AndroidSystemFont_ThrowUno56(final String message);
    public static void AddFonts52()
    {
        com.foreign.Fuse.Internal.AndroidSystemFont.AddFonts52();
    }
    
    public static Object Create57()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Button.Create57();
    }
    
    public static void SetText58(final Object handle,final String text)
    {
        com.foreign.Fuse.Controls.Native.Android.Button.SetText58(handle,text);
    }
    
    public static void UpdateShapeDrawable159(final UnoObject _this, final Object handle,final boolean useAngle,final float width,final float height,final float startAngle,final float endAngle)
    {
        com.foreign.Fuse.Controls.Native.Android.Circle.UpdateShapeDrawable159(_this, handle,useAngle,width,height,startAngle,endAngle);
    }
    
    public static void AddView60(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.AddView60(parentHandle,childHandle);
    }
    
    public static void AddView161(final Object parentHandle,final Object childHandle,final int index)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.AddView161(parentHandle,childHandle,index);
    }
    
    public static Object Create62()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.Create62();
    }
    
    public static void HideOffscreenParent63(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.HideOffscreenParent63(handle);
    }
    
    public static void RemoveView64(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.RemoveView64(parentHandle,childHandle);
    }
    
    public static void SetChildSize65(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.SetChildSize65(handle,w,h);
    }
    
    public static void SetClipToBounds66(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.DrawableViewGroup.SetClipToBounds66(handle,clipToBounds);
    }
    
    public static void UpdateShapeDrawable167(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Ellipse.UpdateShapeDrawable167(_this, handle);
    }
    
    public static void ClearListener68(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.ClearListener68(viewHandle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_FocusChangedListener_OnFocusChange70(final UnoObject jthis,final boolean hasFocus);
    public static Object Create69(final UnoObject _this)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.Create69(_this);
    }
    
    public static void SetListener71(final Object viewHandle,final Object listenerHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusChangedListener.SetListener71(viewHandle,listenerHandle);
    }
    
    public static Object GetContext72(final Object viewHandle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusManager.GetContext72(viewHandle);
    }
    
    public static Object GetWindowToken73(final Object viewHandle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.FocusManager.GetWindowToken73(viewHandle);
    }
    
    public static boolean HasFocus74(final Object viewHandle)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.FocusManager.HasFocus74(viewHandle);
    }
    
    public static void RequestRootViewFocus75(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.FocusManager.RequestRootViewFocus75(viewHandle);
    }
    
    public static native void callUno_Action_Object(final com.foreign.Uno.Action_Object theDelegate,final Object arg,long argPtr);
    public static native void callUno_Action_String(final com.foreign.Uno.Action_String theDelegate,final String arg);
    public static void LoadAsync76(final String urlString,final com.foreign.Uno.Action_Object success,final com.foreign.Uno.Action_String error)
    {
        com.foreign.Fuse.Controls.Native.Android.HttpImageLoader.LoadAsync76(urlString,success,error);
    }
    
    public static void ClearBitmap77(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.ClearBitmap77(handle);
    }
    
    public static Object Create78(final Object container)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ImageView.Create78(container);
    }
    
    public static Object CreateContainer79()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ImageView.CreateContainer79();
    }
    
    public static void GetImageSize80(final Object handle,final com.uno.IntArray wh)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.GetImageSize80(handle,wh);
    }
    
    public static void SetBitmap81(final Object handle,final Object bitmapHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetBitmap81(handle,bitmapHandle);
    }
    
    public static void SetImageMatrix82(final Object handle,final float x,final float y,final float scaleX,final float scaleY)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetImageMatrix82(handle,x,y,scaleX,scaleY);
    }
    
    public static void SetImageSize183(final Object handle,final com.uno.IntArray wh)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetImageSize183(handle,wh);
    }
    
    public static void SetTint84(final Object handle,final int rgba)
    {
        com.foreign.Fuse.Controls.Native.Android.ImageView.SetTint84(handle,rgba);
    }
    
    public static void ClearOnTouchListener85(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.InputDispatch.ClearOnTouchListener85(viewHandle);
    }
    
    public static native boolean callUno_Fuse_Controls_Native_Android_InputDispatch_OnTouch87(final Object view,final Object motionEvent,long viewPtr,long motionEventPtr);
    public static Object CreateTouchListener86()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.InputDispatch.CreateTouchListener86();
    }
    
    public static void SetOnTouchListener88(final Object viewHandle,final Object listenerHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.InputDispatch.SetOnTouchListener88(viewHandle,listenerHandle);
    }
    
    public static boolean ContainsKey189(final Object handle,final Object key)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.JavaMap.ContainsKey189(handle,key);
    }
    
    public static Object Create90()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.JavaMap.Create90();
    }
    
    public static UnoObject Get191(final Object handle,final Object key)
    {
        return (UnoObject) com.foreign.Fuse.Controls.Native.Android.JavaMap.Get191(handle,key);
    }
    
    public static void Put92(final Object handle,final Object key,final UnoObject value)
    {
        com.foreign.Fuse.Controls.Native.Android.JavaMap.Put92(handle,key,value);
    }
    
    public static void Remove193(final Object handle,final Object key)
    {
        com.foreign.Fuse.Controls.Native.Android.JavaMap.Remove193(handle,key);
    }
    
    public static int GetMeasuredHeight94(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.LeafView.GetMeasuredHeight94(handle);
    }
    
    public static int GetMeasuredWidth95(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.LeafView.GetMeasuredWidth95(handle);
    }
    
    public static void Measure96(final Object handle,final int w,final int h,final boolean hasX,final boolean hasY)
    {
        com.foreign.Fuse.Controls.Native.Android.LeafView.Measure96(handle,w,h,hasX,hasY);
    }
    
    public static boolean Compare97(final Object handle1,final Object handle2)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.MotionEvent.Compare97(handle1,handle2);
    }
    
    public static int GetAction98(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetAction98(_this, handle);
    }
    
    public static int GetActionMasked99(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetActionMasked99(_this, handle);
    }
    
    public static long GetEventTime100(final UnoObject _this, final Object handle)
    {
        return (long) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetEventTime100(_this, handle);
    }
    
    public static int GetLocationOnScreenX101(final UnoObject _this, final Object viewHandle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetLocationOnScreenX101(_this, viewHandle);
    }
    
    public static int GetLocationOnScreenY102(final UnoObject _this, final Object viewHandle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetLocationOnScreenY102(_this, viewHandle);
    }
    
    public static int GetPointerCount103(final UnoObject _this, final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerCount103(_this, handle);
    }
    
    public static int GetPointerId1104(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerId1104(_this, handle,pointerIndex);
    }
    
    public static int GetPointerIndexMask105()
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerIndexMask105();
    }
    
    public static int GetPointerIndexShift106()
    {
        return (int) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetPointerIndexShift106();
    }
    
    public static float GetX107(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetX107(_this, handle,pointerIndex);
    }
    
    public static float GetXPrecision108(final UnoObject _this, final Object handle)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetXPrecision108(_this, handle);
    }
    
    public static float GetY109(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetY109(_this, handle,pointerIndex);
    }
    
    public static float GetYPrecision110(final UnoObject _this, final Object handle)
    {
        return (float) com.foreign.Fuse.Controls.Native.Android.MotionEvent.GetYPrecision110(_this, handle);
    }
    
    public static Object CreateBitmap111(final int w,final int h)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.CreateBitmap111(w,h);
    }
    
    public static void DisposeBitmap112(final Object bitmap)
    {
        com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.DisposeBitmap112(bitmap);
    }
    
    public static void Upload113(final Object viewHandle,final Object bitmapHandle,final boolean reuse,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.NativeViewRenderer.Upload113(viewHandle,bitmapHandle,reuse,w,h);
    }
    
    public static void UpdateShapeDrawable1114(final UnoObject _this, final Object handle,final float x,final float y,final float z,final float w)
    {
        com.foreign.Fuse.Controls.Native.Android.Rectangle.UpdateShapeDrawable1114(_this, handle,x,y,z,w);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_ScrollView_OnScrollChanged116(final UnoObject jthis,final int x,final int y,final int oldx,final int oldy);
    public static Object AddCallback115(final UnoObject _this, final Object handle)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ScrollView.AddCallback115(_this, handle);
    }
    
    public static Object Create117()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ScrollView.Create117();
    }
    
    public static void SetChildSize118(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetChildSize118(handle,w,h);
    }
    
    public static void SetClipToBounds119(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetClipToBounds119(handle,clipToBounds);
    }
    
    public static void SetContent120(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetContent120(parentHandle,childHandle);
    }
    
    public static void SetScrollPosition121(final Object handle,final int x,final int y)
    {
        com.foreign.Fuse.Controls.Native.Android.ScrollView.SetScrollPosition121(handle,x,y);
    }
    
    public static Object Create122()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.Create122();
    }
    
    public static Object CreateShapeDrawable123()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.CreateShapeDrawable123();
    }
    
    public static Object GetLayer124(final Object handle,final int layer)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.GetLayer124(handle,layer);
    }
    
    public static Object MakeLayerDrawable125(final Object handle,final int layerCount)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Shape.MakeLayerDrawable125(handle,layerCount);
    }
    
    public static void SetShapeDrawableColor126(final Object shapeDrawable,final int r,final int g,final int b,final int a,final int opacity)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableColor126(shapeDrawable,r,g,b,a,opacity);
    }
    
    public static void SetShapeDrawableLinearGradient127(final Object shapeDrawable,final float startX,final float startY,final float endX,final float endY,final com.uno.IntArray colors,final com.uno.FloatArray positions)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableLinearGradient127(shapeDrawable,startX,startY,endX,endY,colors,positions);
    }
    
    public static void SetShapeDrawableStrokeWidth128(final Object shapeDrawable,final float width)
    {
        com.foreign.Fuse.Controls.Native.Android.Shape.SetShapeDrawableStrokeWidth128(shapeDrawable,width);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_Slider_OnSeekBarChanged130(final UnoObject jthis,final double newProgress);
    public static void AddChangedCallback129(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Slider.AddChangedCallback129(_this, handle);
    }
    
    public static Object Create131()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Slider.Create131();
    }
    
    public static void SetProgress132(final Object handle,final double progress)
    {
        com.foreign.Fuse.Controls.Native.Android.Slider.SetProgress132(handle,progress);
    }
    
    public static void HideKeyboard133(final Object hideKeyboardContext,final Object hideKeyboardWindowToken)
    {
        com.foreign.Fuse.Controls.Native.Android.SoftKeyboard.HideKeyboard133(hideKeyboardContext,hideKeyboardWindowToken);
    }
    
    public static void ShowKeyboard134(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.SoftKeyboard.ShowKeyboard134(viewHandle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceRedrawNeeded136(final UnoObject jthis,final Object holder,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceChanged137(final UnoObject jthis,final Object holder,final int f,final int w,final int h,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceCreated138(final UnoObject jthis,final Object holder,long holderPtr);
    public static native void callUno_Fuse_Controls_Native_Android_SurfaceView_OnSurfaceDestroyed139(final UnoObject jthis,final Object holder,long holderPtr);
    public static void AddCallback135(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.SurfaceView.AddCallback135(_this, handle);
    }
    
    public static Object Create140()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.SurfaceView.Create140();
    }
    
    public static Object GetSurface141(final Object holder)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.SurfaceView.GetSurface141(holder);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged143(final UnoObject jthis,final boolean value);
    public static void AddCallback142(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.Switch.AddCallback142(_this, handle);
    }
    
    public static Object Create144()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Switch.Create144();
    }
    
    public static void SetValue145(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Controls.Native.Android.Switch.SetValue145(handle,value);
    }
    
    public static void MakeItPlain146(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEdit.MakeItPlain146(handle);
    }
    
    public static void CopyState147(final Object container,final Object sourceHandle,final Object targetHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CopyState147(container,sourceHandle,targetHandle);
    }
    
    public static Object CreateContainer148()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CreateContainer148();
    }
    
    public static Object CreateTextEdit149()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderer.CreateTextEdit149();
    }
    
    public static void AddView150(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.AddView150(parentHandle,childHandle);
    }
    
    public static Object Create151()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.Create151();
    }
    
    public static void RemoveView152(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.RemoveView152(parentHandle,childHandle);
    }
    
    public static void SetChildSize153(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.TextEditRenderHost.SetChildSize153(handle,w,h);
    }
    
    public static native boolean callUno_Fuse_Controls_Native_Android_TextInput_OnEditorAction155(final UnoObject jthis,final int actionCode);
    public static void AddEditorActionListener154(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.AddEditorActionListener154(_this, handle);
    }
    
    public static native void callUno_Fuse_Controls_Native_Android_TextInput_OnTextChanged157(final UnoObject jthis,final String value);
    public static void AddTextChangedListener156(final UnoObject _this, final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.AddTextChangedListener156(_this, handle);
    }
    
    public static void ClearFocus158(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.ClearFocus158(handle);
    }
    
    public static Object Create1159()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextInput.Create1159();
    }
    
    public static boolean HasFocus160(final Object viewHandle)
    {
        return (boolean) com.foreign.Fuse.Controls.Native.Android.TextInput.HasFocus160(viewHandle);
    }
    
    public static void RequestFocus161(final Object viewHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.RequestFocus161(viewHandle);
    }
    
    public static void SetCursorDrawableColor162(final UnoObject _this, final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetCursorDrawableColor162(_this, handle,color);
    }
    
    public static void SetImeOptions163(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetImeOptions163(handle,value);
    }
    
    public static void SetInputType164(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetInputType164(handle,value);
    }
    
    public static void SetPlaceholderColor165(final Object handle,final int value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetPlaceholderColor165(handle,value);
    }
    
    public static void SetPlaceholderText166(final Object handle,final String value)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetPlaceholderText166(handle,value);
    }
    
    public static void SetSelectionColor167(final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextInput.SetSelectionColor167(handle,color);
    }
    
    public static Object Create168()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.TextView.Create168();
    }
    
    public static void SetFont169(final Object handle,final Object fontHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetFont169(handle,fontHandle);
    }
    
    public static void SetFontSize170(final Object handle,final float size)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetFontSize170(handle,size);
    }
    
    public static void SetLineSpacing171(final Object handle,final float spacing)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetLineSpacing171(handle,spacing);
    }
    
    public static void SetMaxLength172(final Object handle,final int maxLength)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetMaxLength172(handle,maxLength);
    }
    
    public static void SetText173(final Object handle,final String text)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetText173(handle,text);
    }
    
    public static void SetTextAlignment174(final Object handle,final int alignment)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextAlignment174(handle,alignment);
    }
    
    public static void SetTextColor175(final Object handle,final int color)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextColor175(handle,color);
    }
    
    public static void SetTextWrapping176(final Object handle,final boolean wrap)
    {
        com.foreign.Fuse.Controls.Native.Android.TextView.SetTextWrapping176(handle,wrap);
    }
    
    public static Object CreateFromBundleFile177(final String bundlePath)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.CreateFromBundleFile177(bundlePath);
    }
    
    public static Object CreateFromFileImpl178(final String path)
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.CreateFromFileImpl178(path);
    }
    
    public static Object GetDefault179()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.Typeface.GetDefault179();
    }
    
    public static void BringToFront1180(final Object handle)
    {
        com.foreign.Fuse.Controls.Native.Android.View.BringToFront1180(handle);
    }
    
    public static void SetBackground181(final Object handle,final int argb)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetBackground181(handle,argb);
    }
    
    public static void SetEnabled182(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetEnabled182(handle,value);
    }
    
    public static void SetOpacity183(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetOpacity183(handle,value);
    }
    
    public static void SetPivotXY184(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetPivotXY184(handle,x,y);
    }
    
    public static void SetRotation185(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotation185(handle,value);
    }
    
    public static void SetRotationX186(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotationX186(handle,value);
    }
    
    public static void SetRotationY187(final Object handle,final float value)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetRotationY187(handle,value);
    }
    
    public static void SetScaleXY188(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetScaleXY188(handle,x,y);
    }
    
    public static void SetTranslation189(final Object handle,final float x,final float y)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetTranslation189(handle,x,y);
    }
    
    public static void SetVisible190(final Object handle,final boolean isVisible)
    {
        com.foreign.Fuse.Controls.Native.Android.View.SetVisible190(handle,isVisible);
    }
    
    public static void AddView191(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.AddView191(parentHandle,childHandle);
    }
    
    public static void AddView1192(final Object parentHandle,final Object childHandle,final int index)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.AddView1192(parentHandle,childHandle,index);
    }
    
    public static Object Create193()
    {
        return (Object) com.foreign.Fuse.Controls.Native.Android.ViewGroup.Create193();
    }
    
    public static native boolean callUno_Func_Object(final com.foreign.Uno.Func_Object theDelegate,final Object arg,long argPtr);
    public static void InstallTouchInterceptCallback194(final Object handle,final com.foreign.Uno.Func_Object callback)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.InstallTouchInterceptCallback194(handle,callback);
    }
    
    public static void RemoveView195(final Object parentHandle,final Object childHandle)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.RemoveView195(parentHandle,childHandle);
    }
    
    public static void SetChildSize196(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.SetChildSize196(handle,w,h);
    }
    
    public static void SetClipToBounds197(final Object handle,final boolean clipToBounds)
    {
        com.foreign.Fuse.Controls.Native.Android.ViewGroup.SetClipToBounds197(handle,clipToBounds);
    }
    
    public static Object Download1198(final String url)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.ImageHandlePromise.Download1198(url);
    }
    
    public static Object LoadFile199(final String filePath)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.LoadFile199(filePath);
    }
    
    public static Object LoadUri200(final String uri)
    {
        return (Object) com.foreign.Fuse.Controls.Native.ImageLoader.LoadUri200(uri);
    }
    
    public static void Release201(final Object bitmap)
    {
        com.foreign.Fuse.Controls.Native.ImageLoader.Release201(bitmap);
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared203(final UnoObject jthis);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion204(final UnoObject jthis);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError205(final UnoObject jthis,final int what,final int extra);
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer206(final UnoObject jthis,final int percent);
    public static Object CreateMediaPlayer202(final UnoObject _this, final Object surfaceHandle)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateMediaPlayer202(_this, surfaceHandle);
    }
    
    public static Object CreateSurface207(final UnoObject _this, final Object surfaceTexture)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateSurface207(_this, surfaceTexture);
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable209(final UnoObject jthis);
    public static Object CreateSurfaceTexture208(final UnoObject _this, final int glHandle)
    {
        return (Object) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.CreateSurfaceTexture208(_this, glHandle);
    }
    
    public static void Dispose1210(final Object mediaplayerHandle,final Object surfaceHandle,final Object surfaceTextureHandle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Dispose1210(mediaplayerHandle,surfaceHandle,surfaceTextureHandle);
    }
    
    public static int GetCurrentPosition211(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetCurrentPosition211(handle);
    }
    
    public static int GetDuration212(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetDuration212(handle);
    }
    
    public static int GetHeight213(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetHeight213(handle);
    }
    
    public static int GetOrientation214(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetOrientation214(handle);
    }
    
    public static int GetWidth215(final Object handle)
    {
        return (int) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.GetWidth215(handle);
    }
    
    public static boolean IsHardwareAccelerated216()
    {
        return (boolean) com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.IsHardwareAccelerated216();
    }
    
    public static native void callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred218(final UnoObject jthis,final String msg);
    public static void LoadAsyncAsset217(final UnoObject _this, final Object handle,final String assetName)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.LoadAsyncAsset217(_this, handle,assetName);
    }
    
    public static void LoadAsyncUrl219(final UnoObject _this, final Object handle,final String url)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.LoadAsyncUrl219(_this, handle,url);
    }
    
    public static void Pause1220(final Object handle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Pause1220(handle);
    }
    
    public static void Play1221(final Object handle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.Play1221(handle);
    }
    
    public static void SeekTo222(final Object handle,final int position)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.SeekTo222(handle,position);
    }
    
    public static void SetVolume223(final Object handle,final float left,final float right)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.SetVolume223(handle,left,right);
    }
    
    public static void UpdateTexture1224(final Object surfaceTextureHandle)
    {
        com.foreign.Fuse.Controls.VideoImpl.Android.MediaPlayer.UpdateTexture1224(surfaceTextureHandle);
    }
    
    public static Object Create225(final String text)
    {
        return (Object) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.Create225(text);
    }
    
    public static int GetBaseLevel226(final Object handle)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetBaseLevel226(handle);
    }
    
    public static int GetRunCount227(final Object handle)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunCount227(handle);
    }
    
    public static int GetRunLevel228(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunLevel228(handle,run);
    }
    
    public static int GetRunLimit229(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunLimit229(handle,run);
    }
    
    public static int GetRunStart230(final Object handle,final int run)
    {
        return (int) com.foreign.Fuse.Text.Bidirectional.Implementation.JavaRuns.GetRunStart230(handle,run);
    }
    
    public static void AddJavascriptInterface231(final Object handle,final String name,final com.foreign.Uno.Action_String resultHandler)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.AddJavascriptInterface231(handle,name,resultHandler);
    }
    
    public static boolean CanGoBack232(final Object handle)
    {
        return (boolean) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CanGoBack232(handle);
    }
    
    public static boolean CanGoForward233(final Object handle)
    {
        return (boolean) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CanGoForward233(handle);
    }
    
    public static native void callUno_Action_int(final com.foreign.Uno.Action_int theDelegate,final int arg);
    public static Object CreateAndSetWebChromeClient234(final Object webViewHandle,final com.foreign.Uno.Action_int onProgress)
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateAndSetWebChromeClient234(webViewHandle,onProgress);
    }
    
    public static native void callUno_Action(final com.foreign.Uno.Action theDelegate);
    public static Object CreateAndSetWebViewClient235(final Object webViewHandle,final com.foreign.Uno.Action loaded,final com.foreign.Uno.Action started,final com.foreign.Uno.Action changed)
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateAndSetWebViewClient235(webViewHandle,loaded,started,changed);
    }
    
    public static Object CreateWebView236()
    {
        return (Object) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.CreateWebView236();
    }
    
    public static double GetProgress237(final Object handle)
    {
        return (double) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetProgress237(handle);
    }
    
    public static String GetTitle238(final Object handle)
    {
        return (String) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetTitle238(handle);
    }
    
    public static String GetUrl239(final Object handle)
    {
        return (String) com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GetUrl239(handle);
    }
    
    public static void GoBack240(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GoBack240(handle);
    }
    
    public static void GoForward241(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.GoForward241(handle);
    }
    
    public static void LoadHtml242(final Object handle,final String html,final String baseUrl)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.LoadHtml242(handle,html,baseUrl);
    }
    
    public static void LoadUrl243(final Object handle,final String url)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.LoadUrl243(handle,url);
    }
    
    public static void Reload244(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.Reload244(handle);
    }
    
    public static void StopLoading245(final Object handle)
    {
        com.foreign.Fuse.Android.Controls.WebViewUtils.WebViewForeign.StopLoading245(handle);
    }
    
    public static void ClearRootView246(final Object handle)
    {
        com.foreign.Fuse.Android.AppRoot.ClearRootView246(handle);
    }
    
    public static native void callUno_Fuse_Android_AppRoot_OnTouchEvent__248(final Object motionEvent,long motionEventPtr);
    public static Object CreateRootView247()
    {
        return (Object) com.foreign.Fuse.Android.AppRoot.CreateRootView247();
    }
    
    public static void SetChildSize1249(final Object handle,final int w,final int h)
    {
        com.foreign.Fuse.Android.AppRoot.SetChildSize1249(handle,w,h);
    }
    
    public static void SetRootView250(final Object handle,final Object rootHandle)
    {
        com.foreign.Fuse.Android.AppRoot.SetRootView250(handle,rootHandle);
    }
    
    public static Object CreateBitmapARGB8888Impl251(final int width,final int height)
    {
        return (Object) com.foreign.Fuse.Android.Bitmap.CreateBitmapARGB8888Impl251(width,height);
    }
    
    public static void EraseColor1252(final Object handle,final int color)
    {
        com.foreign.Fuse.Android.Bitmap.EraseColor1252(handle,color);
    }
    
    public static void Recycle1253(final Object handle)
    {
        com.foreign.Fuse.Android.Bitmap.Recycle1253(handle);
    }
    
    public static Object Create254(final Object bitmapHandle)
    {
        return (Object) com.foreign.Fuse.Android.Canvas.Create254(bitmapHandle);
    }
    
    public static void Translate1255(final Object handle,final float dx,final float dy)
    {
        com.foreign.Fuse.Android.Canvas.Translate1255(handle,dx,dy);
    }
    
    public static void TexImage2D256(final int target,final int level,final Object bitmap,final int border)
    {
        com.foreign.Fuse.Android.GLUtils.TexImage2D256(target,level,bitmap,border);
    }
    
    public static Object Create257(final String text,final int bufStart,final int bufEnd,final Object paintHandle,final int outerWidth,final int align,final float spacingMult,final float spacingAdd,final boolean includePad,final int truncateAt,final int ellipsizedWith)
    {
        return (Object) com.foreign.Fuse.Android.StaticLayout.Create257(text,bufStart,bufEnd,paintHandle,outerWidth,align,spacingMult,spacingAdd,includePad,truncateAt,ellipsizedWith);
    }
    
    public static Object Create1258(final String text,final Object paintHandle,final int width,final int align,final float spacingMult,final float spacingAdd,final boolean includePad)
    {
        return (Object) com.foreign.Fuse.Android.StaticLayout.Create1258(text,paintHandle,width,align,spacingMult,spacingAdd,includePad);
    }
    
    public static void Draw1259(final Object layoutHandle,final Object canvasHandle)
    {
        com.foreign.Fuse.Android.StaticLayout.Draw1259(layoutHandle,canvasHandle);
    }
    
    public static float GetDesiredWidthImpl260(final String text,final Object paintHandle)
    {
        return (float) com.foreign.Fuse.Android.StaticLayout.GetDesiredWidthImpl260(text,paintHandle);
    }
    
    public static int GetEllipsizedWidth261(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetEllipsizedWidth261(handle);
    }
    
    public static int GetHeight262(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetHeight262(handle);
    }
    
    public static int GetLineBaseline1263(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineBaseline1263(handle,line);
    }
    
    public static int GetLineCount264(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineCount264(handle);
    }
    
    public static int GetLineEnd1265(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineEnd1265(handle,line);
    }
    
    public static float GetLineLeft1266(final Object handle,final int line)
    {
        return (float) com.foreign.Fuse.Android.StaticLayout.GetLineLeft1266(handle,line);
    }
    
    public static int GetLineStart1267(final Object handle,final int line)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetLineStart1267(handle,line);
    }
    
    public static int GetWidth268(final Object handle)
    {
        return (int) com.foreign.Fuse.Android.StaticLayout.GetWidth268(handle);
    }
    
    public static int GetStatusBarColor269()
    {
        return (int) com.foreign.Fuse.Android.StatusBarHelper.GetStatusBarColor269();
    }
    
    public static native void callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar271();
    public static void InstallGlobalListener270()
    {
        com.foreign.Fuse.Android.StatusBarHelper.InstallGlobalListener270();
    }
    
    public static void SetStatusBarColor272(final int color)
    {
        com.foreign.Fuse.Android.StatusBarHelper.SetStatusBarColor272(color);
    }
    
    public static Object Create273()
    {
        return (Object) com.foreign.Fuse.Android.TextPaint.Create273();
    }
    
    public static void GetTextBounds274(final Object handle,final String text,final int start,final int end,final com.uno.IntArray r)
    {
        com.foreign.Fuse.Android.TextPaint.GetTextBounds274(handle,text,start,end,r);
    }
    
    public static void SetAntiAlias275(final Object handle,final boolean value)
    {
        com.foreign.Fuse.Android.TextPaint.SetAntiAlias275(handle,value);
    }
    
    public static void SetColor276(final Object handle,final int color)
    {
        com.foreign.Fuse.Android.TextPaint.SetColor276(handle,color);
    }
    
    public static void SetTextSize277(final Object handle,final float textSize)
    {
        com.foreign.Fuse.Android.TextPaint.SetTextSize277(handle,textSize);
    }
    
    public static void SetTypeface278(final Object paintHandle,final Object typefaceHandle)
    {
        com.foreign.Fuse.Android.TextPaint.SetTypeface278(paintHandle,typefaceHandle);
    }
    
    public static String GetCacheDirectory279()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetCacheDirectory279();
    }
    
    public static String GetExternalCacheDirectory280()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetExternalCacheDirectory280();
    }
    
    public static String GetExternalFilesDirectory281()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetExternalFilesDirectory281();
    }
    
    public static String GetFilesDirectory282()
    {
        return (String) com.foreign.Fuse.FileSystem.AndroidPaths.GetFilesDirectory282();
    }
    
    public static String GetCacheDirectory283()
    {
        return (String) com.foreign.Fuse.FileSystem.UnifiedPaths.GetCacheDirectory283();
    }
    
    public static String GetDataDirectory284()
    {
        return (String) com.foreign.Fuse.FileSystem.UnifiedPaths.GetDataDirectory284();
    }
    
    public static int GetBuildVersion285()
    {
        return (int) com.foreign.Fuse.AndroidProperties.GetBuildVersion285();
    }
    
    public static String GetReleaseVersion286()
    {
        return (String) com.foreign.Fuse.AndroidProperties.GetReleaseVersion286();
    }
    
    public static native void callUno_Fuse_App_OnFrameCallback288(final UnoObject jthis,final double currentTime,final double deltaTime);
    public static void StartFrameCallback287(final UnoObject _this)
    {
        com.foreign.Fuse.App.StartFrameCallback287(_this);
    }
    
    public static native Object callUno_Neovisionaries_WebSocketClient__webSocketGet290(final UnoObject jthis);
    public static void Close289(final UnoObject _this)
    {
        com.foreign.Neovisionaries.WebSocketClient.Close289(_this);
    }
    
    public static void Connect291(final UnoObject _this)
    {
        com.foreign.Neovisionaries.WebSocketClient.Connect291(_this);
    }
    
    public static native void callUno_Action_ByteArray(final com.foreign.Uno.Action_ByteArray theDelegate,final com.uno.ByteArray arg);
    public static native void callUno_Neovisionaries_WebSocketClient__webSocketSet290(final UnoObject jthis,final Object setVal,long setValPtr);
    public static void Create292(final UnoObject _this, final String url,final com.uno.StringArray protocols,final com.foreign.Uno.Action open,final com.foreign.Uno.Action close,final com.foreign.Uno.Action_String error,final com.foreign.Uno.Action_String receiveMessageHandler,final com.foreign.Uno.Action_ByteArray receiveDataHandler)
    {
        com.foreign.Neovisionaries.WebSocketClient.Create292(_this, url,protocols,open,close,error,receiveMessageHandler,receiveDataHandler);
    }
    
    public static void Send293(final UnoObject _this, final com.uno.ByteArray data)
    {
        com.foreign.Neovisionaries.WebSocketClient.Send293(_this, data);
    }
    
    public static void Send1294(final UnoObject _this, final String data)
    {
        com.foreign.Neovisionaries.WebSocketClient.Send1294(_this, data);
    }
    
    public static void SetHeader295(final UnoObject _this, final String key,final String value)
    {
        com.foreign.Neovisionaries.WebSocketClient.SetHeader295(_this, key,value);
    }
    
}
