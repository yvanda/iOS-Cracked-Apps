//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSTimer;

@interface TADQLPingBatchReporter : NSObject
{
    _Bool _isWifi;
    NSMutableArray *_pingMsgs;
    NSTimer *_impressionPingTimer;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *impressionPingTimer; // @synthesize impressionPingTimer=_impressionPingTimer;
@property(nonatomic) _Bool isWifi; // @synthesize isWifi=_isWifi;
@property(retain, nonatomic) NSMutableArray *pingMsgs; // @synthesize pingMsgs=_pingMsgs;
- (void).cxx_destruct;
- (void)appWillTerminateNotification:(id)arg1;
- (void)appDidEnterBackgroundNotification:(id)arg1;
- (id)p_joinedParamsDictionaryFromItem:(id)arg1;
- (id)generalSubPingListWithList:(id)arg1;
- (void)p_sendPingMsgs:(id)arg1 status:(int)arg2;
- (void)sendPingMsgs:(int)arg1;
- (void)reportImpression;
- (void)immediatelyPingMsg:(id)arg1;
- (void)addPingMsg:(id)arg1;
- (void)dealloc;
- (id)init;

@end

