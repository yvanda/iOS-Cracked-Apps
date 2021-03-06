//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PTHTweetbotRateLimit : NSObject
{
    unsigned long long _limit;
    unsigned long long _remaining;
    NSString *_key;
    NSDate *_resetDate;
}

+ (id)keyForPath:(id)arg1;
+ (id)newWithURLResponse:(id)arg1;
@property(retain, nonatomic) NSDate *resetDate; // @synthesize resetDate=_resetDate;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) unsigned long long remaining; // @synthesize remaining=_remaining;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool isLow;
@property(readonly, nonatomic) _Bool isCurrent;
@property(readonly, nonatomic) unsigned long long resetMinutes;

@end

