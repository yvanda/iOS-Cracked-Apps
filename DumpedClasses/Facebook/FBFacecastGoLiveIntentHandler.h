//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentHandler-Protocol.h"

@class FBIntent, FBUserSession, NSString;
@protocol FBNavigationCoordinator;

@interface FBFacecastGoLiveIntentHandler : NSObject <FBIntentHandler>
{
    id <FBNavigationCoordinator> _navigationCoordinator;
    FBUserSession *_session;
    FBIntent *_intent;
    NSString *_existingBroadcastID;
    NSObject *_existingScenePath;
    NSString *_pageID;
    NSString *_sourceType;
}

- (void).cxx_destruct;
- (void)_presentBroadcastViewController;
- (void)handleIntent:(id)arg1;
- (id)initWithNavigationCoordinator:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

