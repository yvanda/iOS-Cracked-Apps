//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIButton, UIColorDotPageControl, UIImageView;

@interface NMAppGuideView : UIView
{
    UIView *_backgroundUpperView;
    UIView *_backgroundLowerView;
    UIImageView *_backgroundFrameView;
    double _upperBackgroundHeight;
    double _frameBackgroundWidth;
    double _frameBackgroundHeight;
    double _frameBackgroundMargin;
    double _buttonWidth;
    double _buttonHeight;
    double _buttonMarginBottom;
    double _buttonInnerMargin;
    double _pageControlPadding;
    double _pageControlDot;
    double _pageControlDotSpace;
    long long _fontSize;
    unsigned long long _type;
    NSArray *_frames;
    UIButton *_dismissButton;
    UIButton *_loginButton;
    UIColorDotPageControl *_pageControl;
    _Bool _quiting;
    id <NMAppGuideViewDelegate> _delegate;
    _Bool _animating;
    unsigned long long _style;
    unsigned long long _currentIndex;
}

@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <NMAppGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)login;
- (void)dismiss;
- (void)dismiss:(_Bool)arg1;
- (void)dismissAnimationFinished;
- (void)dismissAnimationWillStart;
- (void)show;
- (void)next;
- (void)previous;
- (id)currentFrame;
- (void)setCurrentIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(unsigned long long)arg1;

@end
