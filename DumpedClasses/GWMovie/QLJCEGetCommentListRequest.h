//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEGetCommentListRequest : JceObjectV2
{
    int jcev2_p_4_o_pageFlag;
    NSString *jcev2_p_0_r_commentKey;
    NSString *jcev2_p_1_o_pageContext;
    NSString *jcev2_p_2_o_filterKey;
    NSString *jcev2_p_3_o_vid;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_pageFlag, setter=setJce_pageFlag:) int jcev2_p_4_o_pageFlag; // @synthesize jcev2_p_4_o_pageFlag;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_3_o_vid; // @synthesize jcev2_p_3_o_vid;
@property(retain, nonatomic, getter=jce_filterKey, setter=setJce_filterKey:) NSString *jcev2_p_2_o_filterKey; // @synthesize jcev2_p_2_o_filterKey;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_1_o_pageContext; // @synthesize jcev2_p_1_o_pageContext;
@property(retain, nonatomic, getter=jce_commentKey, setter=setJce_commentKey:) NSString *jcev2_p_0_r_commentKey; // @synthesize jcev2_p_0_r_commentKey;
- (void)dealloc;
- (id)init;

@end
