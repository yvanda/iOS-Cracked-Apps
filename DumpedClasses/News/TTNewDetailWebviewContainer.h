//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTDetailWebviewContainer.h"

#import "UIScrollViewDelegate.h"

@class ArticleJSBridgeWebView, ExploreMovieView, NSString, SSThemedScrollView, SSThemedView, TTDetailWebViewRequestProcessor, UIButton, UIScrollView, UIView, UIView<TTDetailFooterViewProtocol>, UnitStayTimeAccumulator;

@interface TTNewDetailWebviewContainer : TTDetailWebviewContainer <UIScrollViewDelegate>
{
    double _currentMaxOffsetY;
    double _unitHeight;
    double _webViewOffsetY;
    double _footerScrollViewOffsetY;
    _Bool _hasFirstCommentShown;
    _Bool _hasWebViewDidFinishCalled;
    _Bool _isObserving;
    _Bool _isObservingContentSize;
    _Bool _isStickyFooter;
    _Bool _isOpenFooterByManual;
    _Bool _needCover;
    _Bool _isShowingNatantOnClick;
    ArticleJSBridgeWebView *_webView;
    unsigned long long _footerStatus;
    id <TTDetailWebviewDelegate><TTDetailWebViewRequestProcessorDelegate> _delegate;
    double _webViewContentHeight;
    ExploreMovieView *_movieView;
    long long _natantStyle;
    SSThemedScrollView *_containerScrollView;
    SSThemedView *_contentFooterView;
    UIButton *_placeHolderView;
    UIView<TTDetailFooterViewProtocol> *_footerView;
    UIScrollView *_footScrollView;
    UIView *_coverView;
    UnitStayTimeAccumulator *_unitStayTimeAccumulator;
    TTDetailWebViewRequestProcessor *_requestProcessor;
}

@property(retain, nonatomic) TTDetailWebViewRequestProcessor *requestProcessor; // @synthesize requestProcessor=_requestProcessor;
@property(retain, nonatomic) UnitStayTimeAccumulator *unitStayTimeAccumulator; // @synthesize unitStayTimeAccumulator=_unitStayTimeAccumulator;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIScrollView *footScrollView; // @synthesize footScrollView=_footScrollView;
@property(nonatomic) _Bool isShowingNatantOnClick; // @synthesize isShowingNatantOnClick=_isShowingNatantOnClick;
@property(retain, nonatomic) UIView<TTDetailFooterViewProtocol> *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIButton *placeHolderView; // @synthesize placeHolderView=_placeHolderView;
@property(retain, nonatomic) SSThemedView *contentFooterView; // @synthesize contentFooterView=_contentFooterView;
- (void)setContainerScrollView:(id)arg1;
- (id)containerScrollView;
- (long long)natantStyle;
- (_Bool)needCover;
- (void)setMovieView:(id)arg1;
- (id)movieView;
- (void)setWebViewContentHeight:(double)arg1;
- (double)webViewContentHeight;
- (id)delegate;
@property(nonatomic) unsigned long long footerStatus; // @synthesize footerStatus=_footerStatus;
@property(retain, nonatomic) ArticleJSBridgeWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)setNatantStyle:(long long)arg1;
- (id)readUnitStayTimeImpressionGroup;
- (float)readPCTValue;
- (long long)pageCount;
- (void)footerScrollViewShowTopRectAnimated:(_Bool)arg1;
- (void)scrollWebViewContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)closeFooterView;
- (void)openFirstCommentIfNeed;
- (void)_openFooterNotManualOriginY:(double)arg1;
- (void)openFooterView;
- (void)refreshHeaderAndFooterFrame;
- (void)setWebContentOffset:(struct CGPoint)arg1;
- (void)scrollView:(id)arg1 setContentOffset:(struct CGPoint)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)footerContentInsetOnChange:(id)arg1;
- (void)footerConentSizeOnChange:(id)arg1;
- (void)scrollViewContentOffsetOnChange:(id)arg1;
- (void)webviewContentSizeOnChange:(id)arg1;
- (void)addFooterKVOController;
- (void)addWebViewKVOController;
- (void)changeFooterStatus:(unsigned long long)arg1;
- (void)refreshFooterStatusWithChange:(id)arg1;
- (double)originYForFooterView;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollviewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)demotedNatantLevelIfNeed;
- (void)DOMContentHeightHasChangedWithRequset:(id)arg1;
- (void)redirectRequest:(id)arg1 navigationType:(long long)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webviewDidLayoutSubviews:(id)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)removeDivFromWebViewIfNeeded;
- (void)addFooterToContainerIfNeed;
- (void)insertDivToWebViewIfNeed;
- (void)addFooterView;
- (void)addFooterView:(id)arg1 detailFooterAddType:(long long)arg2;
- (_Bool)_isWebViewVisible;
- (_Bool)_isContainerScrollToBottom;
- (_Bool)_isFooterScrollToBottom;
- (_Bool)isManualPullFooter;
- (_Bool)isNatantViewOnOpenStatus;
- (_Bool)isCommentVisible;
- (_Bool)isNatantViewVisible;
- (void)refreshCoverView;
- (void)setNeedCover:(_Bool)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (_Bool)isNewWebviewContainer;
- (void)webViewWillDisappear;
- (void)webViewDidAppear;
- (void)willDisappear;
- (void)didAppear;
- (void)p_layoutMovieViewsIfNeeded;
- (void)layoutSubviews;
- (void)didDisappear;
- (void)willAppear;
- (void)setDelegate:(id)arg1;
- (void)initTracker;
- (id)initWithFrame:(struct CGRect)arg1 disableWKWebView:(_Bool)arg2 ignoreGlobalSwitchKey:(_Bool)arg3 hiddenWebView:(id)arg4 webViewDelegate:(id)arg5;
- (void)dealloc;
- (void)p_sendSubscribeTrackWithLabel:(id)arg1 concernType:(id)arg2;
- (void)subscribe:(id)arg1 subscribeJSCallbackID:(id)arg2;
- (void)registerSubscribJS;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

