//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GSConverter : NSObject
{
}

+ (id)convertFromCHongbaoInfo:(struct CHongbaoInfo)arg1;
+ (id)convertFromCUserGrabInfo:(struct CUserGrabInfo)arg1;
+ (id)convertFromCGrabInfo:(struct CGrabInfo)arg1;
+ (id)convertFromLodItem:(struct LiveodItem *)arg1;
+ (id)convertFromVoteResultItem:(struct CVoteResultItem)arg1;
+ (struct CVoteResultItem)convertFromInvestigationMyAnswer:(id)arg1;
+ (struct CVoteQuestion)convertFromInvestigationQuestion:(id)arg1;
+ (struct CVoteAnwser)convertFromInvestigationOption:(id)arg1;
+ (struct CVoteGroup)convertFromInvestigation:(id)arg1;
+ (id)convertFromVoteQuestion:(struct CVoteQuestion)arg1;
+ (id)convertFromVoteAnswer:(struct CVoteAnwser)arg1;
+ (id)convertFromVoteGroup:(struct CVoteGroup *)arg1;
+ (id)convertFromQuestion:(struct CQaQuestion *)arg1;
+ (id)convertFromColor:(unsigned int)arg1;
+ (id)convertFromAnnoText:(struct RtAnnoText *)arg1;
+ (id)convertFromAnnoRect:(struct RtAnnoRect *)arg1;
+ (id)convertFromAnnoPointEx:(struct RtAnnoPointerEx *)arg1;
+ (id)convertFromAnnoPoint:(struct RtAnnoPointer *)arg1;
+ (id)convertFromAnnoLineEx:(struct RtAnnoLineEx *)arg1;
+ (id)convertFromAnnoLine:(struct RtAnnoLine *)arg1;
+ (id)convertFromAnnoFreePenEx:(struct RtAnnoFreepenEx *)arg1;
+ (id)convertFromAnnoFreePen:(struct RtAnnoFreepen *)arg1;
+ (id)convertFromAnnoCleaner:(struct RtAnnoCleaner *)arg1;
+ (id)convertFromAnnoCircle:(struct RtAnnoCircle *)arg1;
+ (id)convertFromPage:(struct RtPage *)arg1;
+ (id)convertFromRtDoc:(struct RtDocument *)arg1;
+ (long long)convertFromUserUpdateFlag:(int)arg1;
+ (struct STATE)convertFromGSBroadcastStatus:(long long)arg1;
+ (long long)convertFromSTATE:(struct STATE)arg1;
+ (long long)convertFromJoinResult:(int)arg1;
+ (long long)convertFromLeaveReason:(int)arg1;
+ (long long)convertFromRoleType:(int)arg1;
+ (long long)convertFromUserType:(int)arg1;
+ (id)convertFromUserInfo:(struct UserInfo *)arg1;

@end

