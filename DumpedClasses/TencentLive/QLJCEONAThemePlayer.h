//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEVideoItemData;

@interface QLJCEONAThemePlayer : JceObjectV2
{
    int jcev2_p_2_o_topMarginRatio;
    int jcev2_p_3_o_heightToWidthRatio;
    QLJCEVideoItemData *jcev2_p_0_r_videoItemData;
    NSString *jcev2_p_1_r_bgImageUrl;
    NSString *jcev2_p_4_o_textColor;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_textColor, setter=setJce_textColor:) NSString *jcev2_p_4_o_textColor; // @synthesize jcev2_p_4_o_textColor;
@property(nonatomic, getter=jce_heightToWidthRatio, setter=setJce_heightToWidthRatio:) int jcev2_p_3_o_heightToWidthRatio; // @synthesize jcev2_p_3_o_heightToWidthRatio;
@property(nonatomic, getter=jce_topMarginRatio, setter=setJce_topMarginRatio:) int jcev2_p_2_o_topMarginRatio; // @synthesize jcev2_p_2_o_topMarginRatio;
@property(retain, nonatomic, getter=jce_bgImageUrl, setter=setJce_bgImageUrl:) NSString *jcev2_p_1_r_bgImageUrl; // @synthesize jcev2_p_1_r_bgImageUrl;
@property(retain, nonatomic, getter=jce_videoItemData, setter=setJce_videoItemData:) QLJCEVideoItemData *jcev2_p_0_r_videoItemData; // @synthesize jcev2_p_0_r_videoItemData;
- (void).cxx_destruct;
- (id)init;

@end

