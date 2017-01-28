package com.foreign.Uno.Net;

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
import java.util.*;
import java.net.*;

public class Dns
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static boolean JavaGetLocalAddresses50(final UnoObject addresses)
    {
        try
        			{
        				Enumeration<NetworkInterface> networkInterfaces = NetworkInterface.getNetworkInterfaces();
        				while (networkInterfaces.hasMoreElements())
        				{
        					NetworkInterface networkInterface = networkInterfaces.nextElement();
        					Enumeration<InetAddress> inetAddresses = networkInterface.getInetAddresses();
        					while (inetAddresses.hasMoreElements())
        					{
        						InetAddress inetAddress = inetAddresses.nextElement();
        						String hostAddress = inetAddress.getHostAddress();
        						if (inetAddress instanceof Inet6Address)
        						{
        							Inet6Address inet6Address = (Inet6Address)inetAddress;
        							int delim = hostAddress.indexOf('%');
        							if (delim >= 0)
        							{
        								// we only want numerical scopeIDs
        								hostAddress = hostAddress.substring(0, delim + 1);
        								hostAddress += inet6Address.getScopeId();
        							}
        						}
        						ExternedBlockHost.callUno_Uno_Collections_List_lt_string_gt__Add51((UnoObject)addresses,(String)hostAddress);
        					}
        				}
        			}
        			catch (Exception e)
        			{
        				return false;
        			}
        
        			return true;
    }
    
}
