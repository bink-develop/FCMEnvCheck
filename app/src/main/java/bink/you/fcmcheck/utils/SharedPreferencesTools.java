package bink.you.fcmcheck.utils;

import java.util.Map;

import android.content.Context;
import android.content.SharedPreferences;

public final class SharedPreferencesTools {
	
	public static boolean putString(Context context, String fileName, String key, String value) {
		if (null == context) {
			return false;
		}
		if (null == fileName || fileName.isEmpty() 
				|| null == key || key.isEmpty()) {
			return false;
		}
		SharedPreferences sharedPreferences = context.getSharedPreferences(fileName, 0);
		if (null == sharedPreferences) {
			return false;
		}
		SharedPreferences.Editor editor = sharedPreferences.edit();
		if (null == editor) {
			return false;
		}
		editor.putString(key, value);
		return editor.commit();
	}

	public static boolean putInt(Context context, String fileName, String key, int value) {
		if (null == context) {
			return false;
		}
		if (null == fileName || fileName.isEmpty() 
				|| null == key || key.isEmpty()) {
			return false;
		}
		SharedPreferences sharedPreferences = context.getSharedPreferences(fileName, 0);
		if (null == sharedPreferences) {
			return false;
		}
		SharedPreferences.Editor editor = sharedPreferences.edit();
		if (null == editor) {
			return false;
		}
		editor.putInt(key, value);
		return editor.commit();
	}
	
	public static boolean putBoolean(Context context, String fileName, String key, boolean value) {
		if (null == context) {
			return false;
		}
		if (null == fileName || fileName.isEmpty() 
				|| null == key || key.isEmpty()) {
			return false;
		}
		SharedPreferences sharedPreferences = context.getSharedPreferences(fileName, 0);
		if (null == sharedPreferences) {
			return false;
		}
		SharedPreferences.Editor editor = sharedPreferences.edit();
		if (null == editor) {
			return false;
		}
		editor.putBoolean(key, value);
		return editor.commit();
	}

	public static String getString(Context context, String fileName, String key, String defValue) {
		if (null == context) {
			return null;
		}
		if (null == fileName || fileName.isEmpty() 
				|| null == key || key.isEmpty()) {
			return null;
		}
		SharedPreferences sharedPreferences = context.getSharedPreferences(fileName, 0);
		if (null == sharedPreferences) {
			return null;
		}
		
		return sharedPreferences.getString(key, defValue);
	}
	
	public static int getInt(Context context, String fileName, String key, int defValue) {
		if (null == context) {
			return -1;
		}
		if (null == fileName || fileName.isEmpty() 
				|| null == key || key.isEmpty()) {
			return -1;
		}
		SharedPreferences sharedPreferences = context.getSharedPreferences(fileName, 0);
		if (null == sharedPreferences) {
			return -1;
		}

		return sharedPreferences.getInt(key, defValue);
	}

	public static boolean getBoolean(Context context, String fileName, String key, boolean defValue) {
		if (null == context) {
			return false;
		}
		if (null == fileName || fileName.isEmpty()
				|| null == key || key.isEmpty()) {
			return false;
		}
		SharedPreferences sharedPreferences = context.getSharedPreferences(fileName, 0);
		if (null == sharedPreferences) {
			return false;
		}

		return sharedPreferences.getBoolean(key, defValue);
	}
	
	public static Map<String, ?> getAll(Context context, String fileName) {
		if (null == context) {
			return null;
		}
		if (null == fileName || fileName.isEmpty() ) {
			return null;
		}
		SharedPreferences sharedPreferences = context.getSharedPreferences(fileName, 0);
		if (null == sharedPreferences) {
			return null;
		}
		return sharedPreferences.getAll();
	}
	
	public static boolean remove(Context context, String fileName, String key) {
		if (null == context) {
			return false;
		}
		if (null == fileName || fileName.isEmpty() 
				|| null == key || key.isEmpty()) {
			return false;
		}
		SharedPreferences sharedPreferences = context.getSharedPreferences(fileName, 0);
		if (null == sharedPreferences) {
			return false;
		}
		SharedPreferences.Editor editor = sharedPreferences.edit();
		if (null == editor) {
			return false;
		}
		editor.remove(key);
		return editor.commit();
	}
	
	public static boolean clear(Context context, String fileName) {
		if (null == context) {
			return false;
		}
		if (null == fileName || fileName.isEmpty()) {
			return false;
		}
		SharedPreferences sharedPreferences = context.getSharedPreferences(fileName, 0);
		if (null == sharedPreferences) {
			return false;
		}
		SharedPreferences.Editor editor = sharedPreferences.edit();
		if (null == editor) {
			return false;
		}
		editor.clear();
		return editor.commit();
	}
}
