package bink.you.fcmcheck;

import android.animation.ValueAnimator;
import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.os.Bundle;

import com.google.android.gms.common.ConnectionResult;
import com.google.android.gms.common.GoogleApiAvailability;
import com.google.android.material.floatingactionbutton.FloatingActionButton;

import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;
import bink.you.fcmcheck.utils.RequestListener;
import bink.you.fcmcheck.utils.SharedPreferencesTools;
import bink.you.fcmcheck.utils.VolleyRequestTools;
import bink.you.progress.CircularProgressButton;

import android.util.Log;
import android.view.View;
import android.view.Menu;
import android.view.MenuItem;
import android.view.animation.AccelerateDecelerateInterpolator;

public class MainActivity extends AppCompatActivity {

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		Toolbar toolbar = findViewById(R.id.toolbar);
		//检查网络
		final CircularProgressButton cpbNetCheck = findViewById(
				R.id.cpb_net_test);
        cpbNetCheck.setIndeterminateProgressMode(true);
        cpbNetCheck.setOnClickListener(new View.OnClickListener() {
			@Override
			public void onClick(View view) {
                cpbNetCheck.setProgress(0);
                cpbNetCheck.setProgress(50);
				if (isNetworkAvailable(MainActivity.this)) {
					simulateSuccessProgress(cpbNetCheck);
				} else {
					simulateErrorProgress(cpbNetCheck);
				}
			}
		});

		final CircularProgressButton circularProgressButton = findViewById(
				R.id.cpb_test);
		circularProgressButton.setIndeterminateProgressMode(true);
		circularProgressButton.setOnClickListener(new View.OnClickListener() {
			@Override
			public void onClick(View view) {
				circularProgressButton.setProgress(0);
				circularProgressButton.setProgress(50);
				if (onCheckGooglePlayServices()) {
					simulateSuccessProgress(circularProgressButton);
				} else {
					simulateErrorProgress(circularProgressButton);
				}
			}
		});

		final CircularProgressButton cpbTokenCheck = findViewById(
				R.id.cpb_token_test);
		cpbTokenCheck.setIndeterminateProgressMode(true);
		cpbTokenCheck.setOnClickListener(new View.OnClickListener() {
			@Override
			public void onClick(View view) {
				cpbTokenCheck.setProgress(0);
				cpbTokenCheck.setProgress(50);
				VolleyRequestTools.getFcmToken(MainActivity.this,
						new RequestListener() {
							@Override
							public void onSuccess(String success) {
								simulateSuccessProgress(cpbTokenCheck);
							}

							@Override
							public void onFailed(String fail) {
								simulateErrorProgress(cpbTokenCheck);
							}
						});
			}
		});

		final CircularProgressButton cpbSendTest = findViewById(
				R.id.cpb_send_test);
		cpbSendTest.setIndeterminateProgressMode(true);
		cpbSendTest.setOnClickListener(new View.OnClickListener() {
			@Override
			public void onClick(View view) {
				cpbSendTest.setProgress(0);
				String fcmToken = SharedPreferencesTools
						.getString(MainActivity.this, "app_data", "token", "");
				cpbSendTest.setProgress(50);
				VolleyRequestTools.pushFCM(MainActivity.this, fcmToken,
						new RequestListener() {
							@Override
							public void onSuccess(String success) {
								simulateSuccessProgress(cpbSendTest);
							}

							@Override
							public void onFailed(String fail) {
								simulateErrorProgress(cpbSendTest);
							}
						});
			}
		});
		setSupportActionBar(toolbar);
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

		// noinspection SimplifiableIfStatement
		if (id == R.id.action_settings) {
			return true;
		}

		return super.onOptionsItemSelected(item);
	}

	private boolean onCheckGooglePlayServices() {
		// 验证是否已在此设备上安装并启用Google Play服务，以及此设备上安装的旧版本是否为此客户端所需的版本
		int code = GoogleApiAvailability.getInstance()
				.isGooglePlayServicesAvailable(this);
		if (code == ConnectionResult.SUCCESS) {
			Log.e("check", "支持Google服务");
			return true;
		} else {
			Log.e("check", "不支持Google服务");
			/**
			 * 依靠 Play 服务 SDK 运行的应用在访问 Google Play 服务功能之前，应始终检查设备是否拥有兼容的 Google
			 * Play 服务 APK。 我们建议您在以下两个位置进行检查：主 Activity 的 onCreate() 方法中，及其
			 * onResume() 方法中。 onCreate() 中的检查可确保该应用在检查成功之前无法使用。 onResume()
			 * 中的检查可确保当用户通过一些其他方式返回正在运行的应用（比如通过返回按钮）时，检查仍将继续进行。 如果设备没有兼容的 Google
			 * Play 服务版本，您的应用可以调用以下方法，以便让用户从 Play 商店下载 Google Play 服务。
			 * 它将尝试在此设备上提供Google Play服务。如果Play服务已经可用，则Task可以立即完成返回。
			 */
			// GoogleApiAvailability.getInstance().makeGooglePlayServicesAvailable(this);

			// 或者使用以下代码

			/**
			 * 通过isUserResolvableError来确定是否可以通过用户操作解决错误
			 */
			// if
			// (GoogleApiAvailability.getInstance().isUserResolvableError(code))
			// {
			// /**
			// * 返回一个对话框，用于解决提供的errorCode。
			// * @param activity 用于创建对话框的父活动
			// * @param code 通过调用返回的错误代码
			// * @param activity 调用startActivityForResult时给出的requestCode
			// */
			// GoogleApiAvailability.getInstance().getErrorDialog(this, code,
			// 200).show();
			// }

		}
		return false;
	}

	private void simulateSuccessProgress(final CircularProgressButton button) {
		ValueAnimator widthAnimation = ValueAnimator.ofInt(1, 100);
		widthAnimation.setDuration(1500);
		widthAnimation.setInterpolator(new AccelerateDecelerateInterpolator());
		widthAnimation
				.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
					@Override
					public void onAnimationUpdate(ValueAnimator animation) {
						Integer value = (Integer) animation.getAnimatedValue();
						button.setProgress(value);
					}
				});
		widthAnimation.start();
	}

	private void simulateErrorProgress(final CircularProgressButton button) {
		ValueAnimator widthAnimation = ValueAnimator.ofInt(1, 99);
		widthAnimation.setDuration(1500);
		widthAnimation.setInterpolator(new AccelerateDecelerateInterpolator());
		widthAnimation
				.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() {
					@Override
					public void onAnimationUpdate(ValueAnimator animation) {
						Integer value = (Integer) animation.getAnimatedValue();
						button.setProgress(value);
						if (value == 99) {
							button.setProgress(-1);
						}
					}
				});
		widthAnimation.start();
	}

	public static boolean isNetworkAvailable(Context context) {
		ConnectivityManager connectivity = (ConnectivityManager) context
				.getSystemService(Context.CONNECTIVITY_SERVICE);
		if (connectivity == null) {
			Log.i("NetWorkState", "Unavailabel");
			return false;
		} else {
			NetworkInfo[] info = connectivity.getAllNetworkInfo();
			if (info != null) {
				for (int i = 0; i < info.length; i++) {
					if (info[i].getState() == NetworkInfo.State.CONNECTED) {
						Log.i("NetWorkState", "Availabel");
						return true;
					}
				}
			}
		}
		return false;
	}
}
