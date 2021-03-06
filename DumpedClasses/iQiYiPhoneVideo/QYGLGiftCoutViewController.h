//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView, UITableViewCell, UIView;

@interface QYGLGiftCoutViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _giftCountCellSelected;
    UIView *_sourceView;
    NSArray *_dataSource;
    NSArray *_giftCountArray;
    NSArray *_giftNameArray;
    UITableViewCell *_cell;
    UITableView *_tableView;
    struct CGSize _size;
    struct CGPoint _sourcePoint;
}

@property(nonatomic) struct CGPoint sourcePoint; // @synthesize sourcePoint=_sourcePoint;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UITableViewCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) NSArray *giftNameArray; // @synthesize giftNameArray=_giftNameArray;
@property(retain, nonatomic) NSArray *giftCountArray; // @synthesize giftCountArray=_giftCountArray;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(copy, nonatomic) CDUnknownBlockType giftCountCellSelected; // @synthesize giftCountCellSelected=_giftCountCellSelected;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)p_setUpPosition;
- (void)p_createDataSource;
- (void)p_updateUI;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

