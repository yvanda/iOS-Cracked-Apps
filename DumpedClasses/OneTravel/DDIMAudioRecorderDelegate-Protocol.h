//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DDIMAudioRecorderManager, NSError;

@protocol DDIMAudioRecorderDelegate <NSObject>

@optional
- (void)audioRecorderDidCancel;
- (void)audioRecorderDidErrorOccur:(NSError *)arg1;
- (void)audioRecorderDidFinishRecording:(DDIMAudioRecorderManager *)arg1;
- (void)audioRecorderDidBeginRecording;
- (void)audioRecorderUpdateMeters:(double)arg1;
@end

