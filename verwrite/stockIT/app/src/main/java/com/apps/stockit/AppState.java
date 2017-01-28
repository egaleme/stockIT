package com.apps.stockit;

import java.util.ArrayList;

import android.app.Activity;

public class AppState {
	private static final ArrayList<ActivityChangedListener> _activityListeners = new ArrayList<AppState.ActivityChangedListener>();
	private static AppState _appState;

	public final Display Display;
	public final AppLayout Layout;
	public final SystemUI SystemUI;

	public stockIT CurrentActivity;
	public boolean HasCreated = false;

	private AppState(stockIT activity)
	{
		CurrentActivity = activity;
		Display = new Display(this);
		Layout = new AppLayout(this);
		SystemUI = new SystemUI(this, Layout.GetSystemUIChangeCallback());
	}

	public static AppState Create(stockIT activity)
	{
		if (_appState==null) _appState = new AppState(activity);

		_appState.CurrentActivity = activity;
		for (ActivityChangedListener listener : _activityListeners) {
			listener.ActivityChanged(activity);
		}

		return _appState;
	}

	// We don't really want components caching/looking-at the activity at all but for all of
	// those that do we need a update them in event of change
	// For now I want most things just to hold onto the appState and look through there for
	// the data they need. Even that should be minimized, but having this pollution localized at least helps.
	// Hey a little bit at a time.
	public void SubscribeToActivityChange(ActivityChangedListener listener)
	{
		_activityListeners.add(listener);
	}
	public void UnsubscribeFromActivityChange(ActivityChangedListener listener)
	{
		_activityListeners.remove(listener);
	}

	public static abstract class ActivityChangedListener
	{
		public abstract void ActivityChanged(Activity activity);
	}
}
