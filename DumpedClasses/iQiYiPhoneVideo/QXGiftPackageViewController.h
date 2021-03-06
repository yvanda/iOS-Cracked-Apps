//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QiXiuBaseVC.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, QXGiftPackageView;

@interface QXGiftPackageViewController : QiXiuBaseVC <UICollectionViewDelegate, UICollectionViewDataSource>
{
    QXGiftPackageView *_contentView;
    CDUnknownBlockType _buyBlock;
}

@property(copy, nonatomic) CDUnknownBlockType buyBlock; // @synthesize buyBlock=_buyBlock;
@property(nonatomic) __weak QXGiftPackageView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)btnBottomClick:(id)arg1;
- (void)btnCancelClick:(id)arg1;
- (void)btnCloseClick:(id)arg1;
- (void)viewDidLoad;
- (void)setModel:(id)arg1;
- (id)model;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

