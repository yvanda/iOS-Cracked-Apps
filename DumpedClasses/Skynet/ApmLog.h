//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class Crash, Custom, Exception, Network, SKPBClientLog, SKPBSdkLog, SKPBTrack;

@interface ApmLog : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SKPBClientLog *clientLog; // @dynamic clientLog;
@property(retain, nonatomic) Crash *crash; // @dynamic crash;
@property(retain, nonatomic) Custom *custom; // @dynamic custom;
@property(retain, nonatomic) Exception *exception; // @dynamic exception;
@property(nonatomic) long long generateTime; // @dynamic generateTime;
@property(nonatomic) int id_p; // @dynamic id_p;
@property(readonly, nonatomic) int logRecordOneOfCase; // @dynamic logRecordOneOfCase;
@property(retain, nonatomic) Network *network; // @dynamic network;
@property(nonatomic) int networkType; // @dynamic networkType;
@property(retain, nonatomic) SKPBSdkLog *sdkLog; // @dynamic sdkLog;
@property(retain, nonatomic) SKPBTrack *track; // @dynamic track;

@end

