//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol NowLiveRoomDelegate <NSObject>

@optional
- (void)shareToQQ:(NSDictionary *)arg1;
- (void)endDraw;
- (void)beginDraw;
- (void)exploreMore;
- (void)onRoomEnd;
- (void)onRoomReady;
- (void)closeRoomAnimtated:(_Bool)arg1;
- (void)closeRoom;
@end
