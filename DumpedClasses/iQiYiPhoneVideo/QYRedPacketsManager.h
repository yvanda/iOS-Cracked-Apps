//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QYRedPacketsViewDelegate-Protocol.h"

@class NSMutableArray, NSString, QYRedPacketsView, UIView;
@protocol QYRedPacketsManagerDelegate;

@interface QYRedPacketsManager : NSObject <QYRedPacketsViewDelegate>
{
    int _screenMode;
    id <QYRedPacketsManagerDelegate> _delegate;
    NSMutableArray *_packetsList;
    QYRedPacketsView *_topPackets;
    UIView *_parentView;
}

@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(nonatomic) int screenMode; // @synthesize screenMode=_screenMode;
@property(retain, nonatomic) QYRedPacketsView *topPackets; // @synthesize topPackets=_topPackets;
@property(retain, nonatomic) NSMutableArray *packetsList; // @synthesize packetsList=_packetsList;
@property(nonatomic) __weak id <QYRedPacketsManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rpNeedToLogin;
- (id)getCurrentTvid;
- (void)timeToDisappear:(id)arg1;
- (void)redPacketsIsWinning:(id)arg1;
- (void)bringPacketsToTop;
- (void)layoutSubRedPacketsViews;
- (void)addRPToSuperView;
- (_Bool)isHasRedPackets;
- (void)changeScreenModeForRp:(int)arg1 withParent:(id)arg2;
- (void)createRedPackets:(id)arg1;
- (id)initWithParent:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

