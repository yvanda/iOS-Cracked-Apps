//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface APMidasChannelInfo : NSObject
{
    NSString *_channelIcon;
    NSString *_channelId;
    NSString *_channelMessage;
    NSString *_channelName;
    NSString *_channelDiscount;
    NSString *_ChannelInfo;
}

@property(retain, nonatomic) NSString *ChannelInfo; // @synthesize ChannelInfo=_ChannelInfo;
@property(retain, nonatomic) NSString *ChannelDiscount; // @synthesize ChannelDiscount=_channelDiscount;
@property(retain, nonatomic) NSString *ChannelName; // @synthesize ChannelName=_channelName;
@property(retain, nonatomic) NSString *ChannelMessage; // @synthesize ChannelMessage=_channelMessage;
@property(retain, nonatomic) NSString *ChannelId; // @synthesize ChannelId=_channelId;
@property(retain, nonatomic) NSString *ChannelIcon; // @synthesize ChannelIcon=_channelIcon;
- (void).cxx_destruct;
- (id)getChannelNameDisplay;

@end

