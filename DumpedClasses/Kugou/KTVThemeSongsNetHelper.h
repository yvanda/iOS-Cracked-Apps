//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVSongInfoListNetHelper.h"

@class KTVHotHttpDAO;

@interface KTVThemeSongsNetHelper : KTVSongInfoListNetHelper
{
    KTVHotHttpDAO *themeHttp;
    _Bool hasMoreData;
    _Bool isFreshData;
    int pageNum;
    long long pageSize;
    CDUnknownBlockType _netWorkBlock;
}

@property(copy, nonatomic) CDUnknownBlockType netWorkBlock; // @synthesize netWorkBlock=_netWorkBlock;
- (void).cxx_destruct;
- (void)getTagBannerInfo:(long long)arg1 Commplete:(CDUnknownBlockType)arg2;
- (void)getThemeInfo:(long long)arg1 Commplete:(CDUnknownBlockType)arg2;
- (void)getThemeDataFailure:(id)arg1;
- (void)getThemeDataSuccess:(id)arg1;
- (void)getSongInfoListFromNetWorkWithTagId:(long long)arg1 pageSize:(long long)arg2 Commplete:(CDUnknownBlockType)arg3;
- (void)updateSongInfoListFromNetWorkWithTagId:(long long)arg1 pageSize:(long long)arg2 Commplete:(CDUnknownBlockType)arg3;
- (void)getSongInfoListFromNetWorkWith:(long long)arg1 pageSize:(long long)arg2 Commplete:(CDUnknownBlockType)arg3;
- (void)updateSongInfoListFromNetWorkWith:(long long)arg1 pageSize:(long long)arg2 Commplete:(CDUnknownBlockType)arg3;

@end

