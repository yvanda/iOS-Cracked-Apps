//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQVIPFunctionComicNavigationBarView.h"

@class NSString, QQVipComicExpandButton, UILabel, UIView;

@interface QQVIPFunctionComicReadNavBarView : QQVIPFunctionComicNavigationBarView
{
    UILabel *_subTitleLabel;
    QQVipComicExpandButton *_jumpToMsgListButton;
    _Bool _showRightButtonBadge;
    id <QQVIPFunctionComicReadNavBarViewDelegate> _readNavBarDelegate;
    UIView *_rightButtonBadge;
    long long _lastUnreadCount;
    long long _mode;
}

@property long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)jumpToMsgListButtonClicked:(id)arg1;
- (void)resetUnreadCount;
- (void)refreshNewUnreadMsgCount;
- (void)layoutSubviews;
@property(nonatomic) _Bool showRightButtonBadge; // @dynamic showRightButtonBadge;
@property(retain, nonatomic) NSString *subTitle; // @dynamic subTitle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) QQVipComicExpandButton *jumpToMsgListButton; // @dynamic jumpToMsgListButton;
@property(nonatomic) __weak id <QQVIPFunctionComicReadNavBarViewDelegate> readNavBarDelegate; // @dynamic readNavBarDelegate;

@end

