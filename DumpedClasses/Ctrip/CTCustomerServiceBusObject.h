//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusObject.h"

@class NSDictionary;

@interface CTCustomerServiceBusObject : CTBusObject
{
    NSDictionary *_notifyInfo;
}

@property(retain, nonatomic) NSDictionary *notifyInfo; // @synthesize notifyInfo=_notifyInfo;
- (void).cxx_destruct;
- (id)queryParam:(id)arg1;
- (id)returnCSViewController;
- (id)doDataJob:(id)arg1 params:(id)arg2;
- (id)initWithHost:(id)arg1;

@end

