//
//  PearCommon.h
//  PearSDK
//
//  Created by 朱运 on 2019/8/21.
//  Copyright © 2019 朱运. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN
FOUNDATION_STATIC_INLINE void SDK_Version(){
    NSString *version = @"1.1.5";
    NSLog(@"MORE__SDK版本2022.9.15更新 = %@",version);
}
typedef NS_ENUM(NSUInteger,MYLanguageType){
    LanguageTypeHANT = 1,//繁体
    LanguageTypeTH,//泰语
    LanguageTypeEN,//英语
    LanguageTypeJA,//日语
    LanguageTypeKO,//韩语
    LanguageTypePT_BR,//巴西文
    LanguageTypeES,//西班牙
    LanguageTypeID,//印尼
    LanguageTypeAR,//阿拉伯文
    LanguageTypeRU//俄文
};

//用户信息block处理
/*
 block说明
 接口正常       result不为空
 接口访问错误    state不为空
 接口访问超时    errorFailCount整数不为5
 */
typedef void(^CompleteResult)(NSDictionary * result,NSString * state,NSString * errorFailCount);
//支付block处理
/*
 block说明
 储值行为非正常时   state!=nil
 储值行为正常时     state == nil
 */
typedef void(^payResult)(NSString * state,NSInteger iosBackCode);

//打点事件,必接;eventName
//UIKIT_STATIC_INLINE NSString* game_logined(){
//    return @"game_login_completed";//登入遊戲:点击选服界面登入游戏(點選登入畫面按鈕開始遊戲按鈕)
//}
UIKIT_STATIC_INLINE NSString* role_show(){
    return @"role_completed1";//到達選角頁面:选择角色
}
UIKIT_STATIC_INLINE NSString* role_show2(){
    return @"role_completed2";//輸入名稱完成創角
}

UIKIT_STATIC_INLINE NSString* enter_show(){
    return @"game_completed";//正式進入遊戲畫面:进入游戏
}
UIKIT_STATIC_INLINE NSString* level_up(){
    return @"level_up";//角色升级
}
//guide_start
UIKIT_STATIC_INLINE NSString* guide_start(){
    return @"guide_start";//成功进入游戏并开始新手引导
}

//UIKIT_STATIC_INLINE NSString* op(){
//    return @"op";//播放開頭動畫
//}

typedef void(^blockLanguage)(MYLanguageType myType,NSString *gameid,NSUInteger state);//state 0表示展示语言选择界面,1表示不展示.
typedef void(^newBolckLanguage)(MYLanguageType myType,NSString *gameid);


//
typedef void(^WriteblockSuccess)(void);
typedef void(^WriteblockFail)(void);
typedef void(^WriteblockClose)(void);

@protocol LoginDelegate,ReDelegate;
@interface PearCommon : NSObject
@property(nonatomic,weak)id <LoginDelegate> logDelegate;
@property(nonatomic,weak)id<ReDelegate>delegate;
@property(nonatomic,copy)NSDictionary *msgDic;
@property(nonatomic,copy)blockLanguage bl;


@property(nonatomic,copy)WriteblockSuccess a1;
@property(nonatomic,copy)WriteblockFail a2;
@property(nonatomic,copy)WriteblockClose a3;

//账号注销,要在登陆成功之后调用.(注意,成功调用了该接口之后,要重新调用登陆接口)
-(void)writeOffAccountSuccess:(WriteblockSuccess)succcess fail:(WriteblockFail)fail close:(WriteblockClose)close;
//是否问卷
-(BOOL)showQuestion;
//调查问卷
-(void)showAnswerView;
//召回活动启动:YES开启,NO不开启
-(BOOL)showRecallBack;
/*
 召回活动任务保存接口
 mySid:服务器id
 myRid:角色id
 task_id:任务id,按照约定的来传;
 */
-(void)showsid:(NSString *)mySid rid:(NSString *)myRid taskID:(NSString *)task_id;
/*
 老玩家召回活动界面
 mySid:服务器id
 myRid:角色id
 atk:角色攻击力 转换为字符串来传;
 */
-(void)showBackViewsid:(NSString *)mySid rid:(NSString *)myRid Atk:(NSString *)atk;
//展示VK主页
-(void)showVKView;
//会员条款
-(void)showSerView;
//隐私政策
-(void)showPriView;
//绑定手机
-(void)bindPhone;
//登录
-(void)login;
//登出操作,在切换账号时候可调用(推荐),会注销当前line;
-(void)logOut;
////重开账号
//-(void)resetLogin;
//使用条款
-(void)showAgreement;
//利用規約
-(void)loadAgreement;
//引继功能
-(void)guideLogin;
//客服
-(void)openGM;
//绑定功能
-(void)bindIng;
//公告
-(void)showNoticeView;
//概率查询
-(void)showProbability;
//攻略
-(void)showStrategy;
//SNS,推特主页
-(void)showSNS;
//获取绑定信息,1表示已经绑定,0表示未绑定
-(void)bindMessage:(void(^)(NSDictionary *bindMessage))bindBlock;
//商店评价跳转
- (BOOL)GolfOpe7jnTheDownloj56rhe4adDetaih45ls;
////老玩家召回活动
//-(void)golffnirefnjgned0pkg4ewr099fg32e0d0g2;
//角色检查接口 block说明请看5-10,sid服务器ID,rid角色ID,请在合适的地方进行调用
-(void)Yankee_Che_56hrgckThe67jrhUserDetthr5ailWitg54vhSe45grverID:(NSString *)sid Role:(NSString *)rid CompleteBlock:(CompleteResult)block;
//内购调用
- (void)Golf_Co23dr23eObj23d23ectPf4roductID:(NSString *)sku orderNum:(NSString *)order currentMoney:(NSString *)money productName:(NSString *)name Ctext:(NSString *)ctext callBack:(NSString *)address payBlock:(payResult)block;

//一些系统配置方法
-(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

-(void)applicationDidBecomeActive:(UIApplication *)application;

-(BOOL) application:(UIApplication *)application
             openURL:(NSURL *)url
   sourceApplication:(NSString *)sourceApplication
          annotation:(id)annotation;
-(BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options;
-(BOOL)continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray *))restorationHandler;

-(void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;

//打点事件,count没有值得时候传@""
-(void)enterGameEventRoleID:(NSString *)rid andSid:(NSString *)sid eventName:(NSString *)event count:(NSString *)count;
///分享
-(void)shareThePicInTheGamewithString:(NSString *)string Picture:(UIImage *)image;

///激励广告的初始化,在didFinishLaunchingWithOptions中调用
-(void)ironSourceInit;
///激励广告:需要canShowRewardVideo协议回调之后才可以调用该接口,placeName广告位参数,sid服务器id,rid,角色id
-(void)showRewardVideo:(NSString *)placeName sid:(NSString *)sid rid:(NSString *)rid;

//游戏语言选择:登录界面传NO,bm(返回当前选择语言和对应语言的gameid)
-(void)showLanguageViewFrom:(BOOL)from block:(blockLanguage)bm;
//重新选择语言(有UI界面)
-(void)resetLanguage;
//重新选择语言(沒有UI界面),由CP传入对应的语言字段:简体(HANT),繁体(HANT),英文(EN),日文(JA)
-(void)setNewLanguage:(NSString *)language newbl:(newBolckLanguage)newBm;
-(MYLanguageType)getCurrentLanguage;

//内购产品价格获取
//-(NSArray *)getProductList:(NSArray<NSString *> *)products;
+(PearCommon *)common;
//test
-(void)showData1;
-(void)showData2;
@end

@protocol LoginDelegate <NSObject>
@optional
-(void)loginSuccess:(NSString *)uid;//创建新账号和登录成功的时候,会触发该回调,这个时候应该回到游戏选择界面.
-(void)loginFail;
//引继界面关闭按钮回调方法
-(void)closeGuidView;
@end

@protocol ReDelegate <NSObject>
@optional
/*
 加载完成;
 在这个方法回调之后再调用
 //激励广告接口
  -(void)showRewardVideo;
 否则不会有展示
 */
-(void)canShowRewardVideo;
///播放错误
-(void)loadFailRewadVideo:(NSError *)error;
/// 正常播放完毕,应该在这里发放奖励,placeName:奖励发放的id
-(void)didReceiveRewadVideo:(NSString *)placeName;
/// 视频已经被关闭
-(void)didCloseVideo;
///视频已经打开
-(void)didOpenVideo;
///视频开始播放
-(void)beginVideo;
///视频播放完毕
-(void)endVideo;
///视频播放完毕之后被点击
-(void)didClickVideo;
@end
NS_ASSUME_NONNULL_END
