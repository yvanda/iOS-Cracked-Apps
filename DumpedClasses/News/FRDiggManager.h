//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableOrderedSet;

@interface FRDiggManager : NSObject
{
    _Bool _loading;
    long long _anonymousCount;
    long long _threadID;
    NSMutableOrderedSet *_userSet;
}

+ (void)diggWithThreadID:(long long)arg1 finishBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSMutableOrderedSet *userSet; // @synthesize userSet=_userSet;
@property(nonatomic) long long threadID; // @synthesize threadID=_threadID;
@property(nonatomic) long long anonymousCount; // @synthesize anonymousCount=_anonymousCount;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
- (void).cxx_destruct;
- (void)insertDiggUsers:(id)arg1 atFirst:(_Bool)arg2;
- (void)startGetDiggedUsersWithOffset:(int)arg1 count:(int)arg2 finishBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSArray *diggUsers;
- (id)initWithThreadID:(long long)arg1;
- (void)dealloc;

@end
