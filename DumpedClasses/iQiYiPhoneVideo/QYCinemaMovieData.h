//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, QYMMovieBuyTicketButtonData, QYMMovieDetailShareInfoData, QYMovieButtonTagItem;

@interface QYCinemaMovieData : NSObject
{
    _Bool _isScored;
    NSString *_desc;
    NSString *_picUrl;
    NSString *_count;
    NSString *_score;
    NSString *_date;
    NSString *_movieID;
    NSString *_duration;
    NSString *_durationStr;
    NSString *_qitanId;
    NSString *_name;
    NSString *_areas;
    NSArray *_tags;
    NSArray *_actors;
    NSArray *_directors;
    NSArray *_sessions;
    NSString *_selected;
    NSString *_currentCityID;
    NSString *_type;
    NSString *_wantToSee;
    NSString *_isPresell;
    NSString *_isNew;
    NSString *_isReleased;
    NSString *_detailPic;
    NSString *_isVip;
    NSString *_qipuId;
    QYMMovieDetailShareInfoData *_shareData;
    NSArray *_movieInfoArray;
    NSArray *_movieLongCommentArray;
    QYMovieButtonTagItem *_buttonTag;
    NSString *_eName;
    NSString *_targetGroup;
    NSArray *_movieTag;
    NSString *_yrank;
    NSString *_fbox;
    NSString *_ybox;
    NSString *_tbox;
    NSString *_isAccbox;
    NSString *_releaseDay;
    NSString *_rankTrend;
    NSString *_isShowUserReport;
    NSString *_isShowBoxList;
    NSString *_boxListUrl;
    NSString *_userReportUrl;
    NSString *_rankText;
    NSString *_hasMoreRank;
    NSArray *_shortComment;
    NSString *_scoreNum;
    NSString *_scoreDistributionUrl;
    QYMMovieBuyTicketButtonData *_buyTicketButtonData;
}

@property(retain, nonatomic) QYMMovieBuyTicketButtonData *buyTicketButtonData; // @synthesize buyTicketButtonData=_buyTicketButtonData;
@property(nonatomic) _Bool isScored; // @synthesize isScored=_isScored;
@property(copy, nonatomic) NSString *scoreDistributionUrl; // @synthesize scoreDistributionUrl=_scoreDistributionUrl;
@property(copy, nonatomic) NSString *scoreNum; // @synthesize scoreNum=_scoreNum;
@property(copy, nonatomic) NSArray *shortComment; // @synthesize shortComment=_shortComment;
@property(copy, nonatomic) NSString *hasMoreRank; // @synthesize hasMoreRank=_hasMoreRank;
@property(copy, nonatomic) NSString *rankText; // @synthesize rankText=_rankText;
@property(copy, nonatomic) NSString *userReportUrl; // @synthesize userReportUrl=_userReportUrl;
@property(copy, nonatomic) NSString *boxListUrl; // @synthesize boxListUrl=_boxListUrl;
@property(copy, nonatomic) NSString *isShowBoxList; // @synthesize isShowBoxList=_isShowBoxList;
@property(copy, nonatomic) NSString *isShowUserReport; // @synthesize isShowUserReport=_isShowUserReport;
@property(copy, nonatomic) NSString *rankTrend; // @synthesize rankTrend=_rankTrend;
@property(copy, nonatomic) NSString *releaseDay; // @synthesize releaseDay=_releaseDay;
@property(copy, nonatomic) NSString *isAccbox; // @synthesize isAccbox=_isAccbox;
@property(copy, nonatomic) NSString *tbox; // @synthesize tbox=_tbox;
@property(copy, nonatomic) NSString *ybox; // @synthesize ybox=_ybox;
@property(copy, nonatomic) NSString *fbox; // @synthesize fbox=_fbox;
@property(copy, nonatomic) NSString *yrank; // @synthesize yrank=_yrank;
@property(retain, nonatomic) NSArray *movieTag; // @synthesize movieTag=_movieTag;
@property(copy, nonatomic) NSString *targetGroup; // @synthesize targetGroup=_targetGroup;
@property(copy, nonatomic) NSString *eName; // @synthesize eName=_eName;
@property(retain, nonatomic) QYMovieButtonTagItem *buttonTag; // @synthesize buttonTag=_buttonTag;
@property(retain, nonatomic) NSArray *movieLongCommentArray; // @synthesize movieLongCommentArray=_movieLongCommentArray;
@property(retain, nonatomic) NSArray *movieInfoArray; // @synthesize movieInfoArray=_movieInfoArray;
@property(retain, nonatomic) QYMMovieDetailShareInfoData *shareData; // @synthesize shareData=_shareData;
@property(copy, nonatomic) NSString *qipuId; // @synthesize qipuId=_qipuId;
@property(copy, nonatomic) NSString *isVip; // @synthesize isVip=_isVip;
@property(copy, nonatomic) NSString *detailPic; // @synthesize detailPic=_detailPic;
@property(copy, nonatomic) NSString *isReleased; // @synthesize isReleased=_isReleased;
@property(copy, nonatomic) NSString *isNew; // @synthesize isNew=_isNew;
@property(copy, nonatomic) NSString *isPresell; // @synthesize isPresell=_isPresell;
@property(copy, nonatomic) NSString *wantToSee; // @synthesize wantToSee=_wantToSee;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *currentCityID; // @synthesize currentCityID=_currentCityID;
@property(copy, nonatomic) NSString *selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSArray *sessions; // @synthesize sessions=_sessions;
@property(retain, nonatomic) NSArray *directors; // @synthesize directors=_directors;
@property(retain, nonatomic) NSArray *actors; // @synthesize actors=_actors;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *areas; // @synthesize areas=_areas;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *qitanId; // @synthesize qitanId=_qitanId;
@property(copy, nonatomic) NSString *durationStr; // @synthesize durationStr=_durationStr;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *movieID; // @synthesize movieID=_movieID;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;

@end

