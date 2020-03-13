package bink.you.fcmcheck;

import android.os.Bundle;

import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.GoogleApiAvailability;
import com.google.android.material.floatingactionbutton.FloatingActionButton;
import com.google.android.material.snackbar.Snackbar;

import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;
import bink.you.fcmcheck.utils.RequestListener;
import bink.you.fcmcheck.utils.SharedPreferencesTools;
import bink.you.fcmcheck.utils.VolleyRequestTools;

import android.util.Log;
import android.view.View;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {
    private TextView mTvCheckResult = null;
    private String mResult = "";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Toolbar toolbar = findViewById(R.id.toolbar);
        VolleyRequestTools.getFcmToken(this, new RequestListener() {
            @Override
            public void onSuccess(String success) {

            }

            @Override
            public void onFailed(String fail) {

            }
        });
        setSupportActionBar(toolbar);

        FloatingActionButton fab = findViewById(R.id.fab);
        fab.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
//                Snackbar.make(view, "Replace with your own action", Snackbar.LENGTH_LONG)
//                        .setAction("Action", null).show();


                String fcmToken = SharedPreferencesTools.getString(MainActivity.this,"app_data","token","");
//                VolleyRequestTools.pushFCMV1(MainActivity.this,fcmToken);
                VolleyRequestTools.pushFCM(MainActivity.this,fcmToken);
                Toast.makeText(MainActivity.this, "fcm token: "+fcmToken, Toast.LENGTH_SHORT).show();
                Log.e("token",fcmToken);
            }
        });
        mTvCheckResult = findViewById(R.id.tv_check_result);
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id==R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }


    private void onCheckGooglePlayServices() {
        // 验证是否已在此设备上安装并启用Google Play服务，以及此设备上安装的旧版本是否为此客户端所需的版本
        int code = GoogleApiAvailability.getInstance().isGooglePlayServicesAvailable(this);
        if (code==ConnectionResult.SUCCESS) {
            Log.e("check","支持Google服务");
            mResult += "支持Google服务//n";
            // 支持Google服务
        } else {
            mResult += "不支持Google服务//n";
            Log.e("check","不支持Google服务");
            /**
             * 依靠 Play 服务 SDK 运行的应用在访问 Google Play 服务功能之前，应始终检查设备是否拥有兼容的 Google Play 服务 APK。
             * 我们建议您在以下两个位置进行检查：主 Activity 的 onCreate() 方法中，及其 onResume() 方法中。
             * onCreate() 中的检查可确保该应用在检查成功之前无法使用。
             * onResume() 中的检查可确保当用户通过一些其他方式返回正在运行的应用（比如通过返回按钮）时，检查仍将继续进行。
             * 如果设备没有兼容的 Google Play 服务版本，您的应用可以调用以下方法，以便让用户从 Play 商店下载 Google Play 服务。
             * 它将尝试在此设备上提供Google Play服务。如果Play服务已经可用，则Task可以立即完成返回。
             */
            GoogleApiAvailability.getInstance().makeGooglePlayServicesAvailable(this);

            // 或者使用以下代码

            /**
             * 通过isUserResolvableError来确定是否可以通过用户操作解决错误
             */
            if (GoogleApiAvailability.getInstance().isUserResolvableError(code)) {
                /**
                 * 返回一个对话框，用于解决提供的errorCode。
                 * @param activity  用于创建对话框的父活动
                 * @param code      通过调用返回的错误代码
                 * @param activity  调用startActivityForResult时给出的requestCode
                 */
                GoogleApiAvailability.getInstance().getErrorDialog(this, code, 200).show();
            }

        }
    }
    public void onCheckEvnClick(View view) {
        onCheckGooglePlayServices();
        VolleyRequestTools.getFcmToken(this, new RequestListener() {
            @Override
            public void onSuccess(String success) {
                mResult += success+"//n";
            }
            @Override
            public void onFailed(String fail) {

                mResult += fail+"//n";
            }
        });
        mTvCheckResult.setText(mResult);
    }
}
