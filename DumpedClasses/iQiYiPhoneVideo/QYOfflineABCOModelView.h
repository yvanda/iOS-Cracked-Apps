//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYOfflineACOSchemeViewDelegate-Protocol.h"
#import "QYOfflineBSchemeViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QYOfflineACOSchemeView, QYOfflineBSchemeView;
@protocol QYOfflineABCOModelViewDelegate;

@interface QYOfflineABCOModelView : UIView <QYOfflineACOSchemeViewDelegate, QYOfflineBSchemeViewDelegate>
{
    _Bool _isMigrating;
    _Bool _isEditModel;
    id <QYOfflineABCOModelViewDelegate> _delegate;
    long long _currentModel;
    NSMutableArray *_dataArray;
    QYOfflineACOSchemeView *_offlineView1;
    QYOfflineBSchemeView *_offlineView2;
}

@property(retain, nonatomic) QYOfflineBSchemeView *offlineView2; // @synthesize offlineView2=_offlineView2;
@property(retain, nonatomic) QYOfflineACOSchemeView *offlineView1; // @synthesize offlineView1=_offlineView1;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) _Bool isEditModel; // @synthesize isEditModel=_isEditModel;
@property(nonatomic) _Bool isMigrating; // @synthesize isMigrating=_isMigrating;
@property(nonatomic) long long currentModel; // @synthesize currentModel=_currentModel;
@property(nonatomic) id <QYOfflineABCOModelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pingbackT22;
- (void)pingbackT21;
- (void)pingbackT20With:(long long)arg1 withNum:(long long)arg2;
- (void)pingbackT20With:(long long)arg1;
- (void)offlineBViewClickMyCartoonTaped:(long long)arg1;
- (void)offlineBViewClickMyBookTaped:(long long)arg1;
- (void)offlineBViewClickMenuTag:(long long)arg1;
- (void)offlineBViewOpenFolderWithOperateId:(id)arg1 Title:(id)arg2;
- (void)offlineACOViewDelegateVideo:(long long)arg1 withVideoNum:(long long)arg2;
- (void)offlineACOViewIsUserBackBtn:(_Bool)arg1;
- (void)offlineACOViewManageEditBtn:(int)arg1;
- (void)offlineACOViewOpenFolderWithOperateId:(id)arg1 Title:(id)arg2;
- (void)showCurrentView;
- (void)exitOfflineCenterView;
- (void)reloadDataWithIndexPaths:(id)arg1;
- (void)reloadData;
- (_Bool)isHasVideoRed;
- (_Bool)isHasComicRed;
- (void)createOfflineModelUI;
- (id)initWithFrame:(struct CGRect)arg1 WithModel:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

