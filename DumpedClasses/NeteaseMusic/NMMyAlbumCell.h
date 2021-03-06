//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMCommonCell.h"

@class NMAlbum, UIImage, UIImageView, UILabel, UIView;

@interface NMMyAlbumCell : NMCommonCell
{
    UIImage *_doneImage;
    UIImage *_partialDoneImage;
    UIView *_markBgView;
    UILabel *_nameLabel;
    UILabel *_aliasLabel;
    UILabel *_aritstLabel;
    UILabel *_songCountLabel;
    UIImageView *_albumCoverImageView;
    UIImageView *_albumCoverBgView;
    UIImageView *_stateView;
    NMAlbum *_album;
}

+ (double)height;
@property(retain, nonatomic) NMAlbum *album; // @synthesize album=_album;
- (void).cxx_destruct;
@property(nonatomic) _Bool marked;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateDownlowStateIcon;
- (void)handleChangingTheme:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

