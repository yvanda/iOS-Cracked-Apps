//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DCLocalizedStringRequest, NSDictionary, NSString;

@interface DCLocalizedString : NSObject
{
    NSString *_currentVersion;
    NSString *_currentMD5;
    DCLocalizedStringRequest *_downloadRequest;
    unsigned long long _downloadState;
    NSDictionary *_localizedStringtable;
}

+ (id)localizedStringWithKey:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *localizedStringtable; // @synthesize localizedStringtable=_localizedStringtable;
@property(nonatomic) unsigned long long downloadState; // @synthesize downloadState=_downloadState;
@property(retain, nonatomic) DCLocalizedStringRequest *downloadRequest; // @synthesize downloadRequest=_downloadRequest;
@property(copy, nonatomic) NSString *currentMD5; // @synthesize currentMD5=_currentMD5;
@property(copy, nonatomic) NSString *currentVersion; // @synthesize currentVersion=_currentVersion;
- (void).cxx_destruct;
- (void)didGetCityConfig:(id)arg1;
- (void)p_setups;
- (id)p_readFromFileURL:(id)arg1;
- (id)p_readFromFileURL:(id)arg1 checkMD5:(_Bool)arg2 expectMD5:(id)arg3;
- (_Bool)p_saveToDisk:(id)arg1;
- (id)cachedFileURL;
- (void)saveURL:(id)arg1 version:(id)arg2 MD5:(id)arg3;
@property(copy, nonatomic) NSString *MD5; // @dynamic MD5;
@property(copy, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(copy, nonatomic) NSString *version; // @dynamic version;
- (void)dealloc;
- (id)init;

@end
