//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FBGraphQLSubscriptionHandle;

@interface FBVideoHomeCreatorChannelSubscription : NSObject
{
    id <FBGraphQLSubscriptionHandle> _handle;
    unsigned long long _creatorStatus;
}

@property(nonatomic) unsigned long long creatorStatus; // @synthesize creatorStatus=_creatorStatus;
@property(retain, nonatomic) id <FBGraphQLSubscriptionHandle> handle; // @synthesize handle=_handle;
- (void).cxx_destruct;

@end

