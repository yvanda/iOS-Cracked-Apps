//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SkinThemePersistence : NSObject
{
}

+ (id)shareInstance;
- (_Bool)deleteAllSkinThemes;
- (id)allSkinThemesInOldDB;
- (id)allSkinThemes;
- (_Bool)deleteSkinTheme:(id)arg1;
- (_Bool)addSkinTheme:(id)arg1;
- (int)skinThemeCount;
- (_Bool)createDBList;
- (_Bool)isDBListExist;
- (id)init;

@end
