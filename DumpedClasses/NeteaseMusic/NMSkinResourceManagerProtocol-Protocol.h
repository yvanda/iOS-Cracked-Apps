//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMSkinTheme, NSString, UIImage;

@protocol NMSkinResourceManagerProtocol <NSObject>
+ (NSString *)imagePathForName:(NSString *)arg1 theme:(NMSkinTheme *)arg2;
- (void)removeAllCaches;
- (void)deleteAllResources;
- (UIImage *)imageForName:(NSString *)arg1;
- (_Bool)checkAndFix:(NMSkinTheme *)arg1;
- (_Bool)createResources:(NMSkinTheme *)arg1 forced:(_Bool)arg2;
- (NSString *)currentPath;
@end

