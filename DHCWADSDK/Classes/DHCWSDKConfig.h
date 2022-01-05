//
//  BXMSDKConfig.h
//  BXMSDKDemo
//
//  Created by 侯亚迪 on 2020/3/20.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DHCWSDKConfig : NSObject


/**
    变现猫初始化
 @param appId  应用Id
 */
+(void)configManagerAppId:(NSString *)appId;

//初始化结果回调
+(void)configSDKResultComplete:(void(^)(BOOL sucess,NSError *error))complete;


//设置推送代理
+(void)setPusgAdDelegate:(id)delegate;

//debug log 日志输出
+(void)setDebugLog;

/**
 绑定用户关联
 @param appId   应用Id
 @param userInfo  用户信息：扩展数据，使用键值对，以&进行分割，其中的参数值如有特殊符号需要进行urlencode编码。
 示例： cuid=1122 (cuid :用户Id)
       
 */
+(void)bindUserAppId:(NSString *)appId
               userInfo:(NSString *)userInfo;


/***
    获取sdk版本号
 */
+ (NSString *)sdkVersion;




@end

NS_ASSUME_NONNULL_END
