//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class DRCServicePoint, UIImageView, UILabel, UIView;

@interface DRCServicePointBubble : UIButton
{
    CDUnknownBlockType _servicePointTappedBlock;
    DRCServicePoint *_currentServicePoint;
    UIImageView *_leftBg;
    UIImageView *_rightBg;
    UILabel *_lblDistance;
    UIView *_vSeperator;
    UILabel *_lblName;
    UILabel *_lblAddress;
    UIImageView *_imgvArrow;
}

@property(retain, nonatomic) UIImageView *imgvArrow; // @synthesize imgvArrow=_imgvArrow;
@property(retain, nonatomic) UILabel *lblAddress; // @synthesize lblAddress=_lblAddress;
@property(retain, nonatomic) UILabel *lblName; // @synthesize lblName=_lblName;
@property(retain, nonatomic) UIView *vSeperator; // @synthesize vSeperator=_vSeperator;
@property(retain, nonatomic) UILabel *lblDistance; // @synthesize lblDistance=_lblDistance;
@property(retain, nonatomic) UIImageView *rightBg; // @synthesize rightBg=_rightBg;
@property(retain, nonatomic) UIImageView *leftBg; // @synthesize leftBg=_leftBg;
@property(retain, nonatomic) DRCServicePoint *currentServicePoint; // @synthesize currentServicePoint=_currentServicePoint;
@property(copy, nonatomic) CDUnknownBlockType servicePointTappedBlock; // @synthesize servicePointTappedBlock=_servicePointTappedBlock;
- (void).cxx_destruct;
- (void)setBubbleWithServicePoint:(id)arg1;
- (void)initView;
- (id)init;

@end

