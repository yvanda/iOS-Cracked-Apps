//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSSet;

@interface ALBBACL : NSObject
{
    NSSet *_prohibitedPlugins;
    NSArray *_accessibleWebPermissions;
    NSDictionary *_extendedConfigs;
}

+ (id)extendedConfigsWithData:(id)arg1;
+ (id)permissionsWithData:(id)arg1;
+ (id)prohibitedPluginsWithData:(id)arg1;
+ (double)expireTime;
+ (id)acl;
+ (void)saveACL:(id)arg1 expireTime:(double)arg2;
+ (id)sharedInstance;
@property(copy) NSDictionary *extendedConfigs; // @synthesize extendedConfigs=_extendedConfigs;
@property(copy) NSArray *accessibleWebPermissions; // @synthesize accessibleWebPermissions=_accessibleWebPermissions;
@property(copy) NSSet *prohibitedPlugins; // @synthesize prohibitedPlugins=_prohibitedPlugins;
- (void).cxx_destruct;
- (void)updateConfig:(id)arg1;
- (id)paramConfig;
- (_Bool)needsUpdate;
- (_Bool)isBrowserMode;
- (_Bool)hasPluginLoadPermission:(id)arg1;
- (_Bool)hasWebPageAccessPermission:(id)arg1;
- (void)loadACL:(id)arg1;
- (void)saveACL:(id)arg1;
- (id)init;

@end
