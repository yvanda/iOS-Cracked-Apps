//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMOBFPlugin.h"

@class NSMutableSet, NSString;

@interface SSPYiXinProxy : NSObject <IMOBFPlugin>
{
    NSMutableSet *_authCallbackSet;
    NSMutableSet *_shareCallbackSet;
}

@property(retain, nonatomic) NSMutableSet *shareCallbackSet; // @synthesize shareCallbackSet=_shareCallbackSet;
@property(retain, nonatomic) NSMutableSet *authCallbackSet; // @synthesize authCallbackSet=_authCallbackSet;
- (void).cxx_destruct;
- (void)onReceiveResponse:(id)arg1;
- (void)onReceiveRequest:(id)arg1;
- (id)checkThumbImageSize:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
- (_Bool)isSupportApi;
- (_Bool)isClientInstalled;
- (void)setupAppKey:(id)arg1;
- (_Bool)canShare:(id)arg1 callback:(id)arg2;
- (void)registerShareMethod;
- (void)registerHandlerShareCallbackMethod;
- (void)registerHandleSSOCallbackMethod;
- (void)registerAuth;
- (void)registerSetupApp;
- (_Bool)registerApp:(id)arg1;
- (void)unload;
- (void)load:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
