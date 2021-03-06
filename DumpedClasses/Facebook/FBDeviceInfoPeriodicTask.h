//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBPeriodicTask-Protocol.h"

@class NSString;

@interface FBDeviceInfoPeriodicTask : NSObject <FBPeriodicTask>
{
    _Bool _loggingEnabled;
    _Bool _reportCacheAndDocumentsSize;
    NSString *_identifier;
    double _interval;
}

@property(readonly, nonatomic) double interval; // @synthesize interval=_interval;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithLoggingEnabled:(_Bool)arg1 reportCacheAndDocumentsSize:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

