//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PhotoBrowserBaseViewContoller.h"

@class QQProgressBar, UIButton, UIControl, UILabel, UIView;

@interface PhotoBrowserEnhancedViewContoller : PhotoBrowserBaseViewContoller
{
    UIButton *_originalButton;
    UIView *_maskView;
    UIControl *_maskControl;
    QQProgressBar *_progressView;
    UILabel *_progressLabel;
    _Bool _isSupportLandscape;
}

- (void)resetOriginalButtonState;
- (void)cancelOriginalPhotoDownloading;
- (_Bool)startDownloadOriginalPhoto;
- (void)onMaskControlClick:(id)arg1;
- (void)updateDownloadProgressUI:(double)arg1;
- (void)hideDownloadProgressUI;
- (void)showDownloadProgressUI;
- (void)onOriginalButtonClick:(id)arg1;
- (void)downloadAndAnimateFinished;
- (void)isImageModel;
- (void)didScrollToPage:(int)arg1;
- (void)resetOriginalButtonFrame:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

