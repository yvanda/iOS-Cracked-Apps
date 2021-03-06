//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, QYPlayerController, UIButton;
@protocol QYPlayerPaoPaoAlertSheetDelegate;

@interface QYPlayerPaoPaoAlertSheetForNotalking : UIView
{
    id <QYPlayerPaoPaoAlertSheetDelegate> _delegate;
    QYPlayerController *_playerController;
    UIButton *_bgView;
    UIView *_panelView;
    NSArray *_selectArray;
    NSArray *_numArray;
}

@property(retain, nonatomic) NSArray *numArray; // @synthesize numArray=_numArray;
@property(retain, nonatomic) NSArray *selectArray; // @synthesize selectArray=_selectArray;
@property(retain, nonatomic) UIView *panelView; // @synthesize panelView=_panelView;
@property(retain, nonatomic) UIButton *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak QYPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) __weak id <QYPlayerPaoPaoAlertSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissSelf;
- (void)btnAction:(id)arg1;
- (void)bgViewAction:(id)arg1;
- (void)hidePaoPaoAlertSheetByAnimation;
- (void)showPaoPaoAlertSheetByAnimation;
- (void)createPlayerPaoPaoAlertSheet;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 type:(id)arg2 playerController:(id)arg3;

@end

