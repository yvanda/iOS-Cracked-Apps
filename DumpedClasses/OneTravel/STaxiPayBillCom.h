//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPayBillCom.h"

@class RACDisposable;

@interface STaxiPayBillCom : SPayBillCom
{
    RACDisposable *_refreshDispose;
}

@property(retain, nonatomic) RACDisposable *refreshDispose; // @synthesize refreshDispose=_refreshDispose;
- (void).cxx_destruct;
- (void)doPayment;
- (void)reloadContainerView;
- (void)refreshPayBillModel;
- (void)pushToWebController:(id)arg1;
- (void)tapCancelReason;
- (void)tapCheckSelect:(_Bool)arg1;
- (void)tapTipItem:(id)arg1;
- (void)baoxiaoSuccess;
- (void)tapActItem:(id)arg1;
- (void)payBillDataSourceForTotalFee:(id)arg1;
- (void)dealloc;
- (void)bind:(id)arg1;

@end

