//
//  DHCWLocalAdManager.h
//  BXMSDKDemo
//
//  Created by PHX on 2021/6/30.
//  Copyright © 2021 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DHCWNativeLocalAd;

@protocol DHCWLocalAdDelegate <NSObject>

/**
     加载本地广告
     入口素材 adId  BXM 后台申请的广告位Id
 */
-(void)dwhcLoadLocalAdWithAdId:(NSString *_Nullable)adId   localAd:(DHCWNativeLocalAd *_Nullable)localAd;


@end


@interface DHCWNativeLocalAd : NSObject


@property(nonatomic,weak)id <DHCWLocalAdDelegate> _Nullable delegate;

/**
    加载本地广告成功
 */
-(void)bdWLoadLocalAdSuccess;

/**
    加载本地广告失败
 */
-(void)bdWLoadLocalAdDidFaliure:(NSError *_Nullable)error;

/**
      本地广告展示成功
 */
-(void)bdWLocalAdVisiable;

/**
    本地广告点击
 */
-(void)bdWLocalAdClick;

/**
    本地广告关闭
 */
-(void)bdWLocalAdClose;

@end


