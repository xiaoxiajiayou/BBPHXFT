//
//  BXMRewardVideoAd.h
//  BXMSDKDemo
//
//  Created by Mac on 2020/1/8.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWNativeLocalVideoAd.h"
@class DHCWRewardVideoAd;

@protocol DHCWRewardVideoAdDelegate <NSObject>

@optional
/**
     视频加载成功  请确认视屏加载在展示视频
 */
-(void)dwRewardVideoLoadAdSuccess:(DHCWRewardVideoAd *_Nullable)rewardAd;
/**
     视频加载失败
 */
-(void)dwRewardVideoLoadAdFailure:(NSError *_Nullable)error rewardAd:(DHCWRewardVideoAd *_Nullable)rewardAd;


/**
     视频显示成功
 */
-(void)dwRewardVideoShowAdSuccess:(DHCWRewardVideoAd *_Nullable)rewardAd;

/**
     视频播放结束
 */
-(void)dwRewardVideoPlayFinish:(DHCWRewardVideoAd *_Nullable)rewardAd;
/**
     视频播放结束 是否满足激励其激励条件，可用于设置奖励
              YES 满足
             NO  不满
 */
-(void)dwRewardVideoPlayFinishVerify:(BOOL )verify  rewardAd:(DHCWRewardVideoAd *_Nullable)rewardAd;



/**
     视频播放未结束
 */
-(void)dwRewardVideoPlayUnFinish:(DHCWRewardVideoAd *_Nullable)rewardAd;
/**
     视频点击
 */
-(void)dwRewardVideoClick:(DHCWRewardVideoAd *_Nullable)rewardAd;

/**
     视频关闭
 */
-(void)dwRewardVideoClose:(DHCWRewardVideoAd *_Nullable)rewardAd;

@end
NS_ASSUME_NONNULL_BEGIN

@interface DHCWRewardVideoAd : NSObject

@property(nonatomic,weak)id <DHCWRewardVideoAdDelegate> delegate;
/// 初始化
/// @param   appId 应用 Id
/// @param adId  // 广告位Id

/// @param adId  // 广告位Id
- (instancetype)initRewardVideoAdId:(NSString *)adId;
/**
     展示视屏
 */
-(void)showVideoFromRootController:(UIViewController *)controller;

/**
    配置加载本地视频
    使用该功能请确保先跟相关业务人员沟通
 */
-(void)configNativeLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;
@end

NS_ASSUME_NONNULL_END
