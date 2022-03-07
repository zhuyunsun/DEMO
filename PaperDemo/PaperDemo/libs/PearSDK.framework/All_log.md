## 原始人SDK日志汇总
1.0.4 - 2022.03.07
1,SDK打包
1.0.3 - 2022.02.25
1,更新AF版本到6.5.2:替换旧版本即可
1.0.2 - 2022.02.09
1,适配iPad机型
1.0.1 - 2022.01.18
1,添加web页面
2,优化部分界面
//去掉web接口的ysr字段,等待新接口
//概率面板链接
//https://sdk-web.eyougame.com/doc/policy-jp/?theme=mafiaconnect
1.0.0 - 12.1
1,连线SDK最初版本

=========================

3.1.6 - 11.30
1,更新FB一些废弃方法
[FBSDKSettings setAdvertiserTrackingEnabled:YES];
[FBSDKSettings setAutoLogAppEventsEnabled:YES];
[FBSDKSettings setAdvertiserIDCollectionEnabled:YES];

3.1.5 - 11.25
1,修改战力保存接口
3.1.4 - 11.18
1,召回活动添加参数deviceid
3.1.3 - 11.18
1,修改任务id接口逻辑
2,新加活动开启接口
3.1.2 - 11.16
1,修改召回活动接口参数
3.1.1 - 11.12
1,AF更新到6.4.2
2,召回活动接口变动
3.1.0 - 11.11
1,添加老玩家召回活动接口
2,FB更新到12.1.0,新添加FBAEMKit.framework库
3.0.9 - 10.26
1,更新配置
2,跳转VK接口
3.0.8 - 9.17
1,firbase8.7.0版本和谷歌8.9.0匹配
3.0.7 - 9.17
1,AF打点初始化,在AF参数初始化之前;
2,更新IS SDK 版本7.1.10
3.0.6 - 9.10
1,优化接口
3.0.5 - 9.7
1,处理轮播图无法点击问题:点击跳转safari浏览器
3.0.4 - 8.31
1,AF的sdk_show_completed事件打点
2,AF的事件打点sdk_init
3.0.3 - 8.30
1,公告中今日不再展示交互.
3.0.2 - 7.14
1,添加俄文的VK登录
2,登录接口添加一个遮罩层
3.0.1 - 7.12
1,修改登录失败提示语
2,添加会员条款和隐私政策界面

6.25
1,增加打点
到达选择语言界面  sdk_Language
点击绑定账号按钮  game_account_ad
绑定账号完成打点 game_account_draw

6.21  

广告库的接入
IS7.1.5.1版本对应的不同版本库
1,Fyber
    Fyber4.3.16     
    xcode12.5运行    
    添加系统库libiconv.2.4.0.tbd
2,FB
    ISFacebookAdapter4.3.26
    
3,mob
    ISAdMobAdapter4.3.23


4,Unity ads
    ISUnityAdsAdapter4.3.10
    
5,APP LOVIN - MAX
    ISAppLovinAdapter4.3.25
    
6,Vungle
    ISVungleAdapter4.3.11
    To do this, open your Info.pList, add the key “View controller-based status bar appearance” and set it to “No“.
    
7,Tapjoy
    ISTapjoyAdapter4.1.16
    <key>NSAppTransportSecurity</key>
    <dict>
      <key>NSExceptionDomains</key>
       <dict>
           <key>localhost</key>
           <dict>           
               <key>NSExceptionAllowsInsecureHTTPLoads</key>
               <true/>
           </dict>
       </dict>
    </dict>

8,Pangle4.3.4

9,IronSource7.1.6.1

6.15
修改文档
https://docs.qq.com/sheet/DU1VZY3NNWkl4RUFV?groupUin=Q9oDP3UVh4KHy6xVtAyTWA%3D%3D&tdsourcetag=s_macqq_aiomsg&tab=BB08J2

6.11

需要的H5界面地址
1,利用規約 https://sdk-web.eyougame.com/doc/policy-jp/
2,客服  https://imserver.eyougame.com:12333/getToken?userid=%@&serverid=%@&roleid=%@&gameid=%@&sign=%@&rtime=%@
3,公告地址 
4,概率查询 https://bookingjp.eyougame.com/home/index/active?secret=%@
5,攻略 https://apijp.eyougame.com/getButtonLink.php
6,老玩家召回活动  https://activity.eyougame.com/jpvertical?secret=



6.10号
//字体导入
//iOS13之后,没有苹果绑定按钮
//google绑定,登录,引继(日本独有)

Ipad适配
fb绑定,登录,引继




6.1
1,扩充device_id账号范围:
随机账号 增加当前时间戳(秒) + 随机数




5.31
1,添加广告一些依赖库,补充系统依赖库:libc++abi.tbd,libbz2.1.0.tbd,libresolv.tbd
5.27
1,删除多余用不到的类和合并一些类

多版本一些思路
1,比较明显区别的SDK单独建立文件夹
2,一些共用部分也区分在一个文件夹










