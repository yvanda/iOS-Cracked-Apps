//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class NSArray<FRDiscussCommentStructModel><Optional>, NSNumber;

@interface FRDiscussCommentBrowStructModel : FRBaseModel
{
    NSNumber *_thread_id;
    long long _has_more;
    NSNumber *_offset;
    NSNumber *_total_count;
    NSArray<FRDiscussCommentStructModel><Optional> *_data;
}

@property(retain, nonatomic) NSArray<FRDiscussCommentStructModel><Optional> *data; // @synthesize data=_data;
@property(retain, nonatomic) NSNumber *total_count; // @synthesize total_count=_total_count;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
@property(nonatomic) long long has_more; // @synthesize has_more=_has_more;
@property(retain, nonatomic) NSNumber *thread_id; // @synthesize thread_id=_thread_id;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
