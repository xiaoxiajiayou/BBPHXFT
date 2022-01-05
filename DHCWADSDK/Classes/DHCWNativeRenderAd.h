//
//  BXMNativeRenderAd.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/9/11.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWNativeAdDataObject.h"
#import "DHCWNativeLocalVideoAd.h"

@class DHCWNativeRenderAd;
NS_ASSUME_NONNULL_BEGIN

@protocol DHCWNativeRenderAdDelegate <NSObject>

@optional

/// 广告加载成功
/// @param nativeAdDataArray 广告数据集合
- (void)nativeRendAdsSuccessToLoad:(NSArray<DHCWNativeAdDataObject *> *_Nullable)nativeAdDataArray   nativeAd:(DHCWNativeRenderAd *)nativeAd;

/// 广告加载失败
/// @param error 失败原因
- (void)nativeRendAdsLoadFailWithError:(NSError *_Nullable)error    nativeAd:(DHCWNativeRenderAd *)nativeAd;

@end


/// 信息流自渲染广告
@interface DHCWNativeRenderAd : NSObject


/// 代理
@property (nonatomic, weak) id<DHCWNativeRenderAdDelegate> delegate;


/// 初始化广告位
/// @param adId  广告位id
/// @param imageSize  广告图片尺寸
- (instancetype)initWithAdId:(NSString *)adId
                   imageSize:(DWAdImageSize)imageSize;


/// 加载广告
/// @param count  广告个数（建议不超过3，最大值为10）
- (void)loadRendAdWithCount:(NSInteger)count;



@end

NS_ASSUME_NONNULL_END


