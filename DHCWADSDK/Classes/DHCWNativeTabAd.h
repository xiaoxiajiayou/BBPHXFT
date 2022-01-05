//
//  BXMNativeTabAd.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/12/8.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWNativeTabeAdView.h"
#import "DHCWNativeAdDataObject.h"

@class DHCWNativeTabAd;

NS_ASSUME_NONNULL_BEGIN

@protocol DHCWNativeTabAdAdDelegate <NSObject>

@optional

/// 广告加载成功
/// @param nativeAdData 数据源
- (void)nativeTabAdsSuccessToLoad:(DHCWNativeAdDataObject  *_Nullable)nativeAdData nativeAd:(DHCWNativeTabAd *)nativeAd;

/// 广告加载失败
/// @param error 失败原因
- (void)nativeTabAdsLoadFailWithError:(NSError *_Nullable)error    nativeAd:(DHCWNativeTabAd *)nativeAd;

@end

@interface DHCWNativeTabAd : NSObject

@property(nonatomic,weak)id <DHCWNativeTabAdAdDelegate > delegate;

/// 广告数据
@property (nonatomic, strong, readonly) DHCWNativeAdDataObject *dataObject;

/// 当前视图控制器
@property (nonatomic, weak) UIViewController *rootViewController;


// 初始化广告位
- (instancetype)initWithAdId:(NSString *)adId;

// 加载广告
- (void)loadTabAd;

@end

NS_ASSUME_NONNULL_END
