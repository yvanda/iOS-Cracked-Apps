//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVViewController.h"

@class KGDefaultNetErrorView, KTVCommonTableViewRE, KTVEmptyView, KTVJudgeListVLL, KTVJudgeListViewModel, UIView;

@interface KTVJudgeListController : KTVViewController
{
    int _playerId;
    KTVCommonTableViewRE *_listTableView;
    KTVJudgeListViewModel *_viewModel;
    KTVJudgeListVLL *_listVll;
    KTVEmptyView *_emptyView;
    KGDefaultNetErrorView *_netErrorView;
    UIView *_bG;
}

@property(retain, nonatomic) UIView *bG; // @synthesize bG=_bG;
@property(retain, nonatomic) KGDefaultNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) KTVEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) KTVJudgeListVLL *listVll; // @synthesize listVll=_listVll;
@property(retain, nonatomic) KTVJudgeListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) KTVCommonTableViewRE *listTableView; // @synthesize listTableView=_listTableView;
@property(nonatomic) int playerId; // @synthesize playerId=_playerId;
- (void).cxx_destruct;
- (void)themeColorWillChanged:(id)arg1;
- (void)dismissNetError;
- (void)showNetErrorOnView:(id)arg1;
- (void)dismissEmpty;
- (void)showEmptyOnView:(id)arg1;
- (long long)showPlayBarWay;
- (void)actionMedalRule;
- (void)pushToJudgeViewController;
- (void)pushToJudgeLevelController;
- (void)congfigViewController;
- (void)loadData;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithPlayerId:(int)arg1;

@end
