//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface redPacketDetailTableViewCell : UITableViewCell
{
    UILabel *_redWithDrawStatus;
    UILabel *_detailDate;
    UILabel *_detailValue;
    UILabel *_redComeFrom;
}

@property(retain, nonatomic) UILabel *redComeFrom; // @synthesize redComeFrom=_redComeFrom;
@property(retain, nonatomic) UILabel *detailValue; // @synthesize detailValue=_detailValue;
@property(retain, nonatomic) UILabel *detailDate; // @synthesize detailDate=_detailDate;
@property(retain, nonatomic) UILabel *redWithDrawStatus; // @synthesize redWithDrawStatus=_redWithDrawStatus;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)refreshRecordCell:(id)arg1;
- (void)awakeFromNib;

@end
