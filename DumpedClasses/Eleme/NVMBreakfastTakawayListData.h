//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface NVMBreakfastTakawayListData : NSObject
{
    long long _deliveryType;
    long long _id;
    NSString *_name;
    NSArray *_takeawayList;
    long long _tradeAreaProperty;
}

+ (id)modelContainerPropertyGenericClass;
@property(nonatomic) long long tradeAreaProperty; // @synthesize tradeAreaProperty=_tradeAreaProperty;
@property(retain, nonatomic) NSArray *takeawayList; // @synthesize takeawayList=_takeawayList;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long id; // @synthesize id=_id;
@property(nonatomic) long long deliveryType; // @synthesize deliveryType=_deliveryType;
- (void).cxx_destruct;
- (unsigned long long)indexForTakeawayId:(long long)arg1;

@end
