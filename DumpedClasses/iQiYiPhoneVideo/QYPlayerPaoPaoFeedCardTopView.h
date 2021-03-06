//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYTouchButton, QYUCardCellModel, UIButton, UIImageView, UILabel;
@protocol QYPaoPaoFeedCardTopViewDelegate;

@interface QYPlayerPaoPaoFeedCardTopView : UIView
{
    _Bool _isRecom;
    _Bool _isShowInDetailPage;
    _Bool _isFootmark;
    int _pannelType;
    id <QYPaoPaoFeedCardTopViewDelegate> _delegate;
    UIImageView *_headView;
    UIButton *_nameBtn;
    UILabel *_timeLabel;
    QYTouchButton *_reportBtn;
    UIButton *_shareBtn;
    UIImageView *_crownView;
    UIImageView *_identityView;
    UIImageView *_starView;
    QYUCardCellModel *_cellModel;
    UIImageView *_masterIconView;
    UIImageView *_talentView;
}

+ (double)getTopViewHeight;
@property(retain, nonatomic) UIImageView *talentView; // @synthesize talentView=_talentView;
@property(retain, nonatomic) UIImageView *masterIconView; // @synthesize masterIconView=_masterIconView;
@property(nonatomic) _Bool isFootmark; // @synthesize isFootmark=_isFootmark;
@property(retain, nonatomic) QYUCardCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UIImageView *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIImageView *identityView; // @synthesize identityView=_identityView;
@property(retain, nonatomic) UIImageView *crownView; // @synthesize crownView=_crownView;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) QYTouchButton *reportBtn; // @synthesize reportBtn=_reportBtn;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *nameBtn; // @synthesize nameBtn=_nameBtn;
@property(retain, nonatomic) UIImageView *headView; // @synthesize headView=_headView;
@property(nonatomic) int pannelType; // @synthesize pannelType=_pannelType;
@property(nonatomic) _Bool isShowInDetailPage; // @synthesize isShowInDetailPage=_isShowInDetailPage;
@property(nonatomic) __weak id <QYPaoPaoFeedCardTopViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isRecom; // @synthesize isRecom=_isRecom;
- (void).cxx_destruct;
- (id)currentPlayerController;
- (void)hideReportView;
- (void)shareBtnClick:(id)arg1;
- (void)reportBtnClick:(id)arg1;
- (void)headViewClick;
- (void)nameBtnClick:(id)arg1;
- (void)setStarViewImage:(id)arg1;
- (void)setIdentityViewImage:(id)arg1;
- (void)setTopViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)showTopShareBtn;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

