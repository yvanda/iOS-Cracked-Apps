//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UILabel;

@interface CTHotelHelpfulButton : UIButton
{
    UILabel *labComment;
    UILabel *lblLeft;
    UILabel *lblRight;
}

- (void).cxx_destruct;
- (struct CGSize)computerRightLablelSize;
- (struct CGSize)computerLeftLablelSize;
- (void)autoLayoutLabel;
- (void)changeControlState:(_Bool)arg1;
- (void)cancelTouchDown:(id)arg1;
- (void)hightLightClick:(id)arg1;
- (void)btnClick:(id)arg1;
- (void)changeNumber:(id)arg1;
- (long long)getCurrentNumber;
- (id)initWithFrame:(struct CGRect)arg1 withState:(_Bool)arg2 withNumber:(id)arg3;

@end
