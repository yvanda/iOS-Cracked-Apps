//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

@class NSArray, NSString;

@interface UGCBaseHistoryInfo : KugouObject
{
    NSString *_infoId;
    long long _reviewed;
    double _uploadProgress;
    NSString *_add_time;
    NSString *_user_ip;
    NSArray *_audio_info;
}

@property(retain, nonatomic) NSArray *audio_info; // @synthesize audio_info=_audio_info;
@property(retain, nonatomic) NSString *user_ip; // @synthesize user_ip=_user_ip;
@property(retain, nonatomic) NSString *add_time; // @synthesize add_time=_add_time;
@property(nonatomic) double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) long long reviewed; // @synthesize reviewed=_reviewed;
@property(retain, nonatomic) NSString *infoId; // @synthesize infoId=_infoId;
- (void).cxx_destruct;

@end
