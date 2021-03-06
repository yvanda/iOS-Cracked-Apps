//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HotelTinyPriceModel, NSMutableArray, NSString;

@interface HotelRoomGuranteeViewModel : NSObject
{
    _Bool hasGuarantee;
    _Bool _isUrgent;
    _Bool _isSelected;
    int guaranteeType;
    int guranteeWay;
    NSString *arrivalTimeText;
    NSString *arrivalTimeAbbrText;
    NSString *earliestArrivalTime;
    NSString *latestArrivalTime;
    NSMutableArray *guaranteePriceList;
    NSString *guranteeRemark;
    HotelTinyPriceModel *mainPrice;
    HotelTinyPriceModel *subPrice;
}

+ (long long)getDefaultSelectIndex:(id)arg1;
+ (id)changeModel:(id)arg1 isLocalCurrency:(_Bool)arg2;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool isUrgent; // @synthesize isUrgent=_isUrgent;
@property(retain, nonatomic) HotelTinyPriceModel *subPrice; // @synthesize subPrice;
@property(retain, nonatomic) HotelTinyPriceModel *mainPrice; // @synthesize mainPrice;
@property(copy, nonatomic) NSString *guranteeRemark; // @synthesize guranteeRemark;
@property(nonatomic) int guranteeWay; // @synthesize guranteeWay;
@property(retain, nonatomic) NSMutableArray *guaranteePriceList; // @synthesize guaranteePriceList;
@property(copy, nonatomic) NSString *latestArrivalTime; // @synthesize latestArrivalTime;
@property(copy, nonatomic) NSString *earliestArrivalTime; // @synthesize earliestArrivalTime;
@property(copy, nonatomic) NSString *arrivalTimeAbbrText; // @synthesize arrivalTimeAbbrText;
@property(copy, nonatomic) NSString *arrivalTimeText; // @synthesize arrivalTimeText;
@property(nonatomic) _Bool hasGuarantee; // @synthesize hasGuarantee;
@property(nonatomic) int guaranteeType; // @synthesize guaranteeType;
- (void).cxx_destruct;
- (id)init;

@end

