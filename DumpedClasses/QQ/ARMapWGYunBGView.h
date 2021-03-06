//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface ARMapWGYunBGView : UIView
{
    unsigned long long _currStatus;
    UIImageView *_leftTopCloudView;
    UIImageView *_rightTopCloudView;
    UIImageView *_middleCloudView;
    UIImageView *_bottomCloudView;
    UIImageView *_leftRoleView;
    UIImageView *_rightRoleView;
}

+ (id)createImageUseCache:(id)arg1;
- (void).cxx_destruct;
- (id)creteRotationAnim:(_Bool)arg1 angle:(double)arg2 duration:(double)arg3;
- (id)cretePositionAnim:(double)arg1 offsetY:(double)arg2 duration:(double)arg3;
- (void)stopRoleAnimation;
- (void)startRoleAnimation;
- (void)update:(unsigned long long)arg1 autoPlayAnim:(_Bool)arg2 isResourceReady:(_Bool)arg3;
- (void)update:(int)arg1 autoPlayAnim:(_Bool)arg2 needAsync:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

