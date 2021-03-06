//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDAbsObject3D.h"

@class MDPlaneScaleCalculator;

@interface MDPlane : MDAbsObject3D
{
    float mPrevRatio;
    float *pScaledVerticesBuffer;
    float *mScaledVerticesBuffer;
    MDPlaneScaleCalculator *_mCalculator;
}

@property(retain, nonatomic) MDPlaneScaleCalculator *mCalculator; // @synthesize mCalculator=_mCalculator;
- (void).cxx_destruct;
- (float *)generateTexcoords;
- (float *)generateVertex;
- (void)generatePlane:(id)arg1;
- (float *)getVertexBuffer:(int)arg1;
- (void)uploadVerticesBufferIfNeed:(id)arg1 index:(int)arg2;
- (void)destroy;
- (void)executeLoad;
- (id)obtainObjPath;
- (id)initWithCalculator:(id)arg1;

@end

