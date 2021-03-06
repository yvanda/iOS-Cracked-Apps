//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface QYPPHTTPEngine : NSObject
{
    NSMutableArray *_requestList;
    NSMutableDictionary *_requestDict;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *requestDict; // @synthesize requestDict=_requestDict;
@property(retain, nonatomic) NSMutableArray *requestList; // @synthesize requestList=_requestList;
- (void).cxx_destruct;
- (id)md5:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)postWithQYPPURL:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)postWithQYPPURL:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)getWithQYPPURL:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)getWithQYPPURL:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

