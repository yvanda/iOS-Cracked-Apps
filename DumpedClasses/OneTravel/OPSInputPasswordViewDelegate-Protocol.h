//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, OPSInputPasswordView;

@protocol OPSInputPasswordViewDelegate <NSObject>

@optional
- (void)OPSInputPasswordView_buttonShowHidePasswordClicked:(OPSInputPasswordView *)arg1 maskedBool:(NSNumber *)arg2;
- (void)buttonCloseClickedWithInputPasswordView:(OPSInputPasswordView *)arg1;
- (void)OPSInputPasswordView_buttonFlagClicked:(OPSInputPasswordView *)arg1;
- (void)textFieldInputPasswordDidBeginEditing:(OPSInputPasswordView *)arg1;
- (void)buttonNextOrLoginClicked:(OPSInputPasswordView *)arg1;
- (void)forgetPasswordButtonClicked:(OPSInputPasswordView *)arg1;
- (void)viewWillShrink:(OPSInputPasswordView *)arg1;
- (void)viewWillExpand:(OPSInputPasswordView *)arg1;
@end

