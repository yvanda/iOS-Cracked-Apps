//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SContainerOperateDelegate.h"
#import "SFormDelegate.h"
#import "SPageSetDelegate.h"
#import "SPageSwitchDelegate.h"

@class SOrderCom;

@protocol SOrderComDelegate <SPageSwitchDelegate, SPageSetDelegate, SFormDelegate, SContainerOperateDelegate>
- (void)orderComReservationStatusChange:(SOrderCom *)arg1 status:(long long)arg2;
- (void)orderComShowActivitySheetView:(SOrderCom *)arg1 animated:(_Bool)arg2;
- (void)orderComShowEvaluateSheetView:(SOrderCom *)arg1 animated:(_Bool)arg2;
- (void)orderComShowPaySheetView:(SOrderCom *)arg1 animated:(_Bool)arg2;
- (void)orderComOrderStatusChange:(SOrderCom *)arg1;
- (void)orderComRefreshBubble:(SOrderCom *)arg1;
@end

