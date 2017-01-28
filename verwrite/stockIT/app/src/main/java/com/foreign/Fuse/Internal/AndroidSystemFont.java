package com.foreign.Fuse.Internal;

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

// user defined imports
import fuse.android.graphics.FontListParser;

public class AndroidSystemFont
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static void AddFonts52()
    {
        try
        			{
        				FontListParser.Config config = FontListParser.getFontConfig();
        				for (FontListParser.Family family : config.families)
        				{
        					String firstFamilyName = family.names.size() > 0 ? family.names.get(0) : null;
        					ExternedBlockHost.callUno_Fuse_Internal_AndroidSystemFont_AddFamily53((String)firstFamilyName,(String)family.lang,(String)family.variant);
        					for (FontListParser.Font font : family.fonts)
        					{
        						ExternedBlockHost.callUno_Fuse_Internal_AndroidSystemFont_AddFont54((String)font.fontName,(int)font.ttcIndex,(int)font.weight,(boolean)font.isItalic);
        					}
        					for (int i = 1; i < family.names.size(); ++i)
        					{
        						String alias = family.names.get(i);
        						ExternedBlockHost.callUno_Fuse_Internal_AndroidSystemFont_AddAlias55((String)alias,(String)firstFamilyName,(int)FontListParser.NormalWeight);
        					}
        				}
        				for (FontListParser.Alias alias : config.aliases)
        				{
        					ExternedBlockHost.callUno_Fuse_Internal_AndroidSystemFont_AddAlias55((String)alias.name,(String)alias.toName,(int)alias.weight);
        				}
        				}
        			catch (Exception e)
        			{
        				ExternedBlockHost.callUno_Fuse_Internal_AndroidSystemFont_ThrowUno56((String)e.toString());
        			}
    }
    
}
