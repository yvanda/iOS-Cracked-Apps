//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IOMFreeVipObject;

@interface IOMLoginManager : NSObject
{
    IOMFreeVipObject *_freeVip;
    CDUnknownBlockType _success;
    CDUnknownBlockType _failure;
}

+ (id)sharedLogin;
@property(copy, nonatomic) CDUnknownBlockType failure; // @synthesize failure=_failure;
@property(copy, nonatomic) CDUnknownBlockType success; // @synthesize success=_success;
@property(retain, nonatomic) IOMFreeVipObject *freeVip; // @synthesize freeVip=_freeVip;
- (void).cxx_destruct;
- (void)fetchFreeVip;
- (void)loginCallbackFunc:(id)arg1;
- (void)showLoginViewInView:(id)arg1 isNative:(_Bool)arg2 completionBlockWithSuccess:(CDUnknownBlockType)arg3 completionBlockWithFailure:(CDUnknownBlockType)arg4;
- (void)showLoginViewInView:(id)arg1 completionBlockWithSuccess:(CDUnknownBlockType)arg2 completionBlockWithFailure:(CDUnknownBlockType)arg3;
- (void)showLoginViewInView:(id)arg1 completionBlockWithSuccess:(CDUnknownBlockType)arg2;
- (void)shouldGoBack;
- (void)dealloc;
- (id)init;

@end

