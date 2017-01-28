package com.fusetools.webview;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.graphics.Bitmap;
import com.foreign.Uno.Action;

public class FuseWebViewClient extends WebViewClient
{
	boolean redirect;
	boolean loadingFinished;
	
	Action _pageLoadedAction; 
	Action _pageStartedAction; 
	Action _urlChangedAction; 
	
	public FuseWebViewClient(Action loaded, Action started, Action changed)
	{
		super();
		_pageLoadedAction = loaded;
		_pageStartedAction = started;
		_urlChangedAction = changed;
		loadingFinished = true;
		redirect = false;
	}
	
	@Override
	public boolean shouldOverrideUrlLoading(WebView view, String url) 
	{
		if(!loadingFinished){
			redirect = true;
		}else{
			if (_pageStartedAction != null)
				_pageStartedAction.run();
		}
		loadingFinished = false;
		view.loadUrl(url);
		return true;
	}
	
	@Override
	public void onPageStarted(WebView view, String url, Bitmap favIcon)
	{
		if(loadingFinished){
			if (_pageStartedAction != null)
				_pageStartedAction.run();
		}
		loadingFinished = false;
	}
	
	@Override
	public void onPageFinished(WebView view, String url)
	{
		if(_urlChangedAction != null)
				_urlChangedAction.run();

		if(!redirect)
			loadingFinished = true;
			
		if(loadingFinished && !redirect){
			loadingFinished = true;
			if (_pageLoadedAction != null)
				_pageLoadedAction.run();
		}else{
			redirect = false;
		}
	}
}
