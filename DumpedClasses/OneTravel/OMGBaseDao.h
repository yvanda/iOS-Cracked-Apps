//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OMGBaseDao : NSObject
{
    NSString *_tableName;
}

+ (id)globalDatabase;
@property(readonly, copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
- (void).cxx_destruct;
- (long long)count;
- (id)initWithTableName:(id)arg1 createTableSql:(id)arg2;

@end
