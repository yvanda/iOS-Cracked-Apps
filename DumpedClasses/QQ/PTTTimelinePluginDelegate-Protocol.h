//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginDelegate.h"

@class HotChatPTTTimelinePlugin, NSString, PTTTimelineVoiceCellModel, QQVoiceCellModel;

@protocol PTTTimelinePluginDelegate <PluginDelegate>
- (_Bool)canAutoPlayVoice;
- (void)shouldRefreshStage:(PTTTimelineVoiceCellModel *)arg1;
- (void)timelinePluginNeedShowSheet:(NSString *)arg1 tag:(long long)arg2 cellModel:(PTTTimelineVoiceCellModel *)arg3;
- (void)timelinePluginNeedShowTips:(NSString *)arg1;
- (_Bool)isGirlBackgroundInStage;
- (void)onStopVoiceModel:(QQVoiceCellModel *)arg1;
- (void)onPlayVoiceModel:(QQVoiceCellModel *)arg1;
- (void)shouldHideEmptyView:(HotChatPTTTimelinePlugin *)arg1;
- (void)shouldShowEmptyView:(HotChatPTTTimelinePlugin *)arg1;
@end

