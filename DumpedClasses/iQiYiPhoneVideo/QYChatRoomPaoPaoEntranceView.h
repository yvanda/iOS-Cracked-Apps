//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol QYChatRoomPaoPaoentranViewDelegate;

@interface QYChatRoomPaoPaoEntranceView : UIView
{
    id <QYChatRoomPaoPaoentranViewDelegate> _delegate;
    UIImageView *_bgImageView;
    UILabel *_nameLabel;
}

@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) id <QYChatRoomPaoPaoentranViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateData:(id)arg1;
- (void)configSubViews;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

