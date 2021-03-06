//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQConfigUpdater, NSDictionary;

@interface MQQMobileCenterSettings : NSObject
{
    MQQConfigUpdater *_configUpdater;
    double _lastUpdateTime;
    NSDictionary *_sectionPrioritySettings;
    NSDictionary *_itemPrioritySettings;
}

+ (id)defaultSettings;
@property(copy, nonatomic) NSDictionary *itemPrioritySettings; // @synthesize itemPrioritySettings=_itemPrioritySettings;
@property(copy, nonatomic) NSDictionary *sectionPrioritySettings; // @synthesize sectionPrioritySettings=_sectionPrioritySettings;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) MQQConfigUpdater *configUpdater; // @synthesize configUpdater=_configUpdater;
- (long long)priorityForViewItem:(id)arg1;
- (long long)priorityForViewSection:(id)arg1;
- (void)checkForUpdates;
- (void)updateSettings;
- (void)dealloc;
- (id)init;

@end

