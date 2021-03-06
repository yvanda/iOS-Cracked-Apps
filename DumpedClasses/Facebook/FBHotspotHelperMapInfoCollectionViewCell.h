//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "FBHotspotHelperMapNoWifiAvailableViewDelegate-Protocol.h"
#import "FBHotspotHelperMapPageInfoViewDelegate-Protocol.h"

@class FBHotspotHelperMapNoWifiAvailableView, FBHotspotHelperMapPageInfoView, FBHotspotHelperWifiPageInfo, NSString, UIView;
@protocol FBHotspotHelperMapInfoCollectionViewCellDelegate;

@interface FBHotspotHelperMapInfoCollectionViewCell : UICollectionViewCell <FBHotspotHelperMapNoWifiAvailableViewDelegate, FBHotspotHelperMapPageInfoViewDelegate>
{
    UIView *_roundedCornerView;
    FBHotspotHelperWifiPageInfo *_wifiPageInfo;
    FBHotspotHelperMapNoWifiAvailableView *_noWifiAvailableView;
    FBHotspotHelperMapPageInfoView *_pageInfoView;
    id <FBHotspotHelperMapInfoCollectionViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <FBHotspotHelperMapInfoCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_loadNoWifiAvailableView;
- (void)_loadPageInfoViewWithSession:(id)arg1 wifiPageInfo:(id)arg2;
- (void)didTapDirectionButton;
- (void)didTapVisitPageButton;
- (void)didTapTryAgainButton;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)loadViewWithSession:(id)arg1 pageInfo:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

