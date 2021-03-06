//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVOpusBaseHandle.h"

@class KGKTVManager, NSTimer;

@interface KTVOpusConvertHandle : KTVOpusBaseHandle
{
    float _curConvertProgress;
    KGKTVManager *_audioPlayer;
    NSTimer *_convertTimer;
    long long _reTryCount;
}

@property(nonatomic) long long reTryCount; // @synthesize reTryCount=_reTryCount;
@property(retain, nonatomic) NSTimer *convertTimer; // @synthesize convertTimer=_convertTimer;
@property(nonatomic) float curConvertProgress; // @synthesize curConvertProgress=_curConvertProgress;
@property(retain, nonatomic) KGKTVManager *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void).cxx_destruct;
- (void)convertFailedWithForUserExchange;
- (void)convertFailedWithErrorCode:(int)arg1;
- (void)updateProgress;
- (void)configureToneBoardStageKrcTime;
- (void)loadSetting;
- (_Bool)configFileWithTempPath:(id)arg1 destinPath:(id)arg2;
- (void)configureConverCycelHandle;
- (id)convertFromWork:(id)arg1;
- (void)startSynthetize;
- (_Bool)updateWithLocalWorksInfo:(id)arg1 Progress:(float)arg2;
- (void)reStart;
- (void)pause;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

