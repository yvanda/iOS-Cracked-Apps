//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLMediaPlayerBusinessBase.h"

#import "QLPlayNextTipsThumbView.h"
#import "QLRequestModelDelegate.h"
#import "QLVideoEndRecommandViewDelegate.h"
#import "QLVideoEndRecommendBusinessProperty.h"

@class NSMutableArray, NSString, NSTimer, QLJCEPoster, QLJCEVideoEndRecommedModel, QLJCEVideoItemExtra, QLPlayNextTipsThumbView, QLVideoEndRecommandView, UIButton;

@interface QLVideoEndRecommendBusiness : QLMediaPlayerBusinessBase <QLRequestModelDelegate, QLPlayNextTipsThumbView, QLVideoEndRecommandViewDelegate, QLVideoEndRecommendBusinessProperty>
{
    _Bool _hasReplacePlayButton;
    _Bool _isShowingNextTips;
    _Bool _shouldShowNextTips;
    _Bool _hadClose;
    _Bool _hadShowToast;
    _Bool _playbackFinish;
    _Bool _backADFinish;
    _Bool _closePlayer;
    _Bool _shouldContinuePlay;
    _Bool *_isRecommending;
    QLJCEVideoEndRecommedModel *_endRecmModel;
    NSMutableArray *_aryRecmData;
    QLVideoEndRecommandView *_endRecmView;
    UIButton *_fullScreenFreshBtn;
    UIButton *_smallWiddowFreshBtn;
    NSString *_requestEndRecommandKey;
    QLPlayNextTipsThumbView *_nextTipsView;
    NSTimer *_jumpTimer;
    QLJCEPoster *_currentPoster;
    QLJCEVideoItemExtra *_currentExtraInfo;
    UIButton *_closeBtn;
    NSTimer *_continuePlayTimer;
}

@property(nonatomic) _Bool shouldContinuePlay; // @synthesize shouldContinuePlay=_shouldContinuePlay;
@property(retain, nonatomic) NSTimer *continuePlayTimer; // @synthesize continuePlayTimer=_continuePlayTimer;
@property(nonatomic) _Bool closePlayer; // @synthesize closePlayer=_closePlayer;
@property(nonatomic) _Bool backADFinish; // @synthesize backADFinish=_backADFinish;
@property(nonatomic) _Bool playbackFinish; // @synthesize playbackFinish=_playbackFinish;
@property(nonatomic) _Bool hadShowToast; // @synthesize hadShowToast=_hadShowToast;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) _Bool hadClose; // @synthesize hadClose=_hadClose;
@property(retain, nonatomic) QLJCEVideoItemExtra *currentExtraInfo; // @synthesize currentExtraInfo=_currentExtraInfo;
@property(retain, nonatomic) QLJCEPoster *currentPoster; // @synthesize currentPoster=_currentPoster;
@property(retain, nonatomic) NSTimer *jumpTimer; // @synthesize jumpTimer=_jumpTimer;
@property(nonatomic) _Bool shouldShowNextTips; // @synthesize shouldShowNextTips=_shouldShowNextTips;
@property(nonatomic) _Bool isShowingNextTips; // @synthesize isShowingNextTips=_isShowingNextTips;
@property(retain, nonatomic) QLPlayNextTipsThumbView *nextTipsView; // @synthesize nextTipsView=_nextTipsView;
@property(copy, nonatomic) NSString *requestEndRecommandKey; // @synthesize requestEndRecommandKey=_requestEndRecommandKey;
@property _Bool hasReplacePlayButton; // @synthesize hasReplacePlayButton=_hasReplacePlayButton;
@property(retain, nonatomic) UIButton *smallWiddowFreshBtn; // @synthesize smallWiddowFreshBtn=_smallWiddowFreshBtn;
@property(retain, nonatomic) UIButton *fullScreenFreshBtn; // @synthesize fullScreenFreshBtn=_fullScreenFreshBtn;
@property(retain, nonatomic) QLVideoEndRecommandView *endRecmView; // @synthesize endRecmView=_endRecmView;
@property(retain, nonatomic) NSMutableArray *aryRecmData; // @synthesize aryRecmData=_aryRecmData;
@property(retain, nonatomic) QLJCEVideoEndRecommedModel *endRecmModel; // @synthesize endRecmModel=_endRecmModel;
@property(nonatomic) _Bool *isRecommending; // @synthesize isRecommending=_isRecommending;
- (void).cxx_destruct;
- (void)stopAllTimer;
- (void)lockContinuePlay;
- (void)stopContinuePlayTimer;
- (void)setupContinuePlayTimer;
- (void)reportJumpAction:(_Bool)arg1 andType:(_Bool)arg2;
- (void)reportShowUp;
- (id)createReportDic;
- (long long)makeNextEpisodeIndex;
- (void)checkAndShowToast:(_Bool)arg1;
- (void)showJumpToast:(id)arg1;
- (void)playFirstRecommendItem;
- (void)handleEndAction;
- (_Bool)shouldHideBanaba;
- (_Bool)shouldHideRemoteBtn;
- (void)didScroll;
- (void)didClickFirstTips;
- (void)didClickTips;
- (void)closeAction;
- (void)didPressTipsCloseBtn;
- (void)pressCloseBtn:(id)arg1;
- (void)resetAction;
- (_Bool)isDetaillPageFeedFlowStyle;
- (_Bool)checkShouldShowNextVideoTips;
- (double)getAnimationStartPosition;
- (double)getAnimationDuration;
- (void)stopJumpTimer;
- (void)setupJumpTimer;
- (void)didMediaPlayerEventOccur:(int)arg1 userInfo:(id)arg2;
- (void)mpbMediaClosed;
- (_Bool)isShowingPlayNextTips;
- (_Bool)mpbMgrNeedPlayerStateNotification:(id)arg1;
- (void)mpbMediaRotatetionChange;
- (_Bool)showedEndRecmView;
- (_Bool)shouldShowEndRecmView;
- (void)mpbStartToPlayMedia;
- (void)beforeShowTipsViewAction;
- (void)showNextTips;
- (void)performActionAfterBackAD;
- (void)mpbPlayBackFinished;
- (void)mpbJobsAfterPlayBackFinished;
- (_Bool)shouldWaitBackAD;
- (_Bool)mpbShouldContinuePlay;
- (_Bool)shouldContinuePlayFeedsFlow;
- (void)checkToPopOpenPushNotification;
- (void)mpbMgrSetDataSource:(id)arg1;
- (id)mpbMgrBusinessIdentifier;
- (void)didMediaPlayerProgressUpdated:(double)arg1 duration:(double)arg2;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(id)arg2 playerCtl:(id)arg3;
- (void)doActionAfterRemoveRecmViewFromSuperView;
- (void)replayClickAction;
- (void)initRefreshButton;
- (void)removeRefreshButtonInControlView;
- (void)addRefreshButtonInControlView;
- (id)generateRecommandView:(id)arg1;
- (void)doShowAllControlViewInFullScreen;
- (void)doShowAllControlViewInSmallWindow;
- (void)enableCertainControllViewInInFullScreen;
- (void)enableCertainControllViewInInSmallWindow;
- (void)disableCertainControllViewInInFullScreen;
- (void)disableCertainControllViewInInSmallWindow;
- (void)removeAllTipsViewWithRotate:(_Bool)arg1;
- (void)removeAllTipsView;
- (void)removeNextTipsView:(_Bool)arg1;
- (void)removeEndRecmView:(_Bool)arg1;
- (void)addOuterSubviewWithRotateScreen:(_Bool)arg1;
- (void)addOuterSubview;
- (void)requestModelDidFinishLoad:(id)arg1;
- (long long)isRecommandDataVideoPayStateFree;
- (id)getRecommandDataCorrespoindVideoType;
- (id)getCurrentPlayingVideoDataList;
- (id)getCurrentPlayingVideoItem;
- (_Bool)checkIfLastPlayedVideoInVideolistsOfPlayer;
- (id)getVideoItemExtraData:(_Bool)arg1;
- (void)doExtraActionByVideoItemExtraData;
- (_Bool)hasDataListWithDataKey:(id)arg1;
- (id)getNextKeyFromSequentKeys;
- (_Bool)shouldDoExtarActionByVideoItemExtraData;
- (id)getEndRecommandKey;
- (void)loadData;
- (void)giftPosterClick;
- (void)endRecmPosterClickedAction:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

