//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MonthlyPaymentWelfareItem : NSObject
{
    NSString *_img;
    NSString *_shortTitle;
    NSString *_url;
}

+ (id)parseForArray:(id)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
- (void).cxx_destruct;
- (void)buildWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

