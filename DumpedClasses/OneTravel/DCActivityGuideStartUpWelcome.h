//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCActivityGuideView.h"

@class DCActivityLoading, UIButton, UIImageView;

@interface DCActivityGuideStartUpWelcome : DCActivityGuideView
{
    UIImageView *_startUpImageView;
    UIButton *_openTravelButton;
    DCActivityLoading *_indicatorView;
}

@property(retain, nonatomic) DCActivityLoading *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIButton *openTravelButton; // @synthesize openTravelButton=_openTravelButton;
@property(retain, nonatomic) UIImageView *startUpImageView; // @synthesize startUpImageView=_startUpImageView;
- (void).cxx_destruct;
- (void)loadData;
- (void)dismissWithAnimated;
- (void)dismiss;
- (void)popWithAnimated;
- (void)pop;
- (id)initWithFrame:(struct CGRect)arg1;

@end

