//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LocalScrollPageViewController.h"

#import "KGIndexViewDelegate.h"
#import "KGLocalFileSheetControllerDelegate.h"
#import "KGMusicControlNewControlerDelegate.h"
#import "KGMusicTableCellPlayStateDelegate.h"
#import "KGMusicTableViewAdapterDataSource.h"
#import "KGMusicTableViewAdapterDelegate.h"
#import "KGMusicTableViewPlayingCellDelegate.h"
#import "NoMusicViewDelegate.h"
#import "UISearchBarDelegate.h"

@class KGDefaultMoreView, KGIndexView, KGLocalSongSortView, KGLocalSongUpdateListVM, KGLocalSongUpdateTipsView, KGMusicControlNewControler, KGMusicPlayingCellExposureStatistis, KGMusicTableViewAdapter, KGSearchNoResultView, KGThemeButton, KGThemeLabel, NSArray, NSMutableArray, NSMutableDictionary, NSString, NoMuicView, UIView;

@interface KGLocalSongViewController : LocalScrollPageViewController <KGMusicTableViewAdapterDataSource, KGMusicTableViewAdapterDelegate, KGMusicTableCellPlayStateDelegate, KGIndexViewDelegate, NoMusicViewDelegate, UISearchBarDelegate, KGMusicControlNewControlerDelegate, KGMusicTableViewPlayingCellDelegate, KGLocalFileSheetControllerDelegate>
{
    KGMusicTableViewAdapter *_tableViewAdapter;
    KGIndexView *_indexView;
    NoMuicView *_noMusicView;
    UIView *_headerView;
    KGThemeLabel *_footViewLable;
    KGThemeButton *_sortLocalBtn;
    KGDefaultMoreView *_moreView;
    _Bool _needObserverLocalChange;
    _Bool _isIndexing;
    _Bool _hiddenSortBtn;
    _Bool _scrollDragging;
    _Bool _isFirstLoaded;
    _Bool _needAuthenticate;
    _Bool _runAfterInstall;
    _Bool _isAutoScroll;
    _Bool _inSearching;
    int _sortType;
    KGMusicControlNewControler *_musicControl;
    NSMutableArray *_allLocalMusicArray;
    NSMutableDictionary *_dicMusic;
    NSMutableArray *_m_delsongs;
    NSArray *_searchResultArray;
    KGSearchNoResultView *_noSearchResultView;
    long long _songCount;
    KGLocalSongSortView *_tableHeaderView;
    KGLocalSongUpdateTipsView *_updateTipsView;
    KGLocalSongUpdateListVM *_updateListVM;
    KGThemeButton *_playAllBtn;
    KGMusicPlayingCellExposureStatistis *_exposureStatistis;
}

@property(retain, nonatomic) KGMusicPlayingCellExposureStatistis *exposureStatistis; // @synthesize exposureStatistis=_exposureStatistis;
@property(nonatomic) __weak KGThemeButton *playAllBtn; // @synthesize playAllBtn=_playAllBtn;
@property(retain, nonatomic) KGLocalSongUpdateListVM *updateListVM; // @synthesize updateListVM=_updateListVM;
@property(retain, nonatomic) KGLocalSongUpdateTipsView *updateTipsView; // @synthesize updateTipsView=_updateTipsView;
@property(retain, nonatomic) KGLocalSongSortView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(nonatomic) long long songCount; // @synthesize songCount=_songCount;
@property(nonatomic) _Bool inSearching; // @synthesize inSearching=_inSearching;
@property(retain, nonatomic) KGSearchNoResultView *noSearchResultView; // @synthesize noSearchResultView=_noSearchResultView;
@property(nonatomic) int sortType; // @synthesize sortType=_sortType;
@property(retain, nonatomic) NSArray *searchResultArray; // @synthesize searchResultArray=_searchResultArray;
@property(retain, nonatomic) NSMutableArray *m_delsongs; // @synthesize m_delsongs=_m_delsongs;
@property(retain, nonatomic) NSMutableDictionary *dicMusic; // @synthesize dicMusic=_dicMusic;
@property(retain, nonatomic) NSMutableArray *allLocalMusicArray; // @synthesize allLocalMusicArray=_allLocalMusicArray;
@property(retain, nonatomic) KGMusicControlNewControler *musicControl; // @synthesize musicControl=_musicControl;
- (void).cxx_destruct;
- (void)endAPMWithAPMTypeIDs:(int)arg1 AndRecordCount:(long long)arg2;
- (void)editBtnDidClick:(id)arg1;
- (void)musicBackUpAndRecover;
- (void)moreViewGoToBackAndRecover;
- (void)event_clicUpdateTips;
- (void)event_showUpdateTips;
- (void)event_clickMoreToUpdatePage;
- (void)jumpToKGLocalSongUpdateListViewController;
- (void)locateSongWithAuto:(_Bool)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)backUpAndRecover;
- (void)textLinkEvent;
- (void)toMusicLib;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)showSelectedIndexItem:(id)arg1 index:(unsigned long long)arg2;
- (void)pandoItem:(id)arg1 index:(unsigned long long)arg2;
- (_Bool)checkNextSongInfoIsPlayingWithCurrentIndexPath:(id)arg1;
- (_Bool)checkIsPlayingWithSongInfo:(id)arg1;
- (_Bool)isMusicTableCellPlayingState:(id)arg1;
- (void)refreshDataAfterRecoverSongInfo:(id)arg1;
- (void)batchLocalFileDeleteProc:(id)arg1;
- (void)doSongsReMoveOnThread:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)didFinishMusicControlCancelAction;
- (void)didFinishMusicControlEditAction;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)p_clickSingerWithPlayingCell:(id)arg1 isFromSingerHead:(_Bool)arg2;
- (void)playingCell:(id)arg1 didShowFunctionItemWithItemTag:(unsigned long long)arg2 isCellRefreshStage:(_Bool)arg3;
- (void)playingCell:(id)arg1 didClickFunctionItemWithItemTag:(unsigned long long)arg2;
- (_Bool)playingCell:(id)arg1 isNeedAutoDoActionWithItemTag:(unsigned long long)arg2;
- (void)fileNotExsitActionSheetDeleteButtonClicked:(id)arg1;
- (void)playSongAtOnce:(id)arg1 tableView:(id)arg2 didSelectRowAtIndexPath:(id)arg3;
- (id)playingCell:(id)arg1 functionItemsWithSongInfo:(id)arg2;
- (id)createMusicPlayingCellWithTableView:(id)arg1 SongInfo:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 menuArrayWidthForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 isCheckBoxStyle:(_Bool)arg3;
- (double)tableView:(id)arg1 cellWidthForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)updataRowInfosDic:(id)arg1 needRefresh:(_Bool)arg2;
- (void)deleteConfirm:(id)arg1;
- (id)allLocalMusicArrayWithRowData:(id)arg1;
- (void)getFilterLocalMusic:(id)arg1;
- (void)resignSearchViewFirstResponder;
- (void)cancelSearch;
- (void)cancelSearchBtnTaped;
- (void)searchButtonClicked;
- (void)playAllSong;
- (id)getAllSongInfos;
- (void)sortSong:(int)arg1;
- (void)showSortView:(id)arg1;
- (void)importiPodMusic:(id)arg1;
- (void)updateTipsQualityBtnHandler:(id)arg1;
- (void)updateQualityBtnHandler:(id)arg1;
- (void)refreshNotFilevisibleCells;
- (void)updateUpdateTips:(long long)arg1;
- (void)checkShowUpdateTips;
- (void)createMoreViewWithHiddenSortBtn:(_Bool)arg1;
- (void)updateUISortDataCompletion:(CDUnknownBlockType)arg1;
- (void)updateUISortData;
- (void)createDataContentWithSynIpod:(_Bool)arg1;
- (void)createIndexView;
- (void)createUIContent;
- (id)localIndexArray;
- (void)syn_end:(id)arg1;
- (void)shareDirChanged:(id)arg1;
- (void)synIpodInBack;
- (void)localMusicDidChange:(id)arg1;
- (void)refreshFileNotExsitCell:(id)arg1;
- (void)registerNotify;
- (void)dismissUpdateTips;
- (void)showUpdateTips;
- (void)viewManagerChangeState:(int)arg1;
- (void)viewDidExit;
- (void)viewDidEnter;
- (void)viewDidAppear:(_Bool)arg1;
- (void)checkMediaLibraryAuthorizationStatusWithPreBlock:(CDUnknownBlockType)arg1 Complete:(CDUnknownBlockType)arg2;
- (void)initControllerParams;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

