//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVBaseViewController.h"

@class UIImageView;

@interface KTVViewController : KTVBaseViewController
{
    _Bool _showKtvDownloadNoti;
    _Bool _showKtvMessageNoti;
    _Bool _showKtvDynamicNoti;
    _Bool _isShowRedPoint;
    UIImageView *_messageDot;
}

@property(nonatomic) _Bool isShowRedPoint; // @synthesize isShowRedPoint=_isShowRedPoint;
@property(nonatomic) _Bool showKtvDynamicNoti; // @synthesize showKtvDynamicNoti=_showKtvDynamicNoti;
@property(nonatomic) _Bool showKtvMessageNoti; // @synthesize showKtvMessageNoti=_showKtvMessageNoti;
@property(nonatomic) _Bool showKtvDownloadNoti; // @synthesize showKtvDownloadNoti=_showKtvDownloadNoti;
@property(nonatomic) __weak UIImageView *messageDot; // @synthesize messageDot=_messageDot;
- (void).cxx_destruct;
- (void)setRedPointShow:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)decideToHideDot;
- (void)decideToShowDot;
- (void)ktvBaseNotifyUserLogout;
- (void)ktvBaseNotifyUserLogin;
- (void)handleDownloadNumClearNotification;
- (void)handleDownloadDoneNotification;
- (void)ktvBaseNotificiationDynamicClear;
- (void)ktvBaseNotificiationDynamicComing;
- (void)ktvBaseNotificiationMessageClear;
- (void)ktvBaseNotificiationMessageComing;
- (void)checkMessageAndDownloadAndDynamic;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidLoad;
- (void)dealloc;

@end
