//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTVideoPasterADService : NSObject
{
    NSString *_pasterADRequetURLStr;
    CDUnknownBlockType _fetchPasterADInfoCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType fetchPasterADInfoCompletion; // @synthesize fetchPasterADInfoCompletion=_fetchPasterADInfoCompletion;
@property(copy, nonatomic) NSString *pasterADRequetURLStr; // @synthesize pasterADRequetURLStr=_pasterADRequetURLStr;
- (void).cxx_destruct;
- (_Bool)isValidResult:(id)arg1;
- (id)p_getAPIPrefix;
- (void)p_handlePasterADRequestFinished:(id)arg1;
- (void)fetchPasterADInfoWithRequestInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

