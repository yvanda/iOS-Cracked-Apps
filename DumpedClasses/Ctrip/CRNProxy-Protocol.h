//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString, NSURL, UIViewController;

@protocol CRNProxy <NSObject>
- (void)pushViewController:(UIViewController *)arg1 fromViewController:(UIViewController *)arg2;
- (void)handleOpenURL:(NSString *)arg1 title:(NSString *)arg2;
- (void)installPackagesForURLIfNeed:(NSURL *)arg1;

@optional
- (_Bool)xlgEnabled;
- (void)notifyRNForH5CallbackData:(void (^)(NSArray *))arg1;
- (void)showCRNBundleInfoForDev:(NSString *)arg1;
- (void)reportJSErrorWithStackTrace:(NSArray *)arg1 userInfo:(NSMutableDictionary *)arg2;
@end

