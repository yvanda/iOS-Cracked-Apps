//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ARStarInfo : NSObject
{
    unsigned int _faceRectId;
    float _confidence;
    int _sideFaceScore;
    int _maskScore;
    int _sunGlassesScore;
    int _perspectiveScore;
    NSString *_uin;
    NSString *_name;
    NSString *_pinyin_name;
    NSString *_star_wiki;
    NSString *_star_wiki_url;
}

@property(nonatomic) int perspectiveScore; // @synthesize perspectiveScore=_perspectiveScore;
@property(nonatomic) int sunGlassesScore; // @synthesize sunGlassesScore=_sunGlassesScore;
@property(nonatomic) int maskScore; // @synthesize maskScore=_maskScore;
@property(nonatomic) int sideFaceScore; // @synthesize sideFaceScore=_sideFaceScore;
@property(retain, nonatomic) NSString *star_wiki_url; // @synthesize star_wiki_url=_star_wiki_url;
@property(retain, nonatomic) NSString *star_wiki; // @synthesize star_wiki=_star_wiki;
@property(copy, nonatomic) NSString *pinyin_name; // @synthesize pinyin_name=_pinyin_name;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(nonatomic) unsigned int faceRectId; // @synthesize faceRectId=_faceRectId;
- (void).cxx_destruct;
- (id)description;

@end

