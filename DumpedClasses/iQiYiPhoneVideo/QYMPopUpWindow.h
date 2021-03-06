//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QYMMoviePopUpWindowData, UIButton, UIImageView;
@protocol QYMPopUpWindowDelegate;

@interface QYMPopUpWindow : UIView
{
    id <QYMPopUpWindowDelegate> _delegate;
    UIImageView *_activityImage;
    UIButton *_close;
    QYMMoviePopUpWindowData *_data;
}

@property(retain, nonatomic) QYMMoviePopUpWindowData *data; // @synthesize data=_data;
@property(retain, nonatomic) UIButton *close; // @synthesize close=_close;
@property(retain, nonatomic) UIImageView *activityImage; // @synthesize activityImage=_activityImage;
@property(nonatomic) __weak id <QYMPopUpWindowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toNative;
- (void)toRoot;
- (void)toActivity;
- (void)jumpToOther;
- (void)layoutWithData:(id)arg1;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

