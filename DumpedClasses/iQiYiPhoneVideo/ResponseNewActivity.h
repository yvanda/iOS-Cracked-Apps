//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYResponseMessage.h"

@class NSString;

@interface ResponseNewActivity : QYResponseMessage
{
    NSString *_title;
    NSString *_end_date;
    int _activity_id;
    int _status;
    NSString *_start_date;
    NSString *_url;
    NSString *_descp;
    NSString *_img;
    NSString *_urlMain;
}

@property(copy, nonatomic) NSString *urlMain; // @synthesize urlMain=_urlMain;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSString *descp; // @synthesize descp=_descp;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *start_date; // @synthesize start_date=_start_date;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) int activity_id; // @synthesize activity_id=_activity_id;
@property(copy, nonatomic) NSString *end_date; // @synthesize end_date=_end_date;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end

