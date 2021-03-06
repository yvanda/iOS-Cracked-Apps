//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSString, NSTimer, UIImageView, UILabel;

@interface FAMobileLiveCountView : UIView <CAAnimationDelegate>
{
    long long _downCountBeginTime;
    long long _downCountCurrentTime;
    CDUnknownBlockType _didCountToEndHandler;
    UILabel *_countDown;
    NSTimer *_downCountTimer;
    UIView *_centerView;
    UIImageView *_numImageView;
}

@property(retain, nonatomic) UIImageView *numImageView; // @synthesize numImageView=_numImageView;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) NSTimer *downCountTimer; // @synthesize downCountTimer=_downCountTimer;
@property(retain, nonatomic) UILabel *countDown; // @synthesize countDown=_countDown;
@property(copy, nonatomic) CDUnknownBlockType didCountToEndHandler; // @synthesize didCountToEndHandler=_didCountToEndHandler;
@property(nonatomic) long long downCountCurrentTime; // @synthesize downCountCurrentTime=_downCountCurrentTime;
@property(nonatomic) long long downCountBeginTime; // @synthesize downCountBeginTime=_downCountBeginTime;
- (void).cxx_destruct;
- (void)dismissProgress;
- (void)progressSimulation;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)startCountDown;
- (void)startLabelAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

