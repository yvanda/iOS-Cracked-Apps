//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UISlider;
@protocol QXLocalPlayerControlViewDelegate;

@interface QXLocalPlayerControlView : UIView
{
    _Bool _isReplayList;
    _Bool _isAnimating;
    id <QXLocalPlayerControlViewDelegate> _delegate;
    unsigned long long _durationSeconds;
    unsigned long long _playedSeconds;
    long long _playState;
    unsigned long long _preSeconds;
    UIView *_playControlView;
    UIButton *_playBtn;
    UILabel *_totalTimeLabel;
    UILabel *_playedTimeLabel;
    UISlider *_controlSlider;
    UISlider *_simpleSlider;
    struct CGRect _playedTimeLableFrame;
    struct CGRect _controlSlideFrame;
}

@property(nonatomic) struct CGRect controlSlideFrame; // @synthesize controlSlideFrame=_controlSlideFrame;
@property(nonatomic) struct CGRect playedTimeLableFrame; // @synthesize playedTimeLableFrame=_playedTimeLableFrame;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UISlider *simpleSlider; // @synthesize simpleSlider=_simpleSlider;
@property(retain, nonatomic) UISlider *controlSlider; // @synthesize controlSlider=_controlSlider;
@property(retain, nonatomic) UILabel *playedTimeLabel; // @synthesize playedTimeLabel=_playedTimeLabel;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIView *playControlView; // @synthesize playControlView=_playControlView;
@property(nonatomic) unsigned long long preSeconds; // @synthesize preSeconds=_preSeconds;
@property(nonatomic) _Bool isReplayList; // @synthesize isReplayList=_isReplayList;
@property(nonatomic) long long playState; // @synthesize playState=_playState;
@property(nonatomic) unsigned long long playedSeconds; // @synthesize playedSeconds=_playedSeconds;
@property(nonatomic) unsigned long long durationSeconds; // @synthesize durationSeconds=_durationSeconds;
@property(nonatomic) __weak id <QXLocalPlayerControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getMMSSFromSS:(unsigned long long)arg1;
- (void)showControlSlider:(_Bool)arg1;
- (void)beginTouchSlider;
- (void)sliderDidChange;
- (void)slideDidEndChange;
- (void)playBtnClicked;
- (void)showPlayControlViewWhenFinshedPlay;
- (void)switchPlayControlView;
- (void)showPlayControlView;
- (void)hidePlayControlView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

