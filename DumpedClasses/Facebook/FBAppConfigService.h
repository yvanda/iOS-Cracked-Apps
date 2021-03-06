//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAppService-Protocol.h"

@class FBNetworkerRequest, FBUserSession, NSDictionary, NSString, NSURL;

@interface FBAppConfigService : NSObject <FBAppService>
{
    FBUserSession *_session;
    _Bool _disableDNSCache;
    NSString *_buildBranch;
    NSString *_minVersion;
    NSString *_currentVersion;
    NSURL *_upgradeUrl;
    NSDictionary *_exceptionConfiguration;
    FBNetworkerRequest *_syncRequest;
}

@property(retain, nonatomic) FBNetworkerRequest *syncRequest; // @synthesize syncRequest=_syncRequest;
@property(nonatomic) _Bool disableDNSCache; // @synthesize disableDNSCache=_disableDNSCache;
@property(retain, nonatomic) NSDictionary *exceptionConfiguration; // @synthesize exceptionConfiguration=_exceptionConfiguration;
@property(copy, nonatomic) NSURL *upgradeUrl; // @synthesize upgradeUrl=_upgradeUrl;
@property(copy, nonatomic) NSString *currentVersion; // @synthesize currentVersion=_currentVersion;
@property(copy, nonatomic) NSString *minVersion; // @synthesize minVersion=_minVersion;
@property(readonly, copy, nonatomic) NSString *buildBranch; // @synthesize buildBranch=_buildBranch;
- (void).cxx_destruct;
- (void)_parse:(id)arg1 withBundleName:(id)arg2;
- (void)_applicationDidFinishEnteringForegroundAndIsNowIdle:(id)arg1;
- (void)_stopSync;
- (void)_sync;
- (id)_ID;
- (void)initiateSync:(id)arg1;
- (void)stopAppService;
- (void)startAppService;
- (void)dealloc;
- (id)initWithBuildBranch:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

