//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MQQPFSchemeSimilary : NSObject
{
    long long _version;
    NSString *_templateHash;
    double _similary;
}

@property(nonatomic) double similary; // @synthesize similary=_similary;
@property(copy, nonatomic) NSString *templateHash; // @synthesize templateHash=_templateHash;
@property(nonatomic) long long version; // @synthesize version=_version;
- (void)dealloc;

@end

