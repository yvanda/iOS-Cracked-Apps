//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ReadInJoyChannelArticle, UILabel;

@interface ReadInJoyTitleView : UIView
{
    UILabel *titleLabel;
    ReadInJoyChannelArticle *_feedsModel;
}

@property(retain, nonatomic) ReadInJoyChannelArticle *feedsModel; // @synthesize feedsModel=_feedsModel;
- (void)dealloc;
- (void)layoutSubviewsExt;
- (void)layoutSubviews;
- (id)init;

@end

