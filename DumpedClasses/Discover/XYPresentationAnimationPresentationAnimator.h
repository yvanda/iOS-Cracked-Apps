//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;

@interface XYPresentationAnimationPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    unsigned long long _style;
    unsigned long long _poistion;
}

@property(nonatomic) unsigned long long poistion; // @synthesize poistion=_poistion;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithStyle:(unsigned long long)arg1 position:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

