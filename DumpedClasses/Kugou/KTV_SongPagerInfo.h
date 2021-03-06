//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class NSMutableArray<KTV_SongInfo>;

@interface KTV_SongPagerInfo : KTVObjectModel
{
    int _songPageNo;
    int _songPage;
    int _allCount;
    NSMutableArray<KTV_SongInfo> *_arrSongs;
}

+ (id)keyMapper;
@property(nonatomic) int allCount; // @synthesize allCount=_allCount;
@property(nonatomic) int songPage; // @synthesize songPage=_songPage;
@property(nonatomic) int songPageNo; // @synthesize songPageNo=_songPageNo;
@property(retain) NSMutableArray<KTV_SongInfo> *arrSongs; // @synthesize arrSongs=_arrSongs;
- (void).cxx_destruct;
- (id)getSongInfoArr;
- (void)addSongInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

