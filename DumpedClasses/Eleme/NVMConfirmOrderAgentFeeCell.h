//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EBKConfirmOrderBaseCell.h"

@class UIButton, UILabel;

@interface NVMConfirmOrderAgentFeeCell : EBKConfirmOrderBaseCell
{
    CDUnknownBlockType _clickQuestionAction;
    UILabel *_nameLabel;
    UILabel *_contentLabel;
    UILabel *_totalLabel;
    UIButton *_questionButton;
}

+ (double)cellHeightWithItem:(id)arg1;
@property(retain, nonatomic) UIButton *questionButton; // @synthesize questionButton=_questionButton;
@property(retain, nonatomic) UILabel *totalLabel; // @synthesize totalLabel=_totalLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) CDUnknownBlockType clickQuestionAction; // @synthesize clickQuestionAction=_clickQuestionAction;
- (void).cxx_destruct;
- (void)updateWithAgentFeeItem:(id)arg1 checkoutInfo:(id)arg2;
- (void)loadSubviews;
- (void)setupSelf;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

