//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSArray, NSString;

@interface XYPHStoreThirdPartyBrandCollection : XYRKModel
{
    NSArray *_images;
    NSString *_totalNumber;
    NSString *_collectionId;
    NSString *_title;
    NSString *_desc;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *collectionId; // @synthesize collectionId=_collectionId;
@property(retain, nonatomic) NSString *totalNumber; // @synthesize totalNumber=_totalNumber;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
- (void).cxx_destruct;

@end

