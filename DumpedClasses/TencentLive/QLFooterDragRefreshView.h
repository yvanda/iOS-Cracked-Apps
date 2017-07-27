//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QLBaseHeadStatusLoadingView, UIImageView, UILabel;

@interface QLFooterDragRefreshView : UIView
{
    _Bool _isImediatiallyLoading;
    long long _status;
    UIImageView *_arrowImgView;
    QLBaseHeadStatusLoadingView *_activityView;
    UILabel *_statusLabel;
}

@property(nonatomic) _Bool isImediatiallyLoading; // @synthesize isImediatiallyLoading=_isImediatiallyLoading;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) QLBaseHeadStatusLoadingView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
- (void).cxx_destruct;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)showActivity:(_Bool)arg1;
- (void)setImageFlipped:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 simpleLoading:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)dealloc;

@end
