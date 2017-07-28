//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface LoadingView : UIView
{
    UIImageView *loadingAni;
    _Bool _hidesWhenStopped;
    _Bool _animating;
}

+ (Class)layerClass;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
