//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAppService-Protocol.h"
#import "FBBackstagePublishingHandlerListener-Protocol.h"
#import "FBShareSheetCacheDelegate-Protocol.h"

@class FBShareSheetCache, FBUserSession, NSString;
@protocol OS_dispatch_queue;

@interface FBShareSheetDataUpdater : NSObject <FBBackstagePublishingHandlerListener, FBShareSheetCacheDelegate, FBAppService>
{
    FBUserSession *_session;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    FBShareSheetCache *_shareSheetCache;
}

- (void).cxx_destruct;
- (void)shareSheetCache:(id)arg1 didFetchFriends:(id)arg2 groups:(id)arg3;
- (void)publishingHandler:(id)arg1 didFinishTask:(id)arg2 error:(id)arg3;
- (void)publishingHandler:(id)arg1 didChangeCancelEligibilityForTask:(id)arg2;
- (void)publishingHandler:(id)arg1 didTimeoutForTask:(id)arg2;
- (void)publishingHandler:(id)arg1 didBeginProcessingVideosForTask:(id)arg2;
- (void)publishingHandler:(id)arg1 didUpdateProgress:(double)arg2 forTask:(id)arg3;
- (void)publishingHandlerDidFinishAllPublications:(id)arg1;
- (void)publishingHandler:(id)arg1 didEnqueueTask:(id)arg2;
- (void)publishingHandler:(id)arg1 willPublishTask:(id)arg2;
- (void)stopAppService;
- (void)startAppService;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

