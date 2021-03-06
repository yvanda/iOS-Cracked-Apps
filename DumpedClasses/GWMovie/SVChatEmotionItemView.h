//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SVChatEmotionItemViewDelegate;

@interface SVChatEmotionItemView : UIView
{
    id <SVChatEmotionItemViewDelegate> delegate;
    long long numberOfRows;
    long long numberOfColumns;
    double itemWidth;
    double itemHeight;
}

@property(nonatomic) double itemHeight; // @synthesize itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns;
@property(nonatomic) long long numberOfRows; // @synthesize numberOfRows;
@property(retain, nonatomic) id <SVChatEmotionItemViewDelegate> delegate; // @synthesize delegate;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

