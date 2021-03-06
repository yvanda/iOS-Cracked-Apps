//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QGMapViewController.h"

#import "FavModifyItemDelegate.h"
#import "QQFriendSelectedViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class LinkedLabel, LocationModel, NSString, UIImageView;

@interface FavGMapViewController : QGMapViewController <UIActionSheetDelegate, QQFriendSelectedViewControllerDelegate, FavModifyItemDelegate>
{
    NSString *_comment;
    LinkedLabel *_locationComment;
    LocationModel *_originalModel;
    UIImageView *_redPoint;
}

@property(retain, nonatomic) LocationModel *originalModel; // @synthesize originalModel=_originalModel;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)friendSelectedViewController:(id)arg1 didClickButtonAtIndex:(long long)arg2 withSelectedFriend:(id)arg3 type:(int)arg4;
- (void)rightButtonClick:(id)arg1;
- (void)setLocationComment:(id)arg1;
- (void)createLocationComment;
- (void)onFavItemModify:(id)arg1;
- (void)onModifyFavResult:(id)arg1;
- (void)loadView;
- (id)initWithModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

