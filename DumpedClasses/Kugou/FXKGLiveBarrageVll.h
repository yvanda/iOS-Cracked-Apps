//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FXBarrageViewDataSource.h"

@class FXKGLiveBarrageView, FXKGLiveBarrageVm, NSMutableArray, NSString;

@interface FXKGLiveBarrageVll : NSObject <FXBarrageViewDataSource>
{
    int _barrageSpeed;
    FXKGLiveBarrageView *_view;
    NSMutableArray *_myBarragePool;
    FXKGLiveBarrageVm *_barrageVm;
}

@property(retain, nonatomic) FXKGLiveBarrageVm *barrageVm; // @synthesize barrageVm=_barrageVm;
@property(retain, nonatomic) NSMutableArray *myBarragePool; // @synthesize myBarragePool=_myBarragePool;
@property(nonatomic) int barrageSpeed; // @synthesize barrageSpeed=_barrageSpeed;
@property(retain, nonatomic) FXKGLiveBarrageView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (id)itemForBarrage:(id)arg1;
- (void)destoryBarrage;
- (_Bool)resumeBarrage;
- (_Bool)pauseBarrage;
- (_Bool)startBarrage;
- (void)loadMsg:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
