//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface KGTrackerMusic : NSObject
{
    int _qualityType;
    NSString *_musicHash;
    NSString *_fileHash;
    NSArray *_urlArray;
    long long _duration;
    long long _fileSize;
    long long _bitRate;
    NSString *_extName;
}

@property(copy, nonatomic) NSString *extName; // @synthesize extName=_extName;
@property(nonatomic) long long bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) long long fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSArray *urlArray; // @synthesize urlArray=_urlArray;
@property(readonly, copy, nonatomic) NSString *fileHash; // @synthesize fileHash=_fileHash;
@property(readonly, nonatomic) int qualityType; // @synthesize qualityType=_qualityType;
@property(readonly, copy, nonatomic) NSString *musicHash; // @synthesize musicHash=_musicHash;
- (void).cxx_destruct;
- (int)pAskTraker:(id)arg1 otherInfo:(id *)arg2;
- (int)synAskTrakerForInfo:(id *)arg1;
- (id)generateFillUrl;
- (id)initWithMusicHash:(id)arg1 qualityType:(int)arg2 fileHash:(id)arg3;

@end

