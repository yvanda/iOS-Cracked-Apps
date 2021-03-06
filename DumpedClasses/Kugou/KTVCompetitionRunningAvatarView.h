//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeLabel, KTVPlayerBaseInfo, KtvUserAvatar, UIButton, UIFont, UIImageView;

@interface KTVCompetitionRunningAvatarView : UIView
{
    _Bool _isLeft;
    _Bool _isCongfigIconSize;
    int _viewType;
    KtvUserAvatar *_headImageView;
    UIButton *_playButton;
    KGThemeLabel *_nicknameLabel;
    UIImageView *_genderImageView;
    double _headWidth;
    UIFont *_nicknameFont;
    KTVPlayerBaseInfo *_playerInfo;
    CDUnknownBlockType _listenBlock;
}

@property(nonatomic) _Bool isCongfigIconSize; // @synthesize isCongfigIconSize=_isCongfigIconSize;
@property(copy, nonatomic) CDUnknownBlockType listenBlock; // @synthesize listenBlock=_listenBlock;
@property(retain, nonatomic) KTVPlayerBaseInfo *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(retain, nonatomic) UIFont *nicknameFont; // @synthesize nicknameFont=_nicknameFont;
@property(nonatomic) double headWidth; // @synthesize headWidth=_headWidth;
@property(nonatomic) _Bool isLeft; // @synthesize isLeft=_isLeft;
@property(retain, nonatomic) UIImageView *genderImageView; // @synthesize genderImageView=_genderImageView;
@property(nonatomic) int viewType; // @synthesize viewType=_viewType;
@property(retain, nonatomic) KGThemeLabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) KtvUserAvatar *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (void)isLeft:(_Bool)arg1 headWidth:(double)arg2;
- (void)hiddenNicknameAndSex;
- (void)playAction;
- (void)congfigLeftOrRightIconWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 type:(int)arg2;

@end

