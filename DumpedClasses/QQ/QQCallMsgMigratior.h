//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, NSArray;

@interface QQCallMsgMigratior : NSObject
{
    FMDatabase *_db;
    FMDatabase *_mixDb;
    id <IQQCallMsgMigratorProtocol> _delegate;
    NSArray *_tableList;
    _Bool _isCallTableExists;
}

- (void).cxx_destruct;
- (_Bool)doMigration;
- (_Bool)isMissCall:(id)arg1;
- (void)insertMsgToCallTable:(id)arg1;
- (_Bool)isCallMsg:(id)arg1;
- (_Bool)isVideoCallMsg:(id)arg1;
- (_Bool)isVoiceCallMsg:(id)arg1;
- (unsigned int)getTableCount;
- (id)getAllTable;
- (void)createQCallTable;
- (void)createMixDb;
- (id)initWithDb:(id)arg1 delegate:(id)arg2;

@end

