//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SetHeadImageViewController, UIImage;

@protocol setHeadImageDelegate <NSObject>

@optional
- (_Bool)didCancelled:(int)arg1;
- (int)didFinishedSetUserLocalPic:(SetHeadImageViewController *)arg1 image:(UIImage *)arg2 fileName:(NSString *)arg3;
@end

