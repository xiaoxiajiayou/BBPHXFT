//
//  BXMBannerAd.h
//  BXMSDKDemo
//
//  Created by Mac on 2020/1/6.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWEnumFile.h"

#import "DHCWNativeLocalAd.h"
#import "DHCWNativeLocalVideoAd.h"

@class DHCWBannerAd;

@protocol DHCWBannerAdDelegate <NSObject>

@optional

/**
         数据加载成功
 */
-(void)dwBannerAdDataLoadSucess:(DHCWBannerAd *_Nullable) bannerAd    bannerView:(UIView *_Nullable)bannerView ;
/**
        视图加载成功
 */
-(void)dwBannerShowSucess:(DHCWBannerAd *_Nullable) bannerAd    bannerView:(UIView *_Nullable)bannerView;
/**
     视图加载失败
 */
-(void)dwBannerLoadFailure:(NSError *_Nullable)error bannerAd:(DHCWBannerAd *_Nullable) bannerAd    bannerView:(UIView *_Nullable)bannerView;
/**
     视图点击
 */
-(void)dwBannerClik:(DHCWBannerAd *_Nullable) bannerAd    bannerView:(UIView *_Nullable)bannerView;

/***
     视图关闭
 */
-(void)dwBannerClose:(DHCWBannerAd *_Nullable) bannerAd    bannerView:(UIView *_Nullable)bannerView;



@end

NS_ASSUME_NONNULL_BEGIN

@interface DHCWBannerAd : NSObject
@property(nonatomic,weak)id < DHCWBannerAdDelegate > delegate;
/**
        初始化Banner
        adId    广告ID
         imageSize:图片大小
        frame    banner 位置   frame 的 height设置为 建议设置跟imageSize 的大小差不多，系统将自适应大小
       rootController 设置跟控制器
 */
- (instancetype)initWithAdId:(NSString *)adId
                 bannerFrame:(CGRect )frame
               rootContrller:(UIViewController *)rootController;


//显示 BannerView
-(void)bannerShowView:(UIView *)showView;

/**
    配置加载本地Banner 对象
 */
-(void)configLocalBannerAd:(DHCWNativeLocalAd *)localBannerAd;
/**
    互动  配置加载本地视频
 */
-(void)configNativeLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;

              
@end

NS_ASSUME_NONNULL_END
