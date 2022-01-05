//
//  BADTextLinkConfig.h
//  BXMSDKDemo
//
//  Created by PHX on 2021/12/14.
//  Copyright © 2021 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BADTextLinkAdBDHeader.h"



@interface BADTextLinkStyleConfig : NSObject

#pragma mark ------广告View设置
//广告背景颜色设置
@property(nonatomic,strong)UIColor *adView_color;
//广告内边距设置 默认为：(1,1,1,1)
@property(nonatomic,assign)UIEdgeInsets adView_edgeInsets;
//广告View 圆角 默认圆角：当 adView_conerRadius == 0 时，不进行圆角绘制
@property(nonatomic,assign)CGFloat adView_conerRadius;
//设置圆角类型
@property(nonatomic,assign)BADDWCornerRadiusType adView_cornerRadiusType;

#pragma mark ------图片设置
/**
  图片边距设置 默认为：(5, 5, 5, 5)
 备注：
 BAdTextLinkImageTextStyleType  =  BAdTextLinkImageTextStyleTypeLeft 时：image_edgeInsets.right 无效
 
 BAdTextLinkImageTextStyleType  =  BAdTextLinkImageTextStyleTypeRight 时：image_edgeInsets.left 无效
 
 */
@property(nonatomic,assign)UIEdgeInsets image_edgeInsets;
//图片圆角设置 默认圆角：当 adView_conerRadius == 0 时，不进行圆角绘制
@property(nonatomic,assign)CGFloat imageVie_conerRadius;
//设置图片圆角类型
@property(nonatomic,assign)BADDWCornerRadiusType image_cornerRadiusType;


#pragma mark ------字体设置
//字体大小
@property(nonatomic,assign)CGFloat fontSize;
//字体颜色
@property(nonatomic,strong)UIColor *titleColor;

//标题边距设置 默认(8.5, 3, 8.5, 3)
@property(nonatomic,assign)UIEdgeInsets title_EdgeInsets;

@end


