//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBMemPageInfo, FBUserSession, NSMutableArray, NSMutableDictionary;
@protocol FBOutgoingFriendRequestDataSourceDelegate, FBServiceTransactionMutating;

@interface FBOutgoingFriendRequestDataSource : NSObject
{
    FBUserSession *_session;
    id <FBServiceTransactionMutating> _token;
    FBMemPageInfo *_pageInfo;
    NSMutableArray *_loadedRequests;
    NSMutableDictionary *_consistencyHandler;
    id <FBOutgoingFriendRequestDataSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <FBOutgoingFriendRequestDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_personChanged:(id)arg1;
- (void)_removeConsistencyObserverForNewPerson:(id)arg1;
- (void)_addConsistencyObserverForNewPerson:(id)arg1;
- (void)_removeAllOutgoingRequests;
- (void)_addNewOutgoingRequest:(id)arg1;
- (void)_loadFinishedWithResponse:(id)arg1 andError:(id)arg2;
@property(readonly, nonatomic) _Bool hasMoreOutgoingRequests;
- (void)loadMoreWithPageInfo:(id)arg1;
- (void)reload;
- (void)loadTail;
- (id)pageInfo;
- (id)loadedRequests;
- (id)initWithSession:(id)arg1;

@end

