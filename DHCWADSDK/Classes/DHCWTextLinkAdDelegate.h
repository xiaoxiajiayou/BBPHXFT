//
//  DHCWTextLinkAdDelegate.h
//  BXMSDKDemo
//
//  Created by PHX on 2021/12/15.
//  Copyright © 2021 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DHCWTextLinkAd;

@protocol DHCWTextLinkAdDelegate <NSObject>

//加载成功
-(void)dwTextLinkAdLoadSucess:(DHCWTextLinkAd *)textLinkAd  linkAdView:(UIView *)linkAdView;;

//加载失败
-(void)dwTextLinkAdLoadFailure:(NSError *)error textLinkAd:(DHCWTextLinkAd *)textLinkAd;

//曝光成功
-(void)dwTextLinkAdShowSuccess:(DHCWTextLinkAd *)textLinkAd linkAdView:(UIView *)linkAdView;;
//点击
-(void)dwTextLinkAdClick:(DHCWTextLinkAd *)textLinkAd   linkAdView:(UIView *)linkAdView;;

//关闭
-(void)dwTextLinkAdClosed:(DHCWTextLinkAd *)textLinkAd  linkAdView:(UIView *)linkAdView;;
@end


