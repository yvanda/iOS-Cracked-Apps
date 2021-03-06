//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTFlightCarPartSelectItemViewDelegate.h"

@class CTFlightSpecialPackageItemPolicyViewModel, NSLayoutConstraint, NSString, UILabel;

@interface CTFlightCarParkSelectPriceDetailVIew : UIView <CTFlightCarPartSelectItemViewDelegate>
{
    id <CTFlightCarParkSelectPriceDetailVIewDelegate> _delegate;
    UILabel *_labelTopTip;
    UIView *_priceBtnsView;
    UILabel *_labelParkingLots;
    NSLayoutConstraint *_labelTopTipHeightCons;
    NSLayoutConstraint *_labelParkingLotsHeightCons;
    NSLayoutConstraint *_priceBtnsViewTopSpaceCons;
    NSLayoutConstraint *_priceBtnsViewHeightCons;
    CTFlightSpecialPackageItemPolicyViewModel *_itemPolicyModel;
}

@property(retain, nonatomic) CTFlightSpecialPackageItemPolicyViewModel *itemPolicyModel; // @synthesize itemPolicyModel=_itemPolicyModel;
@property(retain, nonatomic) NSLayoutConstraint *priceBtnsViewHeightCons; // @synthesize priceBtnsViewHeightCons=_priceBtnsViewHeightCons;
@property(retain, nonatomic) NSLayoutConstraint *priceBtnsViewTopSpaceCons; // @synthesize priceBtnsViewTopSpaceCons=_priceBtnsViewTopSpaceCons;
@property(retain, nonatomic) NSLayoutConstraint *labelParkingLotsHeightCons; // @synthesize labelParkingLotsHeightCons=_labelParkingLotsHeightCons;
@property(retain, nonatomic) NSLayoutConstraint *labelTopTipHeightCons; // @synthesize labelTopTipHeightCons=_labelTopTipHeightCons;
@property(retain, nonatomic) UILabel *labelParkingLots; // @synthesize labelParkingLots=_labelParkingLots;
@property(retain, nonatomic) UIView *priceBtnsView; // @synthesize priceBtnsView=_priceBtnsView;
@property(retain, nonatomic) UILabel *labelTopTip; // @synthesize labelTopTip=_labelTopTip;
@property(nonatomic) __weak id <CTFlightCarParkSelectPriceDetailVIewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)flightCarParkSelectItemClickWith:(id)arg1;
- (void)setPriceBtnListViewWithList:(id)arg1;
- (double)showCarPackSelectPriceDetailViewWithModel:(id)arg1;
- (void)initView;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

