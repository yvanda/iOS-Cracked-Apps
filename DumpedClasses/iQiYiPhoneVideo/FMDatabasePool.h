//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface FMDatabasePool : NSObject
{
    NSString *_path;
    struct dispatch_queue_s *_lockQueue;
    NSMutableArray *_databaseInPool;
    NSMutableArray *_databaseOutPool;
    id _delegate;
    unsigned long long _maximumNumberOfDatabasesToCreate;
    int _openFlags;
}

+ (id)databasePoolWithPath:(id)arg1 flags:(int)arg2;
+ (id)databasePoolWithPath:(id)arg1;
@property(readonly) int openFlags; // @synthesize openFlags=_openFlags;
@property unsigned long long maximumNumberOfDatabasesToCreate; // @synthesize maximumNumberOfDatabasesToCreate=_maximumNumberOfDatabasesToCreate;
@property id delegate; // @synthesize delegate=_delegate;
@property(retain) NSString *path; // @synthesize path=_path;
- (id)inSavePoint:(CDUnknownBlockType)arg1;
- (void)inTransaction:(CDUnknownBlockType)arg1;
- (void)inDeferredTransaction:(CDUnknownBlockType)arg1;
- (void)beginTransaction:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)inDatabase:(CDUnknownBlockType)arg1;
- (void)releaseAllDatabases;
- (unsigned long long)countOfOpenDatabases;
- (unsigned long long)countOfCheckedOutDatabases;
- (unsigned long long)countOfCheckedInDatabases;
- (id)db;
- (void)pushDatabaseBackInPool:(id)arg1;
- (void)executeLocked:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 flags:(int)arg2;

@end

