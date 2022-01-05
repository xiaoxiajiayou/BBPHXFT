//
//  BXMNativeExpressAd.h
//  BXMSDK
//
//  Created by 侯亚迪 on 2020/1/7.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWEnumFile.h"
#import "DHCWNativeLocalAd.h"
#import "DHCWNativeLocalVideoAd.h"

@class DHCWNativeExpressAd;

NS_ASSUME_NONNULL_BEGIN

@protocol DHCWNativeExpressDelegate <NSObject>

@optional

/// 拉取广告成功的回调
/// @param views  广告视图集合
- (void)nativeExpressAdSuccessToLoadWithViews:(NSArray<__kindof UIView *> *)views  expressAd:(DHCWNativeExpressAd *)expressAd;


/// 拉取广告失败的回调
/// @param error  错误信息
- (void)nativeExpressAdFailToLoadWithError:(NSError *)error expressAd:(DHCWNativeExpressAd *)expressAd;


/// 广告渲染成功
/// @param nativeExpressAdView 广告视图
- (void)nativeExpressAdViewRenderSuccess:(UIView *)nativeExpressAdView expressAd:(DHCWNativeExpressAd *)expressAd;


/// 广告渲染失败
/// @param nativeExpressAdView 广告视图
/// @param error  错误信息
- (void)nativeExpressAdViewRenderFail:(UIView *)nativeExpressAdView error:(NSError *)error  expressAd:(DHCWNativeExpressAd *)expressAd;


/// 广告被点击的回调
/// @param nativeExpressAdView 广告视图
- (void)nativeExpressAdViewDidClicked:(UIView *)nativeExpressAdView  expressAd:(DHCWNativeExpressAd *)expressAd;


/// 广告被关闭的回调
/// @param nativeExpressAdView 广告视图
- (void)nativeExpressAdViewDidClosed:(UIView *)nativeExpressAdView  expressAd:(DHCWNativeExpressAd *)expressAd;


@end


/// 信息流模板广告
@interface DHCWNativeExpressAd : NSObject

/// 代理
@property (nonatomic, weak) id<DHCWNativeExpressDelegate> delegate;


/// 初始化广告位
/// @param adId  广告位id
/// @param adSize 广告位尺寸（当高度为0时，实际高度会根据宽度自适应）
/// @param imageSize  广告图片尺寸
/// @param rootViewController  广告将要呈现的视图控制器
- (instancetype)initWithAdId:(NSString *)adId
                      adSize:(CGSize)adSize
                   imageSize:(DWAdImageSize)imageSize
          rootViewController:(UIViewController *)rootViewController;


/// 加载广告
/// @param count  广告个数（最大值为3）
- (void)loadAdWithCount:(NSInteger)count;

/**
    配置加载本地信息流
 */
-(void)configLocalExpresiveAd:(DHCWNativeLocalAd *)localExpresiveAd;

/**
    配置加载互动 本地视频
    使用该功能请确保先跟相关业务人员沟通
 */
-(void)configNativeLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;


@end

NS_ASSUME_NONNULL_END
