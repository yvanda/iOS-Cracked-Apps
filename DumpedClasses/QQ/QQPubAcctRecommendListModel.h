//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface QQPubAcctRecommendListModel : NSObject
{
    unsigned long long _totleBusinessCount;
    unsigned long long _currentBusinessCount;
    unsigned long long _lastUpdateTime;
    NSArray *_recommendBusinesslist;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(nonatomic) unsigned long long currentBusinessCount; // @dynamic currentBusinessCount;
@property(nonatomic) unsigned long long lastUpdateTime; // @dynamic lastUpdateTime;
@property(retain, nonatomic) NSArray *recommendBusinesslist; // @dynamic recommendBusinesslist;
@property(nonatomic) unsigned long long totleBusinessCount; // @dynamic totleBusinessCount;

@end

