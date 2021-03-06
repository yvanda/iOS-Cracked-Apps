//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TDEventIAP : NSObject
{
}

+ (void)viewItems:(id)arg1;
+ (void)addItem:(id)arg1 withCategory:(id)arg2 withUnitPrice:(int)arg3 withCount:(int)arg4;
+ (void)viewItem:(id)arg1 withName:(id)arg2 withCategory:(id)arg3 withUnitPrice:(int)arg4;
+ (void)placeOrder:(id)arg1 amount:(int)arg2 currencyType:(id)arg3 items:(id)arg4;
+ (void)item:(id)arg1 amount:(int)arg2 usedFor:(id)arg3;
+ (void)reward:(int)arg1 reason:(id)arg2;
+ (void)onPurchaseSucc:(id)arg1;
+ (void)virtualCurrencyPurchase:(id)arg1 amount:(int)arg2 currencyType:(id)arg3 payType:(id)arg4 itemId:(id)arg5 itemCount:(int)arg6 item:(id)arg7;
+ (void)currencyPurchase:(id)arg1 amount:(int)arg2 currencyType:(id)arg3 payType:(id)arg4 itemId:(id)arg5 itemCount:(int)arg6 item:(id)arg7;
+ (void)onRechargeSucc:(id)arg1;
+ (void)recharge:(id)arg1 amount:(int)arg2 currencyType:(id)arg3 payType:(id)arg4 sku:(id)arg5 virtualCurrencyCount:(int)arg6 virtualCurrencyType:(id)arg7;
+ (void)recharge:(id)arg1 amount:(int)arg2 currencyType:(id)arg3 payType:(id)arg4 order:(id)arg5;

@end

