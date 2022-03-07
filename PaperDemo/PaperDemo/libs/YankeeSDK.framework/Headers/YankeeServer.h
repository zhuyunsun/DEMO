#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

FOUNDATION_STATIC_INLINE void YANSDK_Version(){
    NSString *version = @"1.0.0";
    NSLog(@"JP__YanSDK%@",version);
}
//用户信息block处理
/*
 block说明
 接口正常       result不为空
 接口访问错误    state不为空
 接口访问超时    errorFailCount整数不为5
 */
typedef void(^CompleteResult)(NSDictionary * result,NSString * state,NSString * errorFailCount);


typedef NS_ENUM(NSInteger,payBackCode){
    payBackCode_success = 0,
    payBackCode_Paying,
    payBackCode_Fail,
};
//支付block处理
/*
 block说明
         储值行为非正常时   state!=nil
         储值行为正常时     state == nil
 */
typedef void(^payResult)(NSString * state,NSInteger payBackCode);


//http请求Block回调
typedef void(^RequestSuccess)(NSDictionary * request);
typedef void(^RequestFail)(NSString * detail,NSString * errorCode);
typedef void(^OnNetWork)(NSString * info, NSInteger httpType);
@interface YankeeServer : NSObject

/*参数dict 传输例子@{ @"Client_id":@"1057",
                    @"Client_secret":@"DM2yxz2CJd80wecFLJYasg==",
                    @"AppleID":@"12345678",
                    @"Currency":@"USD",
 };
*/

@property (nonatomic,copy)NSDictionary * YankeeDict;

@property (nonatomic,copy)NSString * sdkUid;

+ (YankeeServer *)getStartServer;

-(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;



-(void)applicationDidBecomeActive:(UIApplication *)application;


- (BOOL) application:(UIApplication *)application
             openURL:(NSURL *)url
   sourceApplication:(NSString *)sourceApplication
          annotation:(id)annotation;

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options;

- (BOOL) continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray *))restorationHandler;


-(void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;



/*
 登陆接口传输
 参数 userid    用户名
     passWord  密码 (传未加密的原码)
 block说明
         userid   !=nil 表示登陆成功返回Uid
         state    !=nil 表示登陆失败返回错误码 根据错误码来调整UI
         httpType !=nil 表示登陆接口超时 调整UI
 */
-(void)Yankee_Lo_345f34fgi_hrenUs_gerName:(NSString *)userid PassWord:(NSString *)passWord Completion:(void(^)(NSString * state,NSString * userid,NSString * httpType))block;



/*
 注册接口传输
 参数   userid   用户名
       passWord 密码 (传未加密的原码)
       email    邮箱
 
 block说明
 userid   !=nil 表示登陆成功返回Uid
 state    !=nil 表示登陆失败返回错误码 根据错误码来调整UI
 httpType !=nil 表示登陆接口超时 调整UI
 */
-(void)Yankee_Reg_dfsefus_56gerNa_rgw12me:(NSString *)userid PassWord:(NSString *)passWord Email:(NSString *)email Completion:(void(^)(NSString * state,NSString * userid,NSString * httpType))block;


//找回密码接口
-(void)Yankee_Em_32dailFi_rtbwendNewPassWordW_fbithAcc_rt4ount:(NSString *)account Email:(NSString *)email Completion:(void(^)(NSDictionary * result,NSInteger errorCode,NSString * errorDetail,NSInteger httpType))block;



//fb用户登录接口
// 当result值不为空时 接口正常返回
// 当errorCode不等于0的时候表示接口返回错误码
// 当httpType不等于0的时候表示接口超时并返回超时detail
-(void)Yankee_sen_5tsgdFBPro_1d3vwxxfile:(NSDictionary *)fb_profile CompltBlock:(void(^)(NSDictionary * result,NSInteger errorCode,NSString * errorDetail,NSInteger httpType))block;


//twitter登陆接口
-(void)YankeeTwitterLogingogogogoName:(NSString *)name userid:(NSString *)userid Completion:(void(^)(NSDictionary * result,NSInteger errorCode,NSString * errorDetail,NSInteger httpType))block;


//角色检查接口 block说明请看5-10
-(void)Yankee_Che_56hrgckThe67jrhUserDetthr5ailWitg54vhSe45grverID:(NSString *)sid Role:(NSString *)rid CompleteBlock:(CompleteResult)block;



//内购支付接口
- (void)Yankee_Acti34fwfeonTheSkuReq65heuestWi45gvthProdu45fctID:(NSString *)sku orderNum:(NSString *)order Money:(NSString *)money productName:(NSString *)name Ctext:(NSString *)ctext callBackAddress:(NSString *)address PayBlock:(payResult)block;


//获取im系统地址
- (void)Yankee_GetImS_ervdververUrlWi_r5gsqwthComplt_56bdsBlock:(void(^)(NSString * imUrl,NSInteger errorCode,NSString * errorDetail,NSInteger httpType))block;


//公开http请求接口
- (void)Yankee_OpenTheRequestParmas:(NSDictionary *)dict url:(NSString *)url successBlock:(RequestSuccess)success failBlock:(RequestFail)Fail netWorkBlock:(OnNetWork)network;


- (NSString *)Yankee_AesHandleString:(NSString *)aes passWord:(NSString *)password;
#warning Update Message 升级SDK内部接口功能

@end
