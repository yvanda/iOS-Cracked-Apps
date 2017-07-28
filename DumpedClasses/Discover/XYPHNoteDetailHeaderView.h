//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView, UILabel, XYFollowButton, XYPHUserRecommendCell;

@interface XYPHNoteDetailHeaderView : UICollectionViewCell
{
    UIImageView *_iconImageView;
    UIImageView *_userPortrait;
    UILabel *_userNameLabel;
    UILabel *_relationshipInfoLabel;
    UIButton *_userLevelButton;
    XYFollowButton *_followButton;
    UILabel *_recommendTitleLabel;
    UIButton *_closeButton;
    XYPHUserRecommendCell *_recommendCollectionView;
    CDUnknownBlockType _closeRecommendUser;
    CDUnknownBlockType _userLevelClickBlock;
    id <XYPHNoteCellDelegate> _delegate;
}

@property(nonatomic) id <XYPHNoteCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType userLevelClickBlock; // @synthesize userLevelClickBlock=_userLevelClickBlock;
@property(copy, nonatomic) CDUnknownBlockType closeRecommendUser; // @synthesize closeRecommendUser=_closeRecommendUser;
@property(retain, nonatomic) XYPHUserRecommendCell *recommendCollectionView; // @synthesize recommendCollectionView=_recommendCollectionView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *recommendTitleLabel; // @synthesize recommendTitleLabel=_recommendTitleLabel;
@property(retain, nonatomic) XYFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *userLevelButton; // @synthesize userLevelButton=_userLevelButton;
@property(retain, nonatomic) UILabel *relationshipInfoLabel; // @synthesize relationshipInfoLabel=_relationshipInfoLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userPortrait; // @synthesize userPortrait=_userPortrait;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)closeButtonClick;
- (void)loadRecommendUserViewWithRecommendInfo:(id)arg1 andRecommendUsers:(id)arg2;
- (void)headerViewClicked;
- (void)userLevelClick:(id)arg1;
- (void)cellFollowButtonClicked:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
