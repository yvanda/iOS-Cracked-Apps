//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseHttpDao.h"

@interface SongRelatedPlayInfoDao : BaseHttpDao
{
}

- (id)clientTimeString;
- (id)obtainCollectionInfoWithSongHash:(id)arg1 page:(long long)arg2 error:(id *)arg3;
- (id)obtainAlbumInfoWithSongHash:(id)arg1 error:(id *)arg2;
- (id)obtainAlbumInfoWithSongHashArray:(id)arg1 error:(id *)arg2;
- (id)obtainRecommendSongRelatedCollectionInfo:(long long)arg1 hash:(id)arg2 error:(id *)arg3;

@end
