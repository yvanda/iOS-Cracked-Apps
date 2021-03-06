//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, QYUAblumClick, QYUCardDataV3, QYUCardStatistics;

@interface QYUBlockDataV3 : NSObject
{
    NSString *_ID;
    NSString *_type;
    NSString *_blockID;
    NSString *_bgColor;
    NSString *_parentBgColor;
    NSString *_borderRadius;
    NSString *_borderWidth;
    NSString *_borderColor;
    NSString *_rowMargin;
    NSArray *_metas;
    NSArray *_images;
    NSArray *_btns;
    NSArray *_videos;
    NSDictionary *_other;
    QYUCardDataV3 *_card;
    QYUAblumClick *_clickEvent;
    QYUAblumClick *_longClickEvent;
    QYUCardStatistics *_statistics;
    double _height;
    NSMutableDictionary *_extraDict;
    NSDictionary *_actions;
    NSMutableDictionary *_blockContext;
}

+ (id)parseForArray:(id)arg1 card:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *blockContext; // @synthesize blockContext=_blockContext;
@property(retain, nonatomic) NSDictionary *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSMutableDictionary *extraDict; // @synthesize extraDict=_extraDict;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) QYUCardStatistics *statistics; // @synthesize statistics=_statistics;
@property(retain, nonatomic) QYUAblumClick *longClickEvent; // @synthesize longClickEvent=_longClickEvent;
@property(retain, nonatomic) QYUAblumClick *clickEvent; // @synthesize clickEvent=_clickEvent;
@property(nonatomic) __weak QYUCardDataV3 *card; // @synthesize card=_card;
@property(retain, nonatomic) NSDictionary *other; // @synthesize other=_other;
@property(retain, nonatomic) NSArray *videos; // @synthesize videos=_videos;
@property(retain, nonatomic) NSArray *btns; // @synthesize btns=_btns;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *metas; // @synthesize metas=_metas;
@property(copy, nonatomic) NSString *rowMargin; // @synthesize rowMargin=_rowMargin;
@property(copy, nonatomic) NSString *borderColor; // @synthesize borderColor=_borderColor;
@property(copy, nonatomic) NSString *borderWidth; // @synthesize borderWidth=_borderWidth;
@property(copy, nonatomic) NSString *borderRadius; // @synthesize borderRadius=_borderRadius;
@property(copy, nonatomic) NSString *parentBgColor; // @synthesize parentBgColor=_parentBgColor;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(copy, nonatomic) NSString *blockID; // @synthesize blockID=_blockID;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)getBgColor;
- (id)getStylesTag;
- (long long)getScaleType;
- (double)getHeight:(double)arg1 rowWidth:(double)arg2;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)indexInCard;
- (_Bool)isNativeBlock;
- (id)getMetaTextThird;
- (id)getMetaTextSecond;
- (id)getMetaTextFirst;

@end

