//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRspGeneralModel.h"

@class NSString, TBStoryVideoDesModel;

@interface TBRspPublishStoryVideoModel : TBRspGeneralModel
{
    unsigned int _date;
    TBStoryVideoDesModel *_videoDesModel;
    unsigned long long _createTime;
    NSString *_feedID;
    NSString *_storyId;
}

@property(copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(nonatomic) unsigned int date; // @synthesize date=_date;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
@property(nonatomic) unsigned long long createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) TBStoryVideoDesModel *videoDesModel; // @synthesize videoDesModel=_videoDesModel;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;
- (void)dealloc;

@end
