package bink.you.fcmcheck.utils;

import android.util.Log;

import java.util.HashMap;
import java.util.Map;

import org.json.JSONObject;

import com.android.volley.AuthFailureError;
import com.android.volley.Response;
import com.android.volley.toolbox.JsonObjectRequest;

import androidx.annotation.Nullable;
import bink.you.fcmcheck.constants.Constants;

public class MyJsonObjectRequest extends JsonObjectRequest {
    private String authorization = Constants.SERVER_KEY;
    public MyJsonObjectRequest(int method, String url, @Nullable JSONObject jsonRequest, Response.Listener<JSONObject> listener, @Nullable Response.ErrorListener errorListener) {
        super(method, url, jsonRequest, listener, errorListener);
    }

    public MyJsonObjectRequest setAuthorization(String authorization){
        this.authorization = authorization;
        return this;
    }

    @Override
    public Map<String, String> getHeaders() throws AuthFailureError {
        Map<String, String> headers = new HashMap<String, String>();
        headers.put("Charset", "UTF-8");
        headers.put("Content-Type", "application/json");
        String Authorization = "key="+ authorization;
        Log.e("Authorization=",Authorization);
        headers.put("Authorization", Authorization);
        return headers;
    }
}
