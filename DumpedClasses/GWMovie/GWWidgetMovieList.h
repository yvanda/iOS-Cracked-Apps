//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSArray, NSDate;

@interface GWWidgetMovieList : GWObject
{
    NSArray *_hotMovieList;
    NSArray *_hotfutureMovieList;
    NSArray *_futureMovieList;
    NSDate *_updateTime;
}

@property(retain, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property(retain, nonatomic) NSArray *futureMovieList; // @synthesize futureMovieList=_futureMovieList;
@property(retain, nonatomic) NSArray *hotfutureMovieList; // @synthesize hotfutureMovieList=_hotfutureMovieList;
@property(retain, nonatomic) NSArray *hotMovieList; // @synthesize hotMovieList=_hotMovieList;
- (void).cxx_destruct;
- (_Bool)hasData;
- (void)dealloc;

@end

