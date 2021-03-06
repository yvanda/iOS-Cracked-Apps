//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, PlayerController, QYAVPlayerDataItem, QY_Offline;

@protocol PlayerControllerDelegate <NSObject>

@optional
- (void)decoderTypeCallback:(NSDictionary *)arg1;
- (void)onGotAudioData:(int)arg1 data:(void *)arg2 length:(int)arg3 pts:(double)arg4 video_pts:(double)arg5;
- (void)updateVVLogIsDolby:(_Bool)arg1;
- (void)videoCutForImageFail;
- (void)videoCutForImageSuccess:(NSString *)arg1;
- (void)videoCutCallBackWithInfo:(_Bool)arg1 withPara:(NSString *)arg2;
- (QY_Offline *)getOfflineInstance;
- (_Bool)getLocalFileFlag;
- (void)onLiveNetBad;
- (void)OnVideoRenderAreaChanged;
- (_Bool)isPlayFromReplayBtn;
- (void)openPlayerByItem:(QYAVPlayerDataItem *)arg1;
- (void)OnSnapShot:(void *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 format:(unsigned int)arg4;
- (void)OnSubtitleChanged:(int)arg1;
- (void)onSubtitleStateChange:(NSString *)arg1 codec_id:(int)arg2 is_inside:(_Bool)arg3 is_success:(_Bool)arg4 is_close:(_Bool)arg5;
- (void)onSubtitle:(NSString *)arg1 subtitle_len:(int)arg2;
- (void)onPlayStuckWithParam:(long long)arg1;
- (void)resetAirplayInfo;
- (_Bool)getIsShowRightBottom;
- (_Bool)getIsqiyizb;
- (_Bool)getIsqiyiproduce;
- (_Bool)getIsFFMpegPlayer;
- (long long)getStartPlayTime;
- (void)hiddenDanmuForAirplay;
- (_Bool)isFullScreenModel;
- (void)showForAirplay:(_Bool)arg1 airenable:(_Bool)arg2;
- (void)handlePlayerTimerEvent;
- (void)keepAliveWithBingFaInfo:(NSDictionary *)arg1;
- (void)onDolbyAudioPlayFailed;
- (void)keepAliveWithInfo:(NSDictionary *)arg1;
- (void)OnEpisodeMessage:(NSString *)arg1;
- (void)epgCallBackWithType:(NSString *)arg1 info:(NSDictionary *)arg2;
- (void)onError:(NSDictionary *)arg1;
- (void)onTrialAndListen:(int)arg1 start_time:(long long)arg2 end_time:(long long)arg3 auth_result:(NSString *)arg4;
- (void)onTryAndSee:(int)arg1 start_time:(long long)arg2 end_time:(long long)arg3 auth_result:(NSString *)arg4;
- (void)onAudioTrackChanged:(NSDictionary *)arg1 to:(NSDictionary *)arg2;
- (void)onAudioTrackChanging:(NSDictionary *)arg1 to:(NSDictionary *)arg2 duration:(long long)arg3;
- (void)playLogicTryDolbyWillEnd;
- (void)playLogicPreWatchNoticeStart;
- (void)playLogicDataReady;
- (void)onBitStreamChanged:(int)arg1 to:(int)arg2;
- (void)onBitStreamChanging:(int)arg1 to:(int)arg2 duration:(long long)arg3;
- (void)showOrHideAdsCardView:(_Bool)arg1;
- (void)updateAdsItem:(NSString *)arg1 type:(int)arg2;
- (void)updateCommonOverlayAdsItem:(NSString *)arg1;
- (void)updateViewPointAdsItem:(NSString *)arg1;
- (void)updateRenderAdsItem:(NSString *)arg1;
- (void)updatePauseAdsItem:(NSString *)arg1;
- (void)onSeekSuccess:(long long)arg1;
- (void)avAdRemovePingback;
- (void)showMRContinue;
- (void)AdRemoveWithOutPingback;
- (void)AdRemove;
- (void)AdCreateWithId:(long long)arg1 URL:(NSString *)arg2;
- (void)onStart;
- (void)AdCallBackNextVIP:(NSDictionary *)arg1;
- (void)advertise:(unsigned int)arg1 dataReady:(id)arg2;
- (void)AdPlayVIP:(NSDictionary *)arg1;
- (void)AdPlayNext:(long long)arg1;
- (void)OnAdLogoViewClose;
- (void)OnAdLogoUrl:(NSDictionary *)arg1;
- (void)OnAdTrueViewWithTime:(int)arg1 andCloseTime:(int)arg2;
- (void)AdplayEnd:(long long)arg1;
- (void)AdPlayBegin:(long long)arg1;
- (void)onIsPlayingStateChanged:(_Bool)arg1;
- (void)onWaiting:(_Bool)arg1;
- (void)onPlayerStateChanged:(int)arg1;
- (_Bool)shoulAutoPlay:(PlayerController *)arg1;
@end

