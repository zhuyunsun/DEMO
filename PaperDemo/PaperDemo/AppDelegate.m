//
//  AppDelegate.m
//  PaperDemo
//
//  Created by 朱运 on 2022/3/7.
//

#import "AppDelegate.h"
#import <PearSDK/PearCommon.h>
#import <LineSDK/LineSDK.h>
#import <VKSdkFramework/VKSdkFramework.h>
@interface AppDelegate ()

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    //时光之门,com.eyougame.utopiagate
    [[PearCommon common] ironSourceInit];
    [[PearCommon common] application:application didFinishLaunchingWithOptions:launchOptions];
    [[PearCommon common] showLanguageViewFrom:NO block:^(MYLanguageType myType, NSString * _Nonnull gameid,NSUInteger state) {
        NSLog(@"当前用户选择的语言:myType = %lu,游戏id = %@",(unsigned long)myType,gameid);
    }];
    return YES;
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    [[PearCommon common] applicationDidBecomeActive:application];
}


- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation
{
    [VKSdk processOpenURL:url fromApplication:sourceApplication];
    return [[PearCommon common] application:application openURL:url sourceApplication:sourceApplication annotation:annotation];
}

- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options
{
//    return [[PearCommon common] application:app openURL:url options:options];
    [VKSdk processOpenURL:url fromApplication:options[UIApplicationOpenURLOptionsSourceApplicationKey]];
    return [[LineSDKLogin sharedInstance] handleOpenURL:url];
}

- (BOOL) application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray *_Nullable))restorationHandler
{
    [[PearCommon common] continueUserActivity:userActivity restorationHandler:restorationHandler];
    return YES;
}

-(void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken
{
    NSLog(@"成功调用推送接口");
    [[PearCommon common] application:application didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
}
-(void)application:(UIApplication *)application didFailToRegisterForRemoteNotificationsWithError:(NSError *)error{
    NSLog(@"推送错误接口error = %@",error);
}
@end
