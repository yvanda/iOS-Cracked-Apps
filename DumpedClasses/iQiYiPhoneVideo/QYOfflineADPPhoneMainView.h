//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYOfflineADPPhoneBottomViewDelegate-Protocol.h"
#import "QYOfflineADPPhoneCenterViewDelegate-Protocol.h"
#import "QYOfflineADPPhoneMasterDelegate-Protocol.h"
#import "QYOfflineADPPhoneResViewDelegate-Protocol.h"
#import "QYOfflineADPPhoneSingleResViewDelegate-Protocol.h"
#import "QYOfflineADPPhoneTopViewDelegate-Protocol.h"
#import "QYOfflinePhoneManagerDelegate-Protocol.h"

@class NSString, QYDownloadAddAnimation, QYDownloadRate, QYOfflineADPADModel, QYOfflineADPPhoneBottomView, QYOfflineADPPhoneCenterView, QYOfflineADPPhoneMaster, QYOfflineADPPhoneResView, QYOfflineADPPhoneSingleResView, QYOfflineADPPhoneTopView;
@protocol QYOfflineADPPhoneMainViewDelegate;

@interface QYOfflineADPPhoneMainView : UIView <QYOfflineADPPhoneMasterDelegate, QYOfflineADPPhoneTopViewDelegate, QYOfflineADPPhoneBottomViewDelegate, QYOfflineADPPhoneResViewDelegate, QYOfflineADPPhoneCenterViewDelegate, QYOfflineADPPhoneSingleResViewDelegate, QYOfflinePhoneManagerDelegate>
{
    QYOfflineADPPhoneMaster *_downloadMaster;
    QYDownloadAddAnimation *_addAnimation;
    QYOfflineADPADModel *_adModel;
    QYDownloadRate *_didSelectRate;
    long long _alertIndex;
    _Bool _isFirstDubi;
    long long _fromType;
    _Bool _isCanAddCache;
    _Bool _isHasCachingTasks;
    _Bool _isTaiwan;
    _Bool _isVIP;
    int _clickedStyle;
    id <QYOfflineADPPhoneMainViewDelegate> _delegate;
    QYOfflineADPPhoneTopView *_topPhoneView;
    QYOfflineADPPhoneBottomView *_bottomPhoneView;
    QYOfflineADPPhoneResView *_resPhoneView;
    QYOfflineADPPhoneCenterView *_centerPhoneView;
    QYOfflineADPPhoneSingleResView *_resPhoneSingleView;
}

+ (float)getBottomViewHeightWithFromeType:(long long)arg1 WithMultiEpisodeType:(_Bool)arg2 isTaiwanArea:(_Bool)arg3;
+ (float)getTopViewHeightWithFromeType:(long long)arg1 WithMultiEpisodeType:(_Bool)arg2;
@property(retain, nonatomic) QYOfflineADPPhoneSingleResView *resPhoneSingleView; // @synthesize resPhoneSingleView=_resPhoneSingleView;
@property(retain, nonatomic) QYOfflineADPPhoneCenterView *centerPhoneView; // @synthesize centerPhoneView=_centerPhoneView;
@property(retain, nonatomic) QYOfflineADPPhoneResView *resPhoneView; // @synthesize resPhoneView=_resPhoneView;
@property(retain, nonatomic) QYOfflineADPPhoneBottomView *bottomPhoneView; // @synthesize bottomPhoneView=_bottomPhoneView;
@property(retain, nonatomic) QYOfflineADPPhoneTopView *topPhoneView; // @synthesize topPhoneView=_topPhoneView;
@property(nonatomic) id <QYOfflineADPPhoneMainViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offlineStatueWiFiToFreeWwan:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)downloadPhoneMasterLimitTipCanDownloadNum:(long long)arg1;
- (void)downloadPhoneMasterGotoLogin:(id)arg1;
- (void)downloadPhoneMasterFilterEpisodesForDownloadEndWithNum:(int)arg1;
- (void)downloadPhoneMasterStatusChange;
- (void)downloadPhoneMaster:(id)arg1 eventDidChanged:(int)arg2;
- (void)downloadPhoneMasterCacheResultByDownload:(int)arg1;
- (_Bool)checkPhoneSingleResIsCachedWithRate:(id)arg1;
- (void)clickCachePhoneSingleResWithRate:(id)arg1;
- (_Bool)isCanCachedPhoneSingleResWithRate:(id)arg1;
- (void)didScrollerPhoneCenterViewWithStatus:(long long)arg1;
- (void)didSelectPhoneADImageWithInfoDic:(id)arg1;
- (void)loadPhoneADImageResult:(long long)arg1 infoDic:(id)arg2;
- (void)cacheVedioByEpisodeData:(id)arg1 WithCellIV:(id)arg2;
- (void)didSelectPhoneCacheListVideoByData:(id)arg1 WithCellIV:(id)arg2;
- (_Bool)getCheckoutDownloadDubi:(_Bool)arg1;
- (id)getCheckDownloadRateWithRate:(id)arg1;
- (void)setResListValue:(id)arg1;
- (void)foldPhoneResView;
- (void)selectPhoneResValue:(id)arg1;
- (void)didSelectPhoneOfflineBottomViewTapGesture;
- (void)didSelectPhoneOfflineBottomViewSelectAll:(_Bool)arg1;
- (void)didSelectPhoneOfflineBottomViewOffline;
- (void)dubiPhoneOfflineTopViewStatus:(int)arg1;
- (void)didDelectPhoneOfflineTopViewTapAction;
- (void)didSelectPhoneOfflineTopViewChangeClarity:(_Bool)arg1;
- (void)createFloatViewWith:(id)arg1;
- (void)createAlertViewWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 delegate:(id)arg5 tag:(long long)arg6;
- (void)openVIP:(id)arg1;
- (void)stoploading;
- (void)startloading;
- (void)showOfflineDownLoadDisable:(id)arg1;
- (void)showAddSuccessTipView;
- (void)showAlertByCacheResult:(int)arg1;
- (long long)getCurrentDownloadStateWithAtomItem:(id)arg1;
- (_Bool)offlineFromeStyle:(int)arg1 offlineStatus:(long long)arg2 forData:(id)arg3;
- (void)startCacheWithClickedStyle:(int)arg1;
- (void)addVideosToOfflineWithClickedStyle:(int)arg1 withAtomItem:(id)arg2;
- (void)didClickedSelectAllStatus:(_Bool)arg1;
- (void)addCacheNumAnimation;
- (void)bottomCacheTaskNum:(long long)arg1;
- (void)bottomSelectAllStatus:(_Bool)arg1;
- (void)reloadAddVideoWithStyle:(int)arg1 isAdded:(_Bool)arg2;
- (void)createBottomViewWithFrame:(struct CGRect)arg1;
- (void)managerClarityButton:(_Bool)arg1;
- (void)changeResViewWithFirst:(_Bool)arg1;
- (void)createTopViewWithFrame:(struct CGRect)arg1;
- (void)loadSingleResADModel:(id)arg1;
- (void)reloadSingleResView;
- (void)updateSingleResArray:(id)arg1;
- (void)createSingleResViewWithFrame:(struct CGRect)arg1;
- (void)setResViewIsFold:(_Bool)arg1;
- (void)setResViewWithFirst:(_Bool)arg1 updateFrame:(struct CGRect)arg2;
- (void)setResViewContentWithRate:(id)arg1 curResList:(id)arg2;
- (void)loadCenterADModel:(id)arg1;
- (void)createCenterViewWithFrame:(struct CGRect)arg1;
- (void)createDownloadViewByType:(long long)arg1;
- (void)createBackGroundColor;
- (void)reloadData;
- (void)loadADModel:(id)arg1;
- (void)loadData:(id)arg1;
- (void)addObserver;
- (id)initWithFrame:(struct CGRect)arg1 fromType:(long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

