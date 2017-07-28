//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QMConnectionItemDelegate.h"

@class NSString;

@interface QMConfigDataManager : NSObject <QMConnectionItemDelegate>
{
}

- (void)connectionItem:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionItemDidFinish:(id)arg1;
- (void)launchResourceUpdate:(struct Package)arg1;
- (void)saveDataToFile:(id)arg1 fileName:(id)arg2 key:(id)arg3;
- (void)parseConfigData:(id)arg1;
- (int)parsePacketData:(id)arg1 package:(struct Package *)arg2;
- (void)checkConfigUpdate;
- (void)queryConfigWithName:(id)arg1;
- (id)poiIconString;
- (id)mapcfgStirng;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
