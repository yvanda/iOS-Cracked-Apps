//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface FALCNewStarGiftConfigManager : NSObject
{
    _Bool _isEnd;
    NSTimer *_timer;
    unsigned long long _starCount;
    unsigned long long _totalSeconds;
    unsigned long long _cSeconds;
    id <FALCNewStarGiftConfigManagerDelegate> _delegate;
}

+ (id)shareStarConfigMgr;
@property(nonatomic) __weak id <FALCNewStarGiftConfigManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(nonatomic) unsigned long long cSeconds; // @synthesize cSeconds=_cSeconds;
@property(nonatomic) unsigned long long totalSeconds; // @synthesize totalSeconds=_totalSeconds;
@property(nonatomic) unsigned long long starCount; // @synthesize starCount=_starCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (void)updateWithStarCount:(unsigned long long)arg1;
- (void)stop;
- (void)startWithSec:(unsigned long long)arg1;
- (void)start;
- (id)init;

@end

