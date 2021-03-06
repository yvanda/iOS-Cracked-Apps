//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPJsonData.h"

@class NSNumber, NSString, QYPPStarFeedSizeData;
@protocol Optional;

@interface QYPPStarFeedVideoData : QYPPJsonData
{
    NSString<Optional> *_tvId;
    NSString<Optional> *_displayName;
    NSString<Optional> *_tvTitle;
    NSString<Optional> *_title;
    NSString<Optional> *_channelId;
    NSString<Optional> *_thumbnail;
    NSString<Optional> *_thumbnailUrl;
    NSString<Optional> *_pageUrl;
    NSString<Optional> *_duration;
    NSString<Optional> *_commentsCount;
    NSString<Optional> *_playCount;
    NSNumber<Optional> *_vip;
    NSNumber<Optional> *_p1080;
    NSString<Optional> *_albumId;
    NSString<Optional> *_collectionId;
    NSString<Optional> *_snsScore;
    NSString<Optional> *_totalEpisodes;
    NSString<Optional> *_availableEpisodes;
    NSString<Optional> *_stage;
    NSString<Optional> *_stageDate;
    NSString<Optional> *_playType;
    NSString<Optional> *_uploaderName;
    NSString<Optional> *_uploadTime;
    NSString<Optional> *_itemRecFlag;
    NSString<Optional> *_rightUp;
    NSString<Optional> *_rightDown;
    NSString<Optional> *_leftDown;
    NSString<Optional> *_leftUp;
    NSNumber<Optional> *_payOnDemand;
    NSNumber<Optional> *_payByCoupon;
    NSNumber<Optional> *_live;
    NSNumber<Optional> *_special;
    NSNumber<Optional> *_unicast;
    NSNumber<Optional> *_qiyiProduced;
    NSString<Optional> *_tvOrder;
    NSString<Optional> *_order;
    NSString<Optional> *_date;
    NSString<Optional> *_time;
    NSString<Optional> *_isMemberOnly;
    NSString<Optional> *_maxResolution;
    NSString<Optional> *_isQiyiProduced;
    NSString<Optional> *_vedioPlayUrl;
    NSString<Optional> *_screenSize;
    NSString<Optional> *_videoWallId;
    NSString<Optional> *_videoWallType;
    NSString<Optional> *_publishTime;
    NSString<Optional> *_gifCover;
    QYPPStarFeedSizeData<Optional> *_dataSize;
}

@property(retain, nonatomic) QYPPStarFeedSizeData<Optional> *dataSize; // @synthesize dataSize=_dataSize;
@property(retain, nonatomic) NSString<Optional> *gifCover; // @synthesize gifCover=_gifCover;
@property(retain, nonatomic) NSString<Optional> *publishTime; // @synthesize publishTime=_publishTime;
@property(retain, nonatomic) NSString<Optional> *videoWallType; // @synthesize videoWallType=_videoWallType;
@property(retain, nonatomic) NSString<Optional> *videoWallId; // @synthesize videoWallId=_videoWallId;
@property(retain, nonatomic) NSString<Optional> *screenSize; // @synthesize screenSize=_screenSize;
@property(retain, nonatomic) NSString<Optional> *vedioPlayUrl; // @synthesize vedioPlayUrl=_vedioPlayUrl;
@property(retain, nonatomic) NSString<Optional> *isQiyiProduced; // @synthesize isQiyiProduced=_isQiyiProduced;
@property(retain, nonatomic) NSString<Optional> *maxResolution; // @synthesize maxResolution=_maxResolution;
@property(retain, nonatomic) NSString<Optional> *isMemberOnly; // @synthesize isMemberOnly=_isMemberOnly;
@property(retain, nonatomic) NSString<Optional> *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString<Optional> *date; // @synthesize date=_date;
@property(retain, nonatomic) NSString<Optional> *order; // @synthesize order=_order;
@property(retain, nonatomic) NSString<Optional> *tvOrder; // @synthesize tvOrder=_tvOrder;
@property(copy, nonatomic) NSNumber<Optional> *qiyiProduced; // @synthesize qiyiProduced=_qiyiProduced;
@property(copy, nonatomic) NSNumber<Optional> *unicast; // @synthesize unicast=_unicast;
@property(copy, nonatomic) NSNumber<Optional> *special; // @synthesize special=_special;
@property(copy, nonatomic) NSNumber<Optional> *live; // @synthesize live=_live;
@property(copy, nonatomic) NSNumber<Optional> *payByCoupon; // @synthesize payByCoupon=_payByCoupon;
@property(copy, nonatomic) NSNumber<Optional> *payOnDemand; // @synthesize payOnDemand=_payOnDemand;
@property(retain, nonatomic) NSString<Optional> *leftUp; // @synthesize leftUp=_leftUp;
@property(retain, nonatomic) NSString<Optional> *leftDown; // @synthesize leftDown=_leftDown;
@property(retain, nonatomic) NSString<Optional> *rightDown; // @synthesize rightDown=_rightDown;
@property(retain, nonatomic) NSString<Optional> *rightUp; // @synthesize rightUp=_rightUp;
@property(retain, nonatomic) NSString<Optional> *itemRecFlag; // @synthesize itemRecFlag=_itemRecFlag;
@property(retain, nonatomic) NSString<Optional> *uploadTime; // @synthesize uploadTime=_uploadTime;
@property(retain, nonatomic) NSString<Optional> *uploaderName; // @synthesize uploaderName=_uploaderName;
@property(retain, nonatomic) NSString<Optional> *playType; // @synthesize playType=_playType;
@property(retain, nonatomic) NSString<Optional> *stageDate; // @synthesize stageDate=_stageDate;
@property(retain, nonatomic) NSString<Optional> *stage; // @synthesize stage=_stage;
@property(retain, nonatomic) NSString<Optional> *availableEpisodes; // @synthesize availableEpisodes=_availableEpisodes;
@property(retain, nonatomic) NSString<Optional> *totalEpisodes; // @synthesize totalEpisodes=_totalEpisodes;
@property(retain, nonatomic) NSString<Optional> *snsScore; // @synthesize snsScore=_snsScore;
@property(retain, nonatomic) NSString<Optional> *collectionId; // @synthesize collectionId=_collectionId;
@property(retain, nonatomic) NSString<Optional> *albumId; // @synthesize albumId=_albumId;
@property(copy, nonatomic) NSNumber<Optional> *p1080; // @synthesize p1080=_p1080;
@property(copy, nonatomic) NSNumber<Optional> *vip; // @synthesize vip=_vip;
@property(retain, nonatomic) NSString<Optional> *playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSString<Optional> *commentsCount; // @synthesize commentsCount=_commentsCount;
@property(retain, nonatomic) NSString<Optional> *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString<Optional> *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString<Optional> *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(retain, nonatomic) NSString<Optional> *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSString<Optional> *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString<Optional> *tvTitle; // @synthesize tvTitle=_tvTitle;
@property(retain, nonatomic) NSString<Optional> *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString<Optional> *tvId; // @synthesize tvId=_tvId;
- (void).cxx_destruct;

@end

