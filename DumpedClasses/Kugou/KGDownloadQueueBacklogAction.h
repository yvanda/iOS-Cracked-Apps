//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserActionRecord.h"

@class NSString;

@interface KGDownloadQueueBacklogAction : UserActionRecord
{
    int _userActionID;
    NSString *functionName;
    long long _backlogCount;
    long long _PaySongCount;
}

@property(nonatomic) long long PaySongCount; // @synthesize PaySongCount=_PaySongCount;
@property(nonatomic) long long backlogCount; // @synthesize backlogCount=_backlogCount;
@property(nonatomic) int userActionID; // @synthesize userActionID=_userActionID;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName;
- (void)coding;
- (void)dealloc;

@end

