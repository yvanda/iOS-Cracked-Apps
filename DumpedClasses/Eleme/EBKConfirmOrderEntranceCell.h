//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMTableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface EBKConfirmOrderEntranceCell : NVMTableViewCell
{
    CDUnknownBlockType _didClickButton;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIButton *_button;
}

+ (double)cellHeight;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType didClickButton; // @synthesize didClickButton=_didClickButton;
- (void).cxx_destruct;
- (void)configCellWithEntranceInfo:(id)arg1;
- (void)setupSubviews;
- (void)commonSettings;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

