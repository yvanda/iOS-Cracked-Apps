//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QYOfflineBaseFileManagerUtil : NSObject
{
}

+ (void)logFileDirectoryWithTask:(id)arg1;
+ (_Bool)deletePlistFileWithTask:(id)arg1 ofType:(long long)arg2;
+ (id)downloadFileDirectoryWithDownloadType:(long long)arg1;
+ (id)documentUploadPath:(id)arg1;
+ (void)deleteOldPfvTempFile:(id)arg1;
+ (_Bool)addSkipBackupAttributeToItemAtURL:(id)arg1;
+ (id)getOldDownloadFolderPath;
+ (id)getOldDownloadLocalFilePath:(id)arg1;
+ (_Bool)checkOldPathExist:(id)arg1;
+ (_Bool)isDownloadPrepareData:(id)arg1;
+ (void)cleanAllOldDownloadJsonData:(id)arg1;
+ (id)get_m3u8_done_path:(id)arg1;
+ (id)get_downloaded_file_path:(id)arg1;
+ (id)get_downloaded_qvs_file_path:(id)arg1;
+ (id)mp4FilePath:(id)arg1;
+ (_Bool)moveFileFrom:(id)arg1 to:(id)arg2;
+ (id)oldMp4FilePath:(id)arg1;
+ (long long)getLocalFileSize:(id)arg1;
+ (_Bool)deleteDownloadTask:(id)arg1;
+ (id)getLocalTempPathWithTvId:(id)arg1;
+ (id)getLocalDirPathWithType:(long long)arg1 WithTvId:(id)arg2;
+ (id)getLocalPathWithType:(long long)arg1 WithTvId:(id)arg2 WithP2pFileName:(id)arg3;
+ (id)getStarHeaderImageLocalPathWithFileName:(id)arg1;
+ (id)adLocalPathWithFileName:(id)arg1;
+ (id)getLocalPathWithDownloadUrl:(id)arg1;
+ (id)getPreImageLocalPathWithTvId:(id)arg1;
+ (_Bool)isPumaCanPlayVideo:(id)arg1;
+ (long long)getFileSizeWithPath:(id)arg1;
+ (long long)getFileSizeWithDir:(id)arg1;
+ (id)getDirFileWithPath:(id)arg1;
+ (_Bool)delegateFileWithPath:(id)arg1;
+ (_Bool)existsFileAtPath:(id)arg1;
+ (_Bool)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
+ (id)createFolderWithPath:(id)arg1;
+ (id)getLibraryPath;
+ (id)getRelativePathWithPath:(id)arg1;
+ (id)getAbsolutePathWithPath:(id)arg1;
+ (_Bool)isAbsolutePathWithPath:(id)arg1;

@end

