//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UtilsForm : NSObject
{
}

+ (id)decompressGzip:(id)arg1;
+ (long long)getNumFromOxcString:(id)arg1;
+ (id)getOxcNum:(int)arg1;
+ (_Bool)getUrlNeedCrypto:(id)arg1;
+ (id)getHostFromUrl:(id)arg1 port:(long long *)arg2;
+ (void)MdapUploadLog:(id)arg1;
+ (void)logDiagnose:(id)arg1;
+ (id)getObjFromFileWithKey:(id)arg1;
+ (void)setObjToFileWithKey:(id)arg1 value:(id)arg2;
+ (void)noticeError:(long long)arg1;
+ (id)getMd5OXC:(id)arg1;

@end
