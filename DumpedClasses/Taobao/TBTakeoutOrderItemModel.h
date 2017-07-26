//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutOrderItemModel : TBJSONModel
{
    NSString *_itemId;
    NSString *_itemTitle;
    NSString *_itemLogo;
    NSString *_skuId;
    NSString *_sku;
    NSString *_originalPrice;
    NSString *_discountPrice;
    NSString *_quantity;
    NSString *_skuProperty;
    NSString *_skuTitle;
    struct CGSize _itemTitleSize;
    struct CGSize _skuTitleSize;
}

@property(nonatomic) struct CGSize skuTitleSize; // @synthesize skuTitleSize=_skuTitleSize;
@property(nonatomic) struct CGSize itemTitleSize; // @synthesize itemTitleSize=_itemTitleSize;
@property(copy, nonatomic) NSString *skuTitle; // @synthesize skuTitle=_skuTitle;
@property(copy, nonatomic) NSString *skuProperty; // @synthesize skuProperty=_skuProperty;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *discountPrice; // @synthesize discountPrice=_discountPrice;
@property(copy, nonatomic) NSString *originalPrice; // @synthesize originalPrice=_originalPrice;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *itemLogo; // @synthesize itemLogo=_itemLogo;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end
