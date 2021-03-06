//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UBTSQLiteUtils : NSObject
{
    NSString *_dbPath;
    struct sqlite3 *_db;
    _Bool _initTag;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shared;
- (void).cxx_destruct;
- (float)freeSpace;
- (float)usedSpace;
- (void)remove:(id)arg1;
- (id)query:(long long)arg1 conditions:(id)arg2;
- (void)batch:(id)arg1;
- (_Bool)save:(id)arg1;
- (void)shrinkDB;
- (_Bool)initDB;
- (_Bool)commit;
- (_Bool)beginTransaction;
- (void)executeVacuum;
- (_Bool)tableExists:(id)arg1;
- (_Bool)nextRow:(struct sqlite3_stmt *)arg1;
- (_Bool)executeSQL:(id)arg1 withParam:(id)arg2;
- (id)querySQL:(id)arg1 withParam:(id)arg2;
- (void)bindStatement:(struct sqlite3_stmt *)arg1 withParam:(id)arg2;
- (void)closeDatabase;
- (_Bool)openDatabase;
- (void)initialize;
- (id)init;
- (id)shared;

@end

