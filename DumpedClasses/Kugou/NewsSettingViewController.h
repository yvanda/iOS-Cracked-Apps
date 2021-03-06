//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, SendMeMsgSettingViewController, UITableView, UIView;

@interface NewsSettingViewController : KGViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isLoginIn;
    _Bool _isNormalUser;
    long long _selectedIndex;
    _Bool _isSettingBefore;
    UIView *_contentView;
    UIView *_footerView;
    _Bool _isShowMusicRank;
    _Bool _isOpenUserNotiSetting;
    int _indexOfNewMessage;
    int _indexOfMessageNotifyWay;
    int _indexOfMessageNotifyType;
    int _indexOfChatConfig;
    int _indexOfBlacklist;
    int _indexOfPrivacy;
    UITableView *_tableView;
    SendMeMsgSettingViewController *_chooseVC;
}

@property(nonatomic) int indexOfPrivacy; // @synthesize indexOfPrivacy=_indexOfPrivacy;
@property(nonatomic) int indexOfBlacklist; // @synthesize indexOfBlacklist=_indexOfBlacklist;
@property(nonatomic) int indexOfChatConfig; // @synthesize indexOfChatConfig=_indexOfChatConfig;
@property(nonatomic) int indexOfMessageNotifyType; // @synthesize indexOfMessageNotifyType=_indexOfMessageNotifyType;
@property(nonatomic) int indexOfMessageNotifyWay; // @synthesize indexOfMessageNotifyWay=_indexOfMessageNotifyWay;
@property(nonatomic) int indexOfNewMessage; // @synthesize indexOfNewMessage=_indexOfNewMessage;
@property(nonatomic) _Bool isOpenUserNotiSetting; // @synthesize isOpenUserNotiSetting=_isOpenUserNotiSetting;
@property(nonatomic) _Bool isShowMusicRank; // @synthesize isShowMusicRank=_isShowMusicRank;
@property(retain, nonatomic) SendMeMsgSettingViewController *chooseVC; // @synthesize chooseVC=_chooseVC;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (_Bool)networkIsOK;
- (long long)showPlayBarWay;
- (void)chooseViewDismiss;
- (void)settingSwitchPressed:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)pushToBlackListVC;
- (void)changeChatConfig;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshIsOpenUserNotiSetting;
- (void)refreshSectionIndex;
- (void)addFooterView;
- (void)initTableView;
- (void)didReceiveMemoryWarning;
- (void)reloadTable;
- (void)enterForegroundNotification;
- (void)dealloc;
- (void)getMusicRankVisibleData;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

