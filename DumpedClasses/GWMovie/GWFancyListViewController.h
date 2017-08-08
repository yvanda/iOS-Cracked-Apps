//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

@class GWGetRecommendedFancyProvider, GWUpdateMemberProvider, Member, NSMutableArray;

@interface GWFancyListViewController : GWBaseViewController
{
    _Bool _isOperationRunning;
    Member *_currentMember;
    GWGetRecommendedFancyProvider *_getRecommendedFancyProvider;
    GWUpdateMemberProvider *_updateMemberProvider;
    NSMutableArray *_fancyList;
    NSMutableArray *_fancyViewsArray;
}

@property(nonatomic) _Bool isOperationRunning; // @synthesize isOperationRunning=_isOperationRunning;
@property(retain, nonatomic) NSMutableArray *fancyViewsArray; // @synthesize fancyViewsArray=_fancyViewsArray;
@property(retain, nonatomic) NSMutableArray *fancyList; // @synthesize fancyList=_fancyList;
@property(retain, nonatomic) GWUpdateMemberProvider *updateMemberProvider; // @synthesize updateMemberProvider=_updateMemberProvider;
@property(retain, nonatomic) GWGetRecommendedFancyProvider *getRecommendedFancyProvider; // @synthesize getRecommendedFancyProvider=_getRecommendedFancyProvider;
@property(retain, nonatomic) Member *currentMember; // @synthesize currentMember=_currentMember;
- (void).cxx_destruct;
- (void)requestUpdateUserInfoWithFancy:(id)arg1;
- (void)requestFancyList;
- (id)currentFancyStr;
- (void)saveAction;
- (void)checkFancyViewSelectState;
- (void)confirmSelectCurrentNum:(id)arg1;
- (void)createFancyViews;
- (void)setRightNavItemButton;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end
