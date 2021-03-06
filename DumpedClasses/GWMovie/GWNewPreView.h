//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GWCommentStringDelegate-Protocol.h"
#import "GWImageViewDelegate-Protocol.h"

@class GWCommentLabel, GWCommonStarsAndRemarkView, GWImagePolicyView, GWTagView, GWWalaImageGroupView, NSString, UIImageView, UILabel;

@interface GWNewPreView : UIView <GWImageViewDelegate, GWCommentStringDelegate>
{
    float _preViewMargin;
    GWWalaImageGroupView *_headImage;
    UILabel *_titleLabel;
    GWCommentLabel *_detailLabel;
    UIImageView *_userInfoView;
    GWImagePolicyView *_avatarImageView;
    UILabel *_userNameLabel;
    GWCommonStarsAndRemarkView *_innerStarView;
    UIView *_bottomView;
    GWTagView *_tagView;
}

@property(retain, nonatomic) GWTagView *tagView; // @synthesize tagView=_tagView;
@property(nonatomic) float preViewMargin; // @synthesize preViewMargin=_preViewMargin;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) GWCommonStarsAndRemarkView *innerStarView; // @synthesize innerStarView=_innerStarView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) GWImagePolicyView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *userInfoView; // @synthesize userInfoView=_userInfoView;
@property(retain, nonatomic) GWCommentLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GWWalaImageGroupView *headImage; // @synthesize headImage=_headImage;
- (void).cxx_destruct;
- (double)gwWalaLabelWidth;
- (id)createOrangeView:(float)arg1;
- (void)grayViewWithStarModel:(id)arg1;
- (void)grayViewWithMovieModel:(id)arg1;
- (void)setPreViewWithComment:(id)arg1 withDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

