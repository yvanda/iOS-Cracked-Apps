//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, UIScrollView;
@protocol GWWillSaleScrollerViewDelegate;

@interface GWWillSaleScrollerView : UIView
{
    id <GWWillSaleScrollerViewDelegate> _delegate;
    NSArray *_dataArray;
    UIScrollView *_backScroller;
    NSMutableArray *_buttonArray;
    NSString *_lastString;
}

@property(retain, nonatomic) NSString *lastString; // @synthesize lastString=_lastString;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIScrollView *backScroller; // @synthesize backScroller=_backScroller;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) __weak id <GWWillSaleScrollerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)checkLastTime:(id)arg1;
- (void)buttonClick:(id)arg1;
- (id)createWithButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

