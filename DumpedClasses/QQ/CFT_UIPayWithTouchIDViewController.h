//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UBaseTouchIDViewController.h"

#import "PayProceedDelegate.h"
#import "SelectBankViewDelegate.h"
#import "TouchIdDelegate.h"
#import "UIAlertViewDelegate.h"
#import "modifyMobileDelegate.h"

@class CFT_PayProceedEngine, NSDictionary, NSString;

@interface CFT_UIPayWithTouchIDViewController : CFT_UBaseTouchIDViewController <modifyMobileDelegate, TouchIdDelegate, PayProceedDelegate, SelectBankViewDelegate, UIAlertViewDelegate>
{
    CFT_PayProceedEngine *payProceedEngine_;
    _Bool _isEnableBack;
    _Bool _isReg;
    NSDictionary *_orderInfo;
}

@property(retain, nonatomic) NSDictionary *orderInfo; // @synthesize orderInfo=_orderInfo;
- (void)modifyMobileResponseFinishViewController:(id)arg1 response:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showSendSmsViewWithTips:(id)arg1 modifyMobileCheckCvv:(_Bool)arg2 animate:(_Bool)arg3;
- (void)transferSelectBankViewController:(id)arg1 selectedIndex:(long long)arg2;
- (void)transferSelectBankIndex:(id)arg1;
- (void)payResponseFinish:(id)arg1 resultCode:(id)arg2;
- (void)showVirCreditGuide:(_Bool)arg1 title:(id)arg2;
- (void)requestPayWithPass:(_Bool)arg1;
- (void)evaluateTouchIDFinish:(id)arg1;
- (void)showModifyCredicardThruDialog;
- (void)showModifyCredicardAlert:(id)arg1;
- (void)showPayPasswordView;
- (void)showPayPassWordWithSuggestBankType:(id)arg1;
- (void)showPayResultViewController;
- (void)selectBankClick;
- (void)leftButtonClick:(id)arg1;
- (void)dealloc;
- (void)enableBack;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
