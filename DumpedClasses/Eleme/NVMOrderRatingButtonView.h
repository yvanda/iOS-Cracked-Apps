//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface NVMOrderRatingButtonView : UIView
{
    _Bool _isRated;
    _Bool _isFinalResult;
    CDUnknownBlockType _onRateBlock;
    UIButton *_likeButton;
    UIButton *_unlikeButton;
}

@property(nonatomic) _Bool isFinalResult; // @synthesize isFinalResult=_isFinalResult;
@property(retain, nonatomic) UIButton *unlikeButton; // @synthesize unlikeButton=_unlikeButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) _Bool isRated; // @synthesize isRated=_isRated;
@property(copy, nonatomic) CDUnknownBlockType onRateBlock; // @synthesize onRateBlock=_onRateBlock;
- (void).cxx_destruct;
- (void)setIsLike:(_Bool)arg1;
- (void)unlike;
- (void)like;
- (void)disableRateButtons;
- (void)setFinalResult:(_Bool)arg1;
- (void)configViews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

