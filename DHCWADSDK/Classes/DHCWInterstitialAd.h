//
//  BXMPopInserAd.h
//  BXMSDKDemo
//
//  Created by Mac on 2020/1/2.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWNativeLocalAd.h"
#import "DHCWNativeLocalVideoAd.h"

@class DHCWInterstitialAd;

@protocol DHCWInterstitialAdDelagate <NSObject>

@optional

/**
       广告加载成功
 */
-(void)dwInterstitialAdLoadSucess:(DHCWInterstitialAd * _Nullable )interstitalAd;

/**
       广告加载失败
 */
-(void)dwInterstitialAdLoadfailure:(NSError *_Nullable)error  interstitalAd:(DHCWInterstitialAd * _Nullable)interstitalAd;

/**
      广告视图显示成功
 */
-(void)dwInterstitialAdShowScreenSucess:(DHCWInterstitialAd * _Nullable)interstitalAd;

/**
       广告视图点击
 */
-(void)dwInterstitialAdClick:(DHCWInterstitialAd *_Nullable)interstitalAd;

/**
           广告视图关闭
 */
-(void)dwInterstitialAdClosed:(DHCWInterstitialAd * _Nullable )interstitalAd;


@end

NS_ASSUME_NONNULL_BEGIN

@interface DHCWInterstitialAd : NSObject

@property(nonatomic,weak)id <DHCWInterstitialAdDelagate> delegate;
/// 设置 图片展示的高度 ，请在试图展示之前设置，之后设置无效
@property(nonatomic,assign)CGFloat imageHeight;

/// 初始化
/// @param adId  // 广告位Id
- (instancetype)initInterstitialAdWithAdId:(NSString *)adId;


/**
        配置加载本地插屏
 */
-(void)configLocalInterstitialAd:(DHCWNativeLocalAd *)localInterstitialAd;
/**
    互动 配置加载本地视频
 */
-(void)configNativeLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;

/**
      展示开屏广告
     controller ：当前控制器
 */
-(void)presentFromRootController:(UIViewController *)controller;



@end

NS_ASSUME_NONNULL_END
