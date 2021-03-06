//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBGroupsTableViewController.h>

#import "FBGroupsDataLoaderListener-Protocol.h"

@class FBGroupsLandingEditDataSource, NSString;
@protocol FBGroupsLandingEditViewControllerConfig;

@interface FBMyGroupsEditViewController : FBGroupsTableViewController <FBGroupsDataLoaderListener>
{
    FBGroupsLandingEditDataSource *_dataSource;
    id <FBGroupsLandingEditViewControllerConfig> _config;
}

@property(retain, nonatomic) id <FBGroupsLandingEditViewControllerConfig> config; // @synthesize config=_config;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)dataLoader:(id)arg1 deleteGroup:(id)arg2;
- (void)dataLoader:(id)arg1 reloadGroup:(id)arg2;
- (void)dataLoader:(id)arg1 reloadDataWithError:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)fb_showNavBarSearchField;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

