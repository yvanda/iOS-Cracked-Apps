//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOCommonCellView.h"

@class QQGroupRobotWelAIOMsgView, QQGroupRobotWelcomeAIOModel;

@interface QQGroupRobotWelCellView : QQAIOCommonCellView
{
    QQGroupRobotWelAIOMsgView *_msgView;
}

@property(retain, nonatomic) QQGroupRobotWelAIOMsgView *msgView; // @synthesize msgView=_msgView;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGRect)GetPaoPaoBgRect;
- (void)calBubbleBackRect;
- (void)loadBubbleImageNor:(int)arg1 imageSel:(int)arg2;
- (id)getMenuItems;
- (_Bool)didTouchEnded:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) __weak QQGroupRobotWelcomeAIOModel *aioModel;
- (void)drawContent:(struct CGRect)arg1;
- (struct CGRect)frameForMsgSendFail;
- (struct CGRect)frameForMsgSendLoading;
- (_Bool)shouldDisplayMsgSendFail;
- (_Bool)shouldDisplayMsgSendLoading;
- (void)layoutSubviews;
- (void)layoutViewsAsSender;
- (void)layoutViewsAsReceiver;
- (id)initWithFrame:(struct CGRect)arg1 chatViewTable:(id)arg2;

@end
