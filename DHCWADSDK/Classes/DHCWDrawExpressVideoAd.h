//
//  BXMDrawExpressVideoAd.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/11/4.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWDrawVideoAd.h"

NS_ASSUME_NONNULL_BEGIN

@class DHCWDrawExpressVideoAd;

@protocol DHCWDrawExpressVideoAdDelagate <NSObject>

@optional


-(void)dwDrawExpressVideoAdLoadSucessDrawAds:(NSArray< DHCWDrawVideoAd *> *)drawAds  expressAd:(DHCWDrawExpressVideoAd *)drawVideoAd;

// 拉取广告失败的回调
/// @param error  错误信息
- (void)dwDrawExpressVideoAdFailToLoadWithError:(NSError *)error expressAd:(DHCWDrawExpressVideoAd *)drawVideoAd;


@end
@interface DHCWDrawExpressVideoAd : NSObject


@property(nonatomic,weak)id <DHCWDrawExpressVideoAdDelagate > delegate;

@property(nonatomic,strong)UIView *contentView;

/**
 初始化
 @param adId 管高位Id
 @param rootViewController 当前控制器
 */
- (instancetype)initWithAdId:(NSString *)adId
                      adSize:(CGSize)adSize
          rootViewController:(UIViewController *)rootViewController;

/**
 加载广告
 @param count 加载条数
 */
- (void)loadAdWithCount:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
