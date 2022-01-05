//
//  BXMFullScreenAd.h
//  BXMSDKDemo
//
//  Created by Mac on 2020/1/7.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWNativeLocalVideoAd.h"
@class DHCWFullScreenAd;


@protocol DHCWFullScreenAdDelegate <NSObject>

@optional

/**
    视频加载成功  请保证视频加载成功在显示视频
 */
-(void)dwFullScreenVideoAdLaodSuccess:(DHCWFullScreenAd *_Nullable)screenAd;
/**
    视频加载失败
 */
-(void)dwFullScreenVideoAdLaodFailure:(NSError *_Nullable)error  screenAd:(DHCWFullScreenAd *_Nullable)screenAd;
/**
    视频显示成功
 */
-(void)dwFullScreenVideoShowSuccess:(DHCWFullScreenAd *_Nullable)screenAd;

/**
    视频播放结束
 */
-(void)dwFullScreenVideoPlayFinish:(DHCWFullScreenAd *_Nullable)screenAd;

/**
    视频播放未结束
 */
-(void)dwFullScreenVideoPlayUnFinish:(DHCWFullScreenAd *_Nullable)screenAd;
/**
    视频点击
 */
-(void)dwFullScreenVideoClick:(DHCWFullScreenAd *_Nullable)screenAd;

/**
    视频关闭
 */
-(void)dwFullScreenVideoClose:(DHCWFullScreenAd *_Nullable)screenAd;


@end

NS_ASSUME_NONNULL_BEGIN

@interface DHCWFullScreenAd : NSObject

@property(nonatomic,weak)id <DHCWFullScreenAdDelegate> delegate;

//-(void)splshAdJumpOver
/// 初始化

/// @param adId  // 广告位Id
- (instancetype)initFullScreeWithAdId:(NSString *)adId;


//展示视屏
-(void)showAdFromViewController:(UIViewController *)controller;

/**
    配置加载本地视频
    使用该功能请确保先跟相关业务人员沟通
 */
-(void)configNativeLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;
@end

NS_ASSUME_NONNULL_END
