//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTIMConfigResponse : NSObject
{
    long long _wxRetry;
    long long _textLength;
    long long _timer;
}

+ (id)configWithJSONString:(id)arg1;
@property(nonatomic) long long timer; // @synthesize timer=_timer;
@property(nonatomic) long long textLength; // @synthesize textLength=_textLength;
@property(nonatomic) long long wxRetry; // @synthesize wxRetry=_wxRetry;

@end
