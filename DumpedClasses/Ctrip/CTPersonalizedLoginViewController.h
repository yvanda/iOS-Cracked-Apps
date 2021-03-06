//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

@class CTAnimationLoadingView, CTLoginWidget, NSString, SDImageCache, UIScrollView, UITextField, UIView;

@interface CTPersonalizedLoginViewController : CTRootViewController
{
    NSString *_userName;
    NSString *_password;
    UIView *_avatarContainer;
    UIView *_fadeAnimationContainer;
    struct CGRect _avatarFrame;
    SDImageCache *_avatarCache;
    UIScrollView *_personalizedView;
    int _errorTime;
    CTLoginWidget *_loginWidget;
    UITextField *_passwordTF;
    CTAnimationLoadingView *_loadingView;
}

- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)toastToResetPwdWithObject:(id)arg1 operationAfterFinish:(SEL)arg2;
- (void)sendSecureTask;
- (void)writeDataToCache;
- (void)afterLoginSuccess:(id)arg1;
- (void)changeBtnClicked;
- (void)login;
- (void)doFindPassword;
- (void)getHelp;
- (void)showBtnClicked:(id)arg1;
- (void)cancelBtnClicked;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)endEdit;
- (void)avatarAnimate;
- (void)initView;
- (void)initData;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

