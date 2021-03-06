//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGMusicTableViewAdapterDataSource.h"
#import "KGMusicTableViewAdapterDelegate.h"
#import "KuQunPlayStatusChangeDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class KGDefaultHoldTipsView, KGDefaultNetErrorView, KGMusicCoverView, KGMusicTableViewAdapter, KGThemeImageView, KGThemeLabel, NSMutableArray, NSString, UGCAlbumDetailInfo, UGCCollectDetailInfo, UIView;

@interface KGUGCDetailInfoViewController : KGViewController <KGMusicTableViewAdapterDataSource, KGMusicTableViewAdapterDelegate, UIGestureRecognizerDelegate, KuQunPlayStatusChangeDelegate>
{
    long long _listId;
    KGMusicTableViewAdapter *_listTableAdpter;
    KGMusicCoverView *_coverView;
    double _coverInset;
    UIView *_coverArea;
    UIView *_coverAreaBackground;
    UIView *_infoView;
    KGThemeLabel *_firstLabel;
    KGThemeLabel *_secondLabel;
    KGThemeImageView *_iconImage;
    UGCCollectDetailInfo *_collectInfo;
    UGCAlbumDetailInfo *_albumInfo;
    long long _fromType;
    NSString *_titleVC;
    KGThemeImageView *_rightArrow;
    KGThemeImageView *_albumIcon;
    KGThemeLabel *_footView;
    NSMutableArray *_listArr;
    KGDefaultNetErrorView *_netErrorView;
    KGDefaultHoldTipsView *_blankView;
}

@property(retain, nonatomic) KGDefaultHoldTipsView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) KGDefaultNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) NSMutableArray *listArr; // @synthesize listArr=_listArr;
@property(retain, nonatomic) KGThemeLabel *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) KGThemeImageView *albumIcon; // @synthesize albumIcon=_albumIcon;
@property(retain, nonatomic) KGThemeImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(copy, nonatomic) NSString *titleVC; // @synthesize titleVC=_titleVC;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) UGCAlbumDetailInfo *albumInfo; // @synthesize albumInfo=_albumInfo;
@property(retain, nonatomic) UGCCollectDetailInfo *collectInfo; // @synthesize collectInfo=_collectInfo;
@property(retain, nonatomic) KGThemeImageView *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) KGThemeLabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) KGThemeLabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIView *coverAreaBackground; // @synthesize coverAreaBackground=_coverAreaBackground;
@property(retain, nonatomic) UIView *coverArea; // @synthesize coverArea=_coverArea;
@property(nonatomic) double coverInset; // @synthesize coverInset=_coverInset;
@property(retain, nonatomic) KGMusicCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) KGMusicTableViewAdapter *listTableAdpter; // @synthesize listTableAdpter=_listTableAdpter;
@property(nonatomic) long long listId; // @synthesize listId=_listId;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updataRowInfosDic:(id)arg1 needRefresh:(_Bool)arg2;
- (void)requestAgain;
- (void)fillContent;
- (void)coverTap:(id)arg1;
- (void)getData;
- (void)createUI;
- (void)getAlbumInfoSongList;
- (void)getCollectInfoSongList;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithAlbumDetailID:(long long)arg1 withAlbumTitle:(id)arg2;
- (id)initWithCollectDetialID:(long long)arg1 withCollectTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

