//
//  BXMSplshAd.h
//  BXMSDK
//
//  Created by Mac on 2020/1/2.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWNativeLocalAd.h"
#import "DHCWNativeLocalVideoAd.h"

@class DHCWSplashAd;
@protocol DHCWSplshDelegate <NSObject>

@optional

/**
 *  开屏加载成功
 */
-(void)splashAdLoadSuccess:(DHCWSplashAd *)splash;


/**
 *  开屏 加载失败
 */
-(void)splashAdloadFailure:(NSError *)error splash:(DHCWSplashAd *)splash;


/**
 *  开屏广告点击
 */
- (void)splashAdClick:(DHCWSplashAd *)splash;

/**
 *        关闭开屏广告
 */
- (void)splashAdClose:(DHCWSplashAd *)splash;

@end


@interface DHCWSplashAd : NSObject

@property(nonatomic,weak)id <DHCWSplshDelegate> delegate;

/**
  初始化
 @param adId 广告位Id
 @param vc  用于逻辑跳转
 */
- (instancetype)initWithAdId:(NSString *)adId
          rootViewController:(UIViewController *)vc;

/**
     配置加载本地开屏
 */
-(void)configNativeLocalSplshAd:(DHCWNativeLocalAd *)localSplshAd;

/**
        互动活动 配置加载本地视频
 */
-(void)configNativeLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;

/**
 
    开屏显示
 @param window   用于展示开屏
 */
-(void)splashShowWindow:(UIWindow *)window;

/**
 
    开屏显示
    @param window   用于展示开屏
    @param bottomView   用于展示用户自定底部View 请使用全局声明，局部会被释放掉  可设置最大高度 120 
 */
-(void)splashShowWindow:(UIWindow *)window bottomView:(UIView *)bottomView;

@end


