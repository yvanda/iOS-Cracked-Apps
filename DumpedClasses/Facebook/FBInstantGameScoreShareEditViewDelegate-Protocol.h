//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBInstantGameScoreShareEditView;

@protocol FBInstantGameScoreShareEditViewDelegate <NSObject>
- (void)scoreShareEditViewDidToggleDrawButton:(FBInstantGameScoreShareEditView *)arg1 isDrawing:(_Bool)arg2;
- (void)scoreShareEditViewDidTapSendButton:(FBInstantGameScoreShareEditView *)arg1;
- (void)scoreShareEditViewDidTapSaveButton:(FBInstantGameScoreShareEditView *)arg1;
- (void)scoreShareEditViewDidTapBackButton:(FBInstantGameScoreShareEditView *)arg1;
@end

