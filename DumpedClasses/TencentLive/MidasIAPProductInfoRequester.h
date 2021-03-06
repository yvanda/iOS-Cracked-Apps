//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKProductsRequestDelegate.h"

@class MidasIAPUserInfo, MidasIapOrderInfo, NSMutableSet, NSString, SKProductsRequest;

@interface MidasIAPProductInfoRequester : NSObject <SKProductsRequestDelegate>
{
    MidasIapOrderInfo *_orderInfo;
    MidasIAPUserInfo *_userInfo;
    CDUnknownBlockType _completion;
    SKProductsRequest *_req;
    NSMutableSet *_ids;
}

@property(retain, nonatomic) NSMutableSet *ids; // @synthesize ids=_ids;
@property(retain, nonatomic) SKProductsRequest *req; // @synthesize req=_req;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) MidasIAPUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) MidasIapOrderInfo *orderInfo; // @synthesize orderInfo=_orderInfo;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)json;
- (_Bool)needRequest:(id)arg1;
- (void)prepare:(id)arg1;
- (void)callGetProductInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

