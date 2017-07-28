//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OKNetHTTPBodyBuilderProtocol.h"

@class NSData, NSDictionary, NSString;

@interface OKNetRawDataBodyBuilder : NSObject <OKNetHTTPBodyBuilderProtocol>
{
    NSData *_data;
    NSString *_contentType;
}

@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)build:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDictionary *parameters;
@property(readonly) Class superclass;

@end
