//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBFeedToolbox, FBMagicStoriesVideoPlayerTracker, FBMemVideo, FBVideoPlayerComponent;

@interface FBMagicStoriesVideoComponent : CKCompositeComponent
{
    FBMagicStoriesVideoPlayerTracker *_playerTracker;
    FBMemVideo *_video;
    FBVideoPlayerComponent *_videoComponent;
    FBFeedToolbox *_toolbox;
}

+ (id)newWithVideo:(id)arg1 videoPlayerTracker:(id)arg2 toolbox:(id)arg3;
@property(readonly, nonatomic) FBFeedToolbox *toolbox; // @synthesize toolbox=_toolbox;
@property(readonly, nonatomic) FBVideoPlayerComponent *videoComponent; // @synthesize videoComponent=_videoComponent;
@property(readonly, nonatomic) FBMemVideo *video; // @synthesize video=_video;
@property(readonly, nonatomic) FBMagicStoriesVideoPlayerTracker *playerTracker; // @synthesize playerTracker=_playerTracker;
- (void).cxx_destruct;
- (void)enterFullscreen;
- (void)_tappedVideoPlayer:(id)arg1;

@end

