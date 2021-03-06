//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KKMediaRootViewController, NSMutableDictionary, NSTimer, QLJCEApolloVoiceData;

@interface QLChatRoomVPManager : NSObject
{
    NSTimer *_finishTimer;
    NSMutableDictionary *_dicMsgCache;
    _Bool _isRecorderingVoice;
    _Bool _muteSetted;
    long long _playingStatus;
    QLJCEApolloVoiceData *_playingVoice;
    QLJCEApolloVoiceData *_lastPlayingVoice;
    id <QLChatRoomVPMgrDataSource> _playNextDataSouce;
}

+ (_Bool)checkVoiceValid:(id)arg1;
+ (_Bool)isLocalVoice:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool muteSetted; // @synthesize muteSetted=_muteSetted;
@property(nonatomic) __weak id <QLChatRoomVPMgrDataSource> playNextDataSouce; // @synthesize playNextDataSouce=_playNextDataSouce;
@property(nonatomic) _Bool isRecorderingVoice; // @synthesize isRecorderingVoice=_isRecorderingVoice;
@property(retain, nonatomic) QLJCEApolloVoiceData *lastPlayingVoice; // @synthesize lastPlayingVoice=_lastPlayingVoice;
@property(retain, nonatomic) QLJCEApolloVoiceData *playingVoice; // @synthesize playingVoice=_playingVoice;
@property(nonatomic) long long playingStatus; // @synthesize playingStatus=_playingStatus;
- (void).cxx_destruct;
- (_Bool)checkLastPlayingVoiceWhenRecordEnded;
- (_Bool)checkLastPlayingVoiceWhenStartRecord;
- (_Bool)cacheLastPlayingVoice:(id)arg1;
- (void)stopVoicePlay;
- (void)playVoiceFinished:(id)arg1;
- (_Bool)shouldAutoPlayNext;
- (_Bool)isVoicePlayed:(id)arg1;
- (void)finishVoicePlay:(_Bool)arg1;
- (void)downloadVoiceFinished:(id)arg1;
- (_Bool)isVoicePlaying;
- (_Bool)isPlayingVoice:(id)arg1;
- (void)startPlayVoice:(id)arg1;
- (void)startPlayVoice:(id)arg1 playNextDataSource:(id)arg2;
- (void)invalidTimer;
- (void)doPlayVoice;
- (void)postStatusChangedNotification;
- (void)controlAdsPlayOrPause:(_Bool)arg1;
- (void)setIsMuted:(_Bool)arg1;
- (_Bool)isMuted;
@property(readonly, nonatomic) KKMediaRootViewController *playerCtl;
- (void)appWillTerminated:(id)arg1;
- (id)init;
- (void)clean;

@end

