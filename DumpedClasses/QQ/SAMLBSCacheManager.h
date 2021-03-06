//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LYStorage, NSTimer, SAMLocation;

@interface SAMLBSCacheManager : NSObject
{
    SAMLocation *_location;
    LYStorage *_storage;
    NSTimer *_locationTimer;
    NSTimer *_positionTimer;
}

+ (id)getInstance;
@property(retain, nonatomic) NSTimer *positionTimer; // @synthesize positionTimer=_positionTimer;
@property(retain, nonatomic) NSTimer *locationTimer; // @synthesize locationTimer=_locationTimer;
@property(retain, nonatomic) LYStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) SAMLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)getNewestLocationAndPosition:(int)arg1;
- (id)getNewestLocation:(int)arg1;
- (void)saveLocation;
- (void)delayHandleGetLocationSucc:(id)arg1;
- (void)handleGetLocationSucc:(id)arg1;
- (void)delayHandleLbsEndUpdateLocation:(id)arg1;
- (void)notifyLbsEndUpdateLocation:(id)arg1;
- (id)init;

@end

