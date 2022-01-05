//
//  DHCWMultipleBannerAd.h
//  BXMSDKDemo
//
//  Created by PHX on 2021/10/9.
//  Copyright © 2021 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWNativeLocalVideoAd.h"
#import "DWMultipleBannerAdDelegate.h"



@interface DHCWMultipleBannerAd : NSObject
/**
    代理对象
 */
@property(nonatomic,weak)id <DWMultipleBannerAdDelegate> delegate;

#pragma mark ----------所有属性加载前设置有效，加载后设置无效
/**
 图片尺寸
 width =0 时 ，默认为屏幕宽度；
 width > 均分单元格 ，默认为单元格宽度
 height =0 时， 将根据实际显示内容自适应
 */
@property(nonatomic,assign)CGSize imageSize;
/**
 设置整体单元格距离容器边距 的 top（上） 、left（左） 、bottom（下） 、right (右)，
 默认边距为：top：15     left：20     bottom：15    right：20
 */
@property(nonatomic,assign)UIEdgeInsets edgeInsets;
/**
 行间距
 默认：10
 */
@property(nonatomic,assign)CGFloat LineSpace;
/**
 列间距
 默认：10
 */
@property(nonatomic,assign)NSInteger  columnSpace;

//单元格背景颜色
@property(nonatomic,strong)UIColor *itemBgColor;

//是否支持自适应广告高度 默认支持
@property(nonatomic,assign)BOOL autoAdViewHeight;

/**
 广告View 内容视图高度
 根据实际内容返会视图高度
 */
@property(nonatomic,assign,readonly)CGFloat adViewHeight;

/**
 初始化 非标Banner
 @param adId 广告位Id
 @param  adViewSize     广告视图的大小 ：width 为0 时、将默认为屏幕宽度  ，height 为0时，将根据实际展示内容自适应
 @param controller 当前控制器
 */
- (instancetype)initWithAdId:(NSString *)adId
                  adViewSize:(CGSize)adViewSize
                  controller:(UIViewController *)controller;

//配置本地互动激励视频对象
-(void)configLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;
/**
    加载聚合非标 Banner
 */
-(void)loadMultipleBannerAd;

/**
    展示广告View
 */
-(void)multiplebannerShowView:(UIView *)view;
@end


