//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TuSDKCPImageResultController.h"

@class TuSDKICMaskRegionView, TuSDKPFStickerView;

@interface TuSDKPFEditStickerControllerBase : TuSDKCPImageResultController
{
    TuSDKICMaskRegionView *_cutRegionView;
    TuSDKPFStickerView *_stickerView;
}

@property(readonly, nonatomic) TuSDKPFStickerView *stickerView; // @synthesize stickerView=_stickerView;
@property(readonly, nonatomic) TuSDKICMaskRegionView *cutRegionView; // @synthesize cutRegionView=_cutRegionView;
- (void).cxx_destruct;
- (void)asyncEditWithResult:(id)arg1;
- (void)onImageCompleteAtion;
- (void)appendSticker:(id)arg1;
- (void)viewDidLoad;

@end

