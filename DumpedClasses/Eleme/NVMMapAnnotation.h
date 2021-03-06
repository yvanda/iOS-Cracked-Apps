//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class NSString;

@interface NVMMapAnnotation : NSObject <MKAnnotation>
{
    NSString *_annotationTitle;
    NSString *_annotationSubtitle;
    struct CLLocationCoordinate2D _coordinate;
}

@property(copy, nonatomic) NSString *annotationSubtitle; // @synthesize annotationSubtitle=_annotationSubtitle;
@property(copy, nonatomic) NSString *annotationTitle; // @synthesize annotationTitle=_annotationTitle;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

