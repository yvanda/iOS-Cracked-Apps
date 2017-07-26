//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSString, UIButton, UILabel;

@interface CTLivechatScoreUnsatisfyReasonCell : UITableViewCell
{
    NSString *unsatisfyReason;
    UIButton *checkBox;
    UILabel *unsatisfyReasonLab;
    id <CTLivechatScoreUnsatisfyReasonCellDelegate> _checkCellDelegate;
    double _cellHeight;
    double _isChecked;
}

@property(nonatomic) double isChecked; // @synthesize isChecked=_isChecked;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) id <CTLivechatScoreUnsatisfyReasonCellDelegate> checkCellDelegate; // @synthesize checkCellDelegate=_checkCellDelegate;
- (void).cxx_destruct;
- (void)checkCellCallBack:(id)arg1;
- (void)SubmitScore;
- (void)checkCell;
- (void)drawCurrentCell;
- (void)drawCellWithUnsatisfyReason:(id)arg1 defaultChecked:(_Bool)arg2;
- (void)InitSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
