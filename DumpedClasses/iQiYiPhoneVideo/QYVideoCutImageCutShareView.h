//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "QYVideoCutOutComeViewDelegate-Protocol.h"

@class IQYDownLoadManager, IQYVideoCutCreateManager, NSDictionary, NSString, QYPlayerShareView, QYPlayerViewController, QYTouchButton, QYVideoCutOutcomeView, SPActivityIndicatorView, UIButton, UIImage, UIImageView, UILabel;
@protocol QYVideoCutImageCutShareViewDelegate;

@interface QYVideoCutImageCutShareView : UIView <IQYDataLoadManagerDelegate, QYVideoCutOutComeViewDelegate>
{
    _Bool _isAnimationing;
    _Bool _hasDownloadVideo;
    _Bool _hasDownloadGif;
    _Bool _isCutDone;
    int _shareType;
    QYPlayerViewController *_playerViewController;
    id <QYVideoCutImageCutShareViewDelegate> _delegate;
    QYVideoCutOutcomeView *_outcomeView;
    QYPlayerShareView *_shareIconsView;
    UIImage *_cutimage;
    unsigned long long _cutType;
    UIView *_backgroundView;
    UIButton *_closeBtn;
    UILabel *_hintLabel;
    UIImageView *_hintView;
    UIView *_tabView;
    UIImageView *_tabBgView;
    UIButton *_gifBtn;
    UIButton *_shortVideoBtn;
    SPActivityIndicatorView *_loadingIndicator;
    QYTouchButton *_saveBtn;
    IQYVideoCutCreateManager *_createCutManager;
    IQYDownLoadManager *_downLoadManager;
    NSString *_taskId;
    NSDictionary *_cutData;
}

@property(nonatomic) int shareType; // @synthesize shareType=_shareType;
@property(nonatomic) _Bool isCutDone; // @synthesize isCutDone=_isCutDone;
@property(nonatomic) _Bool hasDownloadGif; // @synthesize hasDownloadGif=_hasDownloadGif;
@property(nonatomic) _Bool hasDownloadVideo; // @synthesize hasDownloadVideo=_hasDownloadVideo;
@property(retain, nonatomic) NSDictionary *cutData; // @synthesize cutData=_cutData;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) IQYDownLoadManager *downLoadManager; // @synthesize downLoadManager=_downLoadManager;
@property(retain, nonatomic) IQYVideoCutCreateManager *createCutManager; // @synthesize createCutManager=_createCutManager;
@property(retain, nonatomic) QYTouchButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) SPActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIButton *shortVideoBtn; // @synthesize shortVideoBtn=_shortVideoBtn;
@property(retain, nonatomic) UIButton *gifBtn; // @synthesize gifBtn=_gifBtn;
@property(retain, nonatomic) UIImageView *tabBgView; // @synthesize tabBgView=_tabBgView;
@property(retain, nonatomic) UIView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) UIImageView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) unsigned long long cutType; // @synthesize cutType=_cutType;
@property(retain, nonatomic) UIImage *cutimage; // @synthesize cutimage=_cutimage;
@property(retain, nonatomic) QYPlayerShareView *shareIconsView; // @synthesize shareIconsView=_shareIconsView;
@property(nonatomic) _Bool isAnimationing; // @synthesize isAnimationing=_isAnimationing;
@property(retain, nonatomic) QYVideoCutOutcomeView *outcomeView; // @synthesize outcomeView=_outcomeView;
@property(nonatomic) __weak id <QYVideoCutImageCutShareViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak QYPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void).cxx_destruct;
- (void)videoCutisFail;
- (void)videoCutHasDone:(id)arg1;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)showTextToast:(id)arg1;
- (void)dismissLoadingToast;
- (void)updateToast:(_Bool)arg1 message:(id)arg2;
- (void)showLoadingToast:(id)arg1;
- (void)cleanCacheFile;
- (void)getTemVideoCutDir;
- (id)getTemCutGifPath;
- (id)getTemCutVideoPath;
- (_Bool)isCutGifCacheExist;
- (_Bool)isCutVideoCacheExist;
- (void)downloadVideo:(id)arg1 withAction:(unsigned long long)arg2;
- (void)downloadGif:(id)arg1 withAction:(unsigned long long)arg2;
- (void)startLoadGifAndVideo:(double)arg1 end:(double)arg2;
- (void)doCutImageFinish:(id)arg1;
- (void)loadImageFinished:(id)arg1;
- (void)refreshSaveHintLabelAndViewIsSuccess:(_Bool)arg1;
- (void)startAnimationWithImage:(id)arg1;
- (void)doUnLock;
- (void)doLock;
- (void)saveBtnClick:(id)arg1;
- (void)shortVideBtnClick;
- (void)gifBtnClick;
- (void)closeSelf;
- (void)shareGifOrVideo:(int)arg1;
- (void)createShareIconView;
- (void)startAnimationWith:(id)arg1;
- (void)tapOnMe:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 andPlayerViewController:(id)arg2 withVideoCutType:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 andPlayerViewController:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

