//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWCinemaBaseCell.h"

@class GWTheatreDescriptionCellObject, UIImageView, UILabel;

@interface GWTheatreDescriptionCell : GWCinemaBaseCell
{
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
    GWTheatreDescriptionCellObject *_currentCellObject;
}

+ (double)rowHeightWithCellObject:(id)arg1;
@property(retain, nonatomic) GWTheatreDescriptionCellObject *currentCellObject; // @synthesize currentCellObject=_currentCellObject;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
- (void).cxx_destruct;
- (void)showCellWithCellObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
