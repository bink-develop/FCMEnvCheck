package bink.you.fcmcheck.utils;

public interface RequestListener {
    void onSuccess(String success);
    void onFailed(String fail);
}
