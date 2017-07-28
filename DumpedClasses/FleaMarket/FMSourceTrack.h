//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableSet;

@interface FMSourceTrack : NSObject
{
    NSMutableArray *_sourceStack;
    NSLock *_lock;
    NSMutableSet *_vcConfig;
}

+ (void)unTrack:(id)arg1;
+ (void)track:(id)arg1 viewController:(id)arg2;
+ (id)currentSource;
+ (id)instance;
- (void).cxx_destruct;
- (id)currentSource;
- (void)popSource:(id)arg1;
- (void)pushSource:(id)arg1;
- (_Bool)needToTrack:(id)arg1;
- (void)loadResource;
- (id)init;

@end
