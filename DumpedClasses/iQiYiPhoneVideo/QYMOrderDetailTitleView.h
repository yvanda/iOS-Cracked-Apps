//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYMOrderDetailTicketsData, UILabel;

@interface QYMOrderDetailTitleView : UIView
{
    QYMOrderDetailTicketsData *_orderDetailData;
    UILabel *_orderTitle;
    long long _eTicketsOrderDetailType;
    double _originHeight;
}

@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) long long eTicketsOrderDetailType; // @synthesize eTicketsOrderDetailType=_eTicketsOrderDetailType;
@property(retain, nonatomic) UILabel *orderTitle; // @synthesize orderTitle=_orderTitle;
@property(retain, nonatomic) QYMOrderDetailTicketsData *orderDetailData; // @synthesize orderDetailData=_orderDetailData;
- (void).cxx_destruct;
- (void)layoutOrderDetailTitleView;
- (void)updataOrderDetailData:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

