//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSLock, NSMutableDictionary;

@interface FTSSettingManager : NSObject
{
    NSMutableDictionary *_configDict;
    NSDictionary *_threadConfDict;
    NSLock *_lock;
}

+ (int)getFTSConfigVersion;
+ (void)setFTSConfigVersion:(long long)arg1;
+ (id)GetInstance;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSDictionary *threadConfDict; // @synthesize threadConfDict=_threadConfDict;
@property(retain, nonatomic) NSMutableDictionary *configDict; // @synthesize configDict=_configDict;
- (void).cxx_destruct;
- (id)GetValueFromKey:(id)arg1;
- (void)loadDefaultSetting;
- (void)loadSetting;
- (void)loginout;
- (void)setFTSConfigDict:(id)arg1;
- (id)init;

@end

