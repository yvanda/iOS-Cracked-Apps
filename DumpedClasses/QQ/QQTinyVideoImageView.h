//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "QQAudioSessionManagerDelegate.h"
#import "QQRichViewPlayerDelegte.h"

@class CALayer, NSString, QQRichVideoPlayer, QQTinyVideoProgressView, UIButton, UILabel;

@interface QQTinyVideoImageView : UIImageView <QQRichViewPlayerDelegte, QQAudioSessionManagerDelegate>
{
    NSString *_videoPath;
    NSString *_thumbPath;
    id <QQTinyVideoImageViewDelegate> _delegate;
    long long _status;
    int _xo;
    QQRichVideoPlayer *_richPlayer;
    _Bool _repeatedPlay;
    long long _playedTimes;
    UIButton *_playButton;
    NSString *_loadedFilePath;
    QQTinyVideoProgressView *_progressView;
    CALayer *_displayLayer;
    UILabel *_tipsLabel;
}

@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak CALayer *displayLayer; // @synthesize displayLayer=_displayLayer;
- (void).cxx_destruct;
- (void)onIntterruptEnd;
- (void)onAudioSessionDeactive;
- (void)onAudioSessionActive;
- (void)onIntterruptBegin;
- (_Bool)deactionAudioSession;
- (_Bool)requestAudioSession;
- (_Bool)shouldPlayVideo;
- (void)onPlayVideoButtonClick:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)showProgressView:(_Bool)arg1;
- (void)showPlayButton:(_Bool)arg1;
- (void)onPlayer:(id)arg1 playStatusChange:(int)arg2;
- (void)onPlayer:(id)arg1 getHostLayer:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)stop;
- (void)loadFile:(id)arg1;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) long long status; // @dynamic status;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <QQTinyVideoImageViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *thumbPath; // @dynamic thumbPath;
@property(copy, nonatomic) NSString *videoPath; // @dynamic videoPath;

@end

