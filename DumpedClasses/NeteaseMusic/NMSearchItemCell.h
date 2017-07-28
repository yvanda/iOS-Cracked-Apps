//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class NMSearchBlockItem, UIButton, UIImageView, UILabel;

@interface NMSearchItemCell : NMCommonCell
{
    id <NMSearchItemCellDelegate> _delegate;
    NMSearchBlockItem *_item;
    UIImageView *_timeImageView;
    UILabel *_nameLabel;
    UIButton *_deleteButton;
}

+ (double)height;
@property(nonatomic) __weak id <NMSearchItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMSearchBlockItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)deleteButtonClicked:(id)arg1;
@property(nonatomic) _Bool showDeleteButton; // @dynamic showDeleteButton;
- (void)layoutSubviews;
- (void)setNightMode:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
