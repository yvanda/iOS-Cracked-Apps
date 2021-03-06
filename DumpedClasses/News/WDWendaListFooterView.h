//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class SSThemedButton, SSThemedLabel, WDListViewModel;

@interface WDWendaListFooterView : SSThemedView
{
    WDListViewModel *_viewModel;
    CDUnknownBlockType _clickedBlock;
    SSThemedLabel *_tipLabel;
    SSThemedButton *_bgButton;
}

@property(retain, nonatomic) SSThemedButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) SSThemedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(copy, nonatomic) CDUnknownBlockType clickedBlock; // @synthesize clickedBlock=_clickedBlock;
@property(retain, nonatomic) WDListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setTitle:(id)arg1 isShowArrow:(_Bool)arg2 isNoAnswers:(_Bool)arg3 clickedBlock:(CDUnknownBlockType)arg4;
- (void)bgButtonClicked;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

