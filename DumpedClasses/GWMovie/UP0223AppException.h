//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface UP0223AppException : NSObject <NSCoding>
{
    int _repeat;
    NSString *_appVersionCode;
    NSString *_stackData;
    long long _errorTime;
    NSString *_hashIdentity;
}

@property(retain, nonatomic) NSString *hashIdentity; // @synthesize hashIdentity=_hashIdentity;
@property(nonatomic) int repeat; // @synthesize repeat=_repeat;
@property(nonatomic) long long errorTime; // @synthesize errorTime=_errorTime;
@property(retain, nonatomic) NSString *stackData; // @synthesize stackData=_stackData;
@property(retain, nonatomic) NSString *appVersionCode; // @synthesize appVersionCode=_appVersionCode;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)messagePack:(struct msgpack_packer *)arg1;
- (id)init;

@end

