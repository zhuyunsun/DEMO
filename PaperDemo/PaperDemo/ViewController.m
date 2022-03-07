//
//  ViewController.m
//  PaperDemo
//
//  Created by 朱运 on 2022/3/7.
//

#import "ViewController.h"
#import <PearSDK/PearCommon.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>
@interface ViewController ()<UITableViewDelegate,UITableViewDataSource,ReDelegate,LoginDelegate>{
    CGFloat windowHeight;
    CGFloat windowWidth;
    
    UITableView *myTableView;
    NSArray *dataSource;
    
    UITextView *msgTextView;
    UIActivityIndicatorView *acti;
}
@property(nonatomic)BOOL loadDone;
@end

@implementation ViewController
- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    NSDate* date = [NSDate date];//获取当前时间0秒后的时间
    NSTimeInterval time = [date timeIntervalSince1970]*1000;// *1000 是精确到毫秒，不乘就是精确到秒
    NSInteger new = (NSInteger)time;
    NSLog(@"new = %lu  = %.0f",new,time);
    
    NSLog(@"version111111111 = %@",[FBSDKSettings sharedSettings].sdkVersion);
    self.view.backgroundColor = [UIColor greenColor];
    
    windowWidth = [UIScreen mainScreen].bounds.size.width;
    windowHeight = [UIScreen mainScreen].bounds.size.height;
        
    dataSource = @[@"登录(韩文首次会有协议UI)",@"利用規約(Web)",@"引继弹窗(UI)",@"IM(Web)",@"绑定界面(UI)",
                   @"公告(Web)",@"概率查询(Web)",@"绑定信息(数据)",@"好评(系统弹窗)",
                   @"支付(内购,日文的有UI)",@"分享(系统级别)",
                   @"展示激励广告(广告)",@"当前SDK语言(数据)",@"重新选择语言(UI)",@"绑定手机(UI)",
                   @"强更样式1(UI)",@"强更样式2(UI)"];

    myTableView = [[UITableView alloc]init];
    myTableView.frame = CGRectMake(0, 0, windowWidth, windowHeight *0.9 - 64);
    myTableView.delegate = self;
    myTableView.dataSource = self;
    [self.view addSubview:myTableView];
    
    msgTextView = [[UITextView alloc]init];
    msgTextView.frame = CGRectMake(20, CGRectGetMaxY(myTableView.frame) + 20, windowWidth - 40, 50);
    msgTextView.textColor = [UIColor blackColor];
    msgTextView.backgroundColor = [UIColor whiteColor];
    msgTextView.editable = NO;
    [self.view addSubview:msgTextView];
    
    acti = [[UIActivityIndicatorView alloc]initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray];
//    [self.view addSubview:acti];
    acti.frame = CGRectMake(0, 0, 100, 100);
    acti.color = [UIColor blackColor];
    acti.backgroundColor = [UIColor redColor];
    acti.center = self.view.center;
    
    [PearCommon common].delegate = self;
    self.loadDone = NO;
}
-(void)viewDidAppear:(BOOL)animated{
//    [acti startAnimating];
//    [[PearCommon common] login];
}
-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
    static NSString *str = @"string";
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:str];
    if (!cell) {
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:str];
    }
    cell.textLabel.text = dataSource[indexPath.row];
    return cell;
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return dataSource.count;
}
-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    NSUInteger row = indexPath.row;
    [PearCommon common].logDelegate = self;
    if (row == 0) {
        [acti startAnimating];
        [[PearCommon common] login];
    }
    if (row == 1) {
        [[PearCommon common] loadAgreement];
    }
    if (row == 2) {
        [[PearCommon common] guideLogin];
    }
    if (row == 3) {
        [[PearCommon common] openGM];
    }
    if (row == 4) {
        [[PearCommon common] bindIng];
    }
    if (row == 5) {
        [[PearCommon common] showNoticeView];
    }
    if (row == 6) {
        [[PearCommon common] showProbability];
    }
    if (row == 7) {
        [[PearCommon common] bindMessage:^(NSDictionary * _Nonnull bindMessage) {
            NSLog(@"dic = %@",bindMessage);
        }];

    }
    if (row == 8) {
        [[PearCommon common] GolfOpe7jnTheDownloj56rhe4adDetaih45ls];
    }
    if (row == 9) {
        NSInteger num = arc4random() % 100000 + 10000000;
        NSString *order = [NSString stringWithFormat:@"%ld",num];
        [[PearCommon common] Golf_Co23dr23eObj23d23ectPf4roductID:@"com.eyougame.etoile.12000" orderNum:order currentMoney:@"0.85" productName:@"5000钻石" Ctext:@"11" callBack:@"12321" payBlock:^(NSString * _Nonnull state, NSInteger iosBackCode) {
            NSLog(@"123123123");
        }];

    }
    if (row == 10) {
        [[PearCommon common] shareThePicInTheGamewithString:@"shared" Picture:[UIImage imageNamed:@"d8"]];
    }
    if (row == 11) {
        if (self.loadDone == YES) {
            [[PearCommon common] showRewardVideo:@"CP透传参数" sid:@"1" rid:@"100"];
        }
    }
    if (row == 12) {
        [[PearCommon common] getCurrentLanguage];
    }
    if (row == 13) {
        [[PearCommon common] resetLanguage];
    }
    if (row == 14) {
        [[PearCommon common] bindPhone];
    }
    if (row == 15) {
        [[PearCommon common]showData1];
    }
    if (row == 16) {
        [[PearCommon common] showData2];
    }
    
    
    
}
#pragma mark ================login====================
-(void)loginSuccess:(NSString *)uid{
    [acti stopAnimating];
    NSLog(@"uid = %@",uid);
    msgTextView.text = uid;

    [[PearCommon common] Yankee_Che_56hrgckThe67jrhUserDetthr5ailWitg54vhSe45grverID:@"1234" Role:@"4321" CompleteBlock:^(NSDictionary * _Nonnull result, NSString * _Nonnull state, NSString * _Nonnull errorFailCount) {
        NSLog(@"result = %@",result);
    }];

//    [[PearCommon common] logOut];
}
-(void)loginFail{
    [acti stopAnimating];
    NSLog(@"fail");
    msgTextView.text = @"login fail";
}
-(void)closeGuidView{
    NSLog(@"关闭引继界面");
}
#pragma mark ReDelegate
///加载完成;
-(void)canShowRewardVideo{
    self.loadDone = YES;
    NSLog(@"可以进行展示1111");
}
///播放错误
-(void)loadFailRewadVideo:(NSError *)error{
    NSLog(@"播放错误error = %@",error);
}
/// 正常播放完毕,应该在这里发放奖励
-(void)didReceiveRewadVideo:(NSString *)placeName{
    NSLog(@"播放完毕:%@",placeName);
}
/// 视频已经被关闭
-(void)didCloseVideo{
    NSLog(@"关闭视频");
}
///视频已经打开
-(void)didOpenVideo{
    NSLog(@"已经打开");
}
///视频开始播放
-(void)beginVideo{
    NSLog(@"视频开始播放");
}
///视频播放完毕
-(void)endVideo{
    NSLog(@"视频播放完毕");
}
///视频播放完毕之后被点击
-(void)didClickVideo{
    NSLog(@"视频播放完毕之后被点击");}

@end
