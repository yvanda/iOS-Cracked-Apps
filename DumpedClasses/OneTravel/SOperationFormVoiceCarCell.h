//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOperationFormCell.h"

@class NSString, NSTimer, ONEBubbleTipsView, SOperationFormPositionCellModel, UIButton, UILabel, UIView;

@interface SOperationFormVoiceCarCell : SOperationFormCell
{
    NSString *_attributedString;
    SOperationFormPositionCellModel *_model;
    UIView *_iconView;
    UILabel *_positionLabel;
    UIView *_separator;
    UIView *_lineView;
    ONEBubbleTipsView *_recommendBubble;
    UIButton *_speechButton;
    NSTimer *_voiceLevelMeterTimer;
    long long _voiceCellType;
}

@property(nonatomic) long long voiceCellType; // @synthesize voiceCellType=_voiceCellType;
@property(retain, nonatomic) NSTimer *voiceLevelMeterTimer; // @synthesize voiceLevelMeterTimer=_voiceLevelMeterTimer;
@property(retain, nonatomic) UIButton *speechButton; // @synthesize speechButton=_speechButton;
@property(retain, nonatomic) ONEBubbleTipsView *recommendBubble; // @synthesize recommendBubble=_recommendBubble;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UILabel *positionLabel; // @synthesize positionLabel=_positionLabel;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SOperationFormPositionCellModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *attributedString; // @synthesize attributedString=_attributedString;
- (void).cxx_destruct;
- (void)stopPulseAnimation;
- (void)startPulseAnimation;
- (void)timerFired:(id)arg1;
- (void)freeVoiceLevelMeterTimerTimer;
- (void)startVoiceLevelMeterTimer;
- (void)resetSOperationFormVoiceCarCell:(long long)arg1;
- (void)speechAction:(id)arg1;
- (void)showRecommendBubbleWithText:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)refreshSeparator;
- (void)setDataModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

