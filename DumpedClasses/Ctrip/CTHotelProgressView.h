//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer;

@interface CTHotelProgressView : UIView
{
    CAShapeLayer *_lineShapeBorder;
}

+ (double)getHeight:(id)arg1;
@property(retain, nonatomic) CAShapeLayer *lineShapeBorder; // @synthesize lineShapeBorder=_lineShapeBorder;
- (void).cxx_destruct;
- (void)drawLine:(struct CGPoint)arg1 end:(struct CGPoint)arg2;
- (id)drawStatusLabel:(id)arg1 centerX:(double)arg2 viewY:(double)arg3;
- (void)drawProgressView:(id)arg1 start:(struct CGPoint)arg2;
- (double)drawTitle:(id)arg1 start:(struct CGPoint)arg2;
- (void)createLayerView:(id)arg1;
- (void)updateViewStatus:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 status:(id)arg2;

@end

