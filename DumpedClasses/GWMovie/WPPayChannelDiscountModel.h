//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSArray, NSString;

@interface WPPayChannelDiscountModel : GWObject
{
    long long _cnt;
    NSString *_frontWord;
    NSString *_payWord;
    NSString *_resId;
    long long _status;
    long long _suitPayType;
    long long _type;
    long long _validOrdFee;
    double _value;
    NSString *_payTitle;
    NSString *_payDesc;
    NSArray *_ladderList;
}

+ (id)setUpJDPayBestDiscountWithPlatfromArray:(id)arg1 payPrice:(double)arg2;
+ (id)mj_objectClassInArray;
@property(retain, nonatomic) NSArray *ladderList; // @synthesize ladderList=_ladderList;
@property(retain, nonatomic) NSString *payDesc; // @synthesize payDesc=_payDesc;
@property(retain, nonatomic) NSString *payTitle; // @synthesize payTitle=_payTitle;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) long long validOrdFee; // @synthesize validOrdFee=_validOrdFee;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long suitPayType; // @synthesize suitPayType=_suitPayType;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *resId; // @synthesize resId=_resId;
@property(retain, nonatomic) NSString *payWord; // @synthesize payWord=_payWord;
@property(retain, nonatomic) NSString *frontWord; // @synthesize frontWord=_frontWord;
@property(nonatomic) long long cnt; // @synthesize cnt=_cnt;
- (void).cxx_destruct;
- (_Bool)isValidWithPayManager:(id)arg1 containOtherDiscount:(_Bool)arg2;
- (_Bool)isValidWithPayManager:(id)arg1;

@end

