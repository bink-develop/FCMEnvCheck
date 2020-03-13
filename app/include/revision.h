#ifndef AKUVOX_ANDROID_MOBILE_ATALK
#define AKUVOX_ANDROID_MOBILE_ATALK
/*********************************************
*  New Version：0.0.0.0
*  Old Version：-
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/08/22
*  Reason     ：1、初稿, 完成基本包目录结构
*  Modified   : 1、无
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.1
*  Old Version：0.0.0.0
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/08/22
*  Reason     ：1、修改引入包以及本地文件
*  Modified   : 1、修改引入包以及本地文件
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.2
*  Old Version：0.0.0.1
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/08/24
*  Reason     ：1、H5回调Android基类预留
*  Modified   : 1、H5回调Android基类预留
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.3
*  Old Version：0.0.0.2
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/08/28
*  Reason     ：1、model,jni,工具类等公用提交
*  Modified   : 1、此次提交有部分注释，需要开发其功能打开注释
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.4
*  Old Version：0.0.0.3
*  Author     ：phoenixylf/Self
*  CommitType : 新增
*  Date       ：2017/08/29
*  Reason     ：1、增加一些相关的材料
*  Modified   :
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.5
*  Old Version：0.0.0.4
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/08/29
*  Reason     ：1、整理model 以及其他报错
*  Modified   :
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.6
*  Old Version：0.0.0.5
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/09/06
*  Reason     ：1、整理资源文件以及命名
*  Modified   :
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.7
*  Old Version：0.0.0.6
*  Author     ：phoenixylf/Self
*  CommitType : 新增
*  Date       ：2017/09/08
*  Reason     ：1、向服务器发送通话记录
*  Modified   :
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.8
*  Old Version：0.0.0.7
*  Author     ：phoenixylf/Self
*  CommitType : 新增
*  Date       ：2017/09/08
*  Reason     ：1、修改BaseActivity和BaseJsActivity，支持根据加载的h5的title来改变title
*  Modified   :
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.9
*  Old Version：0.0.0.8
*  Author     ：phoenixylf/Self
*  CommitType : 新增
*  Date       ：2017/09/12
*  Reason     ：1、向服务器提交通话历史记录，android5.0 不支持时间格式为“YYYY-MM-DD HH:MM:SS”年份大写模式，改为“yyyy-MM-dd hh:mm:ss”
*  Modified   :
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.10
*  Old Version：0.0.0.9
*  Author     ：phoenixylf/Self
*  CommitType : 新增
*  Date       ：2017/09/15
*  Reason     ：1、整里一个URLTool，实现URL的拼接，与登录获取的信息结合起来。
*  Modified   :
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.11
*  Old Version：0.0.0.10
*  Author     ：phoenixylf/Self
*  CommitType : 新增
*  Date       ：2017/09/18
*  Reason     ：1、整改URL，为index.html  personal.html alarm.html页面增加时间戳项。
*               2、修改Base64 加密基串中的 ‘/’  ->  ‘-’,因为在route不支持‘/’,而原来的基串在某些情况下会出现加密项包含'/'
*  Modified   :
*  Issue      : 无
*  Affected   : index.html personal.html alarm.html
**********************************************/
/*********************************************
*  New Version：0.0.0.12
*  Old Version：0.0.0.11
*  Author     ：ivan/Self
*  CommitType : 新增
*  Date       ：2017/09/19
*  Reason     ：1、device表中增加mac字段。
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.13
*  Old Version：0.0.0.12
*  Author     ：phoenixylf/Self
*  CommitType : 新增
*  Date       ：2017/09/19
*  Reason     ：1、通话历史记录增加设备名称的值。
*               2、增加liveview的rtsp地址。
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.14
*  Old Version：0.0.0.13
*  Author     ：ivan/Self
*  CommitType : 新增
*  Date       ：2017/09/19
*  Reason     ：1、下载用户配置操作移到MainService，在MainService init/网络状态改变时/登录完成时会执行下载用户配置的操作
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.15
*  Old Version：0.0.0.14
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/09/20
*  Reason     ：1、处理接收Alarm
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.16
*  Old Version：0.0.0.15
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/09/20
*  Reason     ：1、新增Dclient初始化结束后，发消息到主页面更新Dclient状态。
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.17
*  Old Version：0.0.0.16
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/09/22
*  Reason     ：1、修改新需求
*  Modified   : 1、修改来电视频预览失败
*               2、左侧边栏单词换一下：Account-》My Profile
*               3、侧边栏的sip状态和长连接状态，只有在任何一个有问题是才双双显示，都OK 的情况下不显示
*               4\Alarm通知要改，将原来的跳转修改为处理，发送post通知修改，并返回修改结果，再请求剩余Alarm 个数，并提示。其中如果自己处理的不需要提示，
*               别人处理的需要继续提示未处理的Alarm个数。根据 User来区分是别人处理还是自己处理
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.18
*  Old Version：0.0.0.17
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/09/22
*  Reason     ：1、修改卡顿问题
*  Modified   : 1、替换新的mediaengine包
*                2、修改rtsp卡顿问题
*               3、修改Service接收消息
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.19
*  Old Version：0.0.0.18
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/09/22
*  Reason     ：1、增加RtspView共用的问题
*  Modified   : 1、增加RtspView共用的问题
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.20
*  Old Version：0.0.0.19
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/09/26
*  Reason     ：1、修改不合理的处理
*  Modified   : 1、增加来电用Rtsp进行视频预览
*               2、修改网络不好，以及服务器断开连接无提示： 需要提示：Service Unavailable
*               3、修改铃声和Alarm均用固定的文件，且不能同时播放，只能播放后者
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.21
*  Old Version：0.0.0.20
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/09/26
*  Reason     ：1、修改login背景图
*  Modified   : 1、将原来vbell的图片进行修改
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.22
*  Old Version：0.0.0.21
*  Author     ：Libra/Self
*  CommitType : 修复
*  Date       ：2017/09/28
*  Reason     ：1、6619 1.0.0.8版本，告警声音提示太小，建议调大
*               2、6598 1.0.0.8版本 APP去电、通话界面按手机悬浮的返回按钮，通话界面会消失，但是通话还在
*               3、6604 1.0.0.8版本，APP在alarm界面收到新的alarm不会显示要切换界面才会显示新的alarm（不会动态刷新状态）
*               4、6627 1.0.0.8版本，R27视频来电预览界面先出现一个绿画面然后再进入正常的预览画面
*               5、6645 1.0.0.10版本，进入My file界面标题显示会先刷Personal Info然后再跳为Personal Data
*  Modified   : 1、将音量设置为左右声道最大
*               2、监听onKeyDown方法，对返回按键，需要挂断通话，以及Finish页面
*               3、在接收到Alarm后，进行刷新Alarm webView的操作
*               4、开放RtspVideoView中，VLC的相关设置
*               5、跳转页面出入的titleId 不对次进行处理，因为titleId改用H5获取的title
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.23
*  Old Version：0.0.0.22
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/09/26
*  Reason     ：1、6647 1.0.0.10版本设备有来电，APP有几率收不到设备来电
*               2、修改App崩掉的问题
*               3、修改代码不合理
*  Modified   : 1、开启UDP保活
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.24
*  Old Version：0.0.0.23
*  Author     ：phoenixylf/Self
*  CommitType : 新增
*  Date       ：2017/09/29
*  Reason     ：1、6649 1.0.0.10版本APP与26/27视频通话中，APP端显示的27/26的视频画面有时候会出现黑屏
*               2、对onkeydown函数  对key_back进行特殊处理，其他的按照原来的方式
*  Modified   : 1、增加一个不启用硬件编解码的兼容表，针对某些特定机型不进行已经编解码
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.25
*  Old Version：0.0.0.24
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/09/29
*  Reason     ：1、修改MediaPlayer播放音乐的不规范性
*  Modified   : 1、修改MediaPlayer播放音乐的不规范性
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.26
*  Old Version：0.0.0.25
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/09/29
*  Reason     ：1、1.0.0.13版本APP端收到alarm信息点击deal会几率性直接退出程序返回手机界面
*  Modified   : 1、修改MediaPlayer播放流程，每次接收到Alarm，重新开启线程，将之前的线程关闭，释放资源。
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.27
*  Old Version：0.0.0.26
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/10/20
*  Reason     ：1、增加主页面历史记录拨打电话功能
*  Modified   : 1、增加主页面历史记录拨打电话功能
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.28
*  Old Version：0.0.0.27
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/10/20
*  Reason     ：1、修改Smartplus装在47、48上面Splash页面失真，登陆页面异常的情况
*  Modified   : 1、修改Smartplus装在47、48上面Splash页面失真，登陆页面异常的情况
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.29
*  Old Version：0.0.0.28
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/10/20
*  Reason     ：1、修改Volley框架修改为同时支持http、https
*  Modified   : 1、修改Volley框架修改为同时支持http、https
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.30
*  Old Version：0.0.0.29
*  Author     ：Ivan/Self
*  CommitType : 新增
*  Date       ：2017/10/17
*  Reason     ：1、5029 同步vbell的google推送
*  Modified   : 1、新增MyFirebaseInstanceIDService
*                MyFirebaseMessagingService
*                MyJobService
*  Issue      : zentao task#5029
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.31
*  Old Version：0.0.0.30
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/10/17
*  Reason     ：1、多种联合推送
*  Modified   : 1、新增友盟、小米、华为推送
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.32
*  Old Version：0.0.0.31
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/10/20
*  Reason     ：1、修改华为小米推送上报token流程
*  Modified   : 1、修改华为小米推送上报token流程
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.33
*  Old Version：0.0.0.32
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/10/20
*  Reason     ：1、联调修改推送流程
*  Modified   : 1、联调修改推送流程
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.34
*  Old Version：0.0.0.33
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/11/2
*  Reason     ：1、5086 删除设备、账号后，Sip从设备和App移除
*               2、DealAlarm 流程 请求需要添加http加一个header x-auth-token 用于处理Alarm信息
*               3、修改Deal Alarm后，主页面Alarm个数 显示不正确的bug
*               4、调试google FCM推送
*  Modified   : 1、5086 删除设备、账号后，Sip从设备和App移除
*               2、DealAlarm 流程 请求需要添加http加一个header x-auth-token 用于处理Alarm信息
*               3、修改Deal Alarm后，主页面Alarm个数 显示不正确的bug
*               4、调试google FCM推送
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.35
*  Old Version：0.0.0.34
*  Author     ：phoenixylf/Self
*  CommitType : 新增
*  Date       ：2017/11/6
*  Reason     ：1、task#5116 Export log功能补充
*  Modified   : 1、开启导出日志路径的保存功能。
                2、导出日志路径的最顶级为对应的包名，此时页面显示".."，从而不能点击上层目录。
*  Issue      : zentao task#5116
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.36
*  Old Version：0.0.0.35
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/11/7
*  Reason     ：1、登录页面，点击登录，无法连接服务器时，提示不友好
*               2、通话页面布局问题
*               3、无法显示对方的名字和号码
*               4、未处理Alarm登陆提示
*  Modified   : 1、登录页面，点击登录，无法连接服务器时，提示不友好
*               2、通话页面布局问题
*               3、无法显示对方的名字和号码
*               4、未处理Alarm登陆提示
*  Issue      : zentao task#5112, 5113, 5114
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.37
*  Old Version：0.0.0.36
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/11/7
*  Reason     ：1、网络状态差时，支持视频通话转音频
*               2、室外机rtsp监控时，平台密码下发
*  Modified   : 1、增加视频转音频逻辑和实现
*               2、数据库中增加Device rtsp_passwd字段，并且升级数据库
*  Issue      : zentao task#5129, 5130
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.38
*  Old Version：0.0.0.37
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/11/10
*  Reason     ：1、室外机rtsp监控时，平台密码下发,加密，播放
*  Modified   : 1、将带密码的rtsp地址进行拼接，播放。
*  Issue      : zentao task#5130
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.39
*  Old Version：0.0.0.38
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/11/14
*  Reason     ：1、rest接口修改为https
*               2、调试Google Fcm推送，接收消息并提示Notifacation
*  Modified   : 1、增加FCM推送不分手机机型，其他推送华为手机走华为推送，
*               其他都走小米手机。FCM与小米、华为并行推送。
*  Issue      : zentao task#5130
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.40
*  Old Version：0.0.0.39
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/11/15
*  Reason     ：1、修改Https证书不信任的问题
*               2、修改Sip账号注册的超时时间
*  Modified   : 1、在请求网络前，允许所有的SSL
*               2、将超时时间由3600修改为120
*  Issue      : zentao task#5130
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.41
*  Old Version：0.0.0.40
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/11/20
*  Reason     ：1、UserAgent改为App-SmartPlus-Android
*  Modified   : 1、UserAgent改为App-SmartPlus-Android并加版本号
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.42
*  Old Version：0.0.0.41
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/11/20
*  Reason     ：1、7045 Android-1.0.0.20版本，后台运行有来电再挂断，然后从近期任务栏再次进入APP，会显示呼叫5008的界面
*  Modified   : 1、2次点击回退后，应该退出应用，Sip注销，不会接收到来电。
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.43
*  Old Version：0.0.0.42
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/11/20
*  Reason     ：1、77102 Android-1.0.0.20版本，忘记密码输入UID和Email都会提示Account和Email不存在
*  Modified   : 1、修改写死的请求地址
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.44
*  Old Version：0.0.0.43
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/11/22
*  Reason     ：1、7045 Android-1.0.0.20版本，后台运行有来电再挂断，然后从近期任务栏再次进入APP，会显示呼叫5008的界面
*               2、修改Sip指示灯的位置
*  Modified   : 1、增加判断，如果不存在通话，finish当前页面
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.45
*  Old Version：0.0.0.44
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/12/11
*  Reason     ：1、部分手机接收不到Alarm
*  Modified   : 1、修改上报Token的前置条件
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.46
*  Old Version：0.0.0.45
*  Author     ：Libra/Self
*  CommitType : 新增
*  Date       ：2017/12/13
*  Reason     ：1、增加锁屏保活
*               2、7390 通话界面按Cancel键的右侧的空白处会挂断通话
*               3、7108 Android-1.0.0.20 版本，后台关闭后再打开APP，连接状态不正常需要退出再进入才会正常
*  Modified   : 1、修改了通话页面的布局
*               2、修改了Sip注册端口的使用
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.47
*  Old Version：0.0.0.46
*  Author     ：Ivan/Self
*  CommitType : Bug
*  Date       ：2017/12/14
*  Reason     ：1、7095 Android-1.0.0.20版本，APP全屏旋转后，对方看到的图像是倒了90度
*  Modified   : 1、CallActivity中增加OrientationEventListener，在屏幕方向改变时setCameraRotation
*  Issue      :zentao Bug#7095
*  Affected   :CallActivity
**********************************************/
/*********************************************
*  New Version：0.0.0.48
*  Old Version：0.0.0.47
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2017/12/14
*  Reason     ：1、7074 Android-1.0.0.20版本，在APP Info界面，返回上一级界面会自动切换到Device界面
*  Modified   : 1、在MainActivity中修改，返回上一层在onResume中进行重新获取url加载，修改到在onCreate中，需要H5配合下拉刷新
*  Issue      :zentao Bug#7074
*  Affected   :MainActivity
**********************************************/
/*********************************************
*  New Version：0.0.0.49
*  Old Version：0.0.0.48
*  Author     ：Bink/Libra
*  CommitType : Bug
*  Date       ：2017/12/18
*  Reason     ：1、bug 7046 Android-1.0.0.20版本，门口机呼叫APP，再取消呼叫，APP上没有提示未接，历史记录会记录一条未接和一条已接
*  Modified   : 1、修改流程，将FinishCall后面的hangupCall函数调用改为makeHangupCall
*  Issue      :zentao Bug#7046
*  Affected   :CallModel
**********************************************/
/*********************************************
*  New Version：0.0.0.50
*  Old Version：0.0.0.49
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2017/12/18
*  Reason     ：1、 Android SmartPlus的Google FCM离线推送不工作
*  Modified   : 1、修改流程，用48G以及三星手机测试，如果获取到FcmToken，将其存在数据库，上报过程中，从数据库中获取token
*  Issue      :zentao Bug#7426
*  Affected   :MainService
**********************************************/


//===========================================================V 1.2

/*********************************************
*  New Version：0.0.0.51
*  Old Version：0.0.0.50
*  Author     ：Ivan/Self
*  CommitType : task
*  Date       ：2017/12/20
*  Reason     ：5250 通话页面解锁效果
*  Modified   : 1、增加RingProgressBar作为解锁按键
*  Issue      :zentao task#5250
*  Affected   :CallActivity
**********************************************/
/*********************************************
*  New Version：0.0.0.52
*  Old Version：0.0.0.51
*  Author     ：LinKy/Self
*  CommitType : Bug7487: 1.0.0.31版本，APP的来电有几率收不到，抓包查看发现APP端有几率不回180ringing
*  Date       ：2017/12/20
*  Reason     ：在打印log的时候发现Application的生命周期被执行了两次,
* 因此怀疑是因为多个进程同时存在所引起的注册帐号互相顶的问题
* 由于除了主进程外, 其他进程都不具备接收小心的能力, 因此当其他进程抢占注册动作时, 就会引起异常.
*  Modified   :
*           1. 在Application初始的时候增加对包名的判断, 非自己的包名不进行初始化
* (manifest中声明的其他进程service会在包名后增加自己的名字, 如xx.xx.xx:push, xx.xx.xx:channel)
*           2. 修改版本号, 目前已经是V1.1了, 版本号还是1.0的规范, 本次提交也顺带修正
*  Issue      :zentao Bug#7487
*  Affected   :Application生命周期, 可能会影响推送功能
**********************************************/
/*********************************************
*  New Version：0.0.0.53
*  Old Version：0.0.0.52
*  Author     ：LinKy/Self
*  CommitType : Bug7479: 1.0.0.31版本，APP接收到梯口机来电，梯口机挂断后，APP有几率出现一直处于来电预览界面，点击界面的返回、取消、接听按钮均无效
*  Date       ：2017/12/20
*  Reason     ：在排查该问题时发现
               发送HANGUP的时候, 指定的tag错误, 应该为CallActivity, 但程序中指向了MainService.
*  Modified   : hangup的动作目前只有CallActivity的Presenter有处理, 因此这边修改一下tag即可
*  Issue      :zentao Bug#7479
*  Affected   : hangup流程, 可能引起hangup某个流程未执行
**********************************************/
/*********************************************
*  New Version：0.0.0.54
*  Old Version：0.0.0.53
*  Author     ：LinKy/Self
*  CommitType : bugs
*  Date       ：2017/12/20
*  Reason     ：bug7489 1.0.0.31版本，APP间建立通话前5S是黑屏，视频通话中会有马赛克
*  Modified   : 1. IDR间隔降低, 从10s改为5s
*               2. 默认package mode修改为2
*  Issue      :zentao Bug#7489
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.55
*  Old Version：0.0.0.54
*  Author     ：tao.feng/Libra
*  CommitType : bugs
*  Date       ：2017/12/25
*  Reason     ：task#5273 about页面修改
*  Modified   : 1. 修改APP Name 为SmartPlus
*               2. 修改默认值：Copyright © 2017 Akuvox
*  Issue      :zentao task#5273
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.56
*  Old Version：0.0.0.55
*  Author     ：Ivan/self
*  CommitType : bugs
*  Date       ：2017/12/29
*  Reason     ：7079 Android-1.0.0.20版本，APP之间通话和历史记录不应该显示帐号，应该显示名字
*  Modified   : 1.修改makecall接口
*  Issue      :zentao bug#7079
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.57
*  Old Version：0.0.0.56
*  Author     ：Ivan/self
*  CommitType : bugs
*  Date       ：2017/12/29
*  Reason     ：更换DclientAlarmInfo为DclientAlarmMsg
*  Modified   :
*  Issue      :
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.58
*  Old Version：0.0.0.57
*  Author     ：Libra/self
*  CommitType : task
*  Date       ：2018/01/04
*  Reason     ：1.Dclient Motion增加
*               2.二维码登陆功能以及dclient解密接口
*  Modified   :
*  Issue      : zentao5285、5286、5287
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.59
*  Old Version：0.0.0.58
*  Author     ：Ivan/self
*  CommitType :
*  Date       ：2018/01/05
*  Reason     ：代码小整理
*  Modified   :
*  Issue      :
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：0.0.0.60
*  Old Version：0.0.0.59
*  Author     ：Bink/Libra
*  CommitType : Bug
*  Date       ：2018/1/5
*  Reason     ：小米和魅族手机悬浮窗权限开启
*  Modified   : 1.在SplashAcitivity添加小米悬浮窗权限判断，如果没有跳转设置
*               2. MainSerivice中的方法checkAlertWindowPermission中添加小米和魅族的悬浮窗判断。
*               3.去掉AndroidManifest中SplashActivity的启动方式
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.61
*  Old Version：0.0.0.60
*  Author     ：tao.feng/Libra
*  CommitType : Bug
*  Date       ：2018/1/8
*  Reason     ：5280 调试下发device列表，数据库，视频配置
*  Modified   : 1.如果Server端有发送device列表的视频数据，则将该数据保存到数据库中；否则用默认值。
*  Issue      :
*  Affected   : 视频数据配置
**********************************************/
/*********************************************
*  New Version：0.0.0.62
*  Old Version：0.0.0.61
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/9
*  Reason     ：修改手机处于后台时，Motion Notication提示错误的问题
*  Modified   : 1.修改手机处于后台时，Motion Notication提示错误的问题
                2.修改Dcilent注册上报2次状态的bug
                3.修改Dclient 推送token 被截断的问题
*  Issue      :
*  Affected   : Notication提示
**********************************************/
/*********************************************
*  New Version：0.0.0.63
*  Old Version：0.0.0.62
*  Author     ：Bink/Libra
*  CommitType : Bug
*  Date       ：2018/1/9
*  Reason     ：Bug  miui9系统悬浮窗权限不用特殊处理
*  Modified   : 1.过滤掉miui9系统
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.64
*  Old Version：0.0.0.63
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/10
*  Reason     ：1.增加liveView倒计时30s功能
*               2.修改String字符
*  Modified   : 1.增加liveView倒计时30s功能
*               2.修改String字符
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.65
*  Old Version：0.0.0.64
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/10
*  Reason     ：1.增加LiveView页面，Capture成功提示Capture Completed
*               2.增加Capture 详情页 打电话功能
*               3.去掉对扫描二维码解码时，对dclient连接的判断
*               4.增加主页中登出按键以及功能
*  Modified   : 1.增加LiveView页面，Capture成功提示Capture Completed
*               2.增加Capture 详情页 打电话功能
*               3.去掉对扫描二维码解码时，对dclient连接的判断
*               4.增加主页中登出按键以及功能
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.66
*  Old Version：0.0.0.65
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/12
*  Reason     ：1.DclientAlarmInfoWrap结构体替换DclientAlarmMsgWrap
*  Modified   : 1.DclientAlarmInfoWrap结构体替换DclientAlarmMsgWrap
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.67
*  Old Version：0.0.0.66
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/12
*  Reason     ：1.7742 1.0.2.52版本 进入相册扫描二维码无法登陆
*  Modified   : 1.修改相册图片登陆不了的问题
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.68
*  Old Version：0.0.0.67
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/12
*  Reason     ：7811 安卓1.0.2.54版本 账号还未准备好时呼叫设备，应用会退到启动界面重新登录
*  Modified   : 1.修改账号未注册，拨打电话重启的问题
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.69
*  Old Version：0.0.0.68
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/12
*  Reason     ：7777 1.0.2.54版本 APP与话机80,81通话，视频界面会卡住，不流畅，提示网络不流畅切换音频后，仍无法切换到音频
*               7844 安卓1.0.2.54版本 界面问题汇总
*               7841 安卓1.0.2.54版本 监控界面，全屏显示中缺少呼叫按钮
*  Modified   : 1.修改设备配置项
*               2.修改页面布局
*               3.增加按钮
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.70
*  Old Version：0.0.0.69
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/12
*  Reason     ：7844 安卓1.0.2.54版本 界面问题汇总
*               7849 安卓1.0.2.54版本 Alarm记录中存在未处理的Alarm，点击一条处理，处理后弹窗快速闪过后重新加载页面
*  Modified   : 1.修改button按钮字体大写的问题
*               2.修改为调用H5方法进行刷新
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.71
*  Old Version：0.0.0.70
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/22
*  Reason     ：78661.0.2.56版本，APP接收到motion弹窗显示的梯口机名字一直为最初设置的location
*               78641.0.2.56版本，27呼叫群组来电，APP端有几率不显示27的名字直接显示SIP号码
*  Modified   : 1.在上报状态成功后，增加获取设备列表操作，设备信息修改后，会调用DCLIENT_WRAP_IPC_MSG_TYPE_APP_REQUEST_STATUS
*               2.根据Sip账号，去Device设备中去查询对应的location,并且显示
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.72
*  Old Version：0.0.0.71
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/24
*  Reason     ：7887 安卓1.0.2.58版本 门口机或者梯口机来电，来电预览中应包含截图按钮
*               7886 安卓1.0.2.58版本 选择室内机设备，进入Arming界面，顶部alarm通知去掉，与ios保持一致
*               修改服务器默认mac地址
*  Modified   : 1.按照DeviceType设置来电开启RTSP设置，并且修改页面，增加截图功能
*               2.去掉alarm通知按钮
*               修改服务器默认mac地址
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.73
*  Old Version：0.0.0.72
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/24
*  Reason     ：7863 1.0.2.56版本，APP有几率收到梯口机的群组来电界面显示5008Calling，点击界面按钮无反应，只能强制APP进程
*               7848 ios1.0.4.3版本 处理Alarm后，发现还有未处理的Alarm，此时两个提示弹窗会覆盖
*               新增修改密码后，app登出操作
*               新增登出后，发消息给Dclient断开推送功能
*  Modified   : 1.当callid返回为0的时候，需要return
*               2.修改弹窗位置
*               3.新增修改密码后，app登出操作
*               3.新增登出后，发消息给Dclient断开推送功能
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.73
*  Old Version：0.0.0.72
*  Author     ：Libra/Self
*  CommitType : Bug
*  Date       ：2018/1/26
*  Reason     ：7790 1.0.2.54版本，三星和华为都出现账号注册不上的问题
*  Modified   : 1.增加华为dclient注册流程
*  Issue      :
*  Affected   : Vbell Discreet
**********************************************/
/*********************************************
*  New Version：0.0.0.74
*  Old Version：0.0.0.73
*  Author     ：Ivan/Self
*  CommitType : 新增
*  Date       ：2018/1/26
*  Reason     ：更新vlcjni源码及编译库
*  Modified   : 
*  Issue      :
*  Affected   : vlc
**********************************************/
/*********************************************
*  New Version：0.0.0.75
*  Old Version：0.0.0.74
*  Author     ：Ivan/Self
*  CommitType : 修复
*  Date       ：2018/1/26
*  Reason     ：修复更新vlc后存在加载视频画面尺寸异常
*  Modified   : 
*  Issue      :
*  Affected   : vlc
**********************************************/
/*********************************************
*  New Version：0.0.0.76
*  Old Version：0.0.0.75
*  Author     : Ivan/self
*  CommitType : bug
*  Date       : 2018/1/29
*  Reason     : 解决跟换vlc后编译不过的问题
*  Modified   : 
*  Issue	  : 
*  Affected   : 
**********************************************/
/*********************************************
*  New Version：0.0.0.77
*  Old Version：0.0.0.76
*  Author     : Libra/self
*  CommitType : bug
*  Date       : 2018/1/30
*  Reason     : 7937 安卓1.0.2.60版本 呼叫其他app，界面会显示“5008”，且无法取消呼叫（与app通话具有问题）
                7934 1.0.2.60版本，对27话机进行LiveView时，切到后台，再切回去，画面变黑，无画面
                7933 安卓1.0.2.60版本 通话中切换至后台（微信），再切换回来，通话时长会重新计时
                7928 1.0.2.60版本 live view 时接收到SIP来电，拒接来电后（或接起通话后挂断），返回live view页面无画面
                1446 liveview 中接受到motion alert后，可切换到监控新的设备
*  Modified   : 1.呼叫app，本地device列表查找不到，需要通过calldata进行查找
                2.增加liveview页面中的onresume中重新加载rtsp页面操作
                3.通过在onStop中增加标记位，来控制时候重新计时
                4.liveView 中接收Motion alert后，显示motion alert弹窗，再点击弹窗上view 按钮时，提示是否确认切换，确认即终止当前监控，并监控新的设备
*  Issue	  :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.78
*  Old Version：0.0.0.77
*  Author     : Libra/self
*  CommitType : bug
*  Date       : 2018/1/30
*  Reason     : 1466 【Cellgate】smartplus UI 修改
*  Modified   : 增加了对Cellgate多渠道功能
*  Issue	  :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：0.0.0.79
*  Old Version：0.0.0.78
*  Author     : Libra/self
*  CommitType : bug
*  Date       : 2018/2/6
*  Reason     : 1466 【Cellgate】smartplus UI 修改
*  Modified   : 修改打包脚本
*  Issue	  :
*  Affected   :
**********************************************/

/////////////////////////////////////////////////////////--------------v2.0
/*********************************************
*  New Version：2.0.0.3
*  Old Version：2.0.0.2
*  Author     : Bink/Libra
*  CommitType : bug
*  Date       : 2018/2/9
*  Reason     : 6671 1.0.0.13版本系统悬浮窗适配问题，小米2手机（安卓5.0版本）收到alarm消息不弹窗
*  Modified   : 修改miui9权限申请
*  Issue	  :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：2.0.0.4
*  Old Version：2.0.0.3
*  Author     : LinKy/self
*  CommitType : 优化
*  Date       : 2018/2/9
*  Reason     : UserAgent规范化, 并支持按符号替换的功能
*  Modified   :
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：2.0.0.5
*  Old Version：2.0.0.4
*  Author     : Libra/Self
*  CommitType : task
*  Date       : 2018/2/9
*  Reason     : 1.新增小米、华为离线Motion功能
                2.修改华为4g已知注册不上的
*  Modified   : 接收离线推送自定义消息
                华为4g获取不到本机ip，如果获取不到，就设置一个固定ip
*  Issue	  :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：2.0.0.6
*  Old Version：2.0.0.5
*  Author     : LinKy/Ivan
*  CommitType : Bug
*  Date       : 2018/2/12
*  Reason     : Bug8259 安卓2.0.0.5版本 米3手机登录注册上sip账号后按home键退出，杀掉app进程再重新进入，sip账号灯一直为灰色状态
*  Modified   : 发现MIUI系统的dclient初始化必须等到获取到token回调之后.
*           采用单一线程对dclient初始化线程进行管理. 一开始初始化便先开辟线程.
*           若后续拿到token后可以将dclient先deinit后等待线程退出后再
*           重新开辟线程进行初始化刷新token
*  Issue      : zentao#Bug8259
*  Affected   :
**********************************************/
/*********************************************
*  New Version：2.0.0.7
*  Old Version：2.0.0.6
*  Author     : Libra/Linky
*  CommitType : Bug
*  Date       : 2018/3/2
*  Reason     : 1.修改推送相关的id
*  Modified   : 2.修改华为，小米注册id，key和华为App
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：2.0.0.8
*  Old Version：2.0.0.7
*  Author     : Libra/Linky
*  CommitType : Bug
*  Date       : 2018/3/2
*  Reason     : 1.修改推送相关的id
*  Modified   : 2.修改华为，小米注册id，key和华为App
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：2.0.0.9
*  Old Version：2.0.0.8
*  Author     : Linky/Self
*  CommitType : Bug
*  Date       : 2018/03/05
*  Reason     : 安卓的App的Useragent不是以App-开头
*  Modified   : 根据定制, 将Smartplus的默认UserAgent格式修改为App-SmartPlus-Android %VERSION%
*  Issue      : zentao#Bug8352
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：2.0.0.12
*  Old Version：2.0.0.11
*  Author     : Linky/Self
*  CommitType : Story
*  Date       : 2018/03/05
*  Reason     : Story1537 SIP账号注册速度优化
*  Modified   :
*           SIP帐号注册慢的原因是因为在SipUA的ParseThread线程中(该线程在注册帐号之前运行, 用于解析域名)
*       启动了DHCP Option查询Outbound地址, 由于查询不到, 导致超时浪费了5s时间. 只需要修改AccountModel
*       中函数返回的配置值即可
*  Issue      : zentao#Story1537
*  Affected   : 基本无影响
**********************************************/
/*********************************************
*  New Version：2.0.0.13
*  Old Version：2.0.0.12
*  Author     : Linky/Self
*  CommitType : Bug
*  Date       : 2018/03/06
*  Reason     : 呼叫时回铃音异常的问题
*  Modified   :
*           修改Ringback的回铃音类型TONE_ID_RINGBACK值为2, 而不是3
*  Issue      :
*  Affected   : 回铃音响铃流程
**********************************************/
/*********************************************
*  New Version：2.0.0.15
*  Old Version：2.0.0.14
*  Author     : Libra/Self
*  CommitType : Bug
*  Date       : 2018/03/07
*  Reason     : SmartPlus默认不开启使用Received的ip重注册，Cellgate开启重注册
*  Modified   : 修改回调函数，增加sip配置项判断
*  Issue      :
*  Affected   : 通话
**********************************************/
/*********************************************
*  New Version：2.0.0.16
*  Old Version：2.0.0.15
*  Author     : Libra/Self
*  CommitType : Bug
*  Date       : 2018/03/07
*  Reason     : 8369 2.0.0.12版本，APP安装后第一次运行通话没有声音视频，关闭APP再打开又恢复正常
*               8399 安卓2.0.0.14版本 APP呼叫IT82（82.50.2.140），话机预览时已接起电话，话机点击音频接起，APP仍响回铃音，且无法挂断​
*  Modified   : 增加在第一次启动时，重新初始化MediaModel操作
*               增加MSG_S2P_REINVITE_ALERT消息的处理
*  Issue      :
*  Affected   : 音视频通话
**********************************************/
/*********************************************
*  New Version：2.0.0.18
*  Old Version：2.0.0.17
*  Author     : Libra/Self
*  CommitType : Bug
*  Date       : 2018/03/07
*  Reason     : 8381 安卓2.0.0.12版本 三星手机离线收不到谷歌推送
*  Modified   : 修改google-services文件
*  Issue      :
*  Affected   : Google推送
**********************************************/
/*********************************************
*  New Version：2.0.0.19
*  Old Version：2.0.0.18
*  Author     : Bink/Libra
*  CommitType : Bug
*  Date       : 2018/03/12
*  Reason     : 4g连接不上
*  Modified   :
*  Issue      :
*  Affected   :网络
**********************************************/
/*********************************************
*  New Version：2.0.0.20
*  Old Version：2.0.0.19
*  Author     : Bink/Libra
*  CommitType : Bug
*  Date       : 2018/03/13
*  Reason     : 8423 在某些4G网络下安卓SmartPlus无法连接上云平台，网络无问题，拿不到IP
*  Modified   :增加Ip地址的获取方式，当原先流程获取到的Ip为空，采用另一种方法再获取一遍
*  Issue      :
*  Affected   :网络
**********************************************/

/////////////////////////////////////////////////////////--------------v3.0
/*********************************************
*  New Version：3.0.0.1
*  Old Version：3.0.0.0
*  Author     : Bink/Self
*  CommitType : task
*  Date       : 2018/03/14
*  Reason     : task 5454 按钮点了之后未有点击效果
*  Modified   :增加call和monitor界面的按钮点击效果
*  Issue      :
*  Affected   :UI
**********************************************/
/*********************************************
*  New Version：2.0.0.21
*  Old Version：2.0.0.20
*  Author     : Bink/Libra
*  CommitType : Bug
*  Date       : 2018/03/14
*  Reason     : 8436 2.0.0.18版本，来电视频预览界面切换到后台，来电取消呼入，再切换回前台会显示5008calling
*  Modified   :当callId不小于0且当前不存在通话的时候，重启
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.2
*  Old Version：3.0.0.1
*  Author     : Bink/Ivan
*  CommitType : Bug
*  Date       : 2018/03/15
*  Reason     : 8491 2.0.0.21版本，APP按返回键退出，此时来电，来电视频预览界面切换到后台，来电取消呼入，再切换回前台，此时26话机再呼入，APP响铃不弹出来电页面
*  Modified   :修改重启app方法
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：2.0.0.23
*  Old Version：2.0.0.22
*  Author     : Bink/Self
*  CommitType : task
*  Date       : 2018/03/21
*  Reason     : 5495 Watchman Evo 增加FCM离线推送功能
*  Modified   :新增cellgate的FCM离线推送功能
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.3
*  Old Version：3.0.0.2
*  Author     : Bink/self
*  CommitType : Bug
*  Date       : 2018/03/21
*  Reason     : 8435 2.0.0.18版本，来电视频预览，切换到后台再切换回前台，视频不显示
*  Modified   : 在onStop地方增加处理,同时，让每次onResume的时候，都重新创建预览。
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.4
*  Old Version：3.0.0.3
*  Author     : Bink/self
*  CommitType : Bug
*  Date       : 2018/03/21
*  Reason     : 8430 安卓2.0.0.16版本 从后台激活后不会自动刷新H5
*  Modified   : 在所有调用到h5页面的activcity在onResume方法里面调用goToAddress()方法。
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.5
*  Old Version：3.0.0.4
*  Author     : Bink/self
*  CommitType : Bug
*  Date       : 2018/03/22
*  Reason     : 收到谷歌离线推送，点击后，无法进入到预期的页面
*  Modified   : 在SplashActivity中，拿到数据，并参照小米推送的流程，将拿到的mac消息由intent传到MainActivity，在MainActivity中，再进行处理。
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.6
*  Old Version：3.0.0.5
*  Author     : Bink/Self
*  CommitType : task
*  Date       : 2018/03/23
*  Reason     : 1、story Watchman Evo 增加FCM离线推送功能:修改登录时获取SIP账号的HTTP地址
*             : 2、更新保存Token API接口
*  Modified   : 1、更新登录时获取SIP账号的HTTP地址
*             ：2、更新保存Token API接口，并修改请求的关键字
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.7
*  Old Version：3.0.0.6
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/03/26
*  Reason     : 1、7128 Android-1.0.0.20版本 app收到告警消息，状态栏显示两种形式的告警
*  Modified   : 1、将两种通知的通知栏格式统一
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.8
*  Old Version：3.0.0.7
*  Author     : Bink/Self
*  CommitType : story
*  Date       : 2018/03/30
*  Reason     : 1、story 1571 【云平台4.0】点击forget password,进入忘记密码界面，需要把用户在登录页面，填写的UID/Email Address 带过来，不为空
*             : 2、story 1588 【云平台4.0】smartplus规划：Smartplus登录页
*             : 3、story 1588 【云平台4.0】smartplus规划：侧边栏Setting页面，增加清除缓存功能
*  Modified   : 1、在froget password 的url后面附带上UID/Email Address
*             : 2、Smartplus登录页重新绘制、账号和密码处理逻辑修改
*             : 3、侧边栏添加清除缓存功能
*  Issue      :zentao#story 1571 ,story 1588
*  Affected   :
**********************************************/

/*********************************************
*  New Version：3.0.0.9
*  Old Version：3.0.0.8
*  Author     : Junjie.Xu/Bink
*  CommitType : Bug
*  Date       : 2018/04/04
*  Reason     : 1、bug 7781 1.0.2.54版本，从相册读取图片带字母和二维码的情况下，无法扫描成功
                2. bug 扫描非正常二维码崩溃
*  Modified   : 1.二维码图片识别尤RGMB改为YUV去识别
*             : 2、改为Zxing和Zbar两套识别来增加识别率
*             : 3、扫描到非正常二维码解密后返回空 这里更新了so文件
*  Issue      :zentao#bug 7781
*  Affected   :
**********************************************/

/*********************************************
*  New Version：3.0.0.10
*  Old Version：3.0.0.9
*  Author     : Bink/Linky
*  CommitType : story
*  Date       : 2018/04/04
*  Reason     : cellgate增加导出log到本地的功能
*  Modified   :1、在module_develop中，对smartplus和cellgate做一个区分
*             :2、在cellgate下添加log导出功能
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.11
*  Old Version：3.0.0.10
*  Author     : Bink/self
*  CommitType : bug
*  Date       : 2018/04/04
*  Reason     : app收到29来电，接听按钮跟挂断按钮重叠
*  Modified   :1、直接将三个图标按照比例排列，任何一个按钮不会对其它按钮产生影响
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.12
*  Old Version：3.0.0.11
*  Author     : Bink/self
*  CommitType : bug
*  Date       : 2018/04/04
*  Reason     :1、log信息不完整
*  Modified   :2、sip账号无法稳定注册，间隔一段时间就会断开
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.13
*  Old Version：3.0.0.12
*  Author     : Will/self
*  CommitType : bug
*  Date       : 2018/04/11
*  Reason     :
*  Modified   : 1.修改url为http://evo-web.zapopen.com
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.14
*  Old Version：3.0.0.13
*  Author     : Junjie.Xu/Bink
*  CommitType : Bug
*  Date       : 2018/04/11
*  Reason     : 1、bug 8602 安卓2.0.0.22版本 app与室内机建立通话，通话的时候室内机hold的时候有概率出现app端显示5008错误
                2.bug 8612 2.0.0.22版本，APP接收到离线通知，先打开APP再点击通知，然后按返回键退出APP要退两次
*  Modified   : 1.bug 8602 修改layout 去掉默认的TextView的默认Text
                2.bug 8612 端外推送才会有8612这个bug，端外推送会另起一个进程 相当于又开了一个App，所以此时任务栈中有两个MainActivity,所以这里把MainActivity的启动模式改为singleInstance
*  Issue      :zentao#bug 8602 bug 8612
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.15
*  Old Version：3.0.0.14
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/04/12
*  Reason     : 登录逻辑有误
*  Modified   : 当登录请求失败时，失败提示，隐藏进度
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.16
*  Old Version：3.0.0.15
*  Author     : Junjie.Xu/Bink
*  CommitType : Story
*  Date       : 2018/04/13
*  Reason     : 1、story 1588 主页面左上角增加一个Notification入口---PG3主界面
                2.story 1588 侧边栏新增 Temp Key菜单---PG3.8Temp key
*  Modified   : 1.Notification功能 还需等待未读消息接口
*  Issue      :zentao#story 1588
*  Affected   :
**********************************************/

 /*********************************************
*  New version : 3.0.0.17
*  Old version : 3.0.0.16
*  Author	   : Bink/Self
*  CommitType  :
*  Date		   : 2018/04/13
*  Reason      : story 1670 【CELLGATE】Watchman Evo 离线推送版本修改注销和注册时机
*  Modified    : 增加当app从后台到前台sip的注册、前台到后台sip的注销
*  Issue	   : zentao#story 1670
*  Affected	   : 无
**********************************************/
/*********************************************
*  New Version：3.0.0.18
*  Old Version：3.0.0.17
*  Author     : Junjie.Xu/Bink
*  CommitType : Story
*  Date       : 2018/04/13
*  Reason     : 1、story 1588 主页面左上角增加一个Notification入口---PG3主界面
                2.story 1588 侧边栏新增 Temp Key菜单---PG3.8Temp key
*  Modified   : 1.Notification功能 还需等待未读消息接口(补充提交common_navigation_bar_right_is_icon.xml 和 common_btn_navigatioon_bar_add.xml)
*  Issue      :zentao#story 1588
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.19
*  Old Version：3.0.0.18
*  Author     : Junjie.Xu/Bink
*  CommitType : Story
*  Date       : 2018/04/13
*  Reason     : 1、story 1588 主页面左上角增加一个Notification入口---PG3主界面
                2.story 1588 侧边栏新增 Temp Key菜单---PG3.8Temp key
*  Modified   : 1.Notification功能 还需等待未读消息接口(补充提交common_navigation_bar_right_is_icon.xml 和 common_btn_navigatioon_bar_add.xml)
                2.tempkey相关代码没有提交
*  Issue      :zentao#story 1588
*  Affected   :
**********************************************/
/*********************************************
*  New version : 3.0.0.20
*  Old version : 3.0.0.19
*  Author	   : Bink/Self
*  CommitType  :
*  Date		   : 2018/04/13
*  Reason      : cellgate取消重注册
*  Modified    : 1、use_received 设为false
*              : 2、更新jni库文件
*  Issue	   :
*  Affected	   : cellgate
**********************************************/
/*********************************************
*  New version : 3.0.0.21
*  Old version : 3.0.0.20
*  Author	   : Bink/Self
*  CommitType  :
*  Date		   : 2018/04/13
*  Reason      : cellgate修改上报Token(推送)次数，只在登录和登出的时候上报
*  Modified    :
*  Issue	   :
*  Affected	   : cellgate
**********************************************/
/*********************************************
*  New Version：3.0.0.22
*  Old Version：3.0.0.21
*  Author     : Bink/self
*  CommitType : bug
*  Date       : 2018/04/13
*  Reason     :1、安卓第一次安装后音视频不工作
*  Modified   :1、增加在第一次启动时，重新初始化MediaModel操作
*  Issue      :
*  Affected   :cellgate
**********************************************/
/*********************************************
*  New Version：3.0.0.23
*  Old Version：3.0.0.22
*  Author     : Bink/self
*  CommitType : bug
*  Date       : 2018/04/13
*  Reason     :1、当不需要再次注册时，进入到app时，sip注册过慢
*  Modified   :1、在登录界面登录成功后，直接把对应的数据保存到本地数据库，当不需要再次登录进来的时候，直接在这边拿取数据
*  Issue      :
*  Affected   :cellgate
**********************************************/
/*********************************************
*  New Version: 3.0.0.25
*  Old Version: 3.0.0.24
*  Author     : LinKy/Self
*  CommitType : 修复
*  Date       : 2018/04/14
*  Reason     : 修复: CallModel中AnswerCall处理不合理, 不应该去执行StopTalk操作
*  Modified   : 去除这个操作, 避免多次调用AnswerCall时引起通话被误挂断无法恢复.
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version: 3.0.0.26
*  Old Version: 3.0.0.25
*  Author     : Will/Will
*  CommitType : 修复
*  Date       : 2018/04/16
*  Reason     : 
*  Modified   : 临时修改URL打包给印度Anitha他们在测试服务器上调试
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version: 3.0.0.27
*  Old Version: 3.0.0.26
*  Author     : Will/Will
*  CommitType : 修复
*  Date       : 2018/04/16
*  Reason     : 
*  Modified   : 退回3.0.0.25
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version: 3.0.0.28
*  Old Version: 3.0.0.27
*  Author     : Will/Will
*  CommitType : 修复
*  Date       : 2018/04/16
*  Reason     : 
*  Modified   : 临时修改不发送RTP VIDEO流
*  Issue      : 无
*  Affected   : 无
**********************************************/
/*********************************************
*  New Version：3.0.0.29
*  Old Version：3.0.0.28
*  Author     : Bink/self
*  CommitType : bug
*  Date       : 2018/04/17
*  Reason     :1、去掉通话界面的外部摄像头切换
*             :2、在前端收到离线推送消息的话要重新去注册sip
*             :3、控制发出的码流在5kbps之内
*             :4、对方挂断，安卓挂不断的问题
*  Modified   :1、在CallActivity中，将切换图标隐藏
*             :2、在MyFirebaseMessagingReceive中的onReceive处理接收到的消息，当有消息的时候，sip重注册
*             :3、一律使用假视频、调低frameRate为1、将FakeCamera.avi缩小（174KB-26KB）
*             :4、对CTRL_SIP_REPORT_REINVITE消息进行处理，让其按照切换音视频的流程走
*  Issue      :
*  Affected   :cellgate
**********************************************/
/*********************************************
*  New Version：3.0.0.30
*  Old Version：3.0.0.29
*  Author     : Junjie.Xu/Bink
*  CommitType : bug
*  Date       : 2018/04/17
*  Reason     : 1、bug 8729 2.0.0.32版本 APP建议导出log的路径可选
                2.bug 8808 【V3.2试用问题】smartplus（android ios）在连接服务器失败时，日志总是打印connect server failed，但是没有具体指明是那个连接哪个服务失败，不方便维护、定位问题，请完善相关日志。
                3.添加 通知 底层回调接口
*  Modified   : 1.在connect to server failed地方加上相对应的服务
*  Issue      :zentao#bug 8729 8808
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.31
*  Old Version：3.0.0.30
*  Author     : Junjie.Xu/Bink
*  CommitType : bug
*  Date       : 2018/04/17
*  Reason     : 1、bug 8729 2.0.0.32版本 APP建议导出log的路径可选
                2.bug 8808 【V3.2试用问题】smartplus（android ios）在连接服务器失败时，日志总是打印connect server failed，但是没有具体指明是那个连接哪个服务失败，不方便维护、定位问题，请完善相关日志。
                3.添加 通知 底层回调接口
*  Modified   : 1.在connect to server failed地方加上相对应的服务
                2.更新string文件
*  Issue      :zentao#bug 8729 8808
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.32
*  Old Version：3.0.0.31
*  Author     : Bink/self
*  CommitType : bug
*  Date       : 2018/04/17
*  Reason     :1、去掉通话界面的外部摄像头切换导致布局改变问题
*  Modified   :
*  Issue      :
*  Affected   :cellgate
**********************************************/
/*********************************************
*  New Version：3.0.0.33
*  Old Version：3.0.0.32
*  Author     : Bink/self
*  CommitType : bug
*  Date       : 2018/04/17
*  Reason     :复制assets文件夹下面的文件到系统存储失败
*  Modified   :无论是否存在都重新拷贝
*  Issue      :
*  Affected   :cellgate
**********************************************/
/*********************************************
*  New Version：3.0.0.34
*  Old Version：3.0.0.33
*  Author     : Bink/self
*  CommitType : bug
*  Date       : 2018/04/18
*  Reason     :视屏黑屏
*  Modified   :1.恢复FakeCamera.avi文件
*             :2.将拷贝文件的动作放在权限申请结束之后
*  Issue      :
*  Affected   :cellgate
**********************************************/
/*********************************************
*  New Version：3.0.0.35
*  Old Version：3.0.0.34
*  Author     : Bink/self
*  CommitType : bug
*  Date       : 2018/04/19
*  Reason     : 修复：1、mi3手机视频一段时间后会出现黑屏，且不可恢复
*             : 2、login界面输入完密码后有个done, 不要还是下一步，按下done直接去login
*  Modified   :1.修改AndroidManifest，在需要视频的类里面增加对sim卡改变的监听
*             :2.在密码输入框修改android:imeOptions="actionDone"
*  Issue      :
*  Affected   :cellgate
**********************************************/
/*********************************************
*  New Version：3.0.0.36
*  Old Version：3.0.0.35
*  Author     : Bink/self
*  CommitType : bug
*  Date       : 2018/04/19
*  Reason     : 修复：出现一次没有声音的问题
*  Modified   :1.当level小于50的时候，设置一个中间值180
*  Issue      :
*  Affected   :cellgate
**********************************************/
/*********************************************
*  New Version：3.0.0.37
*  Old Version：3.0.0.36
*  Author     : Junjie.xu/self
*  CommitType :
*  Date       : 2018/04/19
*  Reason     : 1.tempkeyActivity去掉dialog相关内容
                2.修改restful服务器连不了提示语
*  Modified   :
*  Issue      :
*  Affected   :normal
**********************************************/
/*********************************************
*  New Version：3.0.0.38
*  Old Version：3.0.0.37
*  Author     : Junjie.xu/self
*  CommitType :
*  Date       : 2018/04/19
*  Reason     : 1.tempkeyActivity去掉dialog相关内容
                2.修改restful服务器连不了提示语
                dialog没有提交
*  Modified   :
*  Issue      :
*  Affected   :normal
**********************************************/
/*********************************************
*  New Version：3.0.0.39
*  Old Version：3.0.0.38
*  Author     : Junjie.xu/self
*  CommitType :bug
*  Date       : 2018/04/19
*  Reason     : 1、8711 watchman-2.230.0.30版本，安装了SmartPlus后不能再安装watchman的APP，反之也有问题
*  Modified   :1.android:authorities 不能相同
*  Issue      :zentao#bug 8711
*  Affected   :normal
**********************************************/
/*********************************************
*  New Version：3.0.0.40
*  Old Version：3.0.0.39
*  Author     : Bink/self
*  CommitType :
*  Date       : 2018/04/19
*  Reason     : 1.增加短信提示音
*  Modified   :
*  Issue      :
*  Affected   :cellgate
**********************************************/
/*********************************************
*  New Version：3.0.0.41
*  Old Version：3.0.0.40
*  Author     : Bink/self
*  CommitType :
*  Date       : 2018/04/23
*  Reason     :1. 修改ring.wav
*              2. 收到通知播放铃声
*              3. 收到通知自动亮屏
*              4. 收到通知显示横幅
*  Modified   :
*  Issue      :
*  Affected   :cellgate
**********************************************/
/*********************************************
*  New Version：3.0.0.42
*  Old Version：3.0.0.41
*  Author     : Bink/self
*  CommitType :
*  Date       : 2018/04/24
*  Reason     :
*  Modified   :1. 加入取消notification声音的方法
*             :2. 修改收到消息推送重注册时机，只有当app处于前台才重注册
*             :3. 加入未读消息显示（该版本先不开放）
*  Issue      :
*  Affected   :cellgate
**********************************************/
/*********************************************
*  New Version：3.0.0.43
*  Old Version：3.0.0.42
*  Author     : Junjie.Xu/self
*  CommitType :
*  Date       : 2018/04/26
*  Reason     :1.7941 安卓1.0.2.60版本 三星手机与室内机建立通话，通话中有严重杂音
               2.8711 watchman-2.230.0.30版本，安装了SmartPlus后不能再安装watchman的APP，反之也有问题
               3.完善notification未读消息功能
*  Modified   :1. 修改三星手机通话时候的mode
*             :2. 小米注册的ip也要适配appId
*             ：
*  Issue      :
*  Affected   :
**********************************************/
/*********************************************
*  New Version：3.0.0.44
*  Old Version：3.0.0.43
*  Author     : Bink/self
*  CommitType :
*  Date       : 2018/05/02
*  Reason     :通知优先级处理
*  Modified   :
*  Issue      :
*  Affected   :normal
**********************************************/
 /*********************************************
*  New version : 3.0.0.45
*  Old version : 3.0.0.44
*  Author	   : Bink/Self
*  CommitType  :
*  Date		   : 2018/04/10
*  Reason      : 增加远程log
*  Modified    :1、初始化远程log
*              :2、添加远程log设置界面
*  Issue	   : 无
*  Affected	   : 无
**********************************************/
 /*********************************************
*  New version : 3.0.0.46
*  Old version : 3.0.0.45
*  Author	   : Junjie.Xu/Self
*  CommitType  :Bug
*  Date		   : 2018/05/18
*  Reason      : Bug 8882 index.html新增参数
*  Modified    :
*  Issue	   : 无
*  Affected	   : 无
**********************************************/
 /*********************************************
*  New version : 3.0.0.47
*  Old version : 3.0.0.46
*  Author	   : Bink/Self
*  CommitType  :
*  Date		   : 2018/05/21
*  Reason      : crash 信息上报
*  Modified    :1、添加crash信息上报：Bugly
*              :2、添加上报开关
*  Issue	   : 无
*  Affected	   : 无
**********************************************/
 /*********************************************
*  New version : 3.0.0.48
*  Old version : 3.0.0.47
*  Author	   : Bink/Self
*  CommitType  :
*  Date		   : 2018/06/08
*  Reason      : crash 信息上报
*  Modified    :1、更新appid和appkey，将上报账号切换到正式使用账号
*  Issue	   : 无
*  Affected	   : 无
**********************************************/
/*********************************************
*  New Version: 3.0.0.49
*  Old Version: 3.0.0.48
*  Author     : Junjie.xu/Self
*  CommitType : Story
*  Date       : 2018/06/26
*  Reason     :云平台4.0功能1.注册限制2.新增注册页面3.新增用户协议界面
*  Modified   :
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.50
*  Old Version: 3.0.0.49
*  Author     : Junjie.xu/Self
*  CommitType : Story
*  Date       : 2018/06/26
*  Reason     :云平台4.0功能1.注册限制2.新增注册页面3.新增用户协议界面
                添加没有提交的文件
*  Modified   :
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.51
*  Old Version: 3.0.0.50
*  Author     : Junjie.xu/Self
*  CommitType : Bug
*  Date       : 2018/06/26
*  Reason     :userType添加逻辑判断
*  Modified   :
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.52
*  Old Version: 3.0.0.51
*  Author     : Bink/Self
*  CommitType : story
*  Date       : 2018/07/03
*  Reason     : 1.网关地址获取修改
*             : 2.app重新接入服务器网关重分配
*             : 3.侧边栏添加My Account、Help选项
*             : 4.账号过期处理
*  Modified   : 1.手动填写前面补0补足12位mac
*             : 2.在SplashActivity中添加对应逻辑
*             : 3.侧边栏添加My Account、Help选项，并添加对应的页面，并修改My Profile和Temp Key 图标
*             : 4.修改登录请求返回值处理
*             : 5.更新应用jni
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.53
*  Old Version: 3.0.0.52
*  Author     : Bink/Self
*  CommitType : story
*  Date       : 2018/07/03
*  Reason     : 1.smartplus注册成功后应该跳转到登录页面
*             : 2.注册申请服务器没有根据填写的mac改变
*  Modified   : 1.添加方法showLoginActivity（）给js调用
*             : 2.修改注册url获取
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.54
*  Old Version: 3.0.0.53
*  Author     : Bink/Self
*  CommitType : story
*  Date       : 2018/07/04
*  Reason     : 1.修改登录界面样式
*  Modified   : 1.修改登录界面样式
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.55
*  Old Version: 3.0.0.54
*  Author     : Junjie/Self
*  CommitType : bug
*  Date       : 2018/07/05
*  Reason     :
*  Modified   :修改注册页面webview回退逻辑
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.56
*  Old Version: 3.0.0.55
*  Author     : Bink/Self
*  CommitType : bug、story
*  Date       : 2018/07/05
*  Reason     :1. https加载http图片失败
*             :2. device 添加完成自动返回主页且刷新
*             :3. Advance Option页面添加指导
*             :4. My Account 页面按钮添加点击后的跳转
*             :5. 侧边栏上exit 旁边的版本号去掉
*             :6. About页面修改并添加对应跳转页面
*             :7. 微调Login页面
*  Modified   :
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.57
*  Old Version: 3.0.0.56
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/05
*  Reason     :1. 在Charge Description返回直接返回到了主页
*  Modified   :修改返回逻辑，返回到My Account页面
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.58
*  Old Version: 3.0.0.57
*  Author     : Bink/Self
*  CommitType : story
*  Date       : 2018/07/05
*  Reason     :1.story: add device device code 添加提供二维码扫描方法
*  Modified   :1. 将扫描二维码功能的类移动到lib_common当中、添加device code 二维码扫描
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.59
*  Old Version: 3.0.0.58
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/05
*  Reason     :1.bug#9746 3.0.0.57版本 APP登陆后sip指示灯显示有误，指示灯灰色，但可拨打电话
*             :2.bug#9698 3.0.0.57版本，高级选项获取云平台地址页面，下方的提示语显示不完整
*  Modified   :1.修改状态改变流程
*             :2.修改中文翻译文件
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.60
*  Old Version: 3.0.0.59
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/07
*  Reason     :1.bug#9766 3.0.0.57版本 云平台通知消息查看消息详情后，点击返回，要返回消息列表页面，不是返回主页面
*             :2.bug#9775 3.0.0.57版本，从账号登陆APP，APP在Arming页面接收到警报没有弹窗提示，返回有看到alarm消息，不在Arming页面则接收不到alarm
*             :3.bug#9749 3.0.0.57版本 APP收到云平台下发的通知消息，未在按钮入口显示未读消息数量
*             :4.bug#9693 3.0.0.57版本，注册页面输入后，切换到后台再切换回前台，输入框会被清空
*  Modified   :1.如果回页面可返回，则返回，否者结束当前activity
*             :2.服务端已修改
*             :3.添加新消息计数
*             :4.注册页面取消刷新操作
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.61
*  Old Version: 3.0.0.60
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/07
*  Reason     :1.bug#9748 3.0.0.57版本 APP接收到室内机的警报，APP处理警报无效
*             :2.bug#9809 3.0.0.57版本 APP capture log详情页面，查看截图详情，点击监控按钮无反应
*  Modified   :1.修改对应的请求url 为https
*             :2.添加对应的OpenMotionView(String sip)方法
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.62
*  Old Version: 3.0.0.61
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/09
*  Reason     :1.bug#9750 3.0.0.57版本 查看未读消息，查看完返回，仍显示未读红点
*  Modified   :1.收到新短信的时候，传递notificationId
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.63
*  Old Version: 3.0.0.62
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/09
*  Reason     :1.bug#9839 3.0.0.61版本 侧边栏My Account，My profile,temp key,help点击返回后要返回侧边栏列表页面，不应返回主界面
*  Modified   :修改跳转和返回逻辑
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.64
*  Old Version: 3.0.0.63
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/10
*  Reason     :1.bug#9832 3.0.0.61版本 设备触发alarm，设备端处理，APP没有弹出警报已处理的弹窗
*             :2.bug#9860 3.0.0.61版本，从album中扫描二维码，APP会闪退
*             :3.bug 注册页面当跳转到隐私协议页面再返回后，填写的数据消息
*  Modified   :1.修改deal alarm的优先级
*             :2.添加库文件libiconv.so 和 libzbar.so
*             :3.链接跳转修改为由android实现
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.65
*  Old Version: 3.0.0.64
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/10
*  Reason     :1.bug#9868 3.0.0.61版本，选择其中一台设备，点击进去capture log，返回不能返回到capture log
*  Modified   :
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.66
*  Old Version: 3.0.0.65
*  Author     : Bink/Self
*  CommitType : story
*  Date       : 2018/07/18
*  Reason     :1.story#1938 【Palwintec】 云平台简易版社区public device支持下发到Smartplus，移除安卓后台运行图标
*             :2.支持ipv6
*  Modified   :
*  Issue      : 无
*  Affected   : normal
**********************************************/
/*********************************************
*  New Version: 3.0.0.67
*  Old Version: 3.0.0.66
*  Author     : Bink/Self
*  CommitType : story
*  Date       : 2018/07/19
*  Reason     :1.discreet版本
*  Modified   :
*  Issue      : 无
*  Affected   : discreet
**********************************************/
/*********************************************
*  New Version: 3.0.0.68
*  Old Version: 3.0.0.67
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/19
*  Reason     :1.修改 discreet版本中的watchman为OnetouchIPCDP
*  Modified   :
*  Issue      : 无
*  Affected   : discreet
**********************************************/
/*********************************************
*  New Version: 3.0.0.69
*  Old Version: 3.0.0.68
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/19
*  Reason     :1.补充登录错误提示
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.70
*  Old Version: 3.0.0.69
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/19
*  Reason     :1.motion点击view的时候，报mac错误
*             :2.阅读后的activity上的图标没有更新
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.71
*  Old Version: 3.0.0.70
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/20
*  Reason     :1.display name显示有误
*             :2.TempKey添加返回方法提供给h5页面调用
*             :3.ipv6 sip部分以及app状态显示调整
*             :4.bug#10051 3.0.0.65版本 motion logs页面查看详情后返回，红点未消失，需要手动刷新才消失
*  Modified   :1.修改displayname更新条件
*             :2.添加返回办法
*             :3.调整网络改变后的操作
*             :4.重新进入主页面的时候，需要刷新网页
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.72
*  Old Version: 3.0.0.71
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/23
*  Reason     :1.bug#10082 3.0.0.71版本 APP登陆页面,高级选项输入MAC地址或者服务器编号都无法获取服务器地址
*             :2.bug#10051 3.0.0.65版本 motion logs页面查看详情后返回，红点未消失，需要手动刷新才消失(漏提交)
*  Modified   :1.更换获取网关接口
*             :2.补充提交
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.73
*  Old Version: 3.0.0.72
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/24
*  Reason     :1.bug#10137 3.0.0.71版本，有室内机来电呼入，APP端直接接起了来电，但是APP还是处于来电响铃中
*             :2.bug#10131 3.0.0.71版本 ，所有H5返回页面，进入详情页面，回到home页面，重新进入，点击返回，设备闪退
*             :3.在布撤防页面时，应用出现闪退
*  Modified   :1.自动接听默认值修改为false
*             :2.MainActivity的启动模式修改为singTop
*             :3.该问题的原因是在没有获取到系统悬浮窗权限的时候，就去弹窗，这边要判断是否有权限
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.74
*  Old Version: 3.0.0.73
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/25
*  Reason     :1.h5页面再次打开无法进入
*  Modified   :1.去除对webview销毁后的部分处理
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.75
*  Old Version: 3.0.0.74
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/25
*  Reason     :1.不能正常来电预览
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.76
*  Old Version: 3.0.0.75
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/26
*  Reason     :1.bug 10179 3.0.0.75版本 门口机呼叫APP，APP在来电预览页面，此时触发motion，APP点击查看motion，此时监控画面出不来
*             :2.bug 10185 V4.0-49089版本，APP注册页面点击user agreement和privacy policy标题显示错误
*  Modified   :1.当处于来电预览，此时，收到motion时，应该先停掉来电预览，同理，当处理motior,有来电，应该先暂停monitor.
*             :2.标题显示按照h5的设置来
*             :3.修改tempkey详情页面的显示，不显示右上角的加号
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.77
*  Old Version: 3.0.0.76
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/26
*  Reason     :1.bug 10207 3.0.0.75版本，LiveView监控32次左右之后就会没有视频，且通话中也没有声音和视频，只能重新打开APP
*             :2.bug 10182 3.0.0.75版本 IPV4网络下，APP登陆，此时切换wifi到IPV6，APP显示获取不到网页（对比IOS正常）
*             :3.bug 10204 3.0.0.75版本 ，室内机呼叫APP，APP第一次点击接听没反应，第二次点击才能接起来电
*  Modified   :1.chanel在使用后没有关闭，当channel数到32个时，channel满，出现错误
*             :2.当IP4和ipv6切换的时候，重新加载网页，此时，还没加载出来的时候，将view隐藏，等加载出来的时候，再显示
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.78
*  Old Version: 3.0.0.77
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/26
*  Reason     :1.bug 10228 3.0.0.77版本 APP注册页面，点击任何跳转按钮都无效
*  Modified   :补充提交布局文件的修改
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.79
*  Old Version: 3.0.0.78
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/07/26
*  Reason     :1.补充提交
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.80
*  Old Version: 3.0.0.79
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/08/01
*  Reason     :1.在任何情况下，收到来电直接打开来电接听界面
*  Modified   :
*  Issue      : 无
*  Affected   :来电
**********************************************/
/*********************************************
*  New Version: 3.0.0.81
*  Old Version: 3.0.0.80
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/08/06
*  Reason     :1.bug 10375 3.180.0.80版本 APP离线锁屏，此时门口机来电，ＡＰＰ弹出来电界面，点击接听，概率性无法跳转到通话页面，直接回到手机主页
*  Modified   :去掉重注册与增加启动MainSerivice与否的判断
*  Issue      : 无
*  Affected   :来电
**********************************************/
/*********************************************
*  New Version: 3.0.0.82
*  Old Version: 3.0.0.81
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/08/07
*  Reason     :1.bug 10411 3.180.0.80版本，室内机呼叫APP，APP点击接听按钮无效，无法接听（门口机呼叫正常）
*  Modified   : 注释掉室内机来电预览流程（不需要流程）
*  Issue      : 无
*  Affected   :来电
**********************************************/
/*********************************************
*  New Version: 3.0.0.83
*  Old Version: 3.0.0.82
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/08/08
*  Reason     :1.bug webview证书问题
*             :2.来电接听问题
*  Modified   : 添加webserver获取接口，signup请求地址修改成新获取的webserver接口
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.84
*  Old Version: 3.0.0.83
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/08/09
*  Reason     :1.bug 10485 3.0.0.83 版本 my profile页面，点击进入修改密码页面, 点击original password但不输入任何字符，点击返回，会提示net error
*             :2.bug 10484 3.0.0.83版本 点击忘记密码页面，会弹出警告
*             :3.bug 10487 3.0.0.83版本 建议live view 放大页面去除时间显示，且该显示时间也是错误的，固定显示一个错误时间
*  Modified   : 1. 该问题的原因是当webview的输入框获取到焦点的时候，有进行网络请求，此时，马上点击返回，就导致请求失败，这边做了处理，在返回的时候，不弹出提示
*             : 2. 忘记密码的地址也修改为从webserver
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.85
*  Old Version: 3.0.0.84
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/08/23
*  Reason     : bug:页面加载出现net::ERR_ADDRESS_UNREACHABLE
*  Modified   : 1.net model修改IP种类判断方法
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.86
*  Old Version: 3.0.0.85
*  Author     : Junjie.xu/Self
*  CommitType : story
*  Date       : 2018/09/04
*  Reason     : NFC功能开发
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.87
*  Old Version: 3.0.0.86
*  Author     : Junjie.xu/Self
*  CommitType : story
*  Date       : 2018/09/04
*  Reason     : NFC功能开发
*  Modified   :字符串移到lib_common里面
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.88
*  Old Version: 3.0.0.87
*  Author     : Junjie.xu/Self
*  CommitType : story
*  Date       : 2018/09/04
*  Reason     : NFC功能开发
*  Modified   :nfc库提交
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.89
*  Old Version: 3.0.0.88
*  Author     : Junjie.xu/Self
*  CommitType : story
*  Date       : 2018/09/04
*  Reason     : NFC功能开发
*  Modified   :build.sh添加libnfc_akuvox.so库
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.90
*  Old Version: 3.0.0.89
*  Author     : Junjie.xu/Self
*  CommitType : story
*  Date       : 2018/09/04
*  Reason     : NFC功能开发
*  Modified   :build.sh添加libnfc_akuvox.so库 修改s
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.91
*  Old Version: 3.0.0.90
*  Author     : Bink/Self
*  CommitType : story
*  Date       : 2018/09/27
*  Reason     : 1、首次登录询问数据采集
*             : 2、点击登录时，服务器id未获取时，跳转获取
*             : 3、应用更新功能
*             : 4、视频录制计划（增删改）、视频录制时长编辑、视频录制按钮、视频查看、视频下载、视频删除
*             : 5、监控中有motion来时的处理
*             : 6、账号异地登录处理
*             : 7、账号过期处理
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.92
*  Old Version: 3.0.0.91
*  Author     : Bink/Self
*  CommitType : story
*  Date       : 2018/09/28
*  Reason     :补充提交
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.93
*  Old Version: 3.0.0.92
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/09/28
*  Reason     : 1. 下载依赖的第三方库下载失败
*             : 2. dclient在网络切换的时候会强制杀死线程，导致应用崩溃
*  Modified   : 1. 将aar包下载下来进行替换
*             : 2. 更新dclient库
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.94
*  Old Version: 3.0.0.93
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/09/29
*  Reason     : 1. 日期选择没有填默认时间
*             : 2. dclient上报的数据有误
*             : 3. 处于monitor时，来motion弹窗未屏蔽
*             : 4. 视频播放失败，原因为之前使用的.so文件在应用升级到android o后，提示版本过低
*             : 5. 之前替换的android下载库下载异常
*             : 6. 视频删除功能不可用
*  Modified   : 1. 日期选择进去的时候，如果为空，开始日期默认选择今天，结束日期选择下一天，开始时间选择现在，结束时间选择下一小时
*             : 2. 更新dclient库
*             : 3. 更换位置
*             : 4. 暂时切换播放引擎为系统的MediaPlayer
*             : 5. 将下载库依赖的所有包都下载下来，并修改视频的默认存储路径为导出log路径的上两级路径
*             : 6. 新增VolleyRequestTools的delete封装，视频删除采用delete
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.95
*  Old Version: 3.0.0.94
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/09/29
*  Reason     : 1. 打包失败，原因为bugly的aar包下载失败
*  Modified   : 1. 将aar包下载下来进行替换
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.0.96
*  Old Version: 3.0.0.95
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2018/09/29
*  Reason     : 1. Android O手机状态栏消息没有显示
*  Modified   : 1. Android O状态栏消息适配，并新增收到通知后的桌面图标右上角数量显示。并修复在部分手机上，消息显示不全的问题
*             : 2. 替换requestAppConf的请求api-version为3.0
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.00
*  Old Version: --
*  Author     : Bink/Self
*  CommitType :
*  Date       : 2018/09/30
*  Reason     : 1. 3.1分支
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.01
*  Old Version: 3.0.1.00
*  Author     : Bink/Self
*  CommitType :bug
*  Date       : 2018/09/30
*  Reason     : 1.通过设备处的Log无法查看Video Records
*  Modified   : 添加对应的方法
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.02
*  Old Version: 3.0.1.01
*  Author     : Bink/Self
*  CommitType :bug
*  Date       : 2018/09/30
*  Reason     : 1.原生播放引擎MediaPlayer速度且支持的格式相比IjkPlayer的差，这边做个优化，切换为IjkPlayer
*  Modified   : 切换播放引擎为IjkPlayer，替换Ijkplayer相关的aar包和.so库
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.03
*  Old Version: 3.0.1.02
*  Author     : Bink/Self
*  CommitType :bug
*  Date       : 2018/10/10
*  Reason     : dclient重新连接上报
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.04
*  Old Version: 3.0.1.03
*  Author     : Bink/Self
*  CommitType :bug
*  Date       : 2018/10/16
*  Reason     : 1.bug 11197 3.0.1.02版本 APP 侧边栏 设置页面要默认开启motion
*             : 2.bug 11218 3.0.1.02版本 APP和室内机通话页面要把cancel按钮居中
*             : 3.bug 11253 3.0.1.03版本 APP video records进入详情删除时，要弹窗提示用户是否确认删除
*             : 4.bug 11254 3.0.1.03版本 APP log out之后并杀掉APP，室内机触发alarm ，APP有概率会接收到alarm消息（有些消息是在线，有些是离线）
*             : 5.bug 11274 3.0.1.03版本 登陆页面 ，Advanced options页面未根据需求做二维码扫描
*             : 6.bug 11278 3.0.1.03版本 video records详情页面点击下载，提示下载完成，并未在相册找到该视频
*             : 7.bug 11279 3.0.1.03 （社区）APP 公共设备live view页面和来电预览界面去掉record按钮，个人APP不可以对公共设备进行录制
*             : 8.bug 应用dclient上报状态的时候添加标识位：version
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.05
*  Old Version: 3.0.1.04
*  Author     : Bink/Self
*  CommitType :bug
*  Date       : 2018/10/23
*  Reason     : 1. bug 11438 3.0.1.04版本 公共设备来电页面排版显示有问题
*             : 2. bug 11465 3.0.1.04版本 APP在后台，alarm消息显示不正确
*             : 3. bug 关于app未读消息，进入消息页面后显示小红点有错问题
*             : 4. bug 11455 3.0.1.04版本 APP（安卓）点击log out退出到登陆页面，此时另一台手机（安卓）登陆相同账号，回到登陆页面的APP仍会弹出账号异地登陆的消息
*             : 5. bug 11396 3.0.1.04版本 advanced options 页面扫描设备device code，点击obtain，未能获取服务器地址
*             : 6. bug 11418 3.0.1.04版本 APP账号过期后退后，账号续费后不过期，但此时APP仍无法登陆，提示过期（任何账号都无法登陆），对比IOS可正常登陆
*             : 7. bug 11394 3.0.1.04版本 video records删除视频不成功，提示删除成功返回视频还在，点击进入视频再次删除无反应，会出现APP无响应
*             : 8. bug 11250 3.0.1.03版本 手机在黑屏状态下无法用NFC开门，在前台也有概率出现一直开不了门，再点进入ＮＦＣ界面此时又可以开门
*  Modified   : 1. 对按钮的显示和隐藏改为对其父布局的显示和隐藏
*             : 2. 修改消息title更新dclient
*             : 3. 添加回调，更新noptification id
*             : 4. dclient在发送断开消息之后，会重连，这边做判断，如果应用已经退出，则不上报消息
*             : 5. 添加对device code的处理
*             : 6. 过期后，重新登录时，重置是否过期标识
*             : 7. 视频还在为平台原因，这边解决应用卡住的问题，采用子线程处理视频时长的获取
*             : 8. 黑屏一段时间，用来写nfc数据的服务死掉，就无法使用，因为在Android O及之后的版本中，无法保活，不处理黑屏。关于在其他页面没反应，这边在MainSerivice也添加nfc数据请求
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.06
*  Old Version: 3.0.1.05
*  Author     : Bink/Self
*  CommitType :bug
*  Date       : 2018/10/24
*  Reason     : 1. MainSerivice 启动方法适配android o
*             : 2. 当重新获取数据时，添加dclient上报
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.07
*  Old Version: 3.0.1.06
*  Author     : Bink/Self
*  CommitType :bug
*  Date       : 2018/10/24
*  Reason     : 1. 隐藏视频录制相关包括侧边栏录制计划、设置录制时长、通话和监控页面录制按钮
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.08
*  Old Version: 3.0.1.07
*  Author     : Bink/Self
*  CommitType :bug
*  Date       : 2018/10/24
*  Reason     : 1. dclient修改后有问题，回退版本
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.09
*  Old Version: 3.0.1.08
*  Author     : Bink/Self
*  CommitType :bug
*  Date       : 2018/10/25
*  Reason     : 1. 11538 3.0.1.06版本 （IPV6）Setting页面 NFC code切换没有重新获取
*  Modified   : 添加IP6网络环境下的请求
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.10
*  Old Version: 3.0.1.09
*  Author     : Bink/Self
*  CommitType :bug
*  Date       : 2018/10/29
*  Reason     : 1. bug 11575 安卓和IOS APP，网页修改密码，APP先提示账号异地登陆，再提示密码已修改。请去掉异地登录的提示语
*  Modified   : 添加重新获取服务器的请求返回值为-1的处理
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.11
*  Old Version: 3.0.1.10
*  Author     : Bink/Self
*  CommitType :bug
*  Date       : 2018/11/1
*  Reason     : 1. bug 二维码扫描通过选取相册的时候，扫描失败，应用出现闪退
*             : 2. bug 11700 3.0.1.10版本 APP在线和退出登陆时，收到短信息，进入查看信息，信息的已读未读状态显示不一致
*  Modified   : 1. 添加对libzbar.so 库的拷贝
*             : 2. 该问题的原因的H5的version要更新到4.2，并且，在收到新消息后，不能更新notificationId(只有在登录时获取到和H5传值时更新）
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.12
*  Old Version: 3.0.1.11
*  Author     : ziyang.bai/Bink
*  CommitType :story
*  Date       : 2018/11/13
*  Reason     : 1. 2381 【Akuvox】SmartPlus 翻译修改  #3
*  Modified   : 1. 首次下载使用时，数据访问权限弹窗的内容要修改
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.13
*  Old Version: 3.0.1.12
*  Author     : Bink/Self
*  CommitType :story&bug
*  Date       : 2018/12/12
*  Reason     : 1. Story: 2461 【Palwintec】隐藏SmartPlus notification
*  Modified   : 2. bug 12156 3.0.1.12版本 APP NFC开门时有概率会出现传给设备的码不是发给29的NFCcode，导致无法开门
*             : 3. bug 12155 3.0.1.12版本 先关闭NFC code，再开启，退回到主界面，再重新进入setting页面，NFCcode状态显示关闭
*             : 4. bug 12154 3.0.1.12版本 APP退出登录，另一台手机登陆此账号，退出登录的APP仍可以用NFC开门
*             : 5. bug 12112 3.0.1.12版本 对门口机进监控画面，cancel图标显示有误
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.1.14
*  Old Version: 3.0.1.13
*  Author     : Bink/Self
*  CommitType :story
*  Date       : 2018/11/18
*  Reason     : 1. story 2470 【Zipatotr】Smartplus 支持土耳其语
*  Modified   : 1. 添加土耳其语言翻译
*  Issue      : 无
*  Affected   :normal
**********************************************/
/*********************************************
*  New Version: 3.0.1.15
*  Old Version: 3.0.1.14
*  Author     : Bink/Self
*  CommitType :story
*  Date       : 2019/1/3
*  Reason     :1.Story: 2472 【云4.3】SmartPlus支持BLE开R29锁
*             :2.bug: 【smartplus】12402 V4.2-55215版本 设备location为63位，APP账号为63位时，BUG汇总，请安排解决
*             :3.Story APP监控预览统计
*  Modified   :
*  Issue      : 无
*  Affected   :normal
**********************************************/
/*********************************************
*  New Version: 3.0.2.1
*  Old Version: -
*  Author     : Bink/Self
*  CommitType :story
*  Date       : 2019/1/7
*  Reason     :1.新分支，用于处理云4.3
*  Modified   :
*  Issue      : 无
*  Affected   :normal
**********************************************/
/*********************************************
*  New Version: 3.0.2.2
*  Old Version: 3.0.2.1
*  Author     : Bink/Self
*  CommitType :story
*  Date       : 2019/1/8
*  Reason     :1.支持sip 协议和语音编码配
*             :2.Story 2593 【4.3】SmartPlus的Setting页面，新增CallType和Door Release PIN设置
*             :3.修改单选框样式、仿MIUI10风格
*  Modified   :
*  Issue      : 无
*  Affected   :normal
**********************************************/
/*********************************************
*  New Version: 3.0.2.3
*  Old Version: 3.0.2.2
*  Author     : Bink/Self
*  CommitType :story
*  Date       : 2019/1/9
*  Reason     :1.bug 12791 3.0.1.13版本 APP导出log不能选择导出到文件，只能选择导出到文件夹
*             :2.story 修改Version为4300
*             :3.story 登陆时候在那个未读消息里面多一个是否初始化过的标识，根据标识选择不同主页
*  Modified   :1.修改选择模式为文件夹模式,并微调界面，使选择的地址能够完整显示
*             :2.调整主题颜色，沉浸式状态栏
*  Issue      : 无
*  Affected   :export log
**********************************************/
/*********************************************
*  New Version: 3.0.2.4
*  Old Version: 3.0.2.3
*  Author     : Bink/Self
*  CommitType :story
*  Date       : 2019/1/11
*  Reason     :1.新增：是否激活标识
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.5
*  Old Version: 3.0.2.4
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2019/1/16
*  Reason     :1.bug 12995 3.0.2.4版本，第一次登录社区主账户页面，在初始化页面返回，登录别的个人主账户，logout后停留在初始化页面
*             :2.bug 12994 3.0.2.4版本，app在设备的arming页面，触发多次alarm，有概率出现不弹alarm框
*             :3.bug 12979 3.0.2.4版本，（社区和个人主账户）开启NFC,返回重新进入查看NFC被关闭
*             :4.bug 12967 3.0.2.4版本，开启NFC,不能正常获取到nfc code，无法开门
*             :5.bug 12959 3.0.2.4版本，my account页面下的右上角的收费标准的入口要去掉
*             :6.bug 12935 3.0.2.4版本，APP端登录，第一次初始化页面，会跳出H5页面，然后跳转到登录页面
*             :7.bug 12927 3.0.2.4版本，登录 页面点击forge password没有反应，不跳转到忘记密码页面
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.6
*  Old Version: 3.0.2.5
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2019/1/17
*  Reason     :1.bug 13008 3.0.2.4版本，所有的Dealed要改成Dealt
*             :2.bug 13009 3.0.2.5版本，从上个升级版本3.0.1.15版本升级到3.0.2.5版本无法正常使用
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.7
*  Old Version: 3.0.2.6
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2019/1/21
*  Reason     :1.bug 13029 3.0.2.5版本，app有概率收不到alarm（上报完状态，又断开连接，连接上有上报状态）
*             :2.bug 13033 3.0.2.5版本，点击忘记密码后返回，账号会变成之前登录的账号
*             :3.bug 13045 3.0.2.5版本，修改密码后，首次登录，会提示token失效
*             :5.bug 13061 3.0.2.5版本 APP在后台收到的警报 location显示有误
*             :6.bug 13077 3.0.2.5版本 个人主从账号要去掉call type字段，只有社区主账号才显示
*             :7.bug 13097 3.0.2.5版本 APP在前台，设备触发警报，再解除警告，APP仍一直响告警音，很久才停
*             :8.新增与h5的弹窗交互
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.8
*  Old Version: 3.0.2.7
*  Author     : Shengchang.lai/Self
*  CommitType : story
*  Date       : 2019/1/23
*  Reason     :1.Story 2655 【Poise】提供安卓版本smartplus的deeplink
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.9
*  Old Version: 3.0.2.8
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2019/1/30
*  Reason     :1.bug 13228 3.0.2.7版本 APP每次进入Setting都会提示Start Advertising（每次登陆也会提示）
*             :2.bug 13211 3.0.2.7版本 APP每次退出登陆回到登陆页面，点击显示密码按钮，要清空密码
*             :3.bug 13141 3.0.2.7版本，app呼叫，连续呼叫70下会出现app崩掉的问题
*             :4.bug 13134 3.0.2.7版本，设置开启motion，返回重新进入settings，motion被关闭，在重新进入，motion又开启
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.10
*  Old Version: 3.0.2.9
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2019/1/30
*  Reason     :1.bug 13134 3.0.2.7版本，设置开启motion，返回重新进入settings，motion被关闭，在重新进入，motion又开启）
*  Modified   : 补充提交
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.11
*  Old Version: 3.0.2.10
*  Author     : Bink/Self
*  CommitType : bug
*  Date       : 2019/1/30
*  Reason     :1.修复IPV6和IPV4切换后，网页没有重新加载问题
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.12
*  Old Version: 3.0.2.11
*  Author     : Bink/Self
*  CommitType : story
*  Date       : 2019/2/18
*  Reason     :1.story 2706 【JTS】 安卓smartplus 日语版本
*  Modified   :
*  Issue      : 无
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.13
*  Old Version: 3.0.2.12
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/2/26
*  Reason     : S-2711-A: 【云4.3】云平台支持从Smartplus解锁不同relay
                B-13221-M: 安卓和ios，建议社区个人-主从账号下的my account隐藏，因为没有收费，该页面没有太大作用
                A: 联系人更新后，重新获取Comconf
                A: 拦截H5错误提示弹窗，改用android实现
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.14
*  Old Version: 3.0.2.13
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/2/27
*  Reason     : B-13531-M: 3.0.2.13版本，给设备添加2个Relay，通话中relay2无法开门
                B-13534-M: 3.0.2.13版本，通话解锁按relay2开门，实际开relay3
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.15
*  Old Version: 3.0.2.14
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/3/12
*  Reason     : O: 监控接入的服务器地址改为vrtspServer
*  Modified   :
*  Affected   : 监控、来电预览
**********************************************/
/*********************************************
*  New Version: 3.0.2.16
*  Old Version: 3.0.2.15
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/3/15
*  Reason     : M: 带数据升级出现闪退问题
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.17
*  Old Version: 3.0.2.16
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/3/18
*  Reason     : A: Smartplus SDK封装
*  Modified   :修改gradle，以便aar打包配置
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.18
*  Old Version: 3.0.2.17
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/3/27
*  Reason     : M: 修改opendoor 弹窗方式
                B-13874-M:APP放置后台5分钟， R2X呼叫APP，这时无法呼叫成功（手机没有任何响应），即使将APP切换到前台也是没有任何响应
                M:app放置后台一段时间，再到前台，dclient和sip状态有误
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.19
*  Old Version: 3.0.2.18
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/4/2
*  Reason     : A: 新增远程log
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.20
*  Old Version: 3.0.2.19
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/4/2
*  Reason     : A: 新增远程log
*  Modified   : 当远程日志开关关闭时，将不再检测合法性
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.2.21
*  Old Version: 3.0.2.20
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/4/12
*  Reason     : S-2877-A:【云4.4】支持TLS连接方式，默认开启SIP Hacking Prevent等
*  Modified   : 1、开启SIP Hacking 2、Call Type 变更 3、增加设备删除接口 4、修改页面加载成功前的标题 5、修改首次登录提示语
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.2
*  Old Version: 3.0.3.1
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/4/17
*  Reason     : M: 添加声音开启失败后的重试
                M: 放置一段时间重新进入导致状态异常
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.3
*  Old Version: 3.0.3.2
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/4/17
*  Reason     : M: 解决杀掉后异地登录，再次打开应用后闪退
*  Modified   : 重连服务器，当发现token不对时，只打log,退出动作交给h5，同时h5部分要做处理，当发现token无效后，弹窗提示，确认后退出，之后不做操作。
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.4
*  Old Version: 3.0.3.3
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/4/23
*  Reason     : A: app获取pbx信息接口更改
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.5
*  Old Version: 3.0.3.4
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/4/23
*  Reason     : M: dclient版本修改为4400，上报密码置空
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.6
*  Old Version: 3.0.3.5
*  User       : Jane
*  Author     : Jane
*  Date       : 2019/4/28
*  Reason     : S-2970-A: 【Robert】smartplus for android 繁体语言
*  Modified   : 增加繁體中文翻譯資源
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.7
*  Old Version: 3.0.3.6
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/5/7
*  Reason     : A: BLE添加加密流程
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.8
*  Old Version: 3.0.3.7
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/5/8
*  Reason     : M: 兼容旧版本云
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.9
*  Old Version: 3.0.3.8
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/5/8
*  Reason     : M: 兼容旧版本云
*  Modified   : 将新增字段移动到server_list接口中，并添加对版本号的判断和call type的旧服务器版本支持
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.10
*  Old Version: 3.0.3.9
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/5/9
*  Reason     : M: 兼容旧版本云
                M: 第一次输入密码时，第一位会没掉
*  Modified   : 修复解析错误
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.11
*  Old Version: 3.0.3.10
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/5/9
*  Reason     : M: 兼容旧版本云
                M: 第一次输入密码时，第一位会没掉
*  Modified   : 退出登录时，清空保存的服务器信息。
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.12
*  Old Version: 3.0.3.11
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/5/9
*  Reason     : B-14464-M: Android 3.0.3.5版本 smartplus在motion列表查看不了截图详情
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.13
*  Old Version: 3.0.3.12
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/5/13
*  Reason     : M: Smartplus 在部分三星手机上，通话没有声音
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.14
*  Old Version: 3.0.3.13
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/5/21
*  Reason     : B-14603-M: 14603 IPV6环境下，来电无法预览
                M:SipHuking 导致IPV6下，无法收到来电
*  Modified   : 添加网络状态判断为异常下的相关log
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.3.15
*  Old Version: 3.0.3.14
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/6/17
*  Reason     : O:词条整理（繁体、日语、韩语）
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.1
*  Old Version: -
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/6/17
*  Reason     : A: 开启NACK
                A: 添加rtt和丢包率显示
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.2
*  Old Version: -
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/6/24
*  Reason     : A: Story 【Smartplus】3119 【云4.5】SmartPlus需求
                B-14853-M:【BLVS客户反馈问题】3.0.3.14版本SIP概率性无法注册上
                B-14854-M:【BLVS客户反馈问题】3.0.3.14版本S9手机本地小声对方噪音严重
                B-14855-M:【BLVS客户反馈问题】3.0.3.14版本 VRTSP的密码打印在LOG中造成安全隐患
                A: 添加设置视频质量分析显示
*  Modified   :MediaModel的openNsy值改为1
               前后台切换，网络状态改变的情况下请求IP
               去除了VRTSP的密码打印Log
               O:请求用户数据requestAppConf中isLogin改为从SharedPreferences取值
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.3
*  Old Version: 3.0.4.2
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/6/26
*  Reason     : B-15148-M:【Smartplus】3.0.4.2版本 登录未激活个人主账号或社区主账号进不去主界面
                B-15172-M:【Smartplus】3.0.4.2版本 社区主账号的Advanced Settings里还包含了Call Type和Door Release PIN
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.4
*  Old Version: 3.0.4.3
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/6/27
*  Reason     : A: Story 【Smartplus】3282 【云4.5】Call Type显示优化
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.5
*  Old Version: 3.0.4.4
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/6/28
*  Reason     : M: 安装后未激活账号首次登陆不能跳转到支付页
*  Modified   :去除getChargeDealUrl的userType的非空判断
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.6
*  Old Version: 3.0.4.5
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/6/28
*  Reason     : B-15223-M:【Smartplus】Android 3.0.4.5版本 smartplus登录未激活账号会弹出提示语再进入付款界面
*  Modified   :不弹出提示语，直接进入付款界面
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.7
*  Old Version: 3.0.4.6
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/7/9
*  Reason     : B-15276-M:【Smartplus】Android 3.0.4.5版本 个人主账号与室内机视频通话过程中账号被顶掉仍然可以视频通话
                B-15437-M:【Smartplus】Android 3.0.4.5版本 smartplus通完电话后不操作不会触发休眠状态
                O:词条整理（繁体、日语、韩语、土耳其语）
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.8
*  Old Version: 3.0.4.7
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/7/10
*  Reason     : O:ChargeDeal页面添加title框
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.9
*  Old Version: 3.0.4.8
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/7/10
*  Reason     : O:新增家庭成员点击登陆时支付回退到MainActivity
*  Modified   :添加goToMainActivity()方法
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.10
*  Old Version: 3.0.4.9
*  User       : Bink
*  Author     : Andrew
*  Date       : 2019/7/25
*  Reason     : S-3365-M:【云4.5】词条修改
                S-3368-A: 【云4.5】升级提示
*  Modified   :Unlock->Open Door;subscription 和 payments繁体翻译;User Agreement->Terms and Conditions
               取消应用内升级，统一跳转到google play store;增加是否需要强制升级判断，并可选择强制升级模式和非强制升级模式
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.11
*  Old Version: 3.0.4.10
*  User       : Bink
*  Author     : Andrew
*  Date       : 2019/7/25
*  Reason     :M:登录接口和获取服务器信息接口api_version更新为4.5
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.12
*  Old Version: 3.0.4.11
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/8/6
*  Reason     :B-15821-M:Android 3.0.4.11版本 smartplus登录过云4.5个人主账号后登录4.4的个人主账号侧边栏会出现subscription和payment
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.13
*  Old Version: 3.0.4.12
*  User       : Bink/phoenixylf
*  Author     : Bink
*  Date       : 2019/8/20
*  Reason     :A:新增对64位CPU架构支持
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.4.14
*  Old Version: 3.0.4.13
*  User       : Bink/Linky
*  Author     : Bink
*  Date       : 2019/8/21
*  Reason     :M:回音和双工优化
*  Modified   : 采用系统自带的回音消除方式
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.1
*  Old Version: -
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/9/9
*  Reason     :S-3472-A:【Smartplus】云4.6相关需求
*  Modified   :安全运维提升：
               1.csgate接口加密
               2.全链路跟踪系统
               蓝牙开锁优化：BLE功能改成摇一摇开锁，不再是靠近就开
               TempKey权限控制：平台下发App账号是否有创建TempKey的权限，若无权限，要把TempKey功能隐藏
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.2
*  Old Version: 3.0.5.1
*  User       : Bink/Andrew
*  Author     : Bink
*  Date       : 2019/9/10
*  Reason     :A:添加64位库拷贝脚本
*  Modified   :修改build.sh
               更新库文件
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.3
*  Old Version: 3.0.5.2
*  User       : Bink/Andrew
*  Author     : Bink
*  Date       : 2019/9/11
*  Reason     :A:更新项目gradle版本
*  Modified   : 移除华为推送（兼容性问题，现在也弃用，之后需要集成新的api）
               更新库文件
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.4
*  Old Version: 3.0.5.3
*  User       : Bink/Andrew
*  Author     : Bink
*  Date       : 2019/9/23
*  Reason     :A:默认关闭aec回音消除功能，走系统自带回音消除
               S-3644-A:【云4.6】Installer代付，SmartPlus需求
               S-3531-A:【Solutionbride】 Smartplus app支持TLS
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.5
*  Old Version: 3.0.5.4
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/9/23
*  Reason     :S-16485-A:【云4.6】使用蓝牙摇一摇开门后提示语错误
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.6
*  Old Version: 3.0.5.5
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/9/26
*  Reason     :A:增加离线alarm_id；修改alarm弹窗显示
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.7
*  Old Version: 3.0.5.6
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/9/27
*  Reason     :S-16485-A:【云4.6】使用蓝牙摇一摇开门后提示语错误
*  Modified   :修复多次连接问题和超时提示不正确问题
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.8
*  Old Version: 3.0.5.7
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/9/28
*  Reason     :S-3644-A:【云4.6】Installer代付，SmartPlus需求
*  Modified   :去掉alarm处理成功后的toast提示
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.9
*  Old Version: 3.0.5.8
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/9/29
*  Reason     :B-16807-M:Android 3.0.5.8版本 APP挂在后台一段时间会出现蓝牙摇不了的情况
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.10
*  Old Version: 3.0.5.9
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/9/29
*  Reason     :B-16829-M:Android 3.0.5.8版本 当存在SOS报警消息登录APP，如果sip账号还没注册上点击取消会出现提示语
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.11
*  Old Version: 3.0.5.10
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/10/15
*  Reason     :S-3641-A:【JTS】smartplus 日语版本发布
               M:Login页面和About页面横屏下显示异常
*  Modified   :补充缺少的词条
               页面采用ScrollView包裹
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.5.12
*  Old Version: 3.0.5.11
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/10/16
*  Reason     :S-3641-A:【JTS】smartplus 日语版本发布
*  Modified   :整理词条，后续只需维护lib_common下的词条，后续新增也都整合到lib_common中
               移除cellgate
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.1
*  Old Version: -
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/10/28
*  Reason     :A:ZRTP加密
*  Modified   :新增zrtp，由于服务端暂无规划，这边仅整理提交，下面记录提交的点
               1. CallActivityParamsTools里面新增getSrtpStatus，用来判断srtp的加密类型
               2. MediaCallBack 新增updateZrtpStatus,用来srtp的加密类型，当收到更新后，做界面更新动作，这边更新动作先不处理
               3. 高级设置界面添加加密选项的设置（现在隐藏），这边添加只为了将整个流程串起，也方便后续的查阅，这个配置的设置，目前账号重新刷就会没掉，后续需要平台下发
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.2
*  Old Version: 3.0.6.1
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/11/12
*  Reason     :M:cancelOpenDoorDialog导致闪退
*  Modified   :在CallActivity执行onDestory的时候，调用cancelOpenDoorDialog作为保护
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.3
*  Old Version: 3.0.6.2
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/11/13
*  Reason     :M:showBleUnlockingDialog导致闪退
*  Modified   :showBleUnlockingDialog的时候，先判断是否有权限，没有的话，进行提示
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.4
*  Old Version: 3.0.6.3
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/11/20
*  Reason     :M:国内离线推送
               M:中文翻译
*  Modified   :集成极光、华为、小米推送，添加中文翻译
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.5
*  Old Version: 3.0.6.4
*  User       : Weijian.wang/Bink
*  Author     : Weijian.wang
*  Date       : 2019/11/26
*  Reason     :M:修改打包脚本的签名为V1和V2两种方式
*  Modified   :修改签名方式为V2
*  Affected   :APK打包签名
**********************************************/
/*********************************************
 *  New Version: 3.0.6.6
 *  Old Version: 3.0.6.5
 *  User       : Bink
 *  Author     : Bink
 *  Date       : 2019/11/28
 *  Reason     :A:添加访客系统功能
 *  Modified   :
 *  Affected   :
 **********************************************/
/*********************************************
 *  New Version: 3.0.6.7
 *  Old Version: 3.0.6.6
 *  User       : Bink
 *  Author     : Bink
 *  Date       : 2019/11/29
 *  Reason     :A:合并离线推送优化相关代码
 *  Modified   :
 *  Affected   :
 **********************************************/
/*********************************************
*  New Version: 3.0.6.8
*  Old Version: 3.0.6.7
*  User       : Weijian.wang/Bink
*  Author     : Weijian.wang
*  Date       : 2019/11/29
*  Reason     :B-17675-M:app翻译问题汇总
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.9
*  Old Version: 3.0.6.8
*  User       : Andrew
*  Author     : Andrew
*  Date       : 2019/12/2
*  Reason     :M:国内离线推送OPPO和VIVO部分
*  Modified   :集成OPPO和VIVO推送
*  Affected   :
**********************************************/
/*********************************************
 *  New Version: 3.0.6.10
 *  Old Version: 3.0.6.9
 *  User       : Bink
 *  Author     : Bink
 *  Date       : 2019/12/12
 *  Reason     :S-3971-A:【Akuvox】云5.0需求，Temp Key优化等
 *  Modified   :添加离线推送后台注册模式控制开关
 *              新增TempKey时间选择
 *              新增TempKey分享（短信分享文本、微信分享图片、WhatsApp分享文本）
 *              新增国家/地区选择
 *  Affected   :
 **********************************************/
 /*********************************************
  *  New Version: 3.0.6.11
  *  Old Version: 3.0.6.10
  *  User       : Bink
  *  Author     : Bink
  *  Date       : 2019/12/12
  *  Reason     :M:登录请求的progress没有居中
  *  Modified   :修改布局使居中,撤回误提交
  *  Affected   :
  **********************************************/
/*********************************************
*  New Version: 3.0.6.12
*  Old Version: 3.0.6.11
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/12/12
*  Reason     :O:优化时间选择颜色
*              M:修复双击退出，sip不注销
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.13
*  Old Version: 3.0.6.12
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/12/17
*  Reason     :M:修复临时秘钥时间选择顺序
*              M:修复对推送类型的判断
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.14
*  Old Version: 3.0.6.13
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/12/17
*  Reason     :O:修改国家和地区的选择界面
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.15
*  Old Version: 3.0.6.14
*  User       : Bink
*  Author     : Bink
*  Date       : 2019/12/18
*  Reason     :O:添加平台是否安装的判断
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.16
*  Old Version: 3.0.6.15
*  User       : Bink/Andrew
*  Author     : Bink
*  Date       : 2019/12/24
*  Reason     :Story-4143-A:【云5.0】TempKey Info页面，增加删除按钮
*              M: 主页面版本改为5.0
*  Modified   :
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.17
*  Old Version: 3.0.6.16
*  User       : Bink/Andrew
*  Author     : Bink
*  Date       : 2019/12/30
*  Reason     :M: 网络改变，但IP没有重新获取
*  Modified   : 主要的原因是国内离线推送的一次提交在MainSerivice的消息接收处，误加一个return,需要去掉
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.18
*  Old Version: 3.0.6.17
*  User       : Bink/Andrew
*  Author     : Bink
*  Date       : 2019/1/03
*  Reason     :M: 添加部分词条日语和土耳其语翻译
*  Modified   : 添加部分词条日语和土耳其语翻译
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.19
*  Old Version: 3.0.6.18
*  User       : Bink/Andrew
*  Author     : Bink
*  Date       : 2019/1/07
*  Reason     :M: 上架失败
*  Modified   : 直接修改版本号，用于重新上传
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.20
*  Old Version: 3.0.6.19
*  User       : Bink/Andrew
*  Author     : Bink
*  Date       : 2019/1/08
*  Reason     :M: 上架失败
*  Modified   : 移除无用的CALL_PHONE权限申请以及Mob关于用户隐私的权限申请
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.21
*  Old Version: 3.0.6.20
*  User       : Bink/Andrew
*  Author     : Bink
*  Date       : 2019/1/08
*  Reason     :M: 上架失败(JPUSH非法收集用户数据)
*  Modified   : 移除JPUSH相关代码
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.22
*  Old Version: 3.0.6.21
*  User       : Bink/Andrew
*  Author     : Bink
*  Date       : 2019/1/17
*  Reason     : M:离线推送概率性拉不起通话界面
*  Modified   : cancelCallNotification 存在隐患，修复该问题，并调整该动作到通话页面拉起后
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.23
*  Old Version: 3.0.6.22
*  User       : Andrew/Bink
*  Author     : Andrew
*  Date       : 2019/1/17
*  Reason     : M:【Bytech】(bug) Smartplus android返回键退出app后，打开app无法使用NFC开门
*  Modified   : MainActivity退出异常，导致重新进入APP时SplashActivity没有加载
*  Affected   :
**********************************************/
/*********************************************
*  New Version: 3.0.6.24
*  Old Version: 3.0.6.23
*  User       : Bink/Andrew
*  Author     : Bink
*  Date       : 2020/3/10
*  Reason     : O:开启WebView加载缓存
*               M:移除部分敏感Log
*  Modified   : 缓存策略采用LOAD_DEFAULT，图片加载待网页显示后，再加载
*  Affected   : H5页面加载
**********************************************/
#endif