//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MusicBaseCell.h"

@class NSArray, UIScrollView, UIView;

@interface SingerScrollCell : MusicBaseCell
{
    UIView *_bgView;
    UIScrollView *_scrollView;
    NSArray *_similarSingerArr;
    id <SingerScrollCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SingerScrollCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *similarSingerArr; // @synthesize similarSingerArr=_similarSingerArr;
- (void).cxx_destruct;
- (void)similarBtnClick:(id)arg1;
- (void)initView;
- (id)initWithReuseIdentifier:(id)arg1 andStyle:(long long)arg2 andSimilarSingers:(id)arg3;

@end
