//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol FBServiceTransactionMutating;

@interface FBNativeTemplateAsyncActionManager : NSObject
{
    id <FBServiceTransactionMutating> _currentQuery;
    NSMutableDictionary *_sequenceNumberToPendingResponses;
    NSMutableArray *_pendingSequenceNumbers;
    long long _sequenceNumber;
    _Bool _executeInRequestOrder;
    _Bool _cancelPending;
    _Bool _canceled;
}

@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
- (void).cxx_destruct;
- (void)_handleSuccessWithResponse:(id)arg1 context:(id)arg2 sequenceNumber:(long long)arg3;
- (void)_handleErrorWithAsyncAction:(id)arg1 clientData:(id)arg2 sequenceNumber:(long long)arg3;
- (_Bool)performActionWithAsyncAction:(id)arg1 clientData:(id)arg2 sequenceNumber:(long long)arg3;
- (void)performActionWithAsyncAction:(id)arg1 clientData:(id)arg2;
- (id)init;

@end

