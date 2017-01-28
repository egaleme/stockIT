package com.fuse.android.views;

public class ViewGroup extends android.widget.RelativeLayout {
	
	IInterceptTouchEvent _intercept;

	public ViewGroup(android.content.Context context)
	{
		super(context);	
	}

	public void SetIntercept(IInterceptTouchEvent intercept) {
		_intercept = intercept;
	}

	public boolean onInterceptTouchEvent(android.view.MotionEvent ev) {
		if (_intercept != null) {
			return _intercept.onInterceptTouchEvent(ev);
		} else {
			return super.onInterceptTouchEvent(ev);
		}
	}
}
