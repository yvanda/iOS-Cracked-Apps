//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelButtonCell.h"

@class CTHotelOrderDetailCacheBean, CTRootViewController, UILabel;

@interface CTHotelOrderDetailPayInfoCell : CTHotelButtonCell
{
    CTRootViewController *_rootVC;
    UILabel *_payWayLab;
    UILabel *_moneyLab;
    UILabel *_secondMoneyLab;
    CTHotelOrderDetailCacheBean *_detailCacheBean;
}

+ (_Bool)isPrePay:(id)arg1;
+ (double)getCellHeightWith:(id)arg1;
@property(retain, nonatomic) CTHotelOrderDetailCacheBean *detailCacheBean; // @synthesize detailCacheBean=_detailCacheBean;
@property(retain, nonatomic) UILabel *secondMoneyLab; // @synthesize secondMoneyLab=_secondMoneyLab;
@property(retain, nonatomic) UILabel *moneyLab; // @synthesize moneyLab=_moneyLab;
@property(retain, nonatomic) UILabel *payWayLab; // @synthesize payWayLab=_payWayLab;
@property(retain, nonatomic) CTRootViewController *rootVC; // @synthesize rootVC=_rootVC;
- (void).cxx_destruct;
- (void)cellBtnAction:(id)arg1;
- (void)setData:(id)arg1;
- (void)initView;

@end

