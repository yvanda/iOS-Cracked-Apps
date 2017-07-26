//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface O2OPOrderDetailButtonsView : UIView
{
    id <O2OPOrderDetailButtonsViewDelegate> _delegate;
    NSArray *_buttons;
}

+ (id)viewWithButtonInfos:(id)arg1 width:(double)arg2;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) __weak id <O2OPOrderDetailButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toCancel:(id)arg1;
- (void)toPay:(id)arg1;
- (id)buttonWithInfo:(id)arg1 isSingle:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 buttonInfos:(id)arg2;

@end
