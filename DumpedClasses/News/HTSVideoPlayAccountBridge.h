//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HTSVideoPlayAccountBridge : NSObject
{
}

+ (_Bool)persistenceAccountUser:(id)arg1;
+ (void)clearLoginUser;
+ (id)currentLoginUser;
+ (id)currentLoginUserId;
+ (void)showLoginView;
+ (_Bool)isLogin;
+ (_Bool)isCurrentLoginUser:(id)arg1;
+ (void)loginHotsoon;
+ (void)removeLoginResultListenerWithListner:(id)arg1;
+ (void)registerLoginResultListenerWithListenr:(id)arg1 object:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)registerLogoutResultListener;
+ (void)registerLoginResultListener;

@end

