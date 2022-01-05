//
//  DWMultipleGraphicAdDelegate.h
//  BXMSDKDemo
//
//  Created by PHX on 2021/10/9.
//  Copyright © 2021 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
@class DHCWMultipleGraphicAd;

@protocol DWMultipleGraphicAdDelegate <NSObject>

@optional

/**
    聚合图文加载成功
 */
-(void)dwMultipleGraphicLoadDataSuccess:(DHCWMultipleGraphicAd *)graphicAd  adView:(UIView *)adView  ;
/**
    聚合图文加载失败
*/
-(void)dwMultipleGraphicLoadFaliure:(NSError *)error graphicAd:(DHCWMultipleGraphicAd *)graphicAd  ;
/**
    视图曝光
 */
-(void)dwMultipleGraphicVisiable:(DHCWMultipleGraphicAd *)graphicAd     adView:(UIView *)adView ;

/**
    图文点击
    index：当前视图所在的位置
 */
-(void)dwMultipleGraphicClick:(DHCWMultipleGraphicAd *)graphicAd   index:(NSInteger)index   adView:(UIView *)adView ;

/**
    关闭当前 图文（配置支持 图文关闭按、关闭才会触发）
    index：当前关闭图文的所在Index,关闭后，所有视图将更新所有视图最新 index 值
 */
-(void)dwMultipleGraphicClosed:(DHCWMultipleGraphicAd *)graphicAd   index:(NSInteger)index  adView:(UIView *)adView ;
/**
    关闭详情页
    index：当前视图所在的位置
 */
-(void)dwMultipleGraphicCloseDetail:(DHCWMultipleGraphicAd *)graphicAd   index:(NSInteger)index adView:(UIView *)adView ;

@end


