##  SDK版本记录(main)
1.1.5 --2022.9.15
1,修改标题
1.1.4 --2022.9.15
1,补充FB登陆和绑定
1.1.3 --2022.8.29
1,修改初始化参数,只保留日语游戏参数
1.1.2 --2022.6.20
1,添加问卷功能
1.1.1 --2022.6.10
1,删除idfa提示界面
2,添加注销账号功能

1.1.0 --2022.5.5
1,更新AF的appid 在方法didFinishLaunchingWithOptions
1.0.9 --2022.4.29
1,更新appid
1.0.8 --2022.4.29
1,修改重新选择语言接口
1.0.7 --2022.4.26
1,补充SDK打点
1.0.6 --2022.4.25
1,修復除了日語,其他語言不彈idfa的問題(iOS15的延遲bug)
2,該遊戲當前接入了日語和英語.
3,補充Info.plist  Advertising attribution report endpoint URL https://appsflyer-skadnetwork.com/
1.0.5 --2022.4.18
1,修改重新选择语言接口

1.0.0 --2022.3.07
针对特定游戏定制多语言竖屏SDK


-------------------------

2.3.5 - 5/8号
1,添加os_version字段:当前设备的iOS版本
2.3.4 - 5/6号
1.添加零界的idfa图片
2.3.3 - 4/23号
1,公告请求数据接口变化:不同类别分别进行请求
2,更新AF到6.2.5
2.3.2 - 4/13号
1,广告相关:
Info.plist配置GADApplicationIdentifier  ca-app-pub-4477834132340814~2557364430(该值根据游戏会不一样)
IS初始化增加:
IronSource setMetaDataWithKey:@"AdMob_TFCD" value:@"true"];
[IronSource setMetaDataWithKey:@"AdMob_TFUA" value:@"true"];
添加库:
ISAdMobAdapter,GoogleMobileAds,ISFacebookAdapter,GoogleMobileAds和UserMessagingPlatform
2.3.1 - 3/29号
1,修改广告权限弹窗
2.3.0 -3/26号
1,IS广告Info.plist配置
<key>SKAdNetworkItems</key>
<array>
   <dict>
      <key>SKAdNetworkIdentifier</key>
      <string>su67r6k2v3.skadnetwork</string>
   </dict>
</array>
2,IS修改初始化和展示视频的参数配置
3.初始化增加RewardKey参数
2.2.9 --3/24号
1,修复广告权限请求功能
2,默认登录方式弹窗提示错误
2.2.8 -- 3/12号
1,修改IS功能的初始化方式:需要获得角色id和服务器id时,传入这两个参数;
2,展示IS功能需要传递dic参数
3,添加iOS14的idfa权限请求
2.2.7 -- 3/5号
1,增加IS功能
   在Info.plist中View controller-based status bar appearance  设置为NO
2,更新FB9.1
2.2.6 -- 2/25号
1,更新AF6.2.2
2,iOS14,添加Privacy - Tracking Usage Description 广告标识符idfa的获取权限
2.2.5 -- 2.23号
1,FB8.2  Google7.5.0 
2.2.4 -- 1.28号
1,修正部分提示语
2,更新AF到6.14版本
2.2.3 -- 1.15号
1,Info.plist中推特LSApplicationQueriesSchemes补充:twitter,twitterauth
2.2.2 -- 1.14号
1,移除AF的sdk_show_completed事件
2.2.1 -- 1.14号
1,最新游戏删除AF登录和注册事件.
2,旧的游戏还是需要AF登录和注册事件.
---2020---
2.2.0 -- 12.31号
1,删除推特参数配置信息
2.1.9 -- 12.18号
1,添加分享接口
2.1.8 -- 12.8号
1,Google的firbase更新到最新版本
2.1.7 -- 12.4号
1,FB更新到7.1.1
2.1.6 -- 12.3号
1,追加打点事件
2.1.5 -- 11.13号到26号
1,适配竖屏UI布局
2.1.4 -- 11.9号
1,修复公告页数据个数等于0会出现崩溃的bug
2,修改所有域名为eyougame.com
2.1.3 -- 10.20号
1,更新AF版本到6.0.5
2.1.2 --9.21号
1,添加https://sdk-web.eyougame.com/doc/policy-jp/   的跳转

2.1.1 -- 9.16号
修复今日不再展示bug

2.1.0 -- 9.14号
1,修改绑定的苹果logo
2,换回旧版Google和fb

2.0.9 --9.9号
新版本公告:
1,更新GolfBundle.bundle,有新的图片资源
2,PearSDK.framework
3,正确导入字体:字体文件和Info.plist配置

2.0.8--9月7号
更新第三方SDK
1,FBSDK,7.1.1
2,GoogleSDK,6.31
添加swift空桥接文件
添加系统库:Accelerate.framework,libc++.tbd
2.0.7 --8/20
新的公告页面
2.0.6 --8.4
修改利用契约的展示范围
2.0.5
firSDK有更新
2.0.4
新加下单接口等
2.0.3
新加SDK功能
1,创建新账号
2,点击公告图片事件
3,存在新建账号按钮?
2.0.2
>1,添加固定字段log日志
>2,打点事件
2.0.1
>1,添加iOS13的sign in apple 登录功能;

