//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface BMLAPIBase : NSObject
{
    _Bool _authOK;
    NSString *_aKey;
    NSString *_mCode;
}

@property(nonatomic) _Bool authOK; // @synthesize authOK=_authOK;
@property(retain, nonatomic) NSString *mCode; // @synthesize mCode=_mCode;
@property(retain, nonatomic) NSString *aKey; // @synthesize aKey=_aKey;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithAk:(id)arg1 mcode:(id)arg2;

@end
