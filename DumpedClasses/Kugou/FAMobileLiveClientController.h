//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAViewController.h"

#import "FALiveSwitchControllerDataSource.h"
#import "FALiveSwitchControllerDelegate.h"
#import "FAMobileLiveClientLiveRoomViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class FALCNotificationModel, FALiveSwitchController, FAMobileLiveClientLiveRoomView, FAMobileLivePredicInfo, NSString;

@interface FAMobileLiveClientController : FAViewController <UIScrollViewDelegate, FALiveSwitchControllerDataSource, FALiveSwitchControllerDelegate, FAMobileLiveClientLiveRoomViewDelegate>
{
    FAMobileLivePredicInfo *_mobileLivePredicInfo;
    FALCNotificationModel *_notificationModel;
    unsigned long long _enterRoomSource;
    NSString *_fromSongName;
    NSString *_fromSongHash;
    FAMobileLiveClientLiveRoomView *_liveRoomView;
    FALiveSwitchController *_switchController;
}

+ (id)getCurrentClientController;
+ (_Bool)handleOpenURL:(id)arg1 options:(id)arg2;
@property(retain, nonatomic) FALiveSwitchController *switchController; // @synthesize switchController=_switchController;
@property(retain, nonatomic) FAMobileLiveClientLiveRoomView *liveRoomView; // @synthesize liveRoomView=_liveRoomView;
@property(retain, nonatomic) NSString *fromSongHash; // @synthesize fromSongHash=_fromSongHash;
@property(retain, nonatomic) NSString *fromSongName; // @synthesize fromSongName=_fromSongName;
@property(nonatomic) unsigned long long enterRoomSource; // @synthesize enterRoomSource=_enterRoomSource;
@property(retain, nonatomic) FALCNotificationModel *notificationModel; // @synthesize notificationModel=_notificationModel;
@property(retain, nonatomic) FAMobileLivePredicInfo *mobileLivePredicInfo; // @synthesize mobileLivePredicInfo=_mobileLivePredicInfo;
- (void).cxx_destruct;
- (void)faMobileLiveChatViewBoundTransform:(struct CGPoint)arg1 state:(long long)arg2;
- (void)switchControllerWillLoadCell:(id)arg1 itemModel:(id)arg2;
- (void)switchControllerDidEndScrollWithPage:(long long)arg1;
- (void)switchControllerDidChangedPage:(long long)arg1;
- (_Bool)switchControllerCheckSupportScrolling:(id)arg1;
- (id)switchControllerWillReuseCell:(id)arg1 itemModel:(id)arg2;
- (id)getCommonGiftAnimationView;
- (void)exitLiveRoom;
- (void)viewWillRemove:(_Bool)arg1;
- (void)pageScrollViewBeginScroll;
- (void)cancelAutoScroll;
- (void)gotoNextLiveItem;
- (void)loadLiveRoomList:(id)arg1 index:(long long)arg2;
- (void)configDataProviderWithInfo:(id)arg1;
- (void)loadLiveListData;
- (void)configSectionView;
- (_Bool)shouldHiddenNavigationBar;
- (id)init;
- (_Bool)isEmptyString:(id)arg1;
- (_Bool)viewControllerIsActive;
- (void)userDidTakeScreenshot;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

