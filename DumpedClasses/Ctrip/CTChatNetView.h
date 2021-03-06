//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTNetErrorDelegate.h"

@class CTAnimationLoadingView, CTNetErrorView, NSString;

@interface CTChatNetView : CTRootViewController <CTNetErrorDelegate>
{
    CTAnimationLoadingView *loadingView;
    CTNetErrorView *netErrorView;
    _Bool _showLoadingView;
    _Bool _showNetError;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) _Bool showNetError; // @synthesize showNetError=_showNetError;
@property(nonatomic) _Bool showLoadingView; // @synthesize showLoadingView=_showLoadingView;
- (void).cxx_destruct;
- (void)delegateRefreshBtnClicked:(id)arg1;
- (void)showNetErrorView:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)doActionButton:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

