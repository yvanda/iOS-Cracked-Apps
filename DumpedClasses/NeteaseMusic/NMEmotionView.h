//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMActionSheetBackgroundView.h"

#import "UIColorDotPageControlDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIButton, UIColorDotPageControl, UIImage, UIImageView, UILabel, UITextView, UITouchableScrollView;

@interface NMEmotionView : NMActionSheetBackgroundView <UIColorDotPageControlDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    double _scrollViewWidth;
    unsigned long long _emotionPerPage;
    unsigned long long _emotionCountInRow;
    double _emotionHMargin;
    UIColorDotPageControl *_pagedControl;
    UITouchableScrollView *_boardView;
    UIButton *_sendButton;
    UITextView *_textView;
    NSMutableArray *_deleteButtonArray;
    UIImage *_deleteImage;
    UIImage *_deleteImageNight;
    UIImageView *_backgroundImageView;
    UIImageView *_tabImageView;
    UILabel *_sendLabel;
    id <NMEmotionViewDelegate> _delegate;
}

+ (double)height;
@property(nonatomic) id <NMEmotionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)pageControlPageDidChange:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)emotionViewTapped:(id)arg1;
- (id)emotionBoardImageAtIndex:(unsigned long long)arg1;
- (long long)emotionIndexOfPoint:(struct CGPoint)arg1;
- (struct CGRect)deleteButtonRectAtIndex:(unsigned long long)arg1;
- (struct CGSize)emotionRectSize;
- (double)emotionAreaHeight;
- (double)emotionAreaWidth;
- (void)sendButtonTouched;
- (void)deleteButtonTouched;
- (void)emotionClicked:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)handleChangingTheme:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
@property(readonly, nonatomic) _Bool isShowing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

