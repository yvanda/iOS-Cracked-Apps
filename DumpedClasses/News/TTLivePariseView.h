//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface TTLivePariseView : UIView
{
    double _startOffsetX;
    NSMutableArray *_commonViewList;
}

@property(retain, nonatomic) NSMutableArray *commonViewList; // @synthesize commonViewList=_commonViewList;
@property(nonatomic) double startOffsetX; // @synthesize startOffsetX=_startOffsetX;
- (void).cxx_destruct;
- (id)getCommonViewWithCommonImage:(id)arg1;
- (void)otherPariseWithCommonImage:(id)arg1;
- (void)userPariseWithUserImage:(id)arg1 commonImage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

