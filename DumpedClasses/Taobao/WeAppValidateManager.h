//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, WeAppEngine;

@interface WeAppValidateManager : NSObject
{
    _Bool _isBreak;
    WeAppEngine *_engine;
    NSMutableArray *_errorArray;
}

@property(retain, nonatomic) NSMutableArray *errorArray; // @synthesize errorArray=_errorArray;
@property(nonatomic) _Bool isBreak; // @synthesize isBreak=_isBreak;
@property(nonatomic) __weak WeAppEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (_Bool)validate:(id)arg1 forValue:(id)arg2;
- (id)init;

@end
