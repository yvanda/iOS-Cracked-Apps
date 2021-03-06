//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRelationshipSingleSearchResultViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSString, QQPublicAccountSearchRecommendData, UICollectionView, UILabel, UIView;

@interface QQPublicAccountSearchResultViewController : QQRelationshipSingleSearchResultViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_recommendCollection;
    QQPublicAccountSearchRecommendData *_recommendCollectionData;
    UILabel *_recommendTitle;
    UIView *_recommendHead;
}

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)openItemAIOWithData:(id)arg1;
- (void)openItemCardWithUin:(id)arg1;
- (void)updateRecommendData:(id)arg1;
- (void)showPublicAccountRecommendList:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithSearchResult:(id)arg1 andSerachType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

