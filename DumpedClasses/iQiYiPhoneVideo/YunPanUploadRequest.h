//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ASIHTTPRequestDelegate-Protocol.h"

@class ASIFormDataRequest, NSString, NSURL, YunPanUploadModel;
@protocol YunPanUploadRequestDelegate;

@interface YunPanUploadRequest : NSObject <ASIHTTPRequestDelegate>
{
    YunPanUploadModel *_model;
    NSURL *_fullURL;
    ASIFormDataRequest *_asiReq;
    id <YunPanUploadRequestDelegate> _requestDelegate;
}

@property(nonatomic) __weak id <YunPanUploadRequestDelegate> requestDelegate; // @synthesize requestDelegate=_requestDelegate;
@property(retain, nonatomic) ASIFormDataRequest *asiReq; // @synthesize asiReq=_asiReq;
@property(retain, nonatomic) NSURL *fullURL; // @synthesize fullURL=_fullURL;
@property(retain, nonatomic) YunPanUploadModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)isSuccessCode:(id)arg1;
- (id)checkResponseError:(id)arg1 statusCode:(long long)arg2;
- (void)requestFinished:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)cancelRequest:(_Bool)arg1;
- (void)startRequest;
- (void)p_buildRequest:(_Bool)arg1;
- (id)p_buildUserInfo;
- (id)p_buildCommonUploadUrl:(_Bool)arg1;
- (id)p_buildPaoPaoUploadUrl:(_Bool)arg1;
- (id)initWithModel:(id)arg1 isFallback:(_Bool)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

