//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"

@class KGDefaultNetErrorView, KGTableView, KQItemEntity, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, RefreshControl, UIScrollView;

@interface PersonalMoreKuqunViewController : KGViewController <UITableViewDataSource, RefreshControlDelegate>
{
    NSDictionary *_allKuquns;
    NSMutableArray *_allKuqunArr;
    NSMutableArray *_kuqunNameArr;
    KGTableView *_myTableView;
    UIScrollView *_errorView;
    KGDefaultNetErrorView *_netErrorView;
    RefreshControl *_refreshControl;
    KQItemEntity *_kQItemEntityBean;
    long long _userid;
    NSMutableDictionary *_dicSection;
}

@property(retain, nonatomic) NSMutableDictionary *dicSection; // @synthesize dicSection=_dicSection;
@property(nonatomic) long long userid; // @synthesize userid=_userid;
- (void).cxx_destruct;
- (void)obtainIntoGroupDetailInfoWithModel:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)creatMyKuQunCell:(id)arg1 addLine:(_Bool)arg2 sectionName:(id)arg3 isMyCreateKQ:(_Bool)arg4 andIndexPath:(id)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showLoadErrorState;
- (void)showLoadsuccessState;
- (void)showLoadingState;
- (void)handleKuQun:(id)arg1;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)requestData;
- (void)initData;
- (void)creatErrorView;
- (void)initUi;
- (long long)showPlayBarWay;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
