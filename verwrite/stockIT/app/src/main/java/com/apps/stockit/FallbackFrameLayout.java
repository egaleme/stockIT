package com.apps.stockit;

import android.content.Context;
import android.widget.FrameLayout;

public class FallbackFrameLayout extends FrameLayout {

	public FallbackFrameLayout(Context context) {
		super(context);
	}

	@Override
    public void onSizeChanged(int xNew, int yNew, int xOld, int yOld)
    {
		Display.realHeight = yNew;
		Display.realWidth = xNew;
        ActivityNativeEntryPoints.cppOnConfigChanged();
        ActivityNativeEntryPoints.cppForceRedraw(1);
	}
}
