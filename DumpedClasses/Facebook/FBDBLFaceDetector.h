//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIDetector, FBFacer;
@protocol FBDBLFaceDetectorDelegate, OS_dispatch_queue;

@interface FBDBLFaceDetector : NSObject
{
    FBFacer *_facer;
    CIDetector *_faceDetector;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _queued;
    _Bool _useFacer;
    id <FBDBLFaceDetectorDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_processImage:(id)arg1;
- (void)updateImage:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

