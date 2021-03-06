//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, QYPPFeedRelatedCirclesView, QYPPNewRelatedCircleCardViewModel, UIView;
@protocol RelatedCircleCardDelegate;

@interface QYPPNewRelatedCircleCard : UITableViewCell
{
    id <RelatedCircleCardDelegate> _delegate;
    NSIndexPath *_indexPath;
    QYPPFeedRelatedCirclesView *_relatedCircle;
    UIView *_separatorLine;
    QYPPNewRelatedCircleCardViewModel *_viewModel;
}

@property(retain, nonatomic) QYPPNewRelatedCircleCardViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) QYPPFeedRelatedCirclesView *relatedCircle; // @synthesize relatedCircle=_relatedCircle;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <RelatedCircleCardDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)assignCell:(id)arg1;
- (void)resetCell;
- (void)createSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

