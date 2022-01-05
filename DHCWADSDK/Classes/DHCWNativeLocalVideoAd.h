//
//  BXMNativeLocaVideoAd.h
//  BXMSDK
//
//  Created by weicai on 2020/8/24.
//  Copyright © 2020 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class DHCWNativeLocalVideoAd;

/**
    建议使用视频平台
 */
typedef NS_ENUM(NSInteger,DWLocalVideoType) {
    DWLocalVideoTypeCSJ,//穿山甲
};

NS_ASSUME_NONNULL_BEGIN

@protocol DHCWNativeLocaVideoAdDelegate <NSObject>

/**
     加载视频
     入口素材
    建议使用视频平台
 */
-(void)loadNativeVideoWithAdId:(NSString *)adId  loadVideoType:(DWLocalVideoType)videoType  localVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;

/**
        展示视频
 */
-(void)showNativeVideoFromController:(UIViewController *)controller localVideoAd:(DHCWNativeLocalVideoAd *)localVideoAd;

@end
@interface DHCWNativeLocalVideoAd : NSObject

@property(nonatomic,weak)id <DHCWNativeLocaVideoAdDelegate> delegate;

/**
        加载视频成功
 */
-(void)nativeVideoDidSucess;

/**
        加载视频失败
 */
-(void)nativeVideoDidFaliure:(NSError *)error;

/**
       视频展示成功
 */
-(void)nativeVideoVisiable;

/**
       视频点击
 */
-(void)nativeVideoClick;
/**
        是否满足奖励条件
 */
-(void)nativeVideoFinishVerify:(BOOL)Verify;
/**
       视频未播放完
 */
-(void)nativeVideoUnFinish;
/**
       视频播放完成
 */
-(void)nativeVideoFinish;
/**
       视频关闭
 */
-(void)nativeVideoClose;

@end

NS_ASSUME_NONNULL_END
