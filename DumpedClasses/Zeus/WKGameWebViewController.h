//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WKWebViewController.h"

@class HomeAdData, WKGameMenuView;

@interface WKGameWebViewController : WKWebViewController
{
    _Bool _isExtending;
    HomeAdData *_gameData;
    double _menuWidth;
    WKGameMenuView *_menu;
}

@property(retain, nonatomic) WKGameMenuView *menu; // @synthesize menu=_menu;
@property(nonatomic) _Bool isExtending; // @synthesize isExtending=_isExtending;
@property(nonatomic) double menuWidth; // @synthesize menuWidth=_menuWidth;
@property(retain, nonatomic) HomeAdData *gameData; // @synthesize gameData=_gameData;
- (void).cxx_destruct;
- (_Bool)webView:(id)arg1 enableGL:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reload;
- (void)goBack;
- (void)addFav;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)extendMenu;
- (void)updateViewConstraints;
- (void)handleNotification:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end

