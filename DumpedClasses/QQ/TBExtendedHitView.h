//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLView.h"

@interface TBExtendedHitView : FLView
{
    struct UIEdgeInsets _hitTestEdgeInsets;
}

+ (id)extendedHitViewWithFrame:(struct CGRect)arg1;
@property(nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
