//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class MCMarqueeLabel, NMMoreOperationListView, NMPlayActionView, NMPlayLyricView, NMRadioControlBar, NMRadioCoverGroupView, NSString, UIImage, UIImageView, UILabel;

@interface NMRadioView : UIView <UIGestureRecognizerDelegate>
{
    id _delegate;
    UIImageView *_backgroundImageView;
    UIView *_bgView;
    UIImageView *_maskView;
    NMRadioControlBar *_controlView;
    NMRadioCoverGroupView *_coverGroupView;
    UIView *_actionBgView;
    NMPlayActionView *_actionView;
    NMMoreOperationListView *_expandView;
    MCMarqueeLabel *_nameLabel;
    UILabel *_artistLabel;
    UIView *_nightModeMask;
    double _controlViewHeight;
    id <SDWebImageOperation> _downloadOperation;
    _Bool _isDarkerActionView;
}

@property(nonatomic) _Bool isDarkerActionView; // @synthesize isDarkerActionView=_isDarkerActionView;
@property(readonly, nonatomic) NMPlayActionView *actionView; // @synthesize actionView=_actionView;
@property(readonly, nonatomic) NMMoreOperationListView *expandView; // @synthesize expandView=_expandView;
@property(readonly, nonatomic) NMRadioCoverGroupView *coverGroupView; // @synthesize coverGroupView=_coverGroupView;
@property(readonly, nonatomic) NMRadioControlBar *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)swipe:(id)arg1;
- (void)showSongCoverView:(id)arg1;
- (void)hideActionView;
- (void)showActionView;
- (void)actionViewAnimationWillStart:(id)arg1 context:(void *)arg2;
- (void)actionViewAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)setActionViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)actionViewHidden;
- (void)blur:(id)arg1;
- (void)findBackgroundColorFinished:(id)arg1 image:(id)arg2;
- (void)handleBackgroundImage:(id)arg1;
- (void)setCurrentBackground:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setActionBgViewBackgroundColor:(_Bool)arg1;
- (void)lyricTimerToggled;
- (void)progressTimerToggled;
- (void)songChange:(id)arg1;
@property(readonly, nonatomic) UIImage *shareThumbImage;
@property(readonly, nonatomic) NMPlayLyricView *lyricView; // @dynamic lyricView;
- (void)layoutSubviews;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dealloc;
- (void)setNightMode:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
