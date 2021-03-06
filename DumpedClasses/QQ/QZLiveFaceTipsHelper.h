//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface QZLiveFaceTipsHelper : NSObject
{
    UIView *_cameraStubView;
    UIView *_faceTipsBgView;
    UIView *_faceGuideView;
    UIView *_faceActionGuideView;
    _Bool _faceGuideIsShowing;
    _Bool _faceActionGuideIsShowing;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)commonFaceTipsView:(id)arg1;
- (void)setFaceActionGuideTips:(id)arg1;
- (void)hideFaceActionGuide;
- (void)showFaceActionGuide:(id)arg1;
- (void)hideFaceGuide;
- (void)showFaceGuide;
- (void)hideFaceTips;
- (void)showFaceTipsIfNeed;
- (void)setCameraStubView:(id)arg1;
- (void)retrieveAll;
- (id)init;

@end

