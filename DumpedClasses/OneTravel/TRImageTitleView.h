//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TRImageTitleView : UIView
{
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)tapAction:(id)arg1;
- (id)labelWithString:(id)arg1 normalFont:(id)arg2 lightFont:(id)arg3 normalColor:(id)arg4 lightColor:(id)arg5;
- (id)initWithImageView:(id)arg1 andTitle:(id)arg2 titleFont:(id)arg3 titleColor:(id)arg4 hightlightFont:(id)arg5 hightlightColor:(id)arg6 isLeftImage:(_Bool)arg7 actionBlock:(CDUnknownBlockType)arg8;
- (id)initWithImageView:(id)arg1 andTitle:(id)arg2 titleFont:(id)arg3 titleColor:(id)arg4 isLeftImage:(_Bool)arg5 actionBlock:(CDUnknownBlockType)arg6;

@end

