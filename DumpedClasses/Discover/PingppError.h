//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PingppError : NSObject
{
    NSString *_msg;
    unsigned long long code;
}

+ (id)initWithCode:(unsigned long long)arg1 andMsg:(id)arg2;
+ (id)initWithCode:(unsigned long long)arg1;
@property unsigned long long code; // @synthesize code;
- (void).cxx_destruct;
- (id)getMsg;
- (void)setMsg:(id)arg1;

@end

