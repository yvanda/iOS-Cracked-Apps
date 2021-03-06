//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYUserHeaderIconView, UIButton, UIImageView, UILabel;

@interface QYUSectionCellView : UIView
{
    UIView *rankBgView;
    UIImageView *rankImageView;
    UILabel *rankLabel;
    UILabel *titleLabel;
    UILabel *voteCountLabel;
    UILabel *numLabel;
    _Bool isClicked;
    CDUnknownBlockType _voteClickedBlock;
    CDUnknownBlockType _userClickedBlock;
    UIButton *_voteButton;
    QYUserHeaderIconView *_starImageView;
}

@property(retain, nonatomic) QYUserHeaderIconView *starImageView; // @synthesize starImageView=_starImageView;
@property(retain, nonatomic) UIButton *voteButton; // @synthesize voteButton=_voteButton;
@property(copy, nonatomic) CDUnknownBlockType userClickedBlock; // @synthesize userClickedBlock=_userClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType voteClickedBlock; // @synthesize voteClickedBlock=_voteClickedBlock;
- (void).cxx_destruct;
- (void)rebuildUI:(id)arg1;
- (void)onClicked:(id)arg1;
- (void)userIconClicked:(id)arg1;
- (void)setBisonAlbum:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

