//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IOMBaseViewController.h"

@class IOMGuideObject, UIButton, UIImageView, UIView, UIViewController;

@interface IOMGuideViewController : IOMBaseViewController
{
    UIView *_customContentView;
    UIImageView *_guideImageView;
    UIButton *_cancelButton;
    IOMGuideObject *_guideObject;
    UIViewController *_presentedVC;
}

+ (void)presentGuideViewControllerBy:(id)arg1 guideObject:(id)arg2;
@property(nonatomic) __weak UIViewController *presentedVC; // @synthesize presentedVC=_presentedVC;
@property(retain, nonatomic) IOMGuideObject *guideObject; // @synthesize guideObject=_guideObject;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(retain, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
- (void).cxx_destruct;
- (void)guideImageViewTap;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)cancelButtonAction:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithGuideObject:(id)arg1 presentedVC:(id)arg2;

@end

