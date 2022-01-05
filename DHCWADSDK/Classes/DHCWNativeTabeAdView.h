//
//  BXMNativeTabeAdView.h
//  BXMSDKDemo
//
//  Created by weicai on 2020/12/8.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DHCWNativeAdDataObject.h"
#import "DHCWNativeLocalVideoAd.h"
@class DHCWNativeTabeAdView;
NS_ASSUME_NONNULL_BEGIN

@protocol DHCWNativeTabAdViewDelegate <NSObject>

@optional

/// 视图曝光
- (void)nativeTabAdShowSucess:(DHCWNativeTabeAdView *)tabAdView;
/// 视图被点击
- (void)nativeTabAdDidClick:(DHCWNativeTabeAdView *)tabAdView;


@end

@interface DHCWNativeTabeAdView : UIView

@property(nonatomic,weak)id <DHCWNativeTabAdViewDelegate > delegate;

/// 广告数据
@property (nonatomic, strong, readonly) DHCWNativeAdDataObject *dataObject;


/// 当前视图控制器
@property (nonatomic, weak) UIViewController *rootViewController;
/**
    tab 详情页的frame 不设置将默认为当前控制器View大小
 */
@property(nonatomic,assign)CGRect tabPageFrame;

- (void)registerTabDataObject:(DHCWNativeAdDataObject *)dataObject
                 container:(__kindof UIView *)containerView
               clickableViews:(NSArray<UIView *> *)clickableViews;
/**
  展示tab详情页
*/
-(void)showNativeTabView;

/**
    刷新详情页
 */
-(void)reloadTabDetail;
/**
    配置加载本地视频
    使用该功能请确保先跟相关业务人员沟通
 */
-(void)configNativeLocalVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;


@end

NS_ASSUME_NONNULL_END
