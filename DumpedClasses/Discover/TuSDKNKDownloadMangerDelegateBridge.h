//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TuSDKNKDownloadMangerDelegate.h"

@class NSString;

@interface TuSDKNKDownloadMangerDelegateBridge : NSObject <TuSDKNKDownloadMangerDelegate>
{
    id <TuSDKNKDownloadMangerDelegate> _delegate;
}

+ (id)initWithDelegate:(id)arg1;
@property(nonatomic) id <TuSDKNKDownloadMangerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onDestory;
- (_Bool)isEqualDelegate:(id)arg1;
- (void)downloadManger:(id)arg1 item:(id)arg2 changedStatus:(long long)arg3;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
