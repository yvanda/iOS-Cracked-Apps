//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLChannelRecmdCell.h"

@class QLHTMLFontLabel, QLJCEAction, QLSImageView, UIButton, UIImageView, UILabel;

@interface QLChannelTitleCell : QLChannelRecmdCell
{
    long long _style;
    _Bool _accessoryEnabled;
    QLHTMLFontLabel *_titleLabel;
    UILabel *_accessoryLabel;
    UIImageView *_accessoryImgView;
    QLJCEAction *_action;
    id <QLChannelTitleCellActionDelegate> _actionDelegate;
    QLSImageView *_entryImgView;
    QLSImageView *_titleLableMarkView;
    UIButton *_titleBtn;
    QLSImageView *_userImgView;
    QLHTMLFontLabel *_subTitleLbl;
    long long _maintleArrorLocation;
    long long _subTitleLocation;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(nonatomic) long long subTitleLocation; // @synthesize subTitleLocation=_subTitleLocation;
@property(nonatomic) long long maintleArrorLocation; // @synthesize maintleArrorLocation=_maintleArrorLocation;
@property(retain, nonatomic) QLHTMLFontLabel *subTitleLbl; // @synthesize subTitleLbl=_subTitleLbl;
@property(retain, nonatomic) QLSImageView *userImgView; // @synthesize userImgView=_userImgView;
@property(retain, nonatomic) UIButton *titleBtn; // @synthesize titleBtn=_titleBtn;
@property(retain, nonatomic) QLSImageView *titleLableMarkView; // @synthesize titleLableMarkView=_titleLableMarkView;
@property(retain, nonatomic) QLSImageView *entryImgView; // @synthesize entryImgView=_entryImgView;
@property(nonatomic) __weak id <QLChannelTitleCellActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) QLJCEAction *action; // @synthesize action=_action;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImageView *accessoryImgView; // @synthesize accessoryImgView=_accessoryImgView;
@property(nonatomic) _Bool accessoryEnabled; // @synthesize accessoryEnabled=_accessoryEnabled;
@property(retain, nonatomic) UILabel *accessoryLabel; // @synthesize accessoryLabel=_accessoryLabel;
@property(retain, nonatomic) QLHTMLFontLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reportShowUp;
- (void)singleClick:(id)arg1;
- (void)headClick:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setObject:(id)arg1;
- (void)setSubMarkLblList:(id)arg1;
- (void)setMarkLblList:(id)arg1;

@end

