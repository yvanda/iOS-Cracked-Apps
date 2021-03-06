//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBItemView, FBUserSession;
@protocol FBGroupsInfoViewConfig;

@interface FBGroupPurposesTableViewCell : UITableViewCell
{
    FBUserSession *_session;
    id <FBGroupsInfoViewConfig> _config;
    FBItemView *_itemView;
}

+ (id)_buildItemViewConfigWithTitle:(id)arg1 selected:(_Bool)arg2 config:(id)arg3 imageDownloader:(id)arg4;
+ (double)getHeightForTitle:(id)arg1 selected:(_Bool)arg2 config:(id)arg3 constrainedSize:(struct CGSize)arg4;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateCellWithTitle:(id)arg1 imageURL:(id)arg2 selected:(_Bool)arg3;
- (id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2 config:(id)arg3;

@end

