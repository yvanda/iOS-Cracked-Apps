//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WPDataManager : NSObject
{
}

+ (id)shardInstance;
- (void)requestCinemaListData:(id)arg1 withMovieId:(id)arg2 cache:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 notice:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)requestCinemaHomeDataWithLatitude:(double)arg1 longitude:(double)arg2 pageNum:(long long)arg3 pageSize:(long long)arg4 brand:(id)arg5 area:(id)arg6 special:(id)arg7 serv:(id)arg8 cinemaBlock:(CDUnknownBlockType)arg9;

@end

