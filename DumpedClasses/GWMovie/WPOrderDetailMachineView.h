//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface WPOrderDetailMachineView : UIView
{
    UILabel *_machineLabel;
    UIImageView *_machineImageView;
}

+ (id)loadXib;
@property(nonatomic) __weak UIImageView *machineImageView; // @synthesize machineImageView=_machineImageView;
@property(nonatomic) __weak UILabel *machineLabel; // @synthesize machineLabel=_machineLabel;
- (void).cxx_destruct;
- (void)setUpMachineText:(id)arg1 imageUrl:(id)arg2;
- (double)viewHeight;
- (void)awakeFromNib;

@end

