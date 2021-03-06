//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "QLJCEViewInfoProtocol.h"

@class CALayer, CAShapeLayer, CATextLayer, NSString, QLJCEFeedVoteInfo, UILabel;

@interface QLJCEFeedVoteInfoView : UIControl <QLJCEViewInfoProtocol>
{
    UILabel *_voteDescLbl;
    CATextLayer *_voteHeatLayer;
    CALayer *_voteIconLayer;
    CATextLayer *_voteIconDescLayer;
    CAShapeLayer *_contentBgLayer;
    QLJCEFeedVoteInfo *_correspondItem;
}

+ (id)viewIdentifierWithJCEObject:(id)arg1 uInfo:(id)arg2;
+ (_Bool)isObjectValidWithJCEObject:(id)arg1 uInfo:(id)arg2;
+ (double)heightWithJCEObject:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) QLJCEFeedVoteInfo *correspondItem; // @synthesize correspondItem=_correspondItem;
@property(retain, nonatomic) CAShapeLayer *contentBgLayer; // @synthesize contentBgLayer=_contentBgLayer;
@property(retain, nonatomic) CATextLayer *voteIconDescLayer; // @synthesize voteIconDescLayer=_voteIconDescLayer;
@property(retain, nonatomic) CALayer *voteIconLayer; // @synthesize voteIconLayer=_voteIconLayer;
@property(retain, nonatomic) CATextLayer *voteHeatLayer; // @synthesize voteHeatLayer=_voteHeatLayer;
@property(retain, nonatomic) UILabel *voteDescLbl; // @synthesize voteDescLbl=_voteDescLbl;
- (void).cxx_destruct;
- (void)onClick:(id)arg1;
- (double)adaptiveHeightForDesc;
- (double)contrainWidthForDesc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

