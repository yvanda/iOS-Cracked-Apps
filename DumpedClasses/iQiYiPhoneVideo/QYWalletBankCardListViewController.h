//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IQYBankCardInfo, IQYCardInfoManager, NSDictionary, NSMutableArray, NSString, UITableView, UIView;

@interface QYWalletBankCardListViewController : QYCommonViewController <UITableViewDelegate, UITableViewDataSource, IQYDataLoadManagerDelegate>
{
    UITableView *_tableView;
    UIView *_tableViewHeaderView;
    NSMutableArray *_bankCards;
    long long _listType;
    CDUnknownBlockType _changeBankCardBlock;
    IQYCardInfoManager *_cardInfoManager;
    IQYBankCardInfo *_curWithDrawCardInfo;
    NSString *_orderCode;
    NSDictionary *_extendParames;
}

@property(retain, nonatomic) NSDictionary *extendParames; // @synthesize extendParames=_extendParames;
@property(retain, nonatomic) NSString *orderCode; // @synthesize orderCode=_orderCode;
@property(retain, nonatomic) IQYBankCardInfo *curWithDrawCardInfo; // @synthesize curWithDrawCardInfo=_curWithDrawCardInfo;
@property(retain, nonatomic) IQYCardInfoManager *cardInfoManager; // @synthesize cardInfoManager=_cardInfoManager;
@property(copy, nonatomic) CDUnknownBlockType changeBankCardBlock; // @synthesize changeBankCardBlock=_changeBankCardBlock;
@property(nonatomic) long long listType; // @synthesize listType=_listType;
@property(retain, nonatomic) NSMutableArray *bankCards; // @synthesize bankCards=_bankCards;
@property(retain, nonatomic) UIView *tableViewHeaderView; // @synthesize tableViewHeaderView=_tableViewHeaderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)retryRequest;
- (void)reloadCardListViewWithBankCard:(id)arg1;
- (void)walletBindBankCardSuccess:(id)arg1;
- (void)addBankCardAction:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)qyCommonViewAppear;
- (void)setListVCTitleHeardWithType:(long long)arg1;
- (void)loadView;
- (void)loadMyBankCardList;
- (void)retryPwdSuccess:(id)arg1;
- (void)viewDidLoad;
- (id)initWalletBankCardListWithType:(long long)arg1 extendParames:(id)arg2 bankCards:(id)arg3 changeBankCardCallBack:(CDUnknownBlockType)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

