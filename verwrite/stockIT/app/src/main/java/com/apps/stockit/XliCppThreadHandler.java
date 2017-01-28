package com.apps.stockit;

import java.util.ArrayList;

import android.os.Handler;
import android.os.Message;

public class XliCppThreadHandler extends Handler {
	public static final int REPEATING_MESSAGE = 10;
	private int repeatCount = 0;
	private ArrayList<Integer> repeatingMessageIndex;
    private int xliCallbackIndex = -2;

	public XliCppThreadHandler()
	{
		super();
		repeatingMessageIndex = new ArrayList<Integer>();
		xliCallbackIndex = registerRepeating(50);
	}

	@Override
	public void handleMessage(Message msg)
	{
		switch (msg.what) {
		case REPEATING_MESSAGE:
			handleRepeating(msg);
			break;
		default:
			break;
		}
	}

	private void handleRepeating(Message msg)
	{
		if (msg.arg1 == xliCallbackIndex) {
            com.apps.stockit.ActivityNativeEntryPoints.cppTimerCallback(msg.arg1); // {TODO} this should own callback
			Message newMsg = Message.obtain();
			newMsg.what = msg.what;
			newMsg.arg1 = msg.arg1;
			newMsg.arg2 = msg.arg2;
			this.sendMessageDelayed(newMsg, msg.arg2);
		} else if (repeatingMessageIndex.contains((Integer)msg.arg1)) {
			com.apps.stockit.ActivityNativeEntryPoints.cppTimerCallback(msg.arg1);
			this.sendMessageDelayed(msg, msg.arg2);
		}
	}

	public void unregisterRepeating(int repeater_id)
	{
		repeatingMessageIndex.remove((Integer)repeater_id);
	}

	public int registerRepeating(int millisecondsDelay)
	{
		int i = repeatCount+=1;
		repeatingMessageIndex.add(i);
		Message msg = Message.obtain();
		msg.what = REPEATING_MESSAGE;
		msg.arg1 = i;
		msg.arg2 = millisecondsDelay;
		this.sendMessageDelayed(msg, millisecondsDelay);
		return i;
	}
}
