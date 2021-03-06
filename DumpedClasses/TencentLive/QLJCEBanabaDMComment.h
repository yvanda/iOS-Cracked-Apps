//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEBanabaDMCommentActionInfo, QLJCEBanabaDMGiftInfo, QLJCEBanabaDMParentCommentInfo;

@interface QLJCEBanabaDMComment : JceObjectV2
{
    int jcev2_p_4_o_dwIsFriend;
    int jcev2_p_5_o_dwIsOp;
    int jcev2_p_6_o_dwIsSelf;
    int jcev2_p_7_o_dwTimePoint;
    int jcev2_p_8_o_dwUpCount;
    int jcev2_p_14_o_dwFirstTag;
    int jcev2_p_21_o_dwHoldTime;
    int jcev2_p_26_o_dwDanmuContentType;
    int jcev2_p_27_o_dwPriority;
    long long jcev2_p_0_o_ddwCommentId;
    long long jcev2_p_1_o_ddwTargetId;
    NSString *jcev2_p_2_o_sContent;
    long long jcev2_p_3_o_ddwUin;
    long long jcev2_p_9_o_ddwPostTime;
    NSString *jcev2_p_10_o_strNickName;
    NSString *jcev2_p_11_o_strHeadUrl;
    NSString *jcev2_p_12_o_strQQHeadUrl;
    NSString *jcev2_p_13_o_strGiftUrl;
    NSString *jcev2_p_15_o_highlightColor;
    NSString *jcev2_p_16_o_strHlwLevelPic;
    NSString *jcev2_p_17_o_strBubbleId;
    NSString *jcev2_p_18_o_strDanmuBackPic;
    NSString *jcev2_p_19_o_strDanmuBackColor;
    NSString *jcev2_p_20_o_strDanmuBackHeadPic;
    QLJCEBanabaDMGiftInfo *jcev2_p_22_o_stGiftInfo;
    NSArray *jcev2_p_23_o_vecVoiceData__b0x9i_VOQLJCEApolloVoiceData;
    NSArray *jcev2_p_24_o_vecImageData__b0x9i_VOQLJCECircleMsgImageUrl;
    NSArray *jcev2_p_25_o_vecVideoData__b0x9i_VOQLJCECircleShortVideoUrl;
    QLJCEBanabaDMParentCommentInfo *jcev2_p_28_o_parentComment;
    QLJCEBanabaDMCommentActionInfo *jcev2_p_29_o_actionInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_actionInfo, setter=setJce_actionInfo:) QLJCEBanabaDMCommentActionInfo *jcev2_p_29_o_actionInfo; // @synthesize jcev2_p_29_o_actionInfo;
@property(retain, nonatomic, getter=jce_parentComment, setter=setJce_parentComment:) QLJCEBanabaDMParentCommentInfo *jcev2_p_28_o_parentComment; // @synthesize jcev2_p_28_o_parentComment;
@property(nonatomic, getter=jce_dwPriority, setter=setJce_dwPriority:) int jcev2_p_27_o_dwPriority; // @synthesize jcev2_p_27_o_dwPriority;
@property(nonatomic, getter=jce_dwDanmuContentType, setter=setJce_dwDanmuContentType:) int jcev2_p_26_o_dwDanmuContentType; // @synthesize jcev2_p_26_o_dwDanmuContentType;
@property(retain, nonatomic, getter=jce_vecVideoData, setter=setJce_vecVideoData:) NSArray *jcev2_p_25_o_vecVideoData__b0x9i_VOQLJCECircleShortVideoUrl; // @synthesize jcev2_p_25_o_vecVideoData__b0x9i_VOQLJCECircleShortVideoUrl;
@property(retain, nonatomic, getter=jce_vecImageData, setter=setJce_vecImageData:) NSArray *jcev2_p_24_o_vecImageData__b0x9i_VOQLJCECircleMsgImageUrl; // @synthesize jcev2_p_24_o_vecImageData__b0x9i_VOQLJCECircleMsgImageUrl;
@property(retain, nonatomic, getter=jce_vecVoiceData, setter=setJce_vecVoiceData:) NSArray *jcev2_p_23_o_vecVoiceData__b0x9i_VOQLJCEApolloVoiceData; // @synthesize jcev2_p_23_o_vecVoiceData__b0x9i_VOQLJCEApolloVoiceData;
@property(retain, nonatomic, getter=jce_stGiftInfo, setter=setJce_stGiftInfo:) QLJCEBanabaDMGiftInfo *jcev2_p_22_o_stGiftInfo; // @synthesize jcev2_p_22_o_stGiftInfo;
@property(nonatomic, getter=jce_dwHoldTime, setter=setJce_dwHoldTime:) int jcev2_p_21_o_dwHoldTime; // @synthesize jcev2_p_21_o_dwHoldTime;
@property(retain, nonatomic, getter=jce_strDanmuBackHeadPic, setter=setJce_strDanmuBackHeadPic:) NSString *jcev2_p_20_o_strDanmuBackHeadPic; // @synthesize jcev2_p_20_o_strDanmuBackHeadPic;
@property(retain, nonatomic, getter=jce_strDanmuBackColor, setter=setJce_strDanmuBackColor:) NSString *jcev2_p_19_o_strDanmuBackColor; // @synthesize jcev2_p_19_o_strDanmuBackColor;
@property(retain, nonatomic, getter=jce_strDanmuBackPic, setter=setJce_strDanmuBackPic:) NSString *jcev2_p_18_o_strDanmuBackPic; // @synthesize jcev2_p_18_o_strDanmuBackPic;
@property(retain, nonatomic, getter=jce_strBubbleId, setter=setJce_strBubbleId:) NSString *jcev2_p_17_o_strBubbleId; // @synthesize jcev2_p_17_o_strBubbleId;
@property(retain, nonatomic, getter=jce_strHlwLevelPic, setter=setJce_strHlwLevelPic:) NSString *jcev2_p_16_o_strHlwLevelPic; // @synthesize jcev2_p_16_o_strHlwLevelPic;
@property(retain, nonatomic, getter=jce_highlightColor, setter=setJce_highlightColor:) NSString *jcev2_p_15_o_highlightColor; // @synthesize jcev2_p_15_o_highlightColor;
@property(nonatomic, getter=jce_dwFirstTag, setter=setJce_dwFirstTag:) int jcev2_p_14_o_dwFirstTag; // @synthesize jcev2_p_14_o_dwFirstTag;
@property(retain, nonatomic, getter=jce_strGiftUrl, setter=setJce_strGiftUrl:) NSString *jcev2_p_13_o_strGiftUrl; // @synthesize jcev2_p_13_o_strGiftUrl;
@property(retain, nonatomic, getter=jce_strQQHeadUrl, setter=setJce_strQQHeadUrl:) NSString *jcev2_p_12_o_strQQHeadUrl; // @synthesize jcev2_p_12_o_strQQHeadUrl;
@property(retain, nonatomic, getter=jce_strHeadUrl, setter=setJce_strHeadUrl:) NSString *jcev2_p_11_o_strHeadUrl; // @synthesize jcev2_p_11_o_strHeadUrl;
@property(retain, nonatomic, getter=jce_strNickName, setter=setJce_strNickName:) NSString *jcev2_p_10_o_strNickName; // @synthesize jcev2_p_10_o_strNickName;
@property(nonatomic, getter=jce_ddwPostTime, setter=setJce_ddwPostTime:) long long jcev2_p_9_o_ddwPostTime; // @synthesize jcev2_p_9_o_ddwPostTime;
@property(nonatomic, getter=jce_dwUpCount, setter=setJce_dwUpCount:) int jcev2_p_8_o_dwUpCount; // @synthesize jcev2_p_8_o_dwUpCount;
@property(nonatomic, getter=jce_dwTimePoint, setter=setJce_dwTimePoint:) int jcev2_p_7_o_dwTimePoint; // @synthesize jcev2_p_7_o_dwTimePoint;
@property(nonatomic, getter=jce_dwIsSelf, setter=setJce_dwIsSelf:) int jcev2_p_6_o_dwIsSelf; // @synthesize jcev2_p_6_o_dwIsSelf;
@property(nonatomic, getter=jce_dwIsOp, setter=setJce_dwIsOp:) int jcev2_p_5_o_dwIsOp; // @synthesize jcev2_p_5_o_dwIsOp;
@property(nonatomic, getter=jce_dwIsFriend, setter=setJce_dwIsFriend:) int jcev2_p_4_o_dwIsFriend; // @synthesize jcev2_p_4_o_dwIsFriend;
@property(nonatomic, getter=jce_ddwUin, setter=setJce_ddwUin:) long long jcev2_p_3_o_ddwUin; // @synthesize jcev2_p_3_o_ddwUin;
@property(retain, nonatomic, getter=jce_sContent, setter=setJce_sContent:) NSString *jcev2_p_2_o_sContent; // @synthesize jcev2_p_2_o_sContent;
@property(nonatomic, getter=jce_ddwTargetId, setter=setJce_ddwTargetId:) long long jcev2_p_1_o_ddwTargetId; // @synthesize jcev2_p_1_o_ddwTargetId;
@property(nonatomic, getter=jce_ddwCommentId, setter=setJce_ddwCommentId:) long long jcev2_p_0_o_ddwCommentId; // @synthesize jcev2_p_0_o_ddwCommentId;
- (void).cxx_destruct;
- (id)init;

@end

