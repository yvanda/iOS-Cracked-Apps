//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMBlockButton, UIButton, UIImage;

@interface NMContentOperBar : UIView
{
    NMBlockButton *_favButton;
    NMBlockButton *_privateButton;
    NMBlockButton *_commentButton;
    NMBlockButton *_shareButton;
    NMBlockButton *_downloadButton;
    UIImage *_favImage;
    UIImage *_favHighlightedImage;
    UIImage *_favedImage;
    UIImage *_favedHighlightedImage;
    UIImage *_favDisImage;
    UIImage *_favedDisImage;
    UIImage *_commentImage;
    UIImage *_commentHighlightedImage;
    UIImage *_shareImage;
    UIImage *_shareHighlightedImage;
    UIImage *_downloadImage;
    UIImage *_downlpadHighlightedImage;
    UIImage *_favImageNight;
    UIImage *_favHighlightedImageNight;
    UIImage *_favedImageNight;
    UIImage *_favedHighlightedImageNight;
    UIImage *_favDisImageNight;
    UIImage *_favedDisImageNight;
    _Bool _subscribed;
    _Bool _subscribeEnable;
    _Bool _showSubscribeTitle;
    _Bool _isPrivate;
    id _delegate;
}

+ (double)heightWithoutBottomMask;
+ (double)height;
@property(nonatomic) _Bool isPrivate; // @synthesize isPrivate=_isPrivate;
@property(nonatomic) _Bool showSubscribeTitle; // @synthesize showSubscribeTitle=_showSubscribeTitle;
@property(nonatomic) _Bool subscribeEnable; // @synthesize subscribeEnable=_subscribeEnable;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *commentDetailButton;
- (void)setFavButtonAccessibility;
- (void)privateButtonClicked;
- (void)downloadButtonClicked;
- (void)shareButtonClicked;
- (void)commentButtonClicked;
- (void)subButtonClicked;
- (void)setPrivacy:(_Bool)arg1 animate:(_Bool)arg2;
- (void)enablePrivate:(_Bool)arg1;
- (void)enableDownload:(_Bool)arg1;
- (void)enableShare:(_Bool)arg1;
- (void)enableComment:(_Bool)arg1;
- (void)enableSubscribe:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)updateFavButtonImage:(id)arg1;
- (void)updateSubscribeState:(_Bool)arg1;
- (void)updateSubButtonActivity:(_Bool)arg1;
- (void)updateShareCount:(long long)arg1;
- (void)updateSubCount:(long long)arg1;
- (void)updateCommentCount:(long long)arg1;
- (void)handleChangingTheme:(id)arg1;
- (void)layoutSubviews;
- (void)addPrivateButton;
- (id)initWithFrame:(struct CGRect)arg1;

@end

