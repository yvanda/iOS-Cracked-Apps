//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface APForegroundManager : NSObject
{
    NSArray *_tasksWillEnterForeground;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)delayedWillEnterForeground;
- (void)willEnterForeground;
- (_Bool)isIgnoredTask:(id)arg1;
- (void)observeWillEnterForeground:(id)arg1;
- (void)start;
- (id)init;

@end
