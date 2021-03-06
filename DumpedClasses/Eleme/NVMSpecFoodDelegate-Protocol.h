//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

@protocol NVMSpecFoodDelegate <NSObject>
@property(copy, nonatomic) NSString *activityID;
@property(nonatomic) _Bool isNewRetailGoods;
@property(nonatomic) unsigned long long weight;
@property(nonatomic) _Bool mustSuperVIP;
@property(nonatomic) long long minimumDeliveryRule;
@property(nonatomic) unsigned long long maxDiscountTimes;
@property(nonatomic) unsigned long long maxCondition;
@property(nonatomic) unsigned long long minQuantity;
@property(nonatomic) long long minPurchase;
@property(nonatomic) _Bool removeFromStock;
@property(nonatomic) _Bool inPromotionContext;
@property(nonatomic) long long promotionStock;
@property(copy, nonatomic) NSArray *specs;
@property(nonatomic) unsigned long long checkoutMode;
@property(readonly, nonatomic) NSArray *specValues;
@property(copy, nonatomic) NSString *tips;
@property(nonatomic) double rating;
@property(nonatomic) double boxesFee;
@property(nonatomic) unsigned long long stock;
@property(copy, nonatomic) NSNumber *originPrice;
@property(copy, nonatomic) NSNumber *price;
@property(copy, nonatomic) NSString *detail;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *restaurantID;
@property(copy, nonatomic) NSString *skuID;
@property(copy, nonatomic) NSString *foodID;
- (double)originPriceIfHave;
@end

