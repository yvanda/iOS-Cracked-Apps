//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray;

@interface MVHeadCell : UITableViewCell
{
    NSArray *_hotwords;
    id <MVHeadCellDelegate> _delegate;
}

@property(nonatomic) __weak id <MVHeadCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *hotwords; // @synthesize hotwords=_hotwords;
- (void).cxx_destruct;
- (void)hotwordBtnAction:(id)arg1;
- (id)initWithreuseIdentifier:(id)arg1 andHotwords:(id)arg2;

@end

