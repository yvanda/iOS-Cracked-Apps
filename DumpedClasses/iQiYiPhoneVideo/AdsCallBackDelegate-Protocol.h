//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AdsCallBackDelegate <NSObject>
- (void)OnAdReadyWithAdId:(unsigned int)arg1;
- (void)OnSlotReadyWithJson:(NSString *)arg1;
- (void)OnSlotFailedWithType:(int)arg1 startTime:(long long)arg2;
@end

