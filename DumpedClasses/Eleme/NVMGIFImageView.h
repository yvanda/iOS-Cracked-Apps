//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class UIImage;

@interface NVMGIFImageView : UIImageView
{
    _Bool _hasDisplayed;
    UIImage *_lastFrameImage;
}

@property(nonatomic) _Bool hasDisplayed; // @synthesize hasDisplayed=_hasDisplayed;
@property(readonly, nonatomic) UIImage *lastFrameImage; // @synthesize lastFrameImage=_lastFrameImage;
- (void).cxx_destruct;
- (void)startAnimating;
- (id)initWithGifName:(id)arg1;

@end

