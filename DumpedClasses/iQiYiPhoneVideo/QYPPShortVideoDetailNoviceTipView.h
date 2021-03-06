//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIImageView;
@protocol QYPPShortVideoDataDelegate;

@interface QYPPShortVideoDetailNoviceTipView : UIView <CAAnimationDelegate>
{
    UIImageView *_dirImageV;
    UIImageView *_handImageV;
    id <QYPPShortVideoDataDelegate> _parentVC;
}

@property(nonatomic) __weak id <QYPPShortVideoDataDelegate> parentVC; // @synthesize parentVC=_parentVC;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)animationAction;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

