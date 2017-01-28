package com.foreign.Neovisionaries;

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
import com.foreign.Uno.*;
import com.neovisionaries.ws.client.*;
import java.io.IOException;
import java.util.List;
import java.util.Map;

public class WebSocketClient
{
    static void debug_log(Object message)
    {
        android.util.Log.d("stockIT", (message==null ? "null" : message.toString()));
    }

    public static void Close289(final UnoObject _this)
    {
        WebSocket webSocket = (WebSocket) ExternedBlockHost.callUno_Neovisionaries_WebSocketClient__webSocketGet290(_this);
        			webSocket.sendClose();
    }
    
    public static void Connect291(final UnoObject _this)
    {
        WebSocket webSocket = (WebSocket) ExternedBlockHost.callUno_Neovisionaries_WebSocketClient__webSocketGet290(_this);
        			webSocket.connectAsynchronously();
    }
    
    public static void Create292(final UnoObject _this, final String url,final com.uno.StringArray protocols,final com.foreign.Uno.Action open,final com.foreign.Uno.Action close,final com.foreign.Uno.Action_String error,final com.foreign.Uno.Action_String receiveMessageHandler,final com.foreign.Uno.Action_ByteArray receiveDataHandler)
    {
        try {
        				WebSocket webSocket = new WebSocketFactory().createSocket(url);
        				for (String protocol : protocols.copyArray()) {
        					webSocket.addProtocol(protocol);
        				}
        				webSocket.addListener(new WebSocketAdapter() {
        					@Override
        					public void onError(WebSocket websocket, WebSocketException cause) {
        						error.run(cause.getMessage());
        					}
        					
        					@Override
        					public void onConnectError(WebSocket websocket, WebSocketException cause) throws Exception {
        						error.run(cause.getMessage());
        					}
        					
        					@Override
        					public void onConnected(WebSocket websocket, Map<String, List<String>> headers) {
        						open.run();
        					}
        					
        					@Override
        					public void onDisconnected(WebSocket websocket, WebSocketFrame serverCloseFrame, WebSocketFrame clientCloseFrame, boolean closedByServer) {
        						close.run();
        					}
        					
        					@Override
        					public void onTextMessage(WebSocket websocket, String message) {
        						receiveMessageHandler.run(message);
        					}
        					
        					@Override
        					public void onBinaryMessage(WebSocket websocket, byte[] binary) throws Exception {
        						receiveDataHandler.run(new com.uno.ByteArray(binary));
        					}
        				});
        				ExternedBlockHost.callUno_Neovisionaries_WebSocketClient__webSocketSet290(_this,webSocket,UnoHelper.GetUnoObjectRef(webSocket));
        			} catch(java.io.IOException e) {
        				error.run(e.getMessage());
        			}
    }
    
    public static void Send293(final UnoObject _this, final com.uno.ByteArray data)
    {
        WebSocket webSocket = (WebSocket) ExternedBlockHost.callUno_Neovisionaries_WebSocketClient__webSocketGet290(_this);
        			webSocket.sendBinary(data.copyArray());
    }
    
    public static void Send1294(final UnoObject _this, final String data)
    {
        WebSocket webSocket = (WebSocket) ExternedBlockHost.callUno_Neovisionaries_WebSocketClient__webSocketGet290(_this);
        			webSocket.sendText(data);
    }
    
    public static void SetHeader295(final UnoObject _this, final String key,final String value)
    {
        //WebSocketJava webSocket = (WebSocketJava) ExternedBlockHost.callUno_Neovisionaries_WebSocketClient__webSocketGet290(_this);
        			// TODO: webSocket.SetHeader(key, value);
    }
    
}
