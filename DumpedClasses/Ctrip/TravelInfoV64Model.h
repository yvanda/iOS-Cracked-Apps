//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class BaseUserInfoModel, NSString;

@interface TravelInfoV64Model : CTBusinessBean <NSCoding>
{
    int subjectId;
    NSString *subjectTitle;
    NSString *imageUrl;
    int subjectType;
    NSString *authorName;
    NSString *publishTime;
    int label;
    int commentCount;
    int lookCount;
    int travelerLevel;
    BaseUserInfoModel *userInfoModel;
    NSString *labelImageUrl;
}

@property(copy, nonatomic) NSString *labelImageUrl; // @synthesize labelImageUrl;
@property(retain, nonatomic) BaseUserInfoModel *userInfoModel; // @synthesize userInfoModel;
@property(nonatomic) int travelerLevel; // @synthesize travelerLevel;
@property(nonatomic) int lookCount; // @synthesize lookCount;
@property(nonatomic) int commentCount; // @synthesize commentCount;
@property(nonatomic) int label; // @synthesize label;
@property(copy, nonatomic) NSString *publishTime; // @synthesize publishTime;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName;
@property(nonatomic) int subjectType; // @synthesize subjectType;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl;
@property(copy, nonatomic) NSString *subjectTitle; // @synthesize subjectTitle;
@property(nonatomic) int subjectId; // @synthesize subjectId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
