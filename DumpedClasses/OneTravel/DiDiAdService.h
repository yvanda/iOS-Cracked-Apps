//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DiDiAdService : NSObject
{
}

+ (void)showForceViewWithModel:(id)arg1;
+ (void)getOneValidResourceByResourceName:(id)arg1 businessID:(long long)arg2 requestFinished:(CDUnknownBlockType)arg3;
+ (void)fetchHomePageResourceWithResourceName:(id)arg1 businessID:(long long)arg2 requestGlobalResource:(_Bool)arg3;
+ (void)dad_showAdWhenCloseLocalWebView;
+ (void)dad_hidePopupView:(unsigned long long)arg1;
+ (void)dad_prefetchLaunchingResourceWithResourceName:(id)arg1;
+ (void)dad_showHomePageResourceWithResourceName:(id)arg1 BusinessID:(long long)arg2 response:(CDUnknownBlockType)arg3 openUrlByLocalWebView:(CDUnknownBlockType)arg4;
+ (id)getValidLaunchingData;
+ (void)setIsTopPageCheckBlock:(CDUnknownBlockType)arg1;
+ (void)dad_getLaunchingResurceWithViewController:(CDUnknownBlockType)arg1 autoStart:(_Bool)arg2 showADDetail:(CDUnknownBlockType)arg3 finish:(CDUnknownBlockType)arg4;
+ (_Bool)dad_isAppVersionUpgraded;
+ (_Bool)dad_isShowADTimeIntervalSatisfied;
+ (_Bool)dad_needShowLaunchingResource;

@end
