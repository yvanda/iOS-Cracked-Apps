//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QAnnotationView.h"

#import "ONESAnnotationViewPrivateProtocol.h"
#import "ONESBaseAnnotationViewProtocol.h"

@class NSString, ONESBaseAnnotationView;

@interface ONESQMapAnnotationView : QAnnotationView <ONESAnnotationViewPrivateProtocol, ONESBaseAnnotationViewProtocol>
{
    ONESBaseAnnotationView *_baseAnnotationView;
}

@property(readonly, nonatomic) ONESBaseAnnotationView *baseAnnotationView; // @synthesize baseAnnotationView=_baseAnnotationView;
- (void).cxx_destruct;
- (void)updateAnnotationView:(id)arg1;
- (void)viewSetCanShowCallout:(_Bool)arg1;
- (_Bool)viewCalloutViewIsUnder;
- (_Bool)viewCanShowCallout;
- (double)viewAlpha;
- (_Bool)viewIsSelected;
- (void)viewSetSelected:(_Bool)arg1;
- (void)removeCalloutView;
- (void)dealloc;
- (id)initWithBaseAnnotationView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
