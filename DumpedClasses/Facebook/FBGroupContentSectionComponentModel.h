//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class FBMemGroup, NSString;

@interface FBGroupContentSectionComponentModel : FBValueObject <NSCopying>
{
    FBMemGroup *_group;
    NSString *_title;
}

@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) FBMemGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (id)initWithGroup:(id)arg1 title:(id)arg2;

@end

