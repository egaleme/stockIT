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

public class Action extends com.uno.UnoObject implements java.lang.Runnable
{
    public Action(long ptr) { super(ptr); }
    public void run() {
        ExternedBlockHost.callUno_Action(this);
    }
}
