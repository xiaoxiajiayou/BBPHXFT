//
//  DWMultipleBannerAdDelegate.h
//  BXMSDKDemo
//
//  Created by PHX on 2021/10/9.
//  Copyright © 2021 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
@class DHCWMultipleBannerAd;

@protocol DWMultipleBannerAdDelegate <NSObject>

@optional

/**
    聚合非标Banner 加载成功
 */
-(void)dwMultipleBannerLoadDataSuccess:(DHCWMultipleBannerAd *)bannerAd  adView:(UIView *)adView ;
/**
    聚合非标Banne 加载失败
*/
-(void)dwMultipleBannerLoadFaliure:(NSError *)error bannerAd:(DHCWMultipleBannerAd *)bannerAd  ;
/**
    视图曝光
 */
-(void)dwMultipleBannerVisiable:(DHCWMultipleBannerAd *)bannerAd  adView:(UIView *)adView ;

/**
    点击某个Banner
    index：当前视图所在的位置
 */
-(void)dwMultipleBannerClick:(DHCWMultipleBannerAd *)bannerAd   index:(NSInteger)index adView:(UIView *)adView ;

/**
    关闭当前某个 Banner（配置支持关闭,Banner点击关闭才会触发）
    index：当前关闭按钮的所在Index,关闭后，所有视图将更新最新index 值
 */
-(void)dwMultipleBannerClosed:(DHCWMultipleBannerAd *)bannerAd   index:(NSInteger)index adView:(UIView *)adView ;
/**
    关闭详情页
 */
-(void)dwMultipleBannerCloseDetail:(DHCWMultipleBannerAd *)bannerAd   index:(NSInteger)index adView:(UIView *)adView ;

@end


