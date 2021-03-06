//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "iCarousel.h"

#import "GWCarouselDelegate-Protocol.h"

@class NSString;
@protocol GWCarouselDelegate;

@interface GWPartnerCarousel : iCarousel <GWCarouselDelegate>
{
    long long _touchBeganIndex;
}

@property(nonatomic) long long touchBeganIndex; // @synthesize touchBeganIndex=_touchBeganIndex;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)shouldScroll;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <GWCarouselDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

