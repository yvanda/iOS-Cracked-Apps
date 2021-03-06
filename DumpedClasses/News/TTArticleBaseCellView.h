//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableViewBaseCellView.h"

#import "SSActivityViewDelegate.h"
#import "TTDislikePopViewDelegate.h"
#import "TTFunctionViewProtocol.h"
#import "TTInfoViewProtocol.h"
#import "TTMoreViewProtocol.h"

@class ExploreItemActionManager, ExploreOriginalData, NSDictionary, NSString, SSActivityView, SSThemedButton, SSThemedLabel, SSThemedView, TTActionSheetController, TTActivityShareManager, TTArticleCommentView, TTArticleFunctionView, TTArticleInfoView, TTArticlePicView, TTArticleTagView, TTLabel;

@interface TTArticleBaseCellView : TTTableViewBaseCellView <TTMoreViewProtocol, TTDislikePopViewDelegate, TTFunctionViewProtocol, TTInfoViewProtocol, SSActivityViewDelegate>
{
    _Bool _isViewHighlighted;
    ExploreOriginalData *_originalData;
    TTArticleFunctionView *_functionView;
    SSThemedButton *_moreView;
    TTLabel *_titleView;
    TTLabel *_abstractView;
    TTArticleCommentView *_commentView;
    TTArticlePicView *_picView;
    SSThemedLabel *_liveTextView;
    TTArticleInfoView *_infoView;
    SSThemedView *_bottomLineView;
    TTArticleTagView *_tagView;
    ExploreItemActionManager *_itemActionManager;
    TTActivityShareManager *_activityActionManager;
    SSActivityView *_phoneShareView;
    NSDictionary *_extraDic;
    TTActionSheetController *_actionSheetController;
}

@property(retain, nonatomic) TTActionSheetController *actionSheetController; // @synthesize actionSheetController=_actionSheetController;
@property(retain, nonatomic) NSDictionary *extraDic; // @synthesize extraDic=_extraDic;
@property(retain, nonatomic) SSActivityView *phoneShareView; // @synthesize phoneShareView=_phoneShareView;
@property(retain, nonatomic) TTActivityShareManager *activityActionManager; // @synthesize activityActionManager=_activityActionManager;
@property(retain, nonatomic) ExploreItemActionManager *itemActionManager; // @synthesize itemActionManager=_itemActionManager;
@property(nonatomic) _Bool isViewHighlighted; // @synthesize isViewHighlighted=_isViewHighlighted;
@property(retain, nonatomic) TTArticleTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) SSThemedView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) TTArticleInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SSThemedLabel *liveTextView; // @synthesize liveTextView=_liveTextView;
@property(retain, nonatomic) TTArticlePicView *picView; // @synthesize picView=_picView;
@property(retain, nonatomic) TTArticleCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) TTLabel *abstractView; // @synthesize abstractView=_abstractView;
@property(retain, nonatomic) TTLabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) SSThemedButton *moreView; // @synthesize moreView=_moreView;
@property(retain, nonatomic) TTArticleFunctionView *functionView; // @synthesize functionView=_functionView;
- (id)originalData;
- (void).cxx_destruct;
- (void)activityView:(id)arg1 didCompleteByItemType:(int)arg2;
- (id)screenName;
- (void)commentButtonClick;
- (void)digButtonClick:(id)arg1;
- (void)functionViewEntityClick;
- (void)functionViewPGCClick;
- (void)functionViewLikeViewClick;
- (void)dislikeButtonClicked:(id)arg1;
- (void)dislikeButtonClicked:(id)arg1 onlyOne:(_Bool)arg2;
- (void)showMenu;
- (void)moreViewClick;
- (void)layoutMoreView;
- (void)layoutMoreViewWithCenter:(_Bool)arg1;
- (void)updateBottomLineView;
- (void)updateInfoView;
- (void)updatePicView;
- (void)updateCommentView;
- (void)updateAbstractView;
- (void)updateTitleView;
- (void)updateTitleView:(double)arg1 isBold:(_Bool)arg2 lineHeight:(double)arg3 firstLineIndent:(double)arg4;
- (void)updateTagView;
- (void)updateFunctionView;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)subscribeStatusChanged:(id)arg1;
- (void)readModeChanged:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setOriginalData:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

