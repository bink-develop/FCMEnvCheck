package bink.you.fcmcheck.utils;

import org.json.JSONException;
import org.json.JSONObject;

import com.android.volley.Request;
import com.android.volley.RequestQueue;
import com.android.volley.Response;
import com.android.volley.VolleyError;
import com.android.volley.toolbox.JsonObjectRequest;
import com.android.volley.toolbox.Volley;
import com.google.android.gms.tasks.OnCompleteListener;
import com.google.android.gms.tasks.Task;
import com.google.firebase.iid.FirebaseInstanceId;
import com.google.firebase.iid.InstanceIdResult;

import android.content.Context;
import android.text.TextUtils;
import android.util.Log;
import android.widget.Toast;

import androidx.annotation.NonNull;
import bink.you.fcmcheck.R;
import bink.you.fcmcheck.constants.Constants;

public class VolleyRequestTools {


    public static void getFcmToken(final Context context,final RequestListener requestListener){

        // Get token
        FirebaseInstanceId.getInstance().getInstanceId()
                .addOnCompleteListener(new OnCompleteListener<InstanceIdResult>() {
                    @Override
                    public void onComplete(@NonNull Task<InstanceIdResult> task) {
                        if (!task.isSuccessful()) {
                            requestListener.onFailed("get token failed");
                            return;
                        }

                        if (task.getResult() == null){
                            requestListener.onFailed("get token failed");
                            return;
                        }
                        // Get new Instance ID token
                        String token = task.getResult().getToken();
                        requestListener.onSuccess(token);
                        SharedPreferencesTools.putString(context,"app_data","token",token);

                        Log.e("token",token);
                    }
                });
    }

    /*
    {
  "message":{
    "to":"bk3RNwTe3H0:CI2k_HHwgIpoDKCIZvvDMExUdFQ3P1...",
    "priority":"high",
    "ttl":"0",//0 stand for send immediately
    "notification":{
      "title":"Portugal vs. Denmark",
      "body":"great match!"
      "icon":"great match!"//drawable resource
      "color":"great match!"//The notification's icon color,#rrggbb format
      "sound":"great match!"//Supports "default" or the filename of a sound resource bundled in the app. Sound files must reside in /res/raw/.
      "tag":"great match!"//If specified and a notification with the same tag is already being shown, the new notification replaces the existing one in the notification drawer.
      "click_action":"great match!"// If specified, an activity with a matching intent filter is launched when a user clicks on the notification.
      "channel_id":"great match!"//A timestamp in RFC3339 UTC "Zulu" format
      "notification_priority":"great match!"//PRIORITY_MAX
      "default_sound":boolean //If set to true, use the Android framework's default sound for the notification.
      "default_vibrate_timings":boolean//If set to true, use the Android framework's default vibrate pattern for the notification.
      "default_light_settings":boolean//If set to true, use the Android framework's default LED light settings for the notification.
      "vibrate_timings": [
            string
       ],
      "visibility":"great match!"//PUBLIC
      "notification_count":"great match!"
      "image":"great match!"
        "light_settings": {
            "color": {
            object (Color)
            },
            "light_on_duration": string,
            "light_off_duration": string
            }
      },
    },
    "android":{
       "ttl":"86400s",
       "notification"{
         "click_action":"OPEN_ACTIVITY_1"
       }
     },
    "data" : {
      "Nick" : "Mario",
      "Room" : "PortugalVSDenmark"
    }
  }
}
     */
    public static void pushFCM(final Context context,String fcmToken,final RequestListener requestListener){
        if (TextUtils.isEmpty(fcmToken)){
            fcmToken = "c9rJJW_VEBM:APA91bE_mCMKjeDmmy5vTpqBgoIDxu-s6vgG540-c0r3dnu1q7sE-awUkkahymfP8875t2ktH_X58Dqn9qjcbo74d_ORHGJS3MeljMZZQF9h2Wz4tcF6IQlDw4Jclj9FWAhTf5CKesIT";
        }
        RequestQueue requestQueue = Volley.newRequestQueue(context);
        String url = "https://fcm.googleapis.com/fcm/send";
        JSONObject params = new JSONObject();
        try {
            JSONObject data = new JSONObject();
            data.put("score","0111");
            data.put("time","15:10");
            params.put("to", fcmToken);
            params.put("priority", "high");
            params.put("ttl", "0");
            JSONObject notification = new JSONObject();
            notification.put("title","Say Hello");
            notification.put("body","Nice to meet you!");
            notification.put("icon", R.drawable.ic_stat_ic_notification);
            notification.put("sound", "ring");
            notification.put("default_sound", false);
            notification.put("channel_id", "test-1");
            notification.put("notification_priority","PRIORITY_MAX");
            //params.put("data",data);
            params.put("notification",notification);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        MyJsonObjectRequest jsonObjectRequest = new MyJsonObjectRequest(Request.Method.POST, url, params, new Response.Listener<JSONObject>() {
            @Override
            public void onResponse(JSONObject response) {
                Log.e("Akuvox",response.toString());
                int success = -1;
                int failure = -1;
                try {
                    success = response.getInt("success");
                    failure = response.getInt("failure");
                } catch (JSONException e) {
                    e.printStackTrace();
                }
                if (success == 1){
                    requestListener.onSuccess(response.toString());
                }
                Toast.makeText(context, "send fcm message success: " + success + ";failure: " + failure, Toast.LENGTH_SHORT).show();

            }
        }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {

                Log.e("AkuvoxText", "send fcm message result: " + error.toString());
                requestListener.onFailed(error.toString());
            }
        }).setAuthorization(Constants.SERVER_KEY);
        requestQueue.add(jsonObjectRequest);
    }

    /**
     * v1 HTTP
     * @param context
     * @param fcmToken
     */
    public static void pushFCMV1(final Context context,String fcmToken){
        RequestQueue requestQueue = Volley.newRequestQueue(context);
        String url = " https://fcm.googleapis.com/v1/projects/callpushtest/messages:send";
        JSONObject params = new JSONObject();
        try {
            JSONObject message = new JSONObject();
            JSONObject data = new JSONObject();
            data.put("score","0111");
            data.put("time","15:10");

            message.put("token",fcmToken);
            message.put("data",data);

            params.put("validate_only",false);
            params.put("message",message);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        MyJsonObjectRequest jsonObjectRequest = new MyJsonObjectRequest(Request.Method.POST, url, params, new Response.Listener<JSONObject>() {
            @Override
            public void onResponse(JSONObject response) {
                int result = -1;
                int message = -1;
                try {
                    result = response.getInt("success");
                    message = response.getInt("failure");
                } catch (JSONException e) {
                    e.printStackTrace();
                }
                Toast.makeText(context, "post fcm token result: " + result + ";message: " + message, Toast.LENGTH_SHORT).show();

            }
        }, new Response.ErrorListener() {
            @Override
            public void onErrorResponse(VolleyError error) {

                Log.e("AkuvoxText", "open door err: " + error.toString());
            }
        }).setAuthorization(Constants.SERVER_KEY_NEW);
        requestQueue.add(jsonObjectRequest);

    }


}
