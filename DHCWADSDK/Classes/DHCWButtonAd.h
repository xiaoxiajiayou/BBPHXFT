//
//  BXMButtonAd.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/5/19.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DHCWNativeLocalVideoAd.h"
@class DHCWButtonAd;

NS_ASSUME_NONNULL_BEGIN

@protocol  DHCWButtonAdDelagate <NSObject>
@optional
/**
             非标Banner据加载成功
 */
-(void)dwButtonloadDataSuccess:(DHCWButtonAd *)buttonAd  buttonView:(UIView *)buttonView;
/**
    非标Banner成功展示
 */
-(void)dwButtonShowSuccess:(DHCWButtonAd *)buttonAd  buttonView:(UIView *)buttonView;
/**

            非标Banner加载失败
 */
-(void)dwButtonloadFaliure:(NSError *)error buttonAd:(DHCWButtonAd *)buttonAd  buttonView:(UIView *)buttonView;
/**
    非标Banner点击
 */
-(void)dwButtonClick:(DHCWButtonAd *)buttonAd  buttonView:(UIView *)buttonView;

/**
    关闭非标Banner（配置支持关闭非标Banner点击关闭才会触发）
 */
-(void)dwButtonClosed:(DHCWButtonAd *)buttonAd  buttonView:(UIView *)buttonView;
/**
    关闭详情页
 */
-(void)dwButtonCloseDetail:(DHCWButtonAd *)buttonAd  buttonView:(UIView *)buttonView;



@end

@interface DHCWButtonAd : NSObject

@property(nonatomic,weak)id <DHCWButtonAdDelagate> delegate;


/**
        初始化非标Banner
 */
-(instancetype)initWithAdId:(NSString *)adId
                buttonFrame:(CGRect )frame
                 controller:(UIViewController *)controller;
/**
        加载非标Banner数据
 */
-(void)loadButton;

/**
        button 显示
 */
-(void)buttonShowView:(UIView *)view;

/**
    配置加载本地视频
    使用该功能请确保先跟相关业务人员沟通
 */
-(void)configNativeLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;
@end

NS_ASSUME_NONNULL_END
