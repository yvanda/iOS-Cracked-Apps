//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSDictionary;
@protocol Optional;

@interface QYPPJsonData : JSONModel
{
    NSDictionary<Optional> *_originReturnData;
}

@property(retain, nonatomic) NSDictionary<Optional> *originReturnData; // @synthesize originReturnData=_originReturnData;
- (void).cxx_destruct;
- (void)storeToCacheForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

