//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateLeftAlignedLayout.h"
#import "UIViewControllerAnimatedTransitioning.h"
#import "UIViewControllerTransitioningDelegate.h"

@class NSArray, NSMutableDictionary, NSString, NVMRetailGoodRemainingView, NVMRetailGoods, UIButton, UICollectionView, UILabel, UIView;

@interface NVMRetailStoreAdvanceMenuViewController : NVMViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateLeftAlignedLayout>
{
    _Bool _inPromotion;
    _Bool _finishedWithGood;
    CDUnknownBlockType _willComfirmAction;
    NSString *_restaurantID;
    NVMRetailGoods *_good;
    UIView *_headerView;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UICollectionView *_collectionView;
    UIView *_footerView;
    UILabel *_priceLabel;
    NVMRetailGoodRemainingView *_stockRemainingView;
    UIButton *_confirmButton;
    NSArray *_specGroups;
    NSMutableDictionary *_skuForSpecName;
}

@property(nonatomic) _Bool finishedWithGood; // @synthesize finishedWithGood=_finishedWithGood;
@property(retain, nonatomic) NSMutableDictionary *skuForSpecName; // @synthesize skuForSpecName=_skuForSpecName;
@property(retain, nonatomic) NSArray *specGroups; // @synthesize specGroups=_specGroups;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) NVMRetailGoodRemainingView *stockRemainingView; // @synthesize stockRemainingView=_stockRemainingView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool inPromotion; // @synthesize inPromotion=_inPromotion;
@property(retain, nonatomic) NVMRetailGoods *good; // @synthesize good=_good;
@property(retain, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(copy, nonatomic) CDUnknownBlockType willComfirmAction; // @synthesize willComfirmAction=_willComfirmAction;
- (void).cxx_destruct;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)handleComfirmButtonClick;
- (void)handleCloseButtonClick;
- (void)updateStateForSelection;
- (void)generateSpecGroup;
- (void)viewDidLoad;
- (id)initWithGood:(id)arg1 restaurantID:(id)arg2 inPromotion:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

