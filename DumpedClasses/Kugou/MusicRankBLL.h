//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MusicRankBLL : NSObject
{
}

- (void)getMusicRankVisitorDataByUserId:(id)arg1 Type:(int)arg2 Completion:(CDUnknownBlockType)arg3 Error:(CDUnknownBlockType)arg4;
- (void)postMusicRankVisitByUserId:(id)arg1 Completion:(CDUnknownBlockType)arg2 Error:(CDUnknownBlockType)arg3;
- (void)requsetGetMusicRankVisibleByUserId:(id)arg1 Completion:(CDUnknownBlockType)arg2 Error:(CDUnknownBlockType)arg3;
- (void)requestSetMusicRankVisible:(_Bool)arg1 ByUserId:(id)arg2 Completion:(CDUnknownBlockType)arg3 Error:(CDUnknownBlockType)arg4;
- (void)getUserWeekListenMusicRankListByUserId:(id)arg1 AndTargetUserId:(id)arg2 Completion:(CDUnknownBlockType)arg3 Error:(CDUnknownBlockType)arg4;
- (void)getUserWeekListenMusicCountByUserId:(id)arg1 Completion:(CDUnknownBlockType)arg2 Error:(CDUnknownBlockType)arg3;

@end

