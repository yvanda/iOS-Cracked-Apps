//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class UIButton, UILabel;

@interface ArticleMomentUserIntroActionButton : SSViewBase
{
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIButton *_actionButton;
}

@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setTitleText:(id)arg1 countText:(id)arg2;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
