//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVHttpJsonBaseDAO.h"

@interface KTVHomeHttpDAO : KTVHttpJsonBaseDAO
{
}

- (void)asyncGetCompetitionTimeSucceed:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;
- (void)asyncGetJudgeResultWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetCompetitionResultWithPlayerId:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)AsyncGetKSongBannerSuccess:(CDUnknownBlockType)arg1 onFailure:(CDUnknownBlockType)arg2;
- (void)syncGetHomePageFriendNumWithPlayerID:(long long)arg1 fileArray:(id)arg2 succeed:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)asyncGetHomePageFriendNumWithPlayerID:(long long)arg1 fileArray:(id)arg2 succeed:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)asyncGetHomePageMyOpusCountWithPlayerID:(long long)arg1 succeed:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)asyncGetHomePageRecommendList:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)asyncReqHomePageGuessAccompanyListWithFileArray:(id)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetHomePageFriendAccompanyListWithPlayerID:(long long)arg1 succeed:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)asyncGetHomeConfigureInfo:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)AsyncGetNearbySingNum:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)AsyncGetHotRecommendWorksList:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;

@end

