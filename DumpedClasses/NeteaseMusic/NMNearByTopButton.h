//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMAvatarView, NMNearBy, UIButton, UIImageView, UILabel;

@interface NMNearByTopButton : UIView
{
    UIButton *_button;
    NMAvatarView *_avatar;
    UILabel *_nickNameLabel;
    UIImageView *_vipIconImageView;
    UILabel *_distanceLabel;
    UIImageView *_locationIcon;
    UIImageView *_genderIconView;
    UIImageView *_sinaIcon;
    NMNearBy *_nearBy;
}

+ (id)getListenDesc:(id)arg1;
@property(retain, nonatomic) NMNearBy *nearBy; // @synthesize nearBy=_nearBy;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)getDistanceString;
- (void)handleVipNightMode:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
