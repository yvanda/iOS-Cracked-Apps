//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelOrderOpsModifyInfoModel : CTBusinessBean
{
    int _optionalExtType;
    int _addOptionalItemID;
    int _quantity;
    NSString *_couponNo;
}

@property(nonatomic) int quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *couponNo; // @synthesize couponNo=_couponNo;
@property(nonatomic) int addOptionalItemID; // @synthesize addOptionalItemID=_addOptionalItemID;
@property(nonatomic) int optionalExtType; // @synthesize optionalExtType=_optionalExtType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
