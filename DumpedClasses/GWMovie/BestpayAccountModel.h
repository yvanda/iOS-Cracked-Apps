//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface BestpayAccountModel : NSObject <NSCoding>
{
    NSString *_tid;
    NSString *_key_index;
    NSString *_key_tid;
}

+ (id)accountWithDict:(id)arg1;
@property(copy, nonatomic) NSString *key_tid; // @synthesize key_tid=_key_tid;
@property(copy, nonatomic) NSString *key_index; // @synthesize key_index=_key_index;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

