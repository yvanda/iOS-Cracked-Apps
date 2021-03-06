//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KGThemeImageView, KGThemeLine, UILabel;

@interface KrcTimeMarking : UIView
{
    _Bool _showMarkLineRight;
    _Bool _isTouchInSide;
    KGThemeImageView *_imageView;
    KGThemeLine *_markLine;
    UILabel *_markTitleLb;
    KGThemeButton *_playButton;
    CDUnknownBlockType _markingEvent;
    CDUnknownBlockType _movingValue;
    CDUnknownBlockType _playBlock;
    struct UIEdgeInsets _imageEdageInsets;
}

@property(copy, nonatomic) CDUnknownBlockType playBlock; // @synthesize playBlock=_playBlock;
@property(copy, nonatomic) CDUnknownBlockType movingValue; // @synthesize movingValue=_movingValue;
@property(copy, nonatomic) CDUnknownBlockType markingEvent; // @synthesize markingEvent=_markingEvent;
@property(readonly, nonatomic) _Bool isTouchInSide; // @synthesize isTouchInSide=_isTouchInSide;
@property(nonatomic) _Bool showMarkLineRight; // @synthesize showMarkLineRight=_showMarkLineRight;
@property(retain, nonatomic) KGThemeButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UILabel *markTitleLb; // @synthesize markTitleLb=_markTitleLb;
@property(retain, nonatomic) KGThemeLine *markLine; // @synthesize markLine=_markLine;
@property(nonatomic) struct UIEdgeInsets imageEdageInsets; // @synthesize imageEdageInsets=_imageEdageInsets;
@property(retain, nonatomic) KGThemeImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)adjustAnchorPointForGestureRecognizer:(id)arg1;
- (void)panPiece:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)play;
- (void)setFrame:(struct CGRect)arg1;
- (id)init;

@end

