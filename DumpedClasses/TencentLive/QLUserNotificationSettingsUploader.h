//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLJCERequestModel.h"

@interface QLUserNotificationSettingsUploader : QLJCERequestModel
{
}

- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)processResponce:(id)arg1 isCache:(_Bool)arg2 error:(id *)arg3;
- (id)getJCERequestObject;
- (long long)getJCERequestCMD;
- (void)uploadSettings;

@end

