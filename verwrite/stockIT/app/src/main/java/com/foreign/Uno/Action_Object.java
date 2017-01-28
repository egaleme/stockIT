package com.foreign.Uno;
import com.Bindings.*;
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
import com.uno.UnoObject;

public class Action_Object extends com.uno.UnoObject
{
    public Action_Object(long ptr) { super(ptr); }
    public void run(final Object arg) {
        ExternedBlockHost.callUno_Action_Object(this,arg,UnoHelper.GetUnoObjectRef(arg));
    }
}
