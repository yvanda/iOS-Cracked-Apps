//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray<KGPlayControlProtocol>;

@interface KGPlayerController : NSObject
{
    NSMutableArray<KGPlayControlProtocol> *_memberArray;
}

+ (id)sharedPlayerController;
@property(retain, nonatomic) NSMutableArray<KGPlayControlProtocol> *memberArray; // @synthesize memberArray=_memberArray;
- (void).cxx_destruct;
- (void)askStopMember:(id)arg1;
- (void)askOtherStopExceptMember:(id)arg1;
- (void)removeControlMember:(id)arg1;
- (void)registerControlMember:(id)arg1;
- (id)init;

@end

