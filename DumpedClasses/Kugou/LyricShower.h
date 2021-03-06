//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface LyricShower : NSObject
{
    NSMutableDictionary *lyricDict;
}

+ (id)lyricShower;
- (void).cxx_destruct;
- (void)resetLyriceAdjustTimeLen:(id)arg1;
- (_Bool)deleteAllLyricAdjust;
- (double)lyricOriginalTimeLen:(id)arg1;
- (double)lyricAdjustTimeLen:(id)arg1;
- (void)addLyricAdjustInfo:(id)arg1 adjustTime:(double)arg2;
- (void)notifyAdjustChange:(id)arg1;
- (_Bool)updateDBItemForLyricWithNoUpdate:(id)arg1;
- (id)getLyricID:(id)arg1;
- (_Bool)updateRequestTimeForLyric:(id)arg1;
- (_Bool)updateDBItemNameForLyricWithOldName:(id)arg1 withNewName:(id)arg2;
- (_Bool)updateDBItemForLyric:(id)arg1 adjustTimeLen:(double)arg2 lyricID:(unsigned int)arg3;
- (_Bool)updateDBItem:(id)arg1;
- (id)isDBItemExistAndLyricIDExist:(id)arg1;
- (id)p_OldLyricFileName:(id)arg1;
- (_Bool)isDBItemExist:(id)arg1;
- (_Bool)addItemToDBForLyric:(id)arg1 adjustTimeLen:(double)arg2 lyricID:(unsigned int)arg3;
- (_Bool)addItemToDB:(id)arg1;
- (void)loadLyricInfoFromDB;
- (void)dealloc;
- (id)init;

@end

