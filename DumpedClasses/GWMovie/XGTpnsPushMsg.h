//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XGJceObjectV2.h"

@class NSString;

@interface XGTpnsPushMsg : XGJceObjectV2
{
    unsigned int jcev2_p_0_r_msgId;
    unsigned int jcev2_p_1_r_accessId;
    unsigned int jcev2_p_2_r_busiMsgId;
    unsigned int jcev2_p_5_r_type;
    unsigned int jcev2_p_7_o_timestamp;
    unsigned int jcev2_p_8_o_multiPkg;
    unsigned int jcev2_p_10_o_serverTime;
    int jcev2_p_11_o_ttl;
    NSString *jcev2_p_3_r_title;
    NSString *jcev2_p_4_r_content;
    NSString *jcev2_p_6_o_appPkgName;
    NSString *jcev2_p_9_o_date;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_ttl, setter=setJce_ttl:) int jcev2_p_11_o_ttl; // @synthesize jcev2_p_11_o_ttl;
@property(nonatomic, getter=jce_serverTime, setter=setJce_serverTime:) unsigned int jcev2_p_10_o_serverTime; // @synthesize jcev2_p_10_o_serverTime;
@property(retain, nonatomic, getter=jce_date, setter=setJce_date:) NSString *jcev2_p_9_o_date; // @synthesize jcev2_p_9_o_date;
@property(nonatomic, getter=jce_multiPkg, setter=setJce_multiPkg:) unsigned int jcev2_p_8_o_multiPkg; // @synthesize jcev2_p_8_o_multiPkg;
@property(nonatomic, getter=jce_timestamp, setter=setJce_timestamp:) unsigned int jcev2_p_7_o_timestamp; // @synthesize jcev2_p_7_o_timestamp;
@property(retain, nonatomic, getter=jce_appPkgName, setter=setJce_appPkgName:) NSString *jcev2_p_6_o_appPkgName; // @synthesize jcev2_p_6_o_appPkgName;
@property(nonatomic, getter=jce_type, setter=setJce_type:) unsigned int jcev2_p_5_r_type; // @synthesize jcev2_p_5_r_type;
@property(retain, nonatomic, getter=jce_content, setter=setJce_content:) NSString *jcev2_p_4_r_content; // @synthesize jcev2_p_4_r_content;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_3_r_title; // @synthesize jcev2_p_3_r_title;
@property(nonatomic, getter=jce_busiMsgId, setter=setJce_busiMsgId:) unsigned int jcev2_p_2_r_busiMsgId; // @synthesize jcev2_p_2_r_busiMsgId;
@property(nonatomic, getter=jce_accessId, setter=setJce_accessId:) unsigned int jcev2_p_1_r_accessId; // @synthesize jcev2_p_1_r_accessId;
@property(nonatomic, getter=jce_msgId, setter=setJce_msgId:) unsigned int jcev2_p_0_r_msgId; // @synthesize jcev2_p_0_r_msgId;
- (void)dealloc;
- (id)init;

@end

