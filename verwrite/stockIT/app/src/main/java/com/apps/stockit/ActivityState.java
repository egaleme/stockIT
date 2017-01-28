package com.apps.stockit;

import java.util.ArrayList;

public class ActivityState {
	private final ArrayList<AndroidLifecycleListener> _lifecycleListeners = new ArrayList<AndroidLifecycleListener>();
	private final LifecycleProxy _lifecycleProxy = new LifecycleProxy();

	public boolean Destroyed = false;
	public MainLoop MainLoop;

	public ActivityState(AppState appState) {
		MainLoop = new MainLoop(appState);
	}


	public AndroidLifecycleListener GetLifecycleProxy()
	{
		return _lifecycleProxy;
	}

	public void SubscribeToLifecycleChange(AndroidLifecycleListener listener)
	{
		_lifecycleListeners.add(listener);
	}
	public void UnsubscribeFromLifecycleChange(AndroidLifecycleListener listener)
	{
		_lifecycleListeners.remove(listener);
	}

	private class LifecycleProxy implements AndroidLifecycleListener
	{
		@Override
		public void onPause() {
			for (AndroidLifecycleListener lifecycleListener : _lifecycleListeners) {
				lifecycleListener.onPause();
			}
		}

		@Override
		public void onResume() {
			for (AndroidLifecycleListener lifecycleListener : _lifecycleListeners) {
				lifecycleListener.onResume();
			}
		}

		@Override
		public void onStart() {
			for (AndroidLifecycleListener lifecycleListener : _lifecycleListeners) {
				lifecycleListener.onStart();
			}
		}

		@Override
		public void onStop() {
			for (AndroidLifecycleListener lifecycleListener : _lifecycleListeners) {
				lifecycleListener.onStop();
			}
		}

		@Override
		public void onWindowFocusChanged(boolean hasFocus) {
			for (AndroidLifecycleListener lifecycleListener : _lifecycleListeners) {
				lifecycleListener.onWindowFocusChanged(hasFocus);
			}
		}
	}

	public interface AndroidLifecycleListener {
		// Allows you to listen to a subset of the root activity's lifecycle events
		void onPause();
		void onResume();
		void onStart();
		void onStop();
		void onWindowFocusChanged(boolean hasFocus);
	}
}
