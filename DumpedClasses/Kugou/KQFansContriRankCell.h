//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeImageView, KGThemeLabel, KGThemeLine, UIImageView;

@interface KQFansContriRankCell : UITableViewCell
{
    _Bool _isDailyTypeCell;
    KGThemeLabel *_numberLabel;
    UIImageView *_medalImageView;
    KGThemeImageView *_upAndDownImageView;
    KGThemeLabel *_upAndDownLabel;
    UIImageView *_newIconImageView;
    UIImageView *_iconImageView;
    KGThemeLabel *_userNameLabel;
    KGThemeLabel *_tipLabel;
    KGThemeLine *_bottomLine;
}

@property(retain, nonatomic) KGThemeLine *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) KGThemeLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) KGThemeLabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *newIconImageView; // @synthesize newIconImageView=_newIconImageView;
@property(retain, nonatomic) KGThemeLabel *upAndDownLabel; // @synthesize upAndDownLabel=_upAndDownLabel;
@property(retain, nonatomic) KGThemeImageView *upAndDownImageView; // @synthesize upAndDownImageView=_upAndDownImageView;
@property(retain, nonatomic) UIImageView *medalImageView; // @synthesize medalImageView=_medalImageView;
@property(retain, nonatomic) KGThemeLabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(nonatomic) _Bool isDailyTypeCell; // @synthesize isDailyTypeCell=_isDailyTypeCell;
- (void).cxx_destruct;
- (void)setConsumeValueString:(id)arg1 leftString:(id)arg2 rightString:(id)arg3;
- (void)setRankingState:(int)arg1 andValue:(long long)arg2;
- (void)hideNewIcon;
- (void)showNewIcon;
- (void)buildEntity:(id)arg1 withIndex:(long long)arg2;
- (void)createViewInCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

