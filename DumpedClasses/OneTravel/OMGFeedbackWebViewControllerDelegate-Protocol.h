//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, OMGFeedbackWebViewController, UINavigationController;

@protocol OMGFeedbackWebViewControllerDelegate <NSObject>

@optional
- (NSString *)OMGFeedbackWebViewControllerWithTicket:(OMGFeedbackWebViewController *)arg1;
- (void)OMGFeedbackWebViewController:(OMGFeedbackWebViewController *)arg1 didFinishWithResult:(unsigned long long)arg2 didHid:(_Bool)arg3 parentNavController:(UINavigationController *)arg4;
- (void)OMGFeedbackWebViewController:(OMGFeedbackWebViewController *)arg1 didFinishWithResult:(unsigned long long)arg2;
@end
