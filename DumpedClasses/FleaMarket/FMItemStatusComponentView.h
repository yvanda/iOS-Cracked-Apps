//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FMComponentViewProtocol.h"

@class FM72hTagInfoView, FMItemTimeCountDownViewComponent, FMItemTimeCountDownViewForAuction, MSWeakTimer, NSDateFormatter, NSString, UILabel;

@interface FMItemStatusComponentView : UIView <FMComponentViewProtocol>
{
    FMItemTimeCountDownViewForAuction *_timeTickView;
    FMItemTimeCountDownViewComponent *_timeTickViewModel;
    UIView *_contentView;
    UIView *_tempView;
    UILabel *_tempInfo;
    NSDateFormatter *_dateFormatter;
    long long _delayCnt;
    FM72hTagInfoView *_tagInfoView;
    MSWeakTimer *_timer;
}

+ (double)rowHeightForComponent:(id)arg1;
@property(retain, nonatomic) MSWeakTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) FM72hTagInfoView *tagInfoView; // @synthesize tagInfoView=_tagInfoView;
@property(nonatomic) long long delayCnt; // @synthesize delayCnt=_delayCnt;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) UILabel *tempInfo; // @synthesize tempInfo=_tempInfo;
@property(retain, nonatomic) UIView *tempView; // @synthesize tempView=_tempView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) FMItemTimeCountDownViewComponent *timeTickViewModel; // @synthesize timeTickViewModel=_timeTickViewModel;
@property(retain, nonatomic) FMItemTimeCountDownViewForAuction *timeTickView; // @synthesize timeTickView=_timeTickView;
- (void).cxx_destruct;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (_Bool)isIn2Minute:(id)arg1;
- (_Bool)isIn5Minute:(id)arg1;
- (double)difftimeUtil:(id)arg1;
- (id)countdownFromTime:(id)arg1;
- (void)updateView:(id)arg1;
- (void)animateStatuLabel:(id)arg1;
- (void)bindBidStatusComponent;
- (void)bind72hStatusComponent;
- (void)bindComponent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
