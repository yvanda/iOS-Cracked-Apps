//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseTableViewController.h"

#import "GWStyleDramaCellDelegate-Protocol.h"

@class GWStyleListProvider, NSMutableArray, NSString;

@interface GWStyleDramaViewController : GWBaseTableViewController <GWStyleDramaCellDelegate>
{
    GWStyleListProvider *_styleListProvider;
    NSMutableArray *_stylesList;
}

+ (id)createStyleDramaViewController;
@property(retain, nonatomic) NSMutableArray *stylesList; // @synthesize stylesList=_stylesList;
@property(retain, nonatomic) GWStyleListProvider *styleListProvider; // @synthesize styleListProvider=_styleListProvider;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (void)showErrorPage;
- (void)showNoDataMessage;
- (void)finishLoading;
- (void)hideRefreshPage;
- (void)showRefreshPage;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)refreshTableWithResultArray:(id)arg1 isResetPageCursor:(_Bool)arg2;
- (void)requestStyleReviewListWithResetPageCursor:(_Bool)arg1 IsFromHeader:(_Bool)arg2;
- (void)beginRefreshFromFooter;
- (void)beginRefreshFromHeader;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

