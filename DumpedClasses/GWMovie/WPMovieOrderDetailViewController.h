//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseTableViewController.h"

#import "WPOrderDetailCodeCellDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UIView, WPTicketModel;

@interface WPMovieOrderDetailViewController : GWBaseTableViewController <WPOrderDetailCodeCellDelegate>
{
    _Bool _showMachineView;
    _Bool _showOriginalCodeView;
    WPTicketModel *_movieOrderModel;
    NSMutableArray *_dateItemArray;
    UIView *_teleBottomView;
    NSIndexPath *_codeIndexPath;
}

@property(nonatomic) _Bool showOriginalCodeView; // @synthesize showOriginalCodeView=_showOriginalCodeView;
@property(nonatomic) _Bool showMachineView; // @synthesize showMachineView=_showMachineView;
@property(retain, nonatomic) NSIndexPath *codeIndexPath; // @synthesize codeIndexPath=_codeIndexPath;
@property(retain, nonatomic) UIView *teleBottomView; // @synthesize teleBottomView=_teleBottomView;
@property(retain, nonatomic) NSMutableArray *dateItemArray; // @synthesize dateItemArray=_dateItemArray;
@property(retain, nonatomic) WPTicketModel *movieOrderModel; // @synthesize movieOrderModel=_movieOrderModel;
- (void).cxx_destruct;
- (void)refreshData;
- (void)fetchOrderData;
- (void)clickReloadCodeCellWithShowMachine:(_Bool)arg1 showOriginalCode:(_Bool)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setUpViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMovieOrderModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

