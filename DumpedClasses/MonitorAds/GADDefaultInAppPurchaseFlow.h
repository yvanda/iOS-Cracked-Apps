//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADInAppPurchaseDelegate-Protocol.h"
#import "SKPaymentTransactionObserver-Protocol.h"

@class NSMutableSet, NSString;
@protocol GADDefaultInAppPurchaseDelegate;

@interface GADDefaultInAppPurchaseFlow : NSObject <SKPaymentTransactionObserver, GADInAppPurchaseDelegate>
{
    NSMutableSet *_activeInAppPurchases;
    id <GADDefaultInAppPurchaseDelegate> _defaultInAppPurchaseDelegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)didReceiveInAppPurchase:(id)arg1;
- (void)notifyUserOfUnavailableProduct;
- (void)purchaseProduct:(id)arg1 inAppPurchase:(id)arg2;
- (void)failedTransaction:(id)arg1;
- (void)completeTransaction:(id)arg1;
- (id)dequeueInAppPurchaseForTransaction:(id)arg1;
- (void)enqueueInAppPurchase:(id)arg1;
- (void)disableDefaultPurchaseFlow;
- (void)enableDefaultPurchaseFlowWithDelegate:(id)arg1;
@property(readonly, nonatomic, getter=isDefaultPurchaseFlowEnabled) BOOL defaultPurchaseFlowEnabled;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

