//
//  DHCWFlaotUpAd.h
//  BXMSDKDemo
//
//  Created by weicai on 2021/3/16.
//  Copyright © 2021 Mac. All rights reserved.
//      浮标2.0 升级版

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWNativeLocalVideoAd.h"

@class DHCWBuFlaotAd;

@protocol DHCWBuFlaotAdDelagate <NSObject>
@optional
/**
        浮标加载数据成功
 */
-(void)dwBuFloatLoadDataSuccess:(DHCWBuFlaotAd *)floatAd  floatView:(UIView *)floatView  ;
/**
 浮标展示成功
 */
-(void)dwBuFloatShowSuccess:(DHCWBuFlaotAd *)floatAd  floatView:(UIView *)floatView ;

/**
          浮标加载失败
 */
-(void)dwBuFloatloadFailure:(NSError *)error floatAd:(DHCWBuFlaotAd *)floatAd  floatView:(UIView *)floatView ;

/**
          浮标点点击
 */
-(void)dwBuFloatClick:(DHCWBuFlaotAd *)floatAd  floatView:(UIView *)floatView;

/**
          动画浮标关闭 (配置支持关闭按钮点击关闭才会触发）
 */
-(void)dwBuFloatClosed:(DHCWBuFlaotAd *)floatAd  floatView:(UIView *)floatView;

/**
          关闭详情页
 */
-(void)dwBuFloatCloseDetail:(DHCWBuFlaotAd *)floatAd  floatView:(UIView *)floatView;
@end


@interface DHCWBuFlaotAd : NSObject

@property(nonatomic,weak) id <DHCWBuFlaotAdDelagate> delegate ;

/**
        初始化浮标
    frame： sie建议大小  动画不限方向：325*325 (pt);  纵向：60 *325 (pt); 横向：225 * 60
    
 */
- (instancetype)initWithAdId:(NSString *)adId
                       frame:(CGRect)frame
                  controller:(UIViewController *)controller;

/**
    加载浮标
 */
-(void)loadFloat;
/***
    展示浮标
 */
-(void)floatShowView:(UIView *)floatView;

/**
        配置加载本地视频
 */
-(void)configNativeLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;

@end


