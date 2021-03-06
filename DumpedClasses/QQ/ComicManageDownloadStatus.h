//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQVIPFunctionLockMutableArray;

@interface ComicManageDownloadStatus : NSObject
{
    QQVIPFunctionLockMutableArray *_downloadingSectionArr;
    unsigned long long _bytesPerSecond;
    unsigned long long _downloadingCount;
    unsigned long long _onPauseCount;
    unsigned long long _waitingCount;
    unsigned long long _unFinishedCount;
    _Bool _isDownloading;
    unsigned long long _comicDBStatus;
    double _expectedTotalSize;
    double _currentDownloadedTotalSize;
    double _speed;
    double _historyTotalSize;
    double _historyDownloadedTotalSize;
    long long _maxNewTaskStartTimestamp;
    int _xo;
}

- (void).cxx_destruct;
- (id)description;
- (void)updateDownloadState:(id)arg1;
@property(nonatomic) double currentDownloadedTotalSize; // @dynamic currentDownloadedTotalSize;
@property(nonatomic) double expectedTotalSize; // @dynamic expectedTotalSize;
@property(nonatomic) _Bool isDownloading; // @dynamic isDownloading;
@property(nonatomic) unsigned long long downloadingCount; // @dynamic downloadingCount;
- (id)init;

// Remaining properties
@property(nonatomic) unsigned long long bytesPerSecond; // @dynamic bytesPerSecond;
@property(nonatomic) unsigned long long comicDBStatus; // @dynamic comicDBStatus;
@property(retain, nonatomic) QQVIPFunctionLockMutableArray *downloadingSectionArr; // @dynamic downloadingSectionArr;
@property(nonatomic) double historyDownloadedTotalSize; // @dynamic historyDownloadedTotalSize;
@property(nonatomic) double historyTotalSize; // @dynamic historyTotalSize;
@property(nonatomic) long long maxNewTaskStartTimestamp; // @dynamic maxNewTaskStartTimestamp;
@property(nonatomic) unsigned long long onPauseCount; // @dynamic onPauseCount;
@property(nonatomic) double speed; // @dynamic speed;
@property(nonatomic) unsigned long long unFinishedCount; // @dynamic unFinishedCount;
@property(nonatomic) unsigned long long waitingCount; // @dynamic waitingCount;

@end

