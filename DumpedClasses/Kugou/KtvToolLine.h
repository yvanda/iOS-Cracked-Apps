//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeView, KTVGradientLineView, NSTimer, UIColor, UIImageView;

@interface KtvToolLine : UIView
{
    _Bool _isLeft;
    UIColor *_tintColor;
    KTVGradientLineView *_line;
    UIImageView *_hollowCylinder;
    UIColor *_leftStartColor;
    UIColor *_leftEndColor;
    UIColor *_rightStartColor;
    UIColor *_rightEndColor;
    KGThemeView *_bgView;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) KGThemeView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIColor *rightEndColor; // @synthesize rightEndColor=_rightEndColor;
@property(retain, nonatomic) UIColor *rightStartColor; // @synthesize rightStartColor=_rightStartColor;
@property(retain, nonatomic) UIColor *leftEndColor; // @synthesize leftEndColor=_leftEndColor;
@property(retain, nonatomic) UIColor *leftStartColor; // @synthesize leftStartColor=_leftStartColor;
@property(retain, nonatomic) UIImageView *hollowCylinder; // @synthesize hollowCylinder=_hollowCylinder;
@property(retain, nonatomic) KTVGradientLineView *line; // @synthesize line=_line;
@property(nonatomic) _Bool isLeft; // @synthesize isLeft=_isLeft;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)resetFrame;
- (void)stopAnimations;
- (void)makeAnimation;
- (void)startAnimations;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

