//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MQQQTAdvertise, MQQQTResourceDownloader;

@protocol MQQQTResourceDownloaderDelegate <NSObject>

@optional
- (void)resourceDownloaderDidFinish:(MQQQTResourceDownloader *)arg1;
- (void)resourceDownloader:(MQQQTResourceDownloader *)arg1 existsAdvertise:(MQQQTAdvertise *)arg2;
- (void)resourceDownloader:(MQQQTResourceDownloader *)arg1 failToDownloadAdvertise:(MQQQTAdvertise *)arg2;
- (void)resourceDownloader:(MQQQTResourceDownloader *)arg1 didDownloadAdvertise:(MQQQTAdvertise *)arg2;
- (void)resourceDownloader:(MQQQTResourceDownloader *)arg1 startDownloadAdvertise:(MQQQTAdvertise *)arg2;
@end

