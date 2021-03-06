//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYDbBase.h"

@class NSDictionary, NSNumber, NSString;

@interface QY_Offline : QYDbBase
{
    _Bool _isFromB;
    _Bool _isCanDownloadPlayer;
    _Bool _isCartoonAccompany;
    _Bool _isDelete;
    _Bool _addQosSended;
    float _downloadCent;
    int _purchase;
    int _isDisplayed;
    int _isDisplayedInFolder;
    int _isDisplayedInTab;
    int _isDubiVideo;
    int _isOpenDubi;
    int _bossType;
    int _preImageColumn;
    int _preImageRow;
    int _preImageInterval;
    int _dataSourceType;
    long long _downloadStatus;
    NSString *_localFile;
    long long _fileSize;
    long long _downloadSize;
    NSString *_imagePath;
    NSString *_h_img;
    NSString *_downloadUrl;
    NSString *_tvID;
    NSString *_downloadType;
    NSString *_albumId;
    NSString *_album_name;
    NSString *_resType;
    NSString *_groupID;
    NSString *_movieLength;
    long long _allset;
    NSString *_tvOrder;
    NSString *_bTitle;
    NSString *_bAlbumTitle;
    NSString *_pid;
    NSString *_blk;
    NSString *_year;
    long long _videoType;
    NSString *_errorCode;
    NSString *_video_type;
    NSString *_tempLocalFile;
    NSString *_channelId;
    NSString *_video_ctype;
    NSString *_sourceId;
    NSString *_isNewDownload;
    NSString *_vrThreeD;
    NSString *_preImageUrl;
    NSString *_preImageLocalUrl;
    NSString *_plistId;
    NSString *_starList;
    NSString *_videoTitle;
    NSString *_offlineFilePath;
    NSString *_fileName;
    NSString *_realDownloadUrl;
    NSString *_category_id;
    NSString *_single_tv_image;
    NSString *_vid;
    NSString *_start_time;
    NSString *_end_time;
    NSString *_pc_id;
    NSString *_tvDlen;
    NSString *_des;
    NSString *_download_time;
    NSString *_fid;
    NSString *_ps;
    NSString *_resvid;
    NSString *_bitrate;
    NSString *_classID;
    NSString *_classIDName;
    NSString *_format;
    NSString *_p2pFileName;
    NSString *_videoRate;
    NSNumber *_isRapid;
    NSDictionary *_rapidInfo;
    NSString *_downFinishTime;
}

+ (id)getAllDeleteRecords;
+ (long long)writeToDatabaseWithArray:(id)arg1;
+ (long long)dellAllOfflineData;
+ (id)readFromDatabaseWithState:(int)arg1;
+ (id)readFromDatabase;
+ (id)get_offline_obj_by_albumid:(id)arg1 and_tvorder:(id)arg2;
+ (id)get_cartoon_album_group:(id)arg1;
+ (id)get_album_group:(id)arg1;
+ (id)get_cartoon_offline_obj_by_tvid:(id)arg1;
+ (id)get_offline_obj_by_tvid:(id)arg1;
+ (id)get_offline:(id)arg1;
+ (long long)deleteByTvids:(id)arg1;
+ (long long)deleteFromDatabaseByTvid:(id)arg1;
+ (id)tableName;
@property(nonatomic) _Bool addQosSended; // @synthesize addQosSended=_addQosSended;
@property(copy, nonatomic) NSString *downFinishTime; // @synthesize downFinishTime=_downFinishTime;
@property(nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(retain, nonatomic) NSDictionary *rapidInfo; // @synthesize rapidInfo=_rapidInfo;
@property(nonatomic) _Bool isCartoonAccompany; // @synthesize isCartoonAccompany=_isCartoonAccompany;
@property(retain, nonatomic) NSNumber *isRapid; // @synthesize isRapid=_isRapid;
@property(copy) NSString *videoRate; // @synthesize videoRate=_videoRate;
@property(copy, nonatomic) NSString *p2pFileName; // @synthesize p2pFileName=_p2pFileName;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *classIDName; // @synthesize classIDName=_classIDName;
@property(copy, nonatomic) NSString *classID; // @synthesize classID=_classID;
@property(copy, nonatomic) NSString *bitrate; // @synthesize bitrate=_bitrate;
@property(copy, nonatomic) NSString *resvid; // @synthesize resvid=_resvid;
@property(copy, nonatomic) NSString *ps; // @synthesize ps=_ps;
@property(copy, nonatomic) NSString *fid; // @synthesize fid=_fid;
@property(copy, nonatomic) NSString *download_time; // @synthesize download_time=_download_time;
@property(copy, nonatomic) NSString *des; // @synthesize des=_des;
@property(copy, nonatomic) NSString *tvDlen; // @synthesize tvDlen=_tvDlen;
@property(copy) NSString *pc_id; // @synthesize pc_id=_pc_id;
@property(copy) NSString *end_time; // @synthesize end_time=_end_time;
@property(copy) NSString *start_time; // @synthesize start_time=_start_time;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *single_tv_image; // @synthesize single_tv_image=_single_tv_image;
@property(copy, nonatomic) NSString *category_id; // @synthesize category_id=_category_id;
@property(nonatomic) int dataSourceType; // @synthesize dataSourceType=_dataSourceType;
@property(copy, nonatomic) NSString *realDownloadUrl; // @synthesize realDownloadUrl=_realDownloadUrl;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *offlineFilePath; // @synthesize offlineFilePath=_offlineFilePath;
@property(copy, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(copy, nonatomic) NSString *starList; // @synthesize starList=_starList;
@property(copy, nonatomic) NSString *plistId; // @synthesize plistId=_plistId;
@property(nonatomic) int preImageInterval; // @synthesize preImageInterval=_preImageInterval;
@property(nonatomic) int preImageRow; // @synthesize preImageRow=_preImageRow;
@property(nonatomic) int preImageColumn; // @synthesize preImageColumn=_preImageColumn;
@property(copy, nonatomic) NSString *preImageLocalUrl; // @synthesize preImageLocalUrl=_preImageLocalUrl;
@property(copy, nonatomic) NSString *preImageUrl; // @synthesize preImageUrl=_preImageUrl;
@property(nonatomic) int bossType; // @synthesize bossType=_bossType;
@property(nonatomic) int isOpenDubi; // @synthesize isOpenDubi=_isOpenDubi;
@property(nonatomic) int isDubiVideo; // @synthesize isDubiVideo=_isDubiVideo;
@property(copy, nonatomic) NSString *vrThreeD; // @synthesize vrThreeD=_vrThreeD;
@property(nonatomic) int isDisplayedInTab; // @synthesize isDisplayedInTab=_isDisplayedInTab;
@property(nonatomic) int isDisplayedInFolder; // @synthesize isDisplayedInFolder=_isDisplayedInFolder;
@property(nonatomic) int isDisplayed; // @synthesize isDisplayed=_isDisplayed;
@property(copy, nonatomic) NSString *isNewDownload; // @synthesize isNewDownload=_isNewDownload;
@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(copy, nonatomic) NSString *video_ctype; // @synthesize video_ctype=_video_ctype;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *tempLocalFile; // @synthesize tempLocalFile=_tempLocalFile;
@property(copy, nonatomic) NSString *video_type; // @synthesize video_type=_video_type;
@property(nonatomic) _Bool isCanDownloadPlayer; // @synthesize isCanDownloadPlayer=_isCanDownloadPlayer;
@property(copy, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(copy, nonatomic) NSString *year; // @synthesize year=_year;
@property(copy, nonatomic) NSString *blk; // @synthesize blk=_blk;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(copy, nonatomic) NSString *bAlbumTitle; // @synthesize bAlbumTitle=_bAlbumTitle;
@property(copy, nonatomic) NSString *bTitle; // @synthesize bTitle=_bTitle;
@property(nonatomic) _Bool isFromB; // @synthesize isFromB=_isFromB;
@property(copy, nonatomic) NSString *tvOrder; // @synthesize tvOrder=_tvOrder;
@property(nonatomic) long long allset; // @synthesize allset=_allset;
@property(copy, nonatomic) NSString *movieLength; // @synthesize movieLength=_movieLength;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) int purchase; // @synthesize purchase=_purchase;
@property(copy, nonatomic) NSString *resType; // @synthesize resType=_resType;
@property(copy, nonatomic) NSString *album_name; // @synthesize album_name=_album_name;
@property(copy, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
@property(copy, nonatomic) NSString *downloadType; // @synthesize downloadType=_downloadType;
@property(copy, nonatomic) NSString *tvID; // @synthesize tvID=_tvID;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(copy, nonatomic) NSString *h_img; // @synthesize h_img=_h_img;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(nonatomic) long long downloadSize; // @synthesize downloadSize=_downloadSize;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) float downloadCent; // @synthesize downloadCent=_downloadCent;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localFile; // @synthesize localFile=_localFile;
- (id)description;
- (int)upgradeStatus;
- (void)self_set_values:(id)arg1;
- (long long)updateDatabase;
- (_Bool)updateToDB:(id)arg1;
- (_Bool)writeToDB:(id)arg1;
- (long long)writeToDatabase;
@property(nonatomic) long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
- (void)dealloc;
- (id)init;

@end

