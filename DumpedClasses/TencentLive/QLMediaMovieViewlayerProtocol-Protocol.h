//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol QLMediaMovieViewlayerProtocol <NSObject>
- (UIView *)viewWithLayerId:(long long)arg1;
- (_Bool)removeOuterSubviewWithLayerId:(long long)arg1;
- (_Bool)addOuterSubview:(UIView *)arg1 withLayerId:(long long)arg2;

@optional
- (long long)currentMediaViewLayerStatus;
- (_Bool)isShowingCuttingVideoView;
- (_Bool)isInFull;
- (struct CGRect)frameSize;
@end

