//
//  BXMBuoyageAd.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/5/19.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWNativeLocalVideoAd.h"
@class DHCWBuoyageAd;

NS_ASSUME_NONNULL_BEGIN


@protocol DHCWBuoyageAdDelagate <NSObject>
@optional
/**
        浮标加载数据成功
 */
-(void)dwBuoyageLoadDataSuccess:(DHCWBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView  ;
/**
 浮标展示成功
 */
-(void)dwBuoyageShowSuccess:(DHCWBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView ;

/**
          浮标加载失败
 */
-(void)dwBuoyageloadFailure:(NSError *)error buoyageAd:(DHCWBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView ;

/**
          浮标点点击
 */
-(void)dwBuoyageClick:(DHCWBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView;

/**
          浮标关闭(配置支持关闭按钮点击关闭才会触发）
 */
-(void)dwBuoyageClosed:(DHCWBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView;
/**
         关闭详情页
 */
-(void)dwBuoyageCloseDetail:(DHCWBuoyageAd *)buoyageAd  buoyageView:(UIView *)buoyageView;

@end


@interface DHCWBuoyageAd : NSObject

@property(nonatomic,weak)id <DHCWBuoyageAdDelagate> delegate;


/**
        初始化浮标
 */
- (instancetype)initWithAdId:(NSString *)adId
                       frame:(CGRect)frame
                  controller:(UIViewController *)controller;

/**
        加载浮标
 */
-(void)loadBuoyage;

/***
    展示浮标
 */
-(void)buoyageShowView:(UIView *)buoyageView;

/**
        配置加载本地视频
 */
-(void)configNativeLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;
@end

NS_ASSUME_NONNULL_END
