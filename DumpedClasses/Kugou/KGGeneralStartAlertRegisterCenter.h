//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface KGGeneralStartAlertRegisterCenter : NSObject
{
    NSArray *_registeredClassName;
}

- (void).cxx_destruct;
- (id)registerAlertClassWithLowPriority;
- (id)registerAlertClassWithNormalPriority;
- (id)registerAlertClassWithHighPriority;
@property(retain, nonatomic) NSArray *registeredClassName; // @synthesize registeredClassName=_registeredClassName;

@end

