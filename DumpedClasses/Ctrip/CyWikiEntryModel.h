//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSString;

@interface CyWikiEntryModel : CTBusinessBean <NSCoding>
{
    int districtId;
    NSString *title;
    int categoryId;
    int pageId;
    int subPageId;
    NSString *labelImageUrl;
    int pocketBookId;
    NSString *url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url;
@property(nonatomic) int pocketBookId; // @synthesize pocketBookId;
@property(copy, nonatomic) NSString *labelImageUrl; // @synthesize labelImageUrl;
@property(nonatomic) int subPageId; // @synthesize subPageId;
@property(nonatomic) int pageId; // @synthesize pageId;
@property(nonatomic) int categoryId; // @synthesize categoryId;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int districtId; // @synthesize districtId;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
