//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIButton;

@interface KKScreenLockView : UIControl
{
    double _hideDelayTime;
    _Bool _animatedWhenHide;
    UIButton *_btnLock;
    id <KKScreenLockDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onTouchDisappearScreen:(id)arg1;
- (void)onClickLockButton:(id)arg1;
- (void)done;
- (_Bool)isLockViewShow;
- (void)hide:(_Bool)arg1;
- (void)hideDelay:(id)arg1;
- (void)hide:(_Bool)arg1 afterDelay:(double)arg2;
- (void)show:(_Bool)arg1;
- (void)updateLockImage;
- (void)layoutSubviews;
- (void)dealloc;
- (void)cleanDelegate;
- (id)initWithView:(id)arg1 delegate:(id)arg2;

@end

