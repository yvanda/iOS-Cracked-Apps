//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QRBaseModel.h"

@class NSArray, NSString;

@interface QRGroupModel : QRBaseModel
{
    long long _resQpId;
    NSString *_displayName;
    NSString *_text;
    long long _jumpMode;
    NSString *_h5Url;
    long long _bookId;
    long long _resourceId;
    NSArray *_books;
    NSArray *_icons;
}

+ (id)modeFromDictionary:(id)arg1;
+ (id)modelContainerPropertyGenericClass;
@property(copy, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(copy, nonatomic) NSArray *books; // @synthesize books=_books;
@property(nonatomic) long long resourceId; // @synthesize resourceId=_resourceId;
@property(nonatomic) long long bookId; // @synthesize bookId=_bookId;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(nonatomic) long long jumpMode; // @synthesize jumpMode=_jumpMode;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) long long resQpId; // @synthesize resQpId=_resQpId;
- (void).cxx_destruct;

@end

