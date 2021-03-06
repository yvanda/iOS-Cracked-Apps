//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewControllerBase.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, PanAvailableCollectionView, SSADModel;

@interface TTSettingADSplashVC : SSViewControllerBase <UICollectionViewDataSource, UICollectionViewDelegate>
{
    PanAvailableCollectionView *_adSplashCollectionView;
    NSArray *_adSplashModelArray;
    long long _page;
    _Bool _needNotifyOthersOnDeactivationForAudioSession;
    SSADModel *_currentAdModel;
}

- (void).cxx_destruct;
- (void)adjustAudioSessionWithAdModel:(id)arg1;
- (void)adjustPage:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)skipButtonPressed:(id)arg1;
- (id)suitableADSplashModels;
- (id)flowLayout;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

