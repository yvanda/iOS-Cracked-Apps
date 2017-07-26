//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface LFEntryManager : NSObject
{
    NSObject<OS_dispatch_queue> *_lifeEntryManagerQueue;
    NSMutableDictionary *_lifeEntryDic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getPPReportSchema;
- (_Bool)getConfigCloseStatus:(id)arg1;
- (void)getCachedEntryModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)entranceFirstShow:(id)arg1;
- (void)entranceClick:(id)arg1;
- (void)friendTabLifeGroupCellClick;
- (void)friendTabLifeGroupCellDelete;
- (void)updateLifeEntryModel:(id)arg1;
- (void)getCachedEntryDic;
- (void)cacheEntryDic:(id)arg1;
- (void)loginNotification:(id)arg1;
- (void)entrySync:(id)arg1;
- (void)startForManager;
- (void)willDestroy;
- (void)start;

@end
