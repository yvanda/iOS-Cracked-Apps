//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "QQMoreOptionTableViewCellScrollStateDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, ODRefreshControl, QQAlertView, QQEngine, QQHotChatModel, UILongPressGestureRecognizer, UIViewController;

@interface LBSOpenGroupMemView : UITableView <QQMoreOptionTableViewCellScrollStateDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate>
{
    QQEngine *reqEngine;
    NSArray *_sectionArray;
    NSArray *_fullSectionIndexTitles;
    NSArray *_existSectionIndexTitles;
    _Bool _isShowSectionIndexTitles;
    NSArray *_headerViewArray;
    NSString *pGroupCode;
    NSMutableDictionary *pCellArray;
    UIViewController *pushContol;
    ODRefreshControl *_odRefreshControl;
    _Bool _isSearching;
    QQHotChatModel *_hotChatModel;
    int _atAllSeq;
    int _atAllCount;
    NSString *_atAllTips;
    NSString *_canNotAtAllTips;
    int _xo;
    _Bool _isDragToBack;
    _Bool _myEditing;
    _Bool _isEditModel;
    _Bool _shouldReload;
    int _currentAdminCount;
    NSMutableArray *_fliterArray;
    long long _fromType;
    long long _entryType;
    id <GroupMemberListDelegate> _memListDelegate;
    UILongPressGestureRecognizer *_touchGestureRecognizer;
    NSIndexPath *_leftSwipCellIndex;
    QQAlertView *_alertView;
    NSArray *_memberList;
    NSString *_searchContent;
    NSMutableArray *_multiDeleteArr;
}

@property(retain, nonatomic) NSMutableArray *multiDeleteArr; // @synthesize multiDeleteArr=_multiDeleteArr;
@property(retain, nonatomic) NSString *searchContent; // @synthesize searchContent=_searchContent;
@property(nonatomic) _Bool shouldReload; // @synthesize shouldReload=_shouldReload;
@property(retain, nonatomic) NSArray *memberList; // @synthesize memberList=_memberList;
@property(retain, nonatomic) QQAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) _Bool isEditModel; // @synthesize isEditModel=_isEditModel;
@property(nonatomic) int currentAdminCount; // @synthesize currentAdminCount=_currentAdminCount;
@property(nonatomic) _Bool myEditing; // @synthesize myEditing=_myEditing;
@property(nonatomic) _Bool isDragToBack; // @synthesize isDragToBack=_isDragToBack;
@property(retain, nonatomic) NSIndexPath *leftSwipCellIndex; // @synthesize leftSwipCellIndex=_leftSwipCellIndex;
@property(retain, nonatomic) UILongPressGestureRecognizer *touchGestureRecognizer; // @synthesize touchGestureRecognizer=_touchGestureRecognizer;
@property(nonatomic) id <GroupMemberListDelegate> memListDelegate; // @synthesize memListDelegate=_memListDelegate;
@property(nonatomic) long long entryType; // @synthesize entryType=_entryType;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(retain) NSMutableArray *fliterArray; // @synthesize fliterArray=_fliterArray;
- (void).cxx_destruct;
- (void)setOrDeleteAdmin:(id)arg1 isDelete:(_Bool)arg2;
- (void)onRequestGroupAll:(id)arg1;
- (void)endRefreshWithResult:(_Bool)arg1;
- (void)dropViewDidBeginRefreshing:(id)arg1;
- (_Bool)isRefreshControlLoading;
- (void)filterContentForSearchText:(id)arg1;
- (id)fliterLikeWord:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)deleteMembeWithMySelf:(id)arg1;
- (void)deleteMembeWithUin:(long long)arg1;
- (void)deleteMember:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)deleteMultiMember;
- (_Bool)canSetOrDeleteAdminAtIndexPath:(id)arg1;
- (_Bool)canDeleteMemAtIndexPath:(id)arg1;
- (_Bool)canEditRowAtIndexPath:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMemberSetToAdmin:(id)arg1;
- (void)onMemberDelete:(id)arg1 inTableView:(id)arg2;
- (void)onMemberSetOrDeleteToAdmin:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)_sectionNameOfMember:(id)arg1;
- (void)_removeMemberModelFromSectionArray:(id)arg1;
- (id)_memberModelForRowAtIndexPath:(id)arg1;
- (void)_setShowNameToAllMembersInArray:(id)arg1;
- (id)_sectionNameOfMemberWithManager:(id)arg1 memberArray:(id)arg2;
- (void)_setMemberStateToAllMembersInArrayWithManager:(id)arg1;
- (id)getSpecialTitle:(id)arg1;
- (int)getManagerCount:(id)arg1;
- (int)getGuestCount:(id)arg1;
- (id)getHost:(id)arg1;
- (int)getHostCount:(id)arg1;
- (void)_regenerateSectionArrayFromMemberArrayWithManager:(id)arg1;
- (void)_regenerateSectionArrayFromMemberArray:(id)arg1;
- (void)test;
- (_Bool)reloadOpenGroupMemList:(id)arg1;
- (_Bool)ReloadMemList;
- (void)setPushContr:(id)arg1;
- (void)updateMyControllerRightButtion;
@property(nonatomic) _Bool isSearching; // @dynamic isSearching;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1 GroupCode:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)resetScrollToLeftState;
- (void)leftSwipTouchDown;
- (void)resetLeftSwipGesture;
- (void)removeTouchGesture;
- (_Bool)isMessageTabInLeftSwipState;
- (void)tableView:(id)arg1 scrollBackToCenterStateInRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 scrollToLeftSwipStateInRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) QQHotChatModel *hotChatModel; // @dynamic hotChatModel;
@property(readonly) Class superclass;

@end

