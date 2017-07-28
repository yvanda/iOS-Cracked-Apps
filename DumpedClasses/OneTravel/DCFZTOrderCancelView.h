//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCInviteTipsView, DCOrderCancelReasonView, DCYSInviteGetInfoBaseModel, RACSubject;

@interface DCFZTOrderCancelView : UIView
{
    DCYSInviteGetInfoBaseModel *_orderModel;
    RACSubject *_eventSubject;
    DCOrderCancelReasonView *_reasonView;
    DCInviteTipsView *_cancelRuleView;
    UIView *_buttonBGView;
    double _reasonHeight;
    UIView *_topLine;
}

@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) double reasonHeight; // @synthesize reasonHeight=_reasonHeight;
@property(retain, nonatomic) UIView *buttonBGView; // @synthesize buttonBGView=_buttonBGView;
@property(retain, nonatomic) DCInviteTipsView *cancelRuleView; // @synthesize cancelRuleView=_cancelRuleView;
@property(retain, nonatomic) DCOrderCancelReasonView *reasonView; // @synthesize reasonView=_reasonView;
@property(retain, nonatomic) RACSubject *eventSubject; // @synthesize eventSubject=_eventSubject;
@property(retain, nonatomic) DCYSInviteGetInfoBaseModel *orderModel; // @synthesize orderModel=_orderModel;
- (void).cxx_destruct;
- (void)clickCancelPayButton:(id)arg1;
- (void)clickCancelRuleButton;
- (id)createPayButtonView:(id)arg1;
- (void)createButtonView:(id)arg1;
- (void)updateMessage;
- (void)makeAutoLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end
