//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface DBWeiBoModel : JSONModel
{
    NSString<Optional> *_weibo_share_title;
    NSString<Optional> *_weibo_share_pic;
    NSString<Optional> *_weibo_share_content;
    NSString<Optional> *_weibo_share_url;
}

@property(copy, nonatomic) NSString<Optional> *weibo_share_url; // @synthesize weibo_share_url=_weibo_share_url;
@property(copy, nonatomic) NSString<Optional> *weibo_share_content; // @synthesize weibo_share_content=_weibo_share_content;
@property(copy, nonatomic) NSString<Optional> *weibo_share_pic; // @synthesize weibo_share_pic=_weibo_share_pic;
@property(copy, nonatomic) NSString<Optional> *weibo_share_title; // @synthesize weibo_share_title=_weibo_share_title;
- (void).cxx_destruct;

@end

