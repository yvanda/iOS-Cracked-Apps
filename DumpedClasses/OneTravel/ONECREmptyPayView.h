//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface ONECREmptyPayView : UIView
{
    CDUnknownBlockType _clickEmptyPayView;
    UIImageView *_flagImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (struct CGSize)emptyPayViewSize;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *flagImageView; // @synthesize flagImageView=_flagImageView;
@property(copy, nonatomic) CDUnknownBlockType clickEmptyPayView; // @synthesize clickEmptyPayView=_clickEmptyPayView;
- (void).cxx_destruct;
- (void)didClick:(id)arg1;
- (void)makeContraint;
- (void)buildUI;
- (id)init;

@end

