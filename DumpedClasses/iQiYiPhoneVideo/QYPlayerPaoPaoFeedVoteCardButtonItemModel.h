//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QYPlayerPaoPaoFeedVoteCardButtonItemModel : NSObject
{
    _Bool _isSelected;
    NSString *_buttonTittle;
    double _curPercent;
    NSString *_oid;
    NSString *_vcid;
    NSString *_userJoinTimes;
    NSString *_showNum;
    NSString *_vid;
}

+ (id)safelyGetValue:(id)arg1 withKey:(id)arg2;
+ (id)getFeedVoteCardBottonItemModel:(id)arg1;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *showNum; // @synthesize showNum=_showNum;
@property(retain, nonatomic) NSString *userJoinTimes; // @synthesize userJoinTimes=_userJoinTimes;
@property(retain, nonatomic) NSString *vcid; // @synthesize vcid=_vcid;
@property(retain, nonatomic) NSString *oid; // @synthesize oid=_oid;
@property(nonatomic) double curPercent; // @synthesize curPercent=_curPercent;
@property(retain, nonatomic) NSString *buttonTittle; // @synthesize buttonTittle=_buttonTittle;
- (void).cxx_destruct;
- (id)init;

@end

