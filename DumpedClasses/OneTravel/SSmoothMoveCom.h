//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComponent.h"

#import "ONESmoothMoveDataSource.h"

@class NSString, NSTimer, ONESmoothMoveBussiness, SSmoothMoveStore;

@interface SSmoothMoveCom : SBaseComponent <ONESmoothMoveDataSource>
{
    _Bool _didUpdateDriverRegionOnce;
    _Bool _isEstimateBubble;
    _Bool _active;
    _Bool _needStart;
    ONESmoothMoveBussiness *_bussiness;
    NSTimer *_timer;
    SSmoothMoveStore *_store;
}

@property(nonatomic) _Bool needStart; // @synthesize needStart=_needStart;
@property(retain, nonatomic) SSmoothMoveStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) _Bool isEstimateBubble; // @synthesize isEstimateBubble=_isEstimateBubble;
@property(nonatomic) _Bool didUpdateDriverRegionOnce; // @synthesize didUpdateDriverRegionOnce=_didUpdateDriverRegionOnce;
@property(retain, nonatomic) ONESmoothMoveBussiness *bussiness; // @synthesize bussiness=_bussiness;
- (void).cxx_destruct;
- (void)smoothMoveBussinessDidUpdateDriverAnnotations:(id)arg1;
- (id)getStringFormObjsct:(id)arg1;
- (struct UIEdgeInsets)getMapVisibleRectEdgeInsets;
- (void)showDebugStatus:(id)arg1 detail:(id)arg2;
- (void)setSmoothMoveBussinessProperties;
- (void)specRequestDriverInfo;
- (void)requestDriverInfo;
- (void)stopTimer;
- (void)startTimer;
- (void)setCalloutView:(id)arg1;
- (void)updateSmoothMoveWithData:(id)arg1;
- (void)resetRegionUpdateState;
- (void)updateNearbyDriverRegionForce:(_Bool)arg1;
- (void)stop;
- (void)pause;
- (void)restart;
- (void)start;
- (void)triggerEvent:(unsigned long long)arg1 params:(id)arg2;
- (void)unbind;
- (id)signalWhiteList;
- (void)locationStatusChange:(long long)arg1;
- (void)bind:(id)arg1;
- (_Bool)enableCarAnimation;
- (_Bool)enableUpdateDriverRegion;
- (_Bool)updateDriverRegionAsTotalCapacity;
- (_Bool)enableInConfirmOrderPage;
- (_Bool)enableShowCallout;
- (id)smDelegate;
- (void)didReceiveDriverInfo:(id)arg1;
- (id)bussinessId;
- (_Bool)forceHttp;
- (id)requestModel;
- (void)customRequestDriverInfo;
- (_Bool)isCustomService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
