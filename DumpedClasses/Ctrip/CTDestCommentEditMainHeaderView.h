//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestBaseTableViewHeaderFooterView.h"

@class UILabel;

@interface CTDestCommentEditMainHeaderView : CTDestBaseTableViewHeaderFooterView
{
    UILabel *_nameLB;
    UILabel *_addressLB;
}

+ (double)heightWithItem:(id)arg1;
@property(retain, nonatomic) UILabel *addressLB; // @synthesize addressLB=_addressLB;
@property(retain, nonatomic) UILabel *nameLB; // @synthesize nameLB=_nameLB;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configWithItem:(id)arg1;

@end

