//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCUIButton.h"

@interface DCCommonFilterButton : DCUIButton
{
    long long _buttonType;
    long long _status;
    CDUnknownBlockType _filterButtonActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType filterButtonActionBlock; // @synthesize filterButtonActionBlock=_filterButtonActionBlock;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
- (void).cxx_destruct;
- (void)resetArrowImg;
- (void)buttonAction;
- (void)configView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

