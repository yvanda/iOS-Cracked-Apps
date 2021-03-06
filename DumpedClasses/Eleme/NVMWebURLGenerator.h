//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NVMWebURLGenerator : NSObject
{
    NSString *_pattern;
    NSArray *_patternSegments;
}

+ (id)defaultURLGenerator;
@property(copy, nonatomic) NSArray *patternSegments; // @synthesize patternSegments=_patternSegments;
@property(copy, nonatomic) NSString *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (_Bool)isURLString:(id)arg1;
- (id)urlStringFromMeta:(id)arg1;
- (id)buildURLFromMeta:(id)arg1;
- (id)generateURLFromMeta:(id)arg1;
- (id)matchingSegmentsInPattern:(id)arg1;
- (id)segmentInPattern:(id)arg1 fromMatching:(id)arg2;
- (id)nonNormalSegmentsFromPattern:(id)arg1 matchings:(id)arg2;
- (id)normalSegmentsFormPattern:(id)arg1 matchings:(id)arg2;
- (id)generateSegmentsFromPattern:(id)arg1;
- (id)description;
- (id)defaultPattern;
- (id)initWithURLPattern:(id)arg1;

@end

