//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMEvent.h"

@class NMActivity, NSString;

@interface NMActivityEvent : NMEvent
{
    NMActivity *_activity;
    NSString *_activityTag;
    NSString *_activityContent;
}

@property(retain, nonatomic) NSString *activityContent; // @synthesize activityContent=_activityContent;
@property(retain, nonatomic) NSString *activityTag; // @synthesize activityTag=_activityTag;
@property(retain, nonatomic) NMActivity *activity; // @synthesize activity=_activity;
- (void).cxx_destruct;
- (id)getTypeDesc;
- (id)initWithDictionary:(id)arg1;

@end

