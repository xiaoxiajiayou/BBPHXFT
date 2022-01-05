//
//  DHCWDrawKSVideoView.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/12/28.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DHCWDrawVideoAd;
@class BADDrawExpressVideoAd;
#import "DHCWNativeLocalVideoAd.h"

@protocol DHCWDrawAdDataDelegate <NSObject>

@optional
/**
 视频曝光成功
 @param drawAd 广告视图
 */
-(void)dwDrawVideoexposureSuccess:(DHCWDrawVideoAd *)drawAd  expressAd:(BADDrawExpressVideoAd *)drawVideoAd ;
/// 广告被点击的回调
/// @param drawAd 广告视图
- (void)dwDrawExpressVideoAdViewDidClicked:(DHCWDrawVideoAd *)drawAd   expressAd:(BADDrawExpressVideoAd *)drawVideoAd;


/// 广告播放完成
/// @param drawAd 广告视图
- (void)dwDrawExpressVideoAdViewPlayFinished:(DHCWDrawVideoAd *)drawAd  expressAd:(BADDrawExpressVideoAd *)drawVideoAd;
@end


@interface DHCWDrawVideoAd : NSObject
@property(nonatomic,weak)id <DHCWDrawAdDataDelegate> delegate;

/**
    广告尺寸
 */
@property(nonatomic,assign) CGSize adSize;
/**
    根控制器
 */
@property(nonatomic,weak)UIViewController *rootController;


@property(nonatomic,readonly)id  videoData;

@property(nonatomic,readonly)CGFloat  videoHeight;
/**
    注册当前添加是视图
 */
-(void)registerContainerView:(UIView *)contentView;

-(void)unregistView;

-(void)render;
/**
    播放
 */
-(void)play;
/**
    暂停
 */
-(void)puse;

/**
        配置加载本地视频
 */
-(void)configNativeLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;

@end


