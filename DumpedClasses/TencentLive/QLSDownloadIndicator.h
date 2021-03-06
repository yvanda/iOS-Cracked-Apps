//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, QLSDownloadBasicInfo, QLSDownloadSpeedRecord;

@interface QLSDownloadIndicator : NSObject
{
    int _state;
    unsigned long long _totalSize;
    unsigned long long _downloadedSize;
    NSString *_name;
    long long _videoType;
    float _progressPercent;
    NSString *_errorMsg;
    unsigned long long _downloadSpeed;
    unsigned long long _downloadAddtionalSpeed;
    _Bool _downloadRecv;
    NSMutableArray *_observers;
    _Bool isPausedViaManual;
    int _downloadStyle;
    double finishedTime;
    NSString *currentTopUnfinishedTaskErrorMsg;
    NSString *currentUnfinishGroupTaskName;
    NSString *coverID;
    NSString *videoID;
    unsigned long long columnID;
    NSArray *titles;
    double playedTime;
    unsigned long long copyright;
    QLSDownloadSpeedRecord *_speedRecord;
    QLSDownloadBasicInfo *_downloadInfo;
    NSString *_imageURL;
    double _jumpEndTime;
}

+ (id)unfinishedGroupUniqueID;
@property(nonatomic) int downloadStyle; // @synthesize downloadStyle=_downloadStyle;
@property(nonatomic) double jumpEndTime; // @synthesize jumpEndTime=_jumpEndTime;
@property(readonly, nonatomic) _Bool downloadRecv; // @synthesize downloadRecv=_downloadRecv;
@property(readonly, nonatomic) unsigned long long downloadAddtionalSpeed; // @synthesize downloadAddtionalSpeed=_downloadAddtionalSpeed;
@property(readonly, nonatomic) unsigned long long downloadSpeed; // @synthesize downloadSpeed=_downloadSpeed;
@property(readonly, nonatomic) NSString *errorMsg; // @synthesize errorMsg=_errorMsg;
@property(readonly, nonatomic) float progressPercent; // @synthesize progressPercent=_progressPercent;
@property(readonly, nonatomic) unsigned long long downloadedSize; // @synthesize downloadedSize=_downloadedSize;
@property(readonly, nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) long long videoType; // @synthesize videoType=_videoType;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) QLSDownloadBasicInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
@property(retain, nonatomic) QLSDownloadSpeedRecord *speedRecord; // @synthesize speedRecord=_speedRecord;
@property(readonly, nonatomic) unsigned long long copyright; // @synthesize copyright;
@property(nonatomic) double playedTime; // @synthesize playedTime;
@property(readonly, nonatomic) NSArray *titles; // @synthesize titles;
@property(readonly, nonatomic) unsigned long long columnID; // @synthesize columnID;
@property(readonly, nonatomic) NSString *videoID; // @synthesize videoID;
@property(readonly, nonatomic) NSString *coverID; // @synthesize coverID;
@property(readonly, nonatomic) NSString *currentUnfinishGroupTaskName; // @synthesize currentUnfinishGroupTaskName;
@property(readonly, nonatomic) NSString *currentTopUnfinishedTaskErrorMsg; // @synthesize currentTopUnfinishedTaskErrorMsg;
@property(readonly, nonatomic) double finishedTime; // @synthesize finishedTime;
@property(readonly, nonatomic) _Bool isPausedViaManual; // @synthesize isPausedViaManual;
- (void).cxx_destruct;
- (double)downloadVideoRealPlayDuration;
- (double)downloadVideoDuration;
- (void)updateDownLoadTaskSizeWithVideoSize:(unsigned long long)arg1;
- (long long)compareByFinishedTime:(id)arg1;
- (id)imageURLWithType:(long long)arg1;
- (void)updateDownloadBytes:(unsigned long long)arg1;
- (void)updatePogress;
- (void)updateDownloadTaskState:(int)arg1;
- (void)updateDownloadSpeed;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) int willChangeToState;
@property(readonly, nonatomic) NSString *uniqueID;
@property(readonly, nonatomic) unsigned long long taskCount;
@property(readonly, nonatomic) int type;

@end

