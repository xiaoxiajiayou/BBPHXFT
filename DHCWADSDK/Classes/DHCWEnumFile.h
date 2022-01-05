//
//  DHCWEnumFile.h
//  BXMSDKDemo
//
//  Created by Mac on 2019/12/31.
//  Copyright © 2019 Mac. All rights reserved.
//

#ifndef DHCWEnumFile_h
#define DHCWEnumFile_h


#define BXM_DEPRECATED_MSG(s) __attribute__((deprecated(s)))

// 自渲染广告类型
typedef NS_ENUM(NSInteger, DWNativeAdMode) {
    DWNativeAdModeSmallImage = 2, // 小图
    DWNativeAdModeLargeImage = 3, // 大图
    DWNativeAdModeGroupImage = 4, // 组图
    DWNativeAdModeVideo = 5       // 视频
};

// 广告图片尺寸
typedef NS_ENUM(NSInteger, DWAdImageSize) {
  
    DWAdImageSize_Feed228_150,
    DWAdImageSize_Feed690_388,
};

#endif /* DHCWEnumFile_h */
