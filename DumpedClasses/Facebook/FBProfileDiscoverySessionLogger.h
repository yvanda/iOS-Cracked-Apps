//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBProfileDiscoverySessionLogger : NSObject
{
    NSString *_discoverySessionID;
    NSString *_discoverySessionReferrerID;
    NSString *_discoverySessionReferrerType;
}

@property(readonly, copy, nonatomic) NSString *discoverySessionReferrerType; // @synthesize discoverySessionReferrerType=_discoverySessionReferrerType;
@property(readonly, copy, nonatomic) NSString *discoverySessionReferrerID; // @synthesize discoverySessionReferrerID=_discoverySessionReferrerID;
@property(readonly, copy, nonatomic) NSString *discoverySessionID; // @synthesize discoverySessionID=_discoverySessionID;
- (void).cxx_destruct;
- (void)_logDiscoverySessionImpression;
- (id)discoverySessionExtras;
- (id)initWithReferrerType:(id)arg1 referrerID:(id)arg2 discoverySessionID:(id)arg3;

@end

