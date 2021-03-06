//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "FBAccessibilityInvalidationEventsListener-Protocol.h"

@class FBSearchBar, NSString, UIButton;

@interface FBMessengerChatBarSearchView : UIView <FBAccessibilityInvalidationEventsListener, CAAnimationDelegate>
{
    double _lightStyleChatBarIconSize;
    UIView *_bottomSeparatorView;
    UIView *_topSeparatorView;
    _Bool _buttonsHidden;
    _Bool _gearButtonAnimating;
    _Bool _showTopSeparator;
    int _style;
    FBSearchBar *_searchBar;
    UIButton *_gearButton;
    double _shiftOffsetForAnimation;
}

@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) _Bool showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
@property(nonatomic) _Bool gearButtonAnimating; // @synthesize gearButtonAnimating=_gearButtonAnimating;
@property(nonatomic) double shiftOffsetForAnimation; // @synthesize shiftOffsetForAnimation=_shiftOffsetForAnimation;
@property(nonatomic) _Bool buttonsHidden; // @synthesize buttonsHidden=_buttonsHidden;
@property(retain, nonatomic) UIButton *gearButton; // @synthesize gearButton=_gearButton;
@property(readonly, nonatomic) FBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)didReceiveFontInvalidation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_setFont;
- (void)_stopGearButtonAnimation;
- (void)_startGearButtonAnimationWithDelay:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_layoutSubviewsForLightStyle;
- (void)_layoutSubviewsForDarkStyle;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (void)_configureLightStyle;
- (void)_configureDarkStyle;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

