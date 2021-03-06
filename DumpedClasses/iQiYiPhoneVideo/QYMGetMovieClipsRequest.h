//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYMessageRequest.h"

@class NSString;

@interface QYMGetMovieClipsRequest : QYMessageRequest
{
    NSString *_movieIds;
    NSString *_page;
    NSString *_pageCount;
    unsigned long long _dealStartTime;
    unsigned long long _requestEndTime;
}

@property(nonatomic) unsigned long long requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(nonatomic) unsigned long long dealStartTime; // @synthesize dealStartTime=_dealStartTime;
@property(copy, nonatomic) NSString *pageCount; // @synthesize pageCount=_pageCount;
@property(copy, nonatomic) NSString *page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *movieIds; // @synthesize movieIds=_movieIds;
- (void).cxx_destruct;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;

@end

