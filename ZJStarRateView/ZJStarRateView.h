//
//  ZJStarRateView.h
//
//  Created by PSVMC on 15/11/10.
//  Copyright (c) 2014年 PSVMC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ZJStarRateView;
@protocol ZJStarRateViewDelegate <NSObject>
@optional
- (void)starRateView:(ZJStarRateView *)starRateView scroePercentDidChange:(CGFloat)newScorePercent;
@end

@interface ZJStarRateView : UIView

@property (nonatomic, assign) CGFloat scorePercent;//得分值，范围为0--个数，默认为0
@property (nonatomic, assign) BOOL hasAnimation;//是否允许动画，默认为NO
@property (nonatomic, assign) BOOL allowIncompleteStar;//评分时是否允许半星，默认为NO
@property (nonatomic, assign) BOOL allowClick;//是否可以点击 默认YES

@property (nonatomic, weak) id<ZJStarRateViewDelegate>delegate;

- (instancetype)initWithFrame:(CGRect)frame numberOfStars:(NSInteger)numberOfStars;

@end