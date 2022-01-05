//
//   BADTextLinkAdBDHeader.h
//  BXMSDKDemo
//
//  Created by PHX on 2021/12/13.
//  Copyright © 2021 Mac. All rights reserved.
//

#ifndef _BADTextLinkAdBDHeader_h
#define _BADTextLinkAdBDHeader_h
#import <UIKit/UIKit.h>


//文字链样式

typedef NS_ENUM(NSInteger,BAdTextLinkImageTextStyleType){
        BAdTextLinkImageTextStyleTypeLeft,//图文在左边，关闭在右边
        BAdTextLinkImageTextStyleTypeRight,//图文在右边，关闭在左边
} ;

//设置圆角类型
typedef NS_OPTIONS(NSUInteger, BADDWCornerRadiusType) {
    BADDWCornerRadiusLeftTop = 1 << 0,
    BADDWCornerRadiusRightTop = 1 << 1,
    BADDWCornerRadiusLeftBottom = 1 << 2,
    BADDWCornerRadiusRightBottom = 1 << 3,
    BADDWCornerRadiusTop = BADDWCornerRadiusLeftTop | BADDWCornerRadiusRightTop,
    BADDWCornerRadiusLeft = BADDWCornerRadiusLeftTop | BADDWCornerRadiusLeftBottom,
    BADDWCornerRadiusRight = BADDWCornerRadiusRightTop | BADDWCornerRadiusRightBottom,
    BADDWCornerRadiusBottom = BADDWCornerRadiusRightBottom | BADDWCornerRadiusLeftBottom,
    BADDWCornerRadiusAll = ~0UL,
};

#endif /* _BADTextLinkAdBDHeader_h */
