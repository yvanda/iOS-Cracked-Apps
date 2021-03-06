//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADScheduler, UIView;
@protocol GADActiveViewMonitorDelegate, OS_dispatch_queue;

@interface GADActiveViewMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADScheduler *_updateViewBoundsScheduler;
    id <GADActiveViewMonitorDelegate> _delegate;
    struct CGRect _monitoredViewVisibleBounds;
    BOOL _monitoredViewVisible;
    UIView *_monitoredView;
}

@property(readonly, nonatomic) __weak UIView *monitoredView; // @synthesize monitoredView=_monitoredView;
- (void).cxx_destruct;
@property(readonly) BOOL monitoredViewVisible;
@property struct CGRect monitoredViewVisibleBounds;
@property __weak id <GADActiveViewMonitorDelegate> delegate;
- (void)updateViewBounds;
- (void)stopMonitoring;
- (void)sample;
- (void)startMonitoring;
- (void)dealloc;
- (id)init;
- (id)initWithView:(id)arg1;

@end

