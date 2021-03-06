//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAppService-Protocol.h"
#import "FBDeviceRequestScannerDelegate-Protocol.h"
#import "FBInAppBasicBeeperContentViewDelegate-Protocol.h"

@class FBDeviceRequestScanner, FBUserSession, NSString;

@interface FBDeviceRequestsAppService : NSObject <FBDeviceRequestScannerDelegate, FBInAppBasicBeeperContentViewDelegate, FBAppService>
{
    FBDeviceRequestScanner *_deviceScanner;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)_tryDisplayBeeperWithView:(id)arg1 retryCount:(unsigned long long)arg2;
- (void)_showBeeperForDeviceRequestDictionary:(id)arg1;
- (void)_cleanUpScan;
- (void)_performScan;
- (void)didSelectContentView;
- (void)scanner:(id)arg1 didError:(id)arg2 eventName:(id)arg3;
- (void)scanner:(id)arg1 didRemoveUserCode:(id)arg2 moreComing:(_Bool)arg3;
- (void)scanner:(id)arg1 didFindUserCode:(id)arg2 deviceRequestDictionary:(id)arg3 moreComing:(_Bool)arg4;
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

