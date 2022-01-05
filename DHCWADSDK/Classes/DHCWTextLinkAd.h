//
//  DHCWTextLinkAd.h
//  BXMSDKDemo
//
//  Created by PHX on 2021/12/15.
//  Copyright © 2021 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BADTextLinkStyleConfig.h"
#import "BADTextLinkAdBDHeader.h"
#import "DHCWTextLinkAdDelegate.h"
#import "DHCWNativeLocalVideoAd.h"


@interface DHCWTextLinkAd : NSObject

@property(nonatomic,weak)id <DHCWTextLinkAdDelegate > delegate;

//文字链样式类型.默认 BAdTextLinkImageTextStyleTypeLeft
@property(nonatomic,assign)BAdTextLinkImageTextStyleType textLinkStyleType;
//样式配置对象
@property(nonatomic,strong)BADTextLinkStyleConfig *linkStyleConfig ;

/**
 初始化文字链
 @param adId 广告位id
 @param adSize 广告尺寸 adSize.width =0 默认为160 adsize.height = 0 默认为50
 */
- (instancetype)initWithAdId:(NSString *)adId adSize:(CGSize)adSize;

//配置本地互动激励视频对象
-(void)configLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;
//加载文字链
-(void)loadTextLinkAd;

-(void)showTextLinkAdView:(UIView *)view controller:(UIViewController *)controller;


@end


