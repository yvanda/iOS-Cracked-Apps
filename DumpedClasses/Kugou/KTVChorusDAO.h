//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVHttpJsonBaseDAO.h"

@interface KTVChorusDAO : KTVHttpJsonBaseDAO
{
}

- (void)asyncGetChorusWithStarListWithPageSize:(int)arg1 page:(int)arg2 succeedBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
- (void)asyncGetChorusHotRecommendListWithPageSize:(int)arg1 page:(int)arg2 succeedBlock:(CDUnknownBlockType)arg3 failedBlock:(CDUnknownBlockType)arg4;
- (void)asyncGetChorusFriendRecommendListWithPlayerID:(int)arg1 succeedBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (void)asyncWithParame:(id)arg1 urlKey:(id)arg2 succeed:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)requestWtihConfig:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;

@end

