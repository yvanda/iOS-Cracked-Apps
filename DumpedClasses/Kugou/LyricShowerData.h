//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LyricShowerData : NSObject
{
    NSString *lyricFileName;
    double adjustTimeLen;
    double _originalAdjustTimeLen;
}

@property(nonatomic) double originalAdjustTimeLen; // @synthesize originalAdjustTimeLen=_originalAdjustTimeLen;
@property double adjustTimeLen; // @synthesize adjustTimeLen;
@property(retain, nonatomic) NSString *lyricFileName; // @synthesize lyricFileName;
- (void).cxx_destruct;
- (void)dealloc;

@end

