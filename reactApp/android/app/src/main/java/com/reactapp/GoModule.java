package com.reactapp; // replace com.your-app-name with your app’s name
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import java.util.Map;
import java.util.HashMap;
import android.util.Log;
public class GoModule extends ReactContextBaseJavaModule {
   GoModule(ReactApplicationContext context) {
       super(context);
   }
   	@Override
	public String getName() {
   		return "GoModule";
	}
	public static native String reverse(String name);

	@ReactMethod
	public void callReverse(String name) {
   		Log.d("GoModule", "Create event called with name: "+name+" " + reverse(name));
	}
	
	public static String get_battery_status() {
        	return "Battery is 0%";
    	}
	 static {
        // Used to load the 'native-lib' library on application startup.
            System.loadLibrary("golibrary");
    	}
}
