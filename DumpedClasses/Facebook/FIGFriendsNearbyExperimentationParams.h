//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@interface FIGFriendsNearbyExperimentationParams : FBValueObject <NSCopying>
{
    _Bool _isFIGUIEnabled;
    unsigned long long _listCellStyle;
}

@property(readonly, nonatomic) _Bool isFIGUIEnabled; // @synthesize isFIGUIEnabled=_isFIGUIEnabled;
@property(readonly, nonatomic) unsigned long long listCellStyle; // @synthesize listCellStyle=_listCellStyle;
- (id)initWithListCellStyle:(unsigned long long)arg1 isFIGUIEnabled:(_Bool)arg2;

@end

