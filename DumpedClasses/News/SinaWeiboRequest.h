//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableData, NSString, NSURLConnection, SinaWeibo;

@interface SinaWeiboRequest : NSObject
{
    SinaWeibo *sinaweibo;
    NSString *url;
    NSString *httpMethod;
    NSDictionary *params;
    NSURLConnection *connection;
    NSMutableData *responseData;
    id <SinaWeiboRequestDelegate> delegate;
}

+ (id)requestWithAccessToken:(id)arg1 url:(id)arg2 httpMethod:(id)arg3 params:(id)arg4 delegate:(id)arg5;
+ (id)requestWithURL:(id)arg1 httpMethod:(id)arg2 params:(id)arg3 delegate:(id)arg4;
+ (id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3;
+ (id)getParamValueFromUrl:(id)arg1 paramName:(id)arg2;
@property(nonatomic) __weak id <SinaWeiboRequestDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod;
@property(retain, nonatomic) NSString *url; // @synthesize url;
@property(nonatomic) SinaWeibo *sinaweibo; // @synthesize sinaweibo;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)disconnect;
- (void)connect;
- (void)failedWithError:(id)arg1;
- (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (id)parseJSONData:(id)arg1 error:(id *)arg2;
- (void)handleResponseData:(id)arg1;
- (id)postBodyHasRawData:(_Bool *)arg1;
- (void)appendUTF8Body:(id)arg1 dataString:(id)arg2;
- (void)dealloc;

@end

