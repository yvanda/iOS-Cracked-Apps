//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QREnterDownloadHandle : NSObject
{
    _Bool _isNoSHowdowloadProgress;
}

@property(nonatomic) _Bool isNoSHowdowloadProgress; // @synthesize isNoSHowdowloadProgress=_isNoSHowdowloadProgress;
- (void)downloadChapters:(id)arg1 volumes:(id)arg2 selectedChapterIndex:(long long)arg3;
- (void)loadCatalogsWithSuccessHandler:(id)arg1 successHandler:(CDUnknownBlockType)arg2 failedHandler:(CDUnknownBlockType)arg3;
- (void)downloadBook:(id)arg1 volumes:(id)arg2 selectedChapterIndex:(long long)arg3;
- (void)startDownload:(id)arg1 volumes:(id)arg2 selectedChapterIndex:(long long)arg3 enterDownloadBlock:(CDUnknownBlockType)arg4;

@end

