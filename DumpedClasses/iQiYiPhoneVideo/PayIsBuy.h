//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface PayIsBuy : NSObject
{
    NSArray *icon_arr;
    NSString *code;
    NSString *msg;
    NSDictionary *data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data;
@property(copy, nonatomic) NSString *msg; // @synthesize msg;
@property(copy, nonatomic) NSString *code; // @synthesize code;
@property(retain, nonatomic) NSArray *icon_arr; // @synthesize icon_arr;
- (void).cxx_destruct;
- (id)init;

@end

