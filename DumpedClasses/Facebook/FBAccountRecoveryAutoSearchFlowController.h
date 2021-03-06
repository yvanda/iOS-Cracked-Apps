//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAuthRecoveryControlling-Protocol.h"
#import "FBAuthRecoveryControllingDelegate-Protocol.h"

@class FBAccountRecoveryContactPointsFlowController, FBAccountRecoverySearchController, FBAccountRecoverySearchFlowController, NSString;
@protocol FBAccountRecoveryUIProviding, FBAuthRecoveryControllingDelegate, FBAuthUIPresenting, FBNetworkDispatch;

@interface FBAccountRecoveryAutoSearchFlowController : NSObject <FBAuthRecoveryControllingDelegate, FBAuthRecoveryControlling>
{
    NSString *_cuid;
    id <FBAccountRecoveryUIProviding> _uiProvider;
    id <FBAuthUIPresenting> _uiPresenter;
    id <FBNetworkDispatch> _requesterConfiguration;
    FBAccountRecoveryContactPointsFlowController *_contactPointsFlowController;
    FBAccountRecoverySearchFlowController *_searchPointsFlowController;
    FBAccountRecoverySearchController *_searchController;
    id <FBAuthRecoveryControllingDelegate> _recoveryDelegate;
}

@property(nonatomic) __weak id <FBAuthRecoveryControllingDelegate> recoveryDelegate; // @synthesize recoveryDelegate=_recoveryDelegate;
- (void).cxx_destruct;
- (void)recoveryCompleted:(id)arg1 withUserID:(id)arg2 password:(id)arg3;
- (void)recover;
- (id)initWithCuid:(id)arg1 uiProvider:(id)arg2 uiPresenter:(id)arg3 requesterConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

