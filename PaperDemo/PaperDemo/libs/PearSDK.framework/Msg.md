## SDK参数配置

### 代码中配置 

Client_id:游戏id,后台获取  
Client_secret:游戏秘钥,后台获取
AppleID:苹果商店对应的应用ID,在苹果开发中后台获取  
Language:对应的语言参数,根据语言获取  
Currency:当前支付币种,默认USD美金  
RewardKey:广告key,广告后台获取  


### Info.plist文件配置参数

FacebookAppID:FB对应的游戏id,FB后台获取  
FacebookDisplayName:FB对应的应用名称,FB后台获取
LSApplicationQueriesSchemes:跳转白名单,根据对应的第三方去配置  
GADApplicationIdentifier:广告标识  
SKAdNetworkItems:广告配置  
LineSDKConfig:LineSDK对应的应用id
Fonts provided by application:字体配置
Appearance:强制关闭暗黑模式  
VK:VK第三方都一样的应用id  

### URL Types 跳转第三方APP和获取第三方APP信息配置

LineSDK: line3rdp.$(PRODUCT_BUNDLE_IDENTIFIER)
FBSDK: fb+FacebookAppID
Google登陆: com.googleusercontent.apps.840916028588-lu21uqbbhe3jtlh1gumcaog2of9p7uit 示例参数,要填写对应参数  
VKSDK:vk+应用id

