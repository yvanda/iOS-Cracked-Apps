//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

@class NSDictionary, NSMutableArray, NSString, NSURL, TBModelStatusHandler, TBSNSSLLDetailBaseItem, TBSNSSLLDetailBaseView, TBSNSWeDetailAddReadCountTool, UIImage, UIImageView, UIView;

@interface TBSNSSLLDetailViewController : TBViewController
{
    _Bool _goToComment;
    _Bool _openInputArea;
    _Bool _isAnimateEnterMode;
    NSString *_type;
    NSURL *_URL;
    TBSNSSLLDetailBaseView *_baseView;
    TBSNSSLLDetailBaseItem *_baseItem;
    TBModelStatusHandler *_failStatusHandler;
    TBModelStatusHandler *_emptyStatusHandler;
    NSDictionary *_queryParams;
    unsigned long long _sellerId;
    unsigned long long _feedId;
    unsigned long long _forwardFeedId;
    TBSNSWeDetailAddReadCountTool *_addReadCountTool;
    double _animateDelay;
    double _delayOffset;
    UIImage *_animateImage;
    UIImageView *_animateOriginImageView;
    UIView *_animateMaskView;
    NSMutableArray *_animateShowUpViewArray;
    struct CGRect _animateOriginRect;
}

+ (struct CGRect)previewImageRectForAnimate;
+ (struct CGRect)previewImageRect;
+ (void)animteToEnterMiniDetailWithURL:(id)arg1 sourceController:(id)arg2 animateImageView:(id)arg3;
@property(retain, nonatomic) NSMutableArray *animateShowUpViewArray; // @synthesize animateShowUpViewArray=_animateShowUpViewArray;
@property(retain, nonatomic) UIView *animateMaskView; // @synthesize animateMaskView=_animateMaskView;
@property(nonatomic) struct CGRect animateOriginRect; // @synthesize animateOriginRect=_animateOriginRect;
@property(nonatomic) __weak UIImageView *animateOriginImageView; // @synthesize animateOriginImageView=_animateOriginImageView;
@property(retain, nonatomic) UIImage *animateImage; // @synthesize animateImage=_animateImage;
@property(nonatomic) _Bool isAnimateEnterMode; // @synthesize isAnimateEnterMode=_isAnimateEnterMode;
@property(nonatomic) double delayOffset; // @synthesize delayOffset=_delayOffset;
@property(nonatomic) double animateDelay; // @synthesize animateDelay=_animateDelay;
@property(retain, nonatomic) TBSNSWeDetailAddReadCountTool *addReadCountTool; // @synthesize addReadCountTool=_addReadCountTool;
@property(nonatomic) unsigned long long forwardFeedId; // @synthesize forwardFeedId=_forwardFeedId;
@property(nonatomic) unsigned long long feedId; // @synthesize feedId=_feedId;
@property(nonatomic) unsigned long long sellerId; // @synthesize sellerId=_sellerId;
@property(nonatomic) _Bool openInputArea; // @synthesize openInputArea=_openInputArea;
@property(nonatomic) _Bool goToComment; // @synthesize goToComment=_goToComment;
@property(retain, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(retain, nonatomic) TBModelStatusHandler *emptyStatusHandler; // @synthesize emptyStatusHandler=_emptyStatusHandler;
@property(retain, nonatomic) TBModelStatusHandler *failStatusHandler; // @synthesize failStatusHandler=_failStatusHandler;
@property(retain, nonatomic) TBSNSSLLDetailBaseItem *baseItem; // @synthesize baseItem=_baseItem;
@property(retain, nonatomic) TBSNSSLLDetailBaseView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;
- (id)pageUserInfo;
- (id)dataForUserTrack;
- (void)updatePageUTParamFromTimeLine;
- (id)getSpotlightUTValue;
- (void)updatePageUTParam:(id)arg1;
- (void)showErrorView:(id)arg1;
- (void)showFeedRemovedExpView;
- (void)handleNeed302:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tbfestival_defaultStatusBarStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)viewDidLoad;
- (void)backItemClicked:(id)arg1;
- (void)addListener;
- (void)setUpView;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (id)init;
- (_Bool)needAnimate;
- (void)setAnimateEnterModeWithAnimateImageView:(id)arg1 originBackRect:(struct CGRect)arg2 maskView:(id)arg3;

@end
