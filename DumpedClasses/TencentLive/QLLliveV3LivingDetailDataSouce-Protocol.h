//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KKMediaRootViewController, NSString, QLEditInputView, QLJCEVideoAttentItem, QLMovieItem, QLStarCommentInputView, QLTalkingRoomKeyboardCtl, UIView;

@protocol QLLliveV3LivingDetailDataSouce <NSObject>

@optional
- (QLTalkingRoomKeyboardCtl *)getTalkingRoomKeyboardCtl;
- (QLEditInputView *)getStarReplyCommentInputView;
- (QLStarCommentInputView *)getStarCommentBottomView;
- (UIView *)getNoticeViewSuperView;
- (_Bool)shouldShowPresentEntry;
- (NSString *)getTalkRoomTabCommentKey;
- (QLJCEVideoAttentItem *)getAttentItem;
- (QLMovieItem *)getMovieItem;
- (KKMediaRootViewController *)getRootPlayer;
- (NSString *)getLivePid;
- (long long)getLiveStatus;
- (long long)getUserProfileType;
@end
