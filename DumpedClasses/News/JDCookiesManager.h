//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JDCookiesManager : NSObject
{
}

+ (id)shareInstance;
- (id)arrayOldCookies;
- (id)arrayCookieNames;
- (void)clearKeplerOldCookies;
- (void)clearAllCookies;
- (void)operateCookieForURL:(id)arg1;
- (void)addCookieToURL:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)addCookieToURL:(id)arg1 key:(id)arg2 withEncodeValue:(id)arg3;
- (id)initÃ;

@end

