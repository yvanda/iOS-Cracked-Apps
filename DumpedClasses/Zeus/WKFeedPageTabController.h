//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WKFeedContentScrollViewCellDelegate-Protocol.h"
#import "WKFeedContentScrollViewDataSource-Protocol.h"
#import "WKFeedContentScrollViewDelegate-Protocol.h"
#import "WKFeedPageTabDataGetterDelegate-Protocol.h"
#import "WKFeedTabViewDelegate-Protocol.h"

@class NSArray, NSString, UIColor, UIView, WKFeedContentScrollView, WKFeedContentScrollViewCell, WKFeedPageTabDataGetter, WKFeedTabView, WKFeedWiFiLogoView;

@interface WKFeedPageTabController : UIViewController <WKFeedTabViewDelegate, WKFeedContentScrollViewDelegate, WKFeedContentScrollViewDataSource, WKFeedPageTabDataGetterDelegate, WKFeedContentScrollViewCellDelegate>
{
    _Bool _isTopAnimationViewHidden;
    _Bool _isViewDidAppear;
    _Bool _isShowed;
    double _topAnimateHeight;
    WKFeedTabView *_topScrollView;
    WKFeedContentScrollView *_contentScrollView;
    NSArray *_topTabs;
    unsigned long long _testCount;
    WKFeedPageTabDataGetter *_tabDataGetter;
    WKFeedContentScrollViewCell *_curCell;
    UIView *_errorView;
    UIView *_coverView;
    WKFeedWiFiLogoView *_indicatorView;
    NSArray *_refreshChannelArr;
    UIView *_topAnimationView;
    UIColor *_statusBarBgColor;
    UIView *_customTopAnimateView;
    UIView *_statusBarCoverView;
    UIView *_whiteView;
}

@property(retain, nonatomic) UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(retain, nonatomic) UIView *statusBarCoverView; // @synthesize statusBarCoverView=_statusBarCoverView;
@property(retain, nonatomic) UIView *customTopAnimateView; // @synthesize customTopAnimateView=_customTopAnimateView;
@property(retain, nonatomic) UIColor *statusBarBgColor; // @synthesize statusBarBgColor=_statusBarBgColor;
@property(retain, nonatomic) UIView *topAnimationView; // @synthesize topAnimationView=_topAnimationView;
@property(retain, nonatomic) NSArray *refreshChannelArr; // @synthesize refreshChannelArr=_refreshChannelArr;
@property(nonatomic) __weak WKFeedWiFiLogoView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak UIView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) _Bool isShowed; // @synthesize isShowed=_isShowed;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(nonatomic) __weak WKFeedContentScrollViewCell *curCell; // @synthesize curCell=_curCell;
@property(retain, nonatomic) WKFeedPageTabDataGetter *tabDataGetter; // @synthesize tabDataGetter=_tabDataGetter;
@property(nonatomic) unsigned long long testCount; // @synthesize testCount=_testCount;
@property(retain, nonatomic) NSArray *topTabs; // @synthesize topTabs=_topTabs;
@property(retain, nonatomic) WKFeedContentScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) WKFeedTabView *topScrollView; // @synthesize topScrollView=_topScrollView;
@property(nonatomic) _Bool isTopAnimationViewHidden; // @synthesize isTopAnimationViewHidden=_isTopAnimationViewHidden;
@property(nonatomic) double topAnimateHeight; // @synthesize topAnimateHeight=_topAnimateHeight;
- (void).cxx_destruct;
- (void)WKFeedContentScrollViewCellScrollToTop;
- (void)WKFeedContentScrollViewCellScrollAwayFromTop;
- (void)WKFeedContentScrollViewCelShouldReloadChannelsWithCurChannel:(id)arg1;
- (void)WKFeedPageTabDataGetCompleteWithError:(id)arg1 channel:(id)arg2;
- (void)WKFeedTabViewTabClicked:(id)arg1 channelIndex:(unsigned long long)arg2 atSameChannel:(_Bool)arg3;
- (void)scrollViewScrollToTop;
- (void)scrollViewDidAwayFromTop;
- (id)scrollView:(id)arg1 cellForColAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfCols:(id)arg1;
- (void)contentScrollViewDidEndDeceleratingl:(id)arg1;
- (void)contentScrollViewDidScroll:(id)arg1;
- (void)scrollView:(id)arg1 didLeaveCell:(id)arg2 forColAtIndex:(unsigned long long)arg3;
- (void)scrollView:(id)arg1 didScrollToCell:(id)arg2 forColAtIndex:(unsigned long long)arg3;
- (id)updateChannelsDataWithNewChannels:(id)arg1;
- (id)getOldchannelFromOriginIndex:(unsigned long long)arg1 channelId:(id)arg2;
- (void)refreshTabViewWithOldChannelId:(id)arg1;
- (void)errorBtnClick;
- (void)showErrorViewWithFlag:(_Bool)arg1;
- (void)createContentView;
- (void)createTopTabView;
- (void)createTopAnimationView;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setTopCustomView:(id)arg1;
- (void)tabBarControllerUnSelected;
- (void)tabBarControllerDidSelected;
- (void)scrollToIndex:(long long)arg1;
- (void)dealloc;
- (void)tipStatusChanged:(id)arg1;
- (void)playerBottomBatTouchEnd;
- (void)playerBottomBatTouchBegin;
- (id)initWithTopAnimateViewHeight:(double)arg1 backgroundColor:(id)arg2;
- (id)initWithTopAnimateView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

