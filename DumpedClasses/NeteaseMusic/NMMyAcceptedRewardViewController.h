//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMHttpRequestDelegate.h"

@class NMArtistRewardInfoRequest, NMBarButtonItem, NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface NMMyAcceptedRewardViewController : UIViewController <NMHttpRequestDelegate>
{
    UIView *_acceptedRewardView;
    UILabel *_staticLabel;
    UILabel *_rewardLabel;
    UILabel *_introductionLabel;
    UIButton *_detailButton;
    UIActivityIndicatorView *_waitingView;
    NMBarButtonItem *_backItem;
    NMArtistRewardInfoRequest *_infoRequest;
}

- (void).cxx_destruct;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)detailClicked:(id)arg1;
- (void)setRewardText;
- (void)loadRewardFinished;
- (void)loadReward;
- (void)backAction:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)handleChangeSkin:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
